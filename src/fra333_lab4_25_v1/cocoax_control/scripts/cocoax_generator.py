#!/usr/bin/python3

# import all other neccesary libraries
import sys

import rclpy
import numpy as np
from rclpy.node import Node
from rclpy.qos import QoSProfile
from rclpy.clock import Clock
from sensor_msgs.msg import JointState

np.set_printoptions(precision=4, suppress=True)

class CocoaGenerator(Node):
    def __init__(self):
        super().__init__('cocoax_generator_node')
        
        # Delay on start 
        self.node_star_time = self.get_clock().now().to_msg().sec
        self.node_star_bool = False
        
        # define rate
        self.rate = 10
        qos_profile = QoSProfile(depth=10)
        
        # Parameters
        self.time_rate = 1/self.rate 
        
        # Publishers
        self.trajectory_publisher = self.create_publisher(JointState,'/cocoax/end_effector_states', qos_profile)
        
        # Timers
        self.timer = self.create_timer(self.time_rate, self.timer_callback)
        
        ########## Test ##########
        A = self.cocoax_quintic_trajectory_generator(5)
        time = [1,2,3,4,5]
        for t in time:
            print(self.cocoax_quintic_linear_interpolation_taskspace(A, [[0,0,0],[10,10,10]], t))
        
        ########## Test ##########
    
    def timer_callback(self):
        pass
    
    def cocoax_quintic_linear_interpolation_taskspace(self, traject_cof, pos, t):
        
        # Get the initial and final position
        p_i = np.array(pos[0])
        p_f = np.array(pos[1])
        
        # Get the trajectory and evaluate it
        a_t = self.cocoax_quintic_trajectory_evaluator(traject_cof,t)
        x_t = np.array(a_t[0:3])
        v_t = np.array(a_t[3:6])
        
        # Linear interpolation
        p_t = ((1-x_t)*p_i )+ (x_t*p_f)
        p_dot_t = v_t*(p_f-p_i)
        
        # Return the position and velocity as a list
        return [p_t.tolist() ,p_dot_t.tolist()]

    def cocoax_quintic_trajectory_generator(self, T):
        xi, yi, zi = [0.0,0.0,0.0]
        xf ,yf, zf = [1.0,1.0,1.0]
        # Calculate the time to reach the final position
        ti = 0
        tf = T
        X = np.matrix([[xi],    # initial position
                       [0],     # initial velocity
                       [0],     # initial acceleration
                       [xf],    # final position
                       [0],     # final velocity
                       [0]])    # final acceleration
        Y = np.matrix([[yi],    # initial position
                        [0],     # initial velocity
                        [0],     # initial acceleration
                        [yf],    # final position
                        [0],     # final velocity
                        [0]])    # final acceleration
        Z = np.matrix([[zi],    # initial position
                       [0],     # initial velocity
                       [0],     # initial acceleration
                       [zf],    # final position
                       [0],     # final velocity
                       [0]])    # final acceleration
        trajectoryMatrix = np.matrix([[1, ti, ti**2, ti**3, ti**4, ti**5],
                                      [0, 1, 2*ti, 3*ti**2, 4*ti**3, 5*ti**4],
                                      [0, 0, 2, 6*ti, 12*ti**2, 20*ti**3],
                                      [1, tf, tf**2, tf**3, tf**4, tf**5],
                                      [0, 1, 2*tf, 3*tf**2, 4*tf**3, 5*tf**4],
                                      [0, 0, 2, 6*tf, 12*tf**2, 20*tf**3]])
        Ax = trajectoryMatrix.I @ X
        Ay = trajectoryMatrix.I @ Y
        Az = trajectoryMatrix.I @ Z
        return [Ax, Ay, Az]
    
    def cocoax_quintic_trajectory_evaluator(self, A, t):
        [Ax, Ay, Az] = A
        xc = Ax[0,0] + Ax[1,0]*t + Ax[2,0]*t**2 + Ax[3,0]*t**3 + Ax[4,0]*t**4 + Ax[5,0]*t**5
        yc = Ay[0,0] + Ay[1,0]*t + Ay[2,0]*t**2 + Ay[3,0]*t**3 + Ay[4,0]*t**4 + Ay[5,0]*t**5
        zc = Az[0,0] + Az[1,0]*t + Az[2,0]*t**2 + Az[3,0]*t**3 + Az[4,0]*t**4 + Az[5,0]*t**5
        vxc = Ax[1,0] + 2*Ax[2,0]*t + 3*Ax[3,0]*t**2 + 4*Ax[4,0]*t**3 + 5*Ax[5,0]*t**4
        vyc = Ay[1,0] + 2*Ay[2,0]*t + 3*Ay[3,0]*t**2 + 4*Ay[4,0]*t**3 + 5*Ay[5,0]*t**4
        vzc = Az[1,0] + 2*Az[2,0]*t + 3*Az[3,0]*t**2 + 4*Az[4,0]*t**3 + 5*Az[5,0]*t**4
        return [xc, yc, zc, vxc, vyc, vzc]
        
def main(args=None):
    rclpy.init(args=args)
    tracker_obj = CocoaGenerator()
    try:
        while rclpy.ok():
            rclpy.spin_once(tracker_obj)
    except KeyboardInterrupt:
        print('repeater stopped cleanly')
    except BaseException:
        print('exception in repeater:', file=sys.stderr)
        raise
    finally:
        tracker_obj.destroy_node()
        rclpy.shutdown() 

if __name__ == '__main__':
    main()
