#!/usr/bin/env python

import os
import cv2
import time
import rospy
import message_filters
import numpy as np
from std_msgs.msg import Int32, Float32
from std_msgs.msg import Header
from cv_bridge import CvBridge, CvBridgeError
from sensor_msgs.msg import Imu, Temperature, Image, CameraInfo

class RealsenseLogger(object):

    def __init__(self):
    
        # Camera Info
        self.camerainfo = None
        
        # CV bridge
        self.bridge = CvBridge()

        # Create directory for dataset
        self.timestr = time.strftime("%Y%m%d-%H%M%S")
        self.data_dir = '~'+ self.timestr
        os.mkdir(self.data_dir)

        # Subscribers
        self.rgb_image_sub = rospy.Subscriber('camera/color/image_raw', Image, self.color_callback, queue_size = 1)
        self.depth_image_sub = rospy.Subscriber('camera/aligned_depth_to_color/image_raw', Image, self.depth_callback, queue_size = 1)
        self.camera_info_sub = rospy.Subscriber('/camera/color/camera_info',CameraInfo, self.camerainfo_callback)
        rospy.loginfo('Realsense logger node running, press Ctrl-C to quit...')
        rospy.spin()


    def camerainfo_callback(self, msg):

        rospy.loginfo('{}'.format(msg.header.stamp))
        if self.camerainfo == None:

            # Store message received
                self.camerainfo = msg

             # Get Camera Intrincs
                self.fx_rect = self.camerainfo.P[0]
                self.fy_rect = self.camerainfo.P[5]
                self.cx_rect = self.camerainfo.P[2]
                self.cy_rect = self.camerainfo.P[6]


    def color_callback(self, msg):

        # Convert and save color image
        try:
            self.cv2_img = self.bridge.imgmsg_to_cv2(msg, "bgr8")

        except CvBridgeError, e:
            print(e)

        else:
                cv2.imwrite(self.data_dir + '/' + str(msg.header.stamp)+'.jpeg', self.cv2_img)


    def depth_callback(self, msg):

        # Convert and save depth matrix
        self.np_arr = np.fromstring(msg.data, np.uint16)
        self.image_np = np.reshape(self.np_arr, (480, 640))
        np.save(self.data_dir + '/' + str(msg.header.stamp) + '.npy', self.image_np)



def main():
    rospy.init_node('imu_cam_logger')
    node = RealsenseLogger()


if __name__ == '__main__':
    main()
