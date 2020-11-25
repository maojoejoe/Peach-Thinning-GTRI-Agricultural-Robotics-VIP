import cv2
import time
import serial
import numpy as np
import pandas as pd
import pyrealsense2 as rs
from math import cos, sin
from yolov5.socketMoveTo import MoveTo, end
from yolov5.frame_detect import detect
from yolov5.associate import associate_points
from yolov5.thinning_constraint_satisfaction import get_solution
import pickle


def image_display(length):
    global count
    d = time.time() + length
    co, depth_image = [], []
    while time.time() < d:
        frames = pipeline.wait_for_frames()
        frames = align.process(frames)
        depth_frame = frames.get_depth_frame()
        color_frame = frames.get_color_frame()
        if not depth_frame or not color_frame:
            continue

        # Post-processing depth data
        spatial_filter = rs.spatial_filter() # gaussian blur
        temporal_filter = rs.temporal_filter() # avg over time blur
        filter_magnitude = rs.option.filter_magnitude
        filter_smooth_alpha = rs.option.filter_smooth_alpha
        filter_smooth_delta = rs.option.filter_smooth_delta
        spatial_filter.set_option(filter_magnitude, 2)
        spatial_filter.set_option(filter_smooth_alpha, 0.6)
        spatial_filter.set_option(filter_smooth_delta, 8)
        temporal_filter.set_option(filter_smooth_alpha, 0.4)
        temporal_filter.set_option(filter_smooth_delta, 16)
        depth_frame = spatial_filter.process(depth_frame)
        depth_frame = temporal_filter.process(depth_frame)

        # Convert images to numpy arrays
        d_frame = depth_frame.get_data()
        depth_image = np.asanyarray(d_frame)
        color_image = np.asanyarray(color_frame.get_data())
        color_image = cv2.cvtColor(color_image, cv2.COLOR_RGB2BGR)
        frame_co, im0 = detect(color_image, [640, 480], path_to_weights, depth_image, [0, 0, 0])
        if frame_co:
            for p in frame_co:
                fx, fy, fz, _ = p
                cv2.imwrite(f'C:/Users/Aiden/PycharmProjects/AgriculturalRobotics/yolov5/frames/frame {count} at x- {fx}, y- {fy}, z- {fz}.png', color_image)
                count += 1
            co += frame_co
        cv2.imshow('depth', depth_image)
        cv2.waitKey(5)
    return co, depth_image


arm_offset = {1: (0.358, -0.102, 0.278),
              2: (0.438, -0.035, 0.363),
              3: (0.175, -0.219, 0.466),
              4: (0.228, -0.278, 0.142),
              5: (-0.233, -0.057, 0.486),
              6: (-0.335, 0.039, 0.337)}

poses = {1: (0.285, 0.083, 0.300),
         2: (0.361, 0.146, 0.4),
         3: (0.162, -0.019, 0.470),
         4: (0.220, -0.082, 0.184),
         5: (-0.141, 0.118, 0.512),
         6: (-0.201, 0.184, 0.370)}

rpy = {1: (-1.458, 0, 0.372),       # 1: (-1.458, -0.020, 0.372),
       2: (-1.385, 0, 0.386),       # 2: (-1.385, -0.090, 0.386),
       3: (-1.552, 0, 0),           # 3: (-1.553, -0.041, 0.064),
       4: (-1.354, 0.143, 0.071),   # 4: (-1.354, 0.143, 0.071),
       5: (-1.437, 0.116, -0.469),  # 5: (-1.437, 0.116, -0.469),
       6: (-1.405, -0.06, -0.755)}  # 6: (-1.405, -0.063, -0.755)}

ourpose = (0.039, 0.421, 0.445, - 1.622, -0.081, 0.167)

# helper_poses = {3:  #((0.109, 0.269, 0.732, -1.433, -0.024, 0.008), (-0.116, 0.524, 0.450, -1.584, 0, 0))}
#                     (
#                     (0.317, -0.020, 0.683, -0.295, -0.245, 0.48),
#                     (0.283, 0.144, 0.684, -0.27, -0.255, 1.042),
#                     (0.206, 0.247, 0.684, -0.266, -0.244, 1.444),
#                     (0.081, 0.009, 0.489, -1.457, -1.218, 2.385),
#                     (0.194, -0.042, 0.488, -1.474, -1.189, 2.846),
#                     (0.3, -0.028, 0.484, 1.27, -1.25, 1.69),
#                     (0.422, 0.008, 0.482, -1.553, -0.682, -2.505),
#                     (0.507, 0.115, 0.476, -1.576, -0.229, -2)
#                     )}
vertical_pose = (0.10919, 0.28345, 0.69436, -1.571, 0, 0)

# poses = {3: (0.162, -0.019, 0.470),
#          4: (0.220, -0.082, 0.184),
#          5: (-0.141, 0.118, 0.512),
#          6: (-0.201, 0.184, 0.370)}
#
# rpy = {3: (-1.552, 0, 0),
#        4: (-1.354, 0.143, 0.071),
#        5: (-1.437, 0.116, -0.469),
#        6: (-1.405, -0.06, -0.755)}

# true_position = (92.56, 203.83, 436.96)
# true_vectors = [[-0.13244299, -0.11772509,  0.39716704],
#                 [-0.22205523, -0.02782034,  0.36268375],
#                 [-0.05592123,  0.03433147,  0.42683506],
#                 [-0.14148252, -0.16569326,  0.53861159],
#                 [0.17733797, 0.07912475, 0.37294573],
#                 [0.20452938, -0.01786138,  0.42220576]]
# home = (-0.113, -0.163, 0.451, -1.5708, 0, 0)


path_to_weights = r'C:\Users\Aiden\PycharmProjects\AgriculturalRobotics\yolov5\weights\0.85_indoor_olives_best.pt'
# path_to_weights = r'C:\Users\Aiden\Pych armProjects\AgriculturalRobotics\yolov5\weights\2020-09-16-782-best.pt'

global count
count = 0
pipeline = rs.pipeline()
align = rs.align(rs.stream.color)
profile = pipeline.start()
# arduino = serial.Serial('COM3', 9600)
print("connected to realsense")
loc_df = pd.DataFrame(columns=['X', 'Y', 'Z', 'Pose', 'Radius', 'Remove']).set_index(['X', 'Y', 'Z'])
loc_df.loc[0.055, 0.425, 0.289] = [1, 10, False]
loc_df.loc[0.54, 0.386, 0.309] = [1, 10, False]
loc_df.loc[0.127, 0.410, 0.360] = [1, 10, False]
loc_df.loc[0.104, 0.391, 0.428] = [1, 10, False]
loc_df.loc[0.094, 0.391, 0.428] = [1, 10, False]
loc_df.loc[-0.021, 0.425, 0.434] = [1, 10, False]
loc_df.loc[0.006, 0.384, 0.498] = [1, 10, False]
loc_df.loc[0.015, 0.400, 0.506] = [1, 10, False]
loc_df.loc[0.035, 0.405, 0.565] = [1, 10, False]
HOST = "169.254.126.147"
PORT = 30002
home = (-0.116, 0.037, 0.451, -1.571, 0, 0)
print("move to home")
# MoveTo(home, HOST, PORT)
MoveTo(ourpose, HOST, PORT)
time.sleep(5)

# for pose_offset, roll in zip(poses.items(), rpy.values()):
#     pose, offset = pose_offset
#     print(f"Moving to pose {pose}")
#     MoveTo(offset + roll, HOST, PORT)
#     time.sleep(3)
#     Rx, Ry, Rz = roll
#     Mz = np.array([[cos(Rz), sin(Rz), 0], [-sin(Rz), cos(Rz), 0], [0, 0, 1]]).T
#     My = np.array([[cos(Ry), 0, -sin(Ry)], [0, 1, 0], [sin(Ry), 0, cos(Ry)]]).T
#     Mx = np.array([[1, 0, 0], [0, cos(Rx), sin(Rx)], [0, -sin(Rx), cos(Rx)]]).T
#     M = np.matmul(np.matmul(Mz, My), Mx)
#     coordinates, depth_np = image_display(12)
#     for pair in coordinates:
#         ex, ey, ez = arm_offset[pose]
#         # x, y, z, rad, x_4_in, y_4_in, z_4_in = pair
#         x, y, z, rad = pair
#         dx, dy, dz = np.matmul(M, np.transpose(np.array([[x, y, z]])))
#         # dx4, dy4, dz4 = np.matmul(M, np.transpose(np.array([[x_4_in, y_4_in, z_4_in]])))
#         x, y, z = ex + dx[0], ey + dy[0], ez + dz[0]
#         # z_vec = np.array([dx - dx4, dy - dy4, dz - dz4]) / (np.linalg.norm([dx - dx4, dy - dy4, dz - dz4]))
#         # tx, ty, tz = true_vectors[pose - 1]
#         # print(tx - x, ty - y, tz - z)
#         # loc_df.loc[round(x, 3), round(y, 3), round(z, 3)] = [pose, rad, False]
pd.set_option('display.max_rows', None)
# MoveTo(home, HOST, PORT)
# pickle.dump(loc_df, open('loc_df.p', 'wb'))
# loc_df = associate_points(loc_df)
# loc_df = loc_df[loc_df['Unique']]
print(loc_df)

if loc_df is not None:
    constrain_df = loc_df.reset_index()
    constrain_df = get_solution(constrain_df)
    remove_df = constrain_df[constrain_df['Remove']]
    print(remove_df)
    for index, row in remove_df.iterrows():
        x, y, z, pose, rad, remove = row
        roll = rpy[pose]
        # MoveTo(vertical_pose, HOST, PORT)
        print("moving to pose")
        MoveTo(ourpose, HOST, PORT)
        print("moving to helper pose")
        # for h_pose in helper_poses[pose]:
        #     MoveTo(h_pose, HOST, PORT)
        print(round(x, 3), round(y, 3), round(z, 3))
        # MoveTo((0.209, 0.248, 0.400, -1.168, -0.037, 1.216), HOST, PORT)  # intermediary pose 1
        # MoveTo((0.078, 0.289, 0.439, -1.067, -0.378, 1.739), HOST, PORT)  # intermediary pose 2
        MoveTo((x, y, z) + roll, HOST, PORT)  # move to olive x y z
        # MoveTo((0.13847, 0.22401, 0.45383) + roll, HOST, PORT)
        # MoveTo((0.078, 0.289, 0.439, -1.067, -0.378, 1.739), HOST, PORT)  # intermediary pose 2
        # MoveTo((0.209, 0.248, 0.400, -1.168, -0.037, 1.216), HOST, PORT)  # intermediary pose 1
        # MoveTo(offset + roll, HOST, PORT)
        # arduino.write(b'1')
        time.sleep(5)

pipeline.stop()
end(HOST, PORT)
