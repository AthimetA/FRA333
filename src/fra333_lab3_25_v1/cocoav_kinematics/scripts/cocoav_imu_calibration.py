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
        folder = '/home/azthorax/fra333_ws/src/fra333_lab3_25_v1/cocoav_kinematics/scripts/imucal/info'
        cals = find_calibration_info_for_sensor("arduinoimu", Path(folder))
        self.cocoav_calibrator = load_calibration_info(cals[0])
    
    def imu_sub_callback(self, msg:CocoaVIMU):
        self.time_ms = msg.time_ms
        self.angular_velocity = msg.angular_velocity
        self.linear_acceleration = msg.linear_acceleration
    
    def imu_calibrate(self):
        imu = CocoaVIMU()
        data = np.array([self.angular_velocity[0], self.angular_velocity[1], self.angular_velocity[2], self.linear_acceleration[0], self.linear_acceleration[1], self.linear_acceleration[2]])
        col = ['gyr_x', 'gyr_y', 'gyr_z', 'acc_x', 'acc_y', 'acc_z']
        datadf = pd.DataFrame(data.reshape(1,6), columns=col)
        calibrated_data = self.cocoav_calibrator.calibrate_df(datadf, "m/s^2", "deg/s").to_dict()
        imu.time_ms = self.time_ms
        imu.angular_velocity = [calibrated_data['gyr_x'][0], calibrated_data['gyr_y'][0], calibrated_data['gyr_z'][0]]
        imu.angular_velocity = imu.angular_velocity*3.14159265359/180
        imu.linear_acceleration = [calibrated_data['acc_x'][0], calibrated_data['acc_y'][0], calibrated_data['acc_z'][0]]
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
