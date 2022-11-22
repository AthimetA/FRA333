#!/usr/bin/python3

# import all other neccesary libraries
import sys

import rclpy
import numpy as np
from rclpy.node import Node
from rclpy.qos import QoSProfile

from cocoav_interfaces.msg import CocoaVIMU

class CocoaVCalibrator(Node):
    def __init__(self):
        super().__init__('cocoav_calibrator')
        
        # define rate
        self.rate = 5
        qos_profile = QoSProfile(depth=10)
        
        # Parameters
        self.time_rate = 1/self.rate # rate is the publishing rate defualt is 5 HZ (0.2s)
        
        # Subscribers
        self.angular_velocity = []
        self.linear_acceleration = []
        self.imu_sub = self.create_subscription(CocoaVIMU, '/cocoav_imu_arduino', self.imu_sub_callback, qos_profile)
        
        # Publisher
        
        # Timer
        self.timer_callback = self.create_timer(self.time_rate, callback=self.timer_callback)
    
    def imu_sub_callback(self, msg:CocoaVIMU):
        self.angular_velocity = msg.angular_velocity
        self.linear_acceleration = msg.linear_acceleration
        self.get_logger().info('Angular Velocity: %s' % self.angular_velocity)
        self.get_logger().info('Linear Acceleration: %s' % self.linear_acceleration)
    
    def timer_callback(self):
        pass

def main(args=None):
    rclpy.init(args=args)
    A1A = CocoaVCalibrator()
    rclpy.spin(A1A)
    A1A.destroy_node()
    rclpy.shutdown()

if __name__=='__main__':
    main()
