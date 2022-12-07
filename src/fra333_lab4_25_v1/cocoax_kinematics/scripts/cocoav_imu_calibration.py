#!/usr/bin/python3

# import all other neccesary libraries
import sys

import rclpy
import numpy as np
from rclpy.node import Node
from rclpy.qos import QoSProfile

from cocoav_interfaces.msg import CocoaVIMU

from pathlib import Path
from imucal.management import find_calibration_info_for_sensor
from imucal.management import load_calibration_info
import pandas as pd

import yaml
from yaml.loader import SafeLoader

class CocoaVCalibrator(Node):
    def __init__(self):
        super().__init__('cocoav_calibrator_node')
        
        # define rate
        self.rate = 100
        qos_profile = QoSProfile(depth=10)
        
        # Parameters
        self.time_rate = 1/self.rate 
        
        # Subscribers
        self.time_ms = 0
        self.angular_velocity = [0.0,0.0,0.0]
        self.linear_acceleration = [0.0,0.0,0.0]
        self.imu_sub = self.create_subscription(CocoaVIMU, '/cocoav_imu_arduino', self.imu_sub_callback, qos_profile)
        
        # Publisher
        self.imu_pub = self.create_publisher(CocoaVIMU, '/cocoav_imu_calibrated', qos_profile)
        
        # Timer
        self.timer_callback = self.create_timer(self.time_rate, callback=self.timer_callback)
        
        # Calibration
        self.angular_velocity_mean = [0.0,0.0,0.0]
        self.linear_acceleration_mean = [0.0,0.0,0.0]
        with open("/home/azthorax/fra333_ws/src/fra333_lab3_25_v1/cocoav_kinematics/scripts/cocoav_imu_calib.yaml", "r") as stream:
            try:
                data = yaml.safe_load(stream)
                self.angular_velocity_mean = data['angular_velocity_mean']
                self.linear_acceleration_mean = data['linear_acceleration_mean']
                print("Calibration data loaded")
            except yaml.YAMLError as exc:
                print("Error in configuration file:", exc) 
    
    def imu_sub_callback(self, msg:CocoaVIMU):
        self.time_ms = msg.time_ms
        self.angular_velocity = msg.angular_velocity
        self.linear_acceleration = msg.linear_acceleration
        
    def timer_callback(self):
        self.cocoav_imu_calibrate()
    
    def cocoav_imu_calibrate(self):
        imu = CocoaVIMU()
        imu.time_ms = self.time_ms
        callibrated_angular_velocity = [self.angular_velocity[0] - self.angular_velocity_mean[0],
                                       self.angular_velocity[1] - self.angular_velocity_mean[1],
                                       self.angular_velocity[2] - self.angular_velocity_mean[2]]
        callibrated_linear_acceleration = [self.linear_acceleration[0] - self.linear_acceleration_mean[0],
                                           self.linear_acceleration[1] - self.linear_acceleration_mean[1],
                                           self.linear_acceleration[2] - self.linear_acceleration_mean[2]]
        imu.angular_velocity = [callibrated_angular_velocity[0]*3.14159265359/180,
                                callibrated_angular_velocity[1]*3.14159265359/180,
                                callibrated_angular_velocity[2]*3.14159265359/180]
        imu.linear_acceleration = [callibrated_linear_acceleration[0], callibrated_linear_acceleration[1], callibrated_linear_acceleration[2]]
        self.imu_pub.publish(imu)
    

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
