#!/usr/bin/python3

# import all other neccesary libraries
import sys

import rclpy
import numpy as np
from rclpy.node import Node
from rclpy.qos import QoSProfile
from rclpy.clock import Clock

from cocoav_interfaces.msg import CocoaVIMU

from scipy.signal import filtfilt, butter
import quaternion
# from quaternion import quaternion, from_rotation_vector, rotate_vectors
from scipy.spatial.transform import Rotation 

import pandas as pd

class CocoaTest(Node):
    def __init__(self):
        super().__init__('cocoav_test_node')
        self.datalog = pd.DataFrame(columns=['gyr_x', 'gyr_y', 'gyr_z', 'acc_x', 'acc_y', 'acc_z'])
        self.count = 0
        self.testround = 0
        self.timearray= []
        self.dataarrayA = []
        self.dataarrayW = []
        self.current_time = 0
        self.startTime = 0
        self.w_last =np.array([0,0,0])
        self.a_last =np.array([0,0,0])
        
        # define rate
        self.rate = 100
        qos_profile = QoSProfile(depth=10)
        
        # Parameters
        self.time_rate = 1/self.rate 
        
        # Subscribers
        self.time_ms = 0
        self.angular_velocity = [0.0,0.0,0.0]
        self.linear_acceleration = [0.0,0.0,0.0]
        self.imu_sub = self.create_subscription(CocoaVIMU, '/cocoav_imu_calibrated', self.imu_sub_callback, qos_profile)
        
        # Publisher
        self.imu_pub = self.create_publisher(CocoaVIMU, '/cocoav_test', qos_profile)
        
        # Timer
        self.timer_callback = self.create_timer(self.time_rate, callback=self.timer_callback)
        
        # Estimator
        self.estimate_orientation_euler = 0
        self.estimate_frequency = 100
        self.estimate_timer = self.create_timer(1/self.estimate_frequency, callback=self.cocoaV_orientation_estimation_callback)
        
    
    def imu_sub_callback(self, msg:CocoaVIMU):
        self.time_ms = msg.time_ms
        self.angular_velocity = msg.angular_velocity
        self.linear_acceleration = msg.linear_acceleration
        self.datalog = self.datalog.append({'gyr_x': self.angular_velocity[0], 'gyr_y': self.angular_velocity[1], 'gyr_z': self.angular_velocity[2], 'acc_x': self.linear_acceleration[0], 'acc_y': self.linear_acceleration[1], 'acc_z': self.linear_acceleration[2]}, ignore_index=True)
    
    def imu_calibrate(self):
        imu = CocoaVIMU()
        imu.time_ms = self.time_ms
        imu.angular_velocity = self.angular_velocity
        imu.linear_acceleration = self.linear_acceleration
        self.imu_pub.publish(imu)
    
    # def cocoaV_orientation_estimation_callback(self):
    #     angluar_velocity = np.array(self.angular_velocity)
    #     angluar_acceleration = (angluar_velocity-self.w_last)*self.estimate_frequency
    #     print("angluar_acceleration: ",angluar_acceleration)
    #     self.w_last = angluar_velocity
        
    
    def cocoaV_orientation_estimation_callback(self):
        print("angular_velocity: ",self.angular_velocity)
        print("linear_acceleration: ",self.linear_acceleration)
        # self.timearray.append(self.time_ms/1000)
        # self.dataarrayA.append(self.linear_acceleration)
        # self.dataarrayW.append(self.angular_velocity)
        # #
        # if self.count == 100:
        #     self.count = 0
        #     self.testround += 1
        #     # print('-'*50)
        #     # self.get_logger().info('Calibration round %d finished' % self.testround)
        #     # print("Time array: ", self.timearray)
        #     # print(np.diff(self.timearray))
        #     p = self.estimate_orientation(self.dataarrayA, self.dataarrayW, self.timearray)
        #     # print("DataA array: ", self.dataarrayA)
        #     # print("DataW array: ", self.dataarrayW)
        #     FA = quaternion.as_float_array(p)
        #     PE = np.mean(FA, axis=0)
        #     # print("P array: \n", FA)
        #     # print("Estimated orientation: ", PE)
        #     # print("P array: \n", FA)
        #     # print("Estimated orientation: ", PE)
        #     # FA = quaternion.as_float_array(PE)
        #     # # print("Estimated orientation as float array: ", FA)
        #     self.estimate_orientation_euler = Rotation.from_quat(PE)
        #     # print("Estimated orientation as rotation matrix: \n", R.as_matrix())
        #     eee = self.estimate_orientation_euler.as_euler('xyz', degrees=True)
        #     neee = np.array(eee)
        #     neee =np.rint(neee)
        #     print("Estimated orientation as euler angles: ", neee)
        #     # print("Estimated orientation as quaternion: ", R.as_quat())
        #     # print("Orientation X: ", p[0])
        #     # print("Orientation Y: ", p[1])
        #     # print("Orientation Z: ", p[2])
        #     # R = self.quat2rot(PE)
        #     # R = Rotation.from_quat(PE)
        #     # print("Rotation matrix: ", R)
        #     # phi, theta, psi = self.rot2euler(R)
        #     # print("Euler angles: ", phi, theta, psi)
        #     self.dataarrayA = []
        #     self.dataarrayW = []
        #     self.timearray = []
        # else:
            # self.count += 1
    
    
    def timer_callback(self):
        self.imu_calibrate()
    
    def estimate_orientation(self,a, w, t, alpha=0.8, g_ref=(0., 0., 1.),
                         theta_min=1e-1, highpass=1/100, lowpass=1/40):
        # """ Estimate orientation with a complementary filter.
        # Fuse linear acceleration and angular velocity measurements to obtain an
        # estimate of orientation using a complementary filter as described in
        # `Wetzstein 2017: 3-DOF Orientation Tracking with IMUs`_
        # .. _Wetzstein 2017: 3-DOF Orientation Tracking with IMUs:
        # https://pdfs.semanticscholar.org/5568/e2100cab0b573599accd2c77debd05ccf3b1.pdf
        # Parameters
        # ----------
        # a : array-like, shape (N, 3)
        #     Acceleration measurements (in arbitrary units).
        # w : array-like, shape (N, 3)
        #     Angular velocity measurements (in rad/s).
        # t : array-like, shape (N,)
        #     Timestamps of the measurements (in s).
        # alpha : float, default 0.9
        #     Weight of the angular velocity measurements in the estimate.
        # g_ref : tuple, len 3, default (0., 0., 1.)
        #     Unit vector denoting direction of gravity.
        # theta_min : float, default 1e-6
        #     Minimal angular velocity after filtering. Values smaller than this
        #     will be considered noise and are not used for the estimate.
        # highpass : float, default .01
        #     Cutoff frequency of the high-pass filter for the angular velocity as
        #     fraction of Nyquist frequency.
        # lowpass : float, default .05
        #     Cutoff frequency of the low-pass filter for the linear acceleration as
        #     fraction of Nyquist frequency.
        # Returns
        # -------
        # q : array of quaternions, shape (N,)
        #     The estimated orientation for each measurement.
        # """

        # initialize some things
        # print("Len t array: ", len(t))
        N = len(t)
        dt = np.diff(t)
        g_ref = np.array(g_ref)
        q = np.ones(N, dtype=quaternion.quaternion)

        # get high-passed angular velocity
        w = filtfilt(*butter(5, highpass, btype='high'), w, axis=0)
        w[np.linalg.norm(w, axis=1) < theta_min] = 0
        q_delta = quaternion.from_rotation_vector(w[1:] * dt[:, None])

        # get low-passed linear acceleration
        a = filtfilt(*butter(5, lowpass, btype='low'), a, axis=0)

        for i in range(1, N):

            # get rotation estimate from gyroscope
            q_w = q[i - 1] * q_delta[i - 1]

            # get rotation estimate from accelerometer
            v_world = quaternion.rotate_vectors(q_w, a[i])
            n = np.cross(v_world, g_ref)
            phi = np.arccos(np.dot(v_world / np.linalg.norm(v_world), g_ref))
            q_a = quaternion.from_rotation_vector(
                (1 - alpha) * phi * n[None, :] / np.linalg.norm(n))[0]

            # fuse both estimates
            q[i] = q_a * q_w
        return q

def main(args=None):
    rclpy.init(args=args)
    calibrate_obj = CocoaTest()
    try:
        while rclpy.ok():
            rclpy.spin_once(calibrate_obj)
    except KeyboardInterrupt:
        print('repeater stopped cleanly')
    except BaseException:
        print('exception in repeater:', file=sys.stderr)
        raise
    finally:
        print("Hi I'm dead")
        print(calibrate_obj.datalog)
        calibrate_obj.datalog.to_csv('calibrate.csv', index=False)
        print("Data saved")
        calibrate_obj.destroy_node()
        rclpy.shutdown() 


if __name__ == '__main__':
    main()
