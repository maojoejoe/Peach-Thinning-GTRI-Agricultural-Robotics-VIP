import argparse
import os
import platform
import shutil
import time
from pathlib import Path

import cv2
import torch
import torch.backends.cudnn as cudnn
from numpy import random
import numpy as np
import math

from yolov5.models.experimental import attempt_load
from yolov5.utils.datasets import letterbox
from yolov5.utils.general import (check_img_size, non_max_suppression, apply_classifier, scale_coords, xyxy2xywh, plot_one_box, strip_optimizer, set_logging)
from yolov5.utils.torch_utils import select_device, load_classifier, time_synchronized


def get_camera_frame_coordinates(img_coords, np_depth):
    center = (int((img_coords[2] + img_coords[0]) / 2), int((img_coords[3] + img_coords[1]) / 2))
    z = np_depth[center[1], center[0]]
    center = int(center[0] - (np_depth.shape[1] / 2)), int(center[1] - (np_depth.shape[0] / 2))
    print(center)

    # https://www.intelrealsense.com/depth-camera-d435/=
    # FOV for realsense is originally 69 / 42.5
    # aovRow = 57.5
    # aovCol = 37.5
    aovRow = 69
    aovCol = 42.5
    # Calculate row and col resolutions
    # https://www.researchgate.net/publication/282954352_Calculating_real_world_obj ect_dimensions_from_Kinect_RGB-D_image_using_dynamic_resolution
    # mm / px in width
    res_row = (2 * z * math.tan(math.radians(aovRow / 2))) / np_depth.shape[1]
    # mm / px in height
    res_col = (2 * z * math.tan(math.radians(aovCol / 2))) / np_depth.shape[0]
    # olive x, y in m from top left of image
    x = center[0] * res_row
    y = center[1] * res_col
    # olive x, y in m from center left of image
    # x -= np_depth.shape[1] * res_row / 2
    # y = (np_depth.shape[0] * res_col) - z - (np_depth.shape[0] * res_col) / 2
    # y -= np_depth.shape[0] * res_col / 2
    # Recalculate depth to center of olive, rather than the surface
    x_width = (int(img_coords[2] - img_coords[0]))
    y_width = (int(img_coords[3] - img_coords[1]))
    radius = ((x_width * res_col / 2) + (y_width * res_col / 2))/2
    z += radius
    if z == 0:
        return []
    # Offsets for center of han
    x, y, z = x - 40, y - 57, z + 76
    # Offset for end effector
    # x, y, z = x + 175, y + -219, z + 466 - this yielded too high
    # x, y, z = x + 175, y + -199, z + 466

    # x, y, z = x - 35, y - 44, z + 177 - original offset with the blue stick
    # used to be x - 35, y - 45, z + 76 as of 2:35 on nov 17 on blue rod
    #
    x, y, z = x / 1000, y / 1000, z / 1000
    # Offsets for tip of blue boi
    # x, y, z = x - 35, y - 60, z - 24
    # # Offset for tip of blue boi + 4in
    # x_4_in, y_4_in, z_4_in = x - 35, y - 60, z - 125.6
    print("cam vector: ", x, y, z)
    # return [x/1000, y/1000, z/1000, radius, x_4_in, y_4_in, z_4_in]
    return [x, y, z, radius]


def detect(img0, res, weights_path, np_depth, base_offset):
    res = res[1]

    # Initialize
    # img0 = cv2.cvtColor(img0, cv2.COLOR_RGB2BGR)
    set_logging()
    device = select_device()

    # Load model
    weights = weights_path

    # weights = path_to_weights
    model = attempt_load(weights, map_location=device)  # load FP32 model
    res = check_img_size(res, s=model.stride.max())  # check img_size
    half = device.type != 'cpu'  # half precision only supported on CUDA
    if half:
        model.half()  # to FP16

    # Second-stage classifier

    classify = False
    if classify:
        classifier = load_classifier(name='resnet101', n=2)  # initialize
        classifier.load_state_dict(torch.load('weights/resnet101.pt', map_location=device)['model'])  # load weights
        classifier.to(device).eval()

    # Set Dataloader
    img = letterbox(img0, new_shape=res)[0]
    img = img[:, :, ::-1].transpose(2, 0, 1)  # BGR to RGB, to 3x416x416
    img = np.ascontiguousarray(img)

    # Get names and colors
    names = model.module.names if hasattr(model, 'module') else model.names
    colors = [[random.randint(0, 255) for _ in range(3)] for _ in range(len(names))]

    # Run inference
    t0 = time.time()
    img1 = torch.zeros((1, 3, res, res), device=device)  # init img
    _ = model(img1.half() if half else img1) if device.type != 'cpu' else None  # run once
    img = torch.from_numpy(img).to(device)
    img = img.half() if half else img.float()  # uint8 to fp16/32
    img /= 255.0  # 0 - 255 to 0.0 - 1.0
    if img.ndimension() == 3:
        img = img.unsqueeze(0)

    # Inference
    t1 = time_synchronized()
    pred = model(img)[0]

    # Apply NMS
    pred = non_max_suppression(pred, conf_thres=0.15)
    t2 = time_synchronized()

    # Apply Classifier
    if classify:
        pred = apply_classifier(pred, classifier, img, img0)

    # Process detections
    co_ords = []
    for i, det in enumerate(pred):  # detections per image
        s, im0 = '', img0
        s += '%gx%g ' % img.shape[2:]  # print string
        gn = torch.tensor(im0.shape)[[1, 0, 1, 0]]  # normalization gain whwh
        if det is not None and len(det):
            # Rescale boxes from img_size to im0 size
            det[:, :4] = scale_coords(img.shape[2:], det[:, :4], im0.shape).round()

            # Print results
            for c in det[:, -1].unique():
                n = (det[:, -1] == c).sum()  # detections per class
                s += '%g %ss, ' % (n, names[int(c)])  # add to string

            # Write results
            for *xyxy, conf, cls in reversed(det):
                results = get_camera_frame_coordinates(xyxy, np_depth)
                if not results:
                    continue
                # x, y, z, r, x4, y4, z4 = results
                x, y, z, r = results
                label = '%s, %s, %s' % (round(x, 3), round(y, 3), round(z, 3))
                plot_one_box(xyxy, im0, label=label, color=[112, 11, 38], line_thickness=2)
                # co_ords.append((x, y, z, r, x4, y4, z4))
                co_ords.append((x, y, z, r))
    cv2.imshow('frame', im0)
    cv2.waitKey(1)
    return co_ords, im0


# path_to_weights = r'/yolov5/weights/2020-09-16-782-best.pt'
# path_to_model = r'/yolov5/models/yolov5x.yaml'
