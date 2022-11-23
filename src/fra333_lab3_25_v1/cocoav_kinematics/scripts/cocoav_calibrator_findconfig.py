#!/usr/bin/python3

# import all other neccesary libraries
import sys

import rclpy
import numpy as np
from rclpy.node import Node
from rclpy.qos import QoSProfile
from rclpy.clock import Clock

from cocoav_interfaces.msg import CocoaVIMU

import pandas as pd

class CocoaIMUTest(Node):
    def __init__(self):
        super().__init__('cocoav_test_node')
        self.datalog = pd.DataFrame(columns=['gyr_x', 'gyr_y', 'gyr_z', 'acc_x', 'acc_y', 'acc_z'])

        # define rate
        qos_profile = QoSProfile(depth=10)
        
        # Subscribers
        self.time_ms = 0
        self.angular_velocity = [0.0,0.0,0.0]
        self.linear_acceleration = [0.0,0.0,0.0]
        self.imu_sub = self.create_subscription(CocoaVIMU, '/cocoav_imu_calibrated', self.imu_sub_callback, qos_profile)
    
    def imu_sub_callback(self, msg:CocoaVIMU):
        self.time_ms = msg.time_ms
        self.angular_velocity = msg.angular_velocity
        self.linear_acceleration = msg.linear_acceleration
        self.datalog = self.datalog.append({'gyr_x': self.angular_velocity[0], 'gyr_y': self.angular_velocity[1], 'gyr_z': self.angular_velocity[2], 'acc_x': self.linear_acceleration[0], 'acc_y': self.linear_acceleration[1], 'acc_z': self.linear_acceleration[2]}, ignore_index=True)

def main(args=None):
    rclpy.init(args=args)
    calibrate_obj = CocoaIMUTest()
    try:
        while rclpy.ok():
            rclpy.spin_once(calibrate_obj)
    except KeyboardInterrupt:
        print('repeater stopped cleanly')
    except BaseException:
        print('exception in repeater:', file=sys.stderr)
        raise
    finally:
        print(calibrate_obj.datalog)
        calibrate_obj.datalog.to_csv('calibrate.csv', index=False)
        print("Data saved")
        calibrate_obj.destroy_node()
        rclpy.shutdown() 


if __name__ == '__main__':
    main()
