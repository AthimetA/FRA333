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
        self.rate = 10
        qos_profile = QoSProfile(depth=10)
        
        # Parameters
        self.time_rate = 1/self.rate 
        
        # Subscribers
        self.angular_velocity = [0.0,0.0,0.0]
        self.linear_acceleration = [0.0,0.0,0.0]
        self.imu_sub = self.create_subscription(CocoaVIMU, '/cocoav_imu_arduino', self.imu_sub_callback, qos_profile)
        
        # Publisher
        self.imu_pub = self.create_publisher(CocoaVIMU, '/cocoav_imu_calibrated', qos_profile)
        
        # Timer
        self.timer_callback = self.create_timer(self.time_rate, callback=self.timer_callback)
    
    def imu_sub_callback(self, msg:CocoaVIMU):
        self.angular_velocity = msg.angular_velocity
        self.linear_acceleration = msg.linear_acceleration
    
    def imu_calibrate(self):
        imu = CocoaVIMU()
        imu.angular_velocity = self.angular_velocity
        imu.linear_acceleration = self.linear_acceleration
        self.imu_pub.publish(imu)
    
    def timer_callback(self):
        self.imu_calibrate()

def main(args=None):
    rclpy.init(args=args)
    calibrate_obj = CocoaVCalibrator()
    try:
        while rclpy.ok():
            rclpy.spin_once(calibrate_obj)
    except KeyboardInterrupt:
        print('repeater stopped cleanly')
    except BaseException:
        print('exception in repeater:', file=sys.stderr)
        raise
    finally:
        calibrate_obj.destroy_node()
        rclpy.shutdown() 


if __name__ == '__main__':
    main()
