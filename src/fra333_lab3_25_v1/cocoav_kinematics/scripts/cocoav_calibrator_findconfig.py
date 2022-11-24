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
import yaml

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
        self.imu_sub = self.create_subscription(CocoaVIMU, '/cocoav_imu_arduino', self.imu_sub_callback, qos_profile)
    
    def imu_sub_callback(self, msg:CocoaVIMU):
        self.time_ms = msg.time_ms
        self.angular_velocity = msg.angular_velocity
        self.linear_acceleration = msg.linear_acceleration
        self.datalog = self.datalog.append({'gyr_x': self.angular_velocity[0], 'gyr_y': self.angular_velocity[1], 'gyr_z': self.angular_velocity[2], 'acc_x': self.linear_acceleration[0], 'acc_y': self.linear_acceleration[1], 'acc_z': self.linear_acceleration[2]}, ignore_index=True)

    def cal_calibrate(self):
        gyr_x = self.datalog['gyr_x'].mean()
        gyr_y = self.datalog['gyr_y'].mean()
        gyr_z = self.datalog['gyr_z'].mean()
        acc_x = self.datalog['acc_x'].mean()
        acc_y = self.datalog['acc_y'].mean()
        acc_z = self.datalog['acc_z'].mean()
        
        gyr_x_var = self.datalog['gyr_x'].var()
        gyr_y_var = self.datalog['gyr_y'].var()
        gyr_z_var = self.datalog['gyr_z'].var()
        acc_x_var = self.datalog['acc_x'].var()
        acc_y_var = self.datalog['acc_y'].var()
        acc_z_var = self.datalog['acc_z'].var()
        
        angular_velocity_mean = [float(gyr_x), float(gyr_y), float(gyr_z)]
        linear_acceleration_mean = [float(acc_x), float(acc_y), float(acc_z)]
        angular_velocity_var = [float(gyr_x_var), float(gyr_y_var), float(gyr_z_var)]
        linear_acceleration_var = [float(acc_x_var), float(acc_y_var), float(acc_z_var)]
        
        ymal_dict = {'angular_velocity_mean': angular_velocity_mean, 'linear_acceleration_mean': linear_acceleration_mean, 'angular_velocity_var': angular_velocity_var, 'linear_acceleration_var': linear_acceleration_var}
        
        yaml.dump(ymal_dict, open('cocoav_imu_calib.yaml', 'w'))
        
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
        calibrate_obj.cal_calibrate()
        calibrate_obj.datalog.to_csv('calibrate.csv', index=False)
        print("Data saved")
        calibrate_obj.destroy_node()
        rclpy.shutdown() 


if __name__ == '__main__':
    main()
