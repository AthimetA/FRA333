#!/usr/bin/python3

# import all other neccesary libraries
import sys

import rclpy
import numpy as np
from rclpy.node import Node
from rclpy.qos import QoSProfile
from rclpy.clock import Clock
from sensor_msgs.msg import JointState

from cocoax_interfaces.srv import CocoaXGenerator,CocoaXEnable

np.set_printoptions(precision=4, suppress=True)

class CocoaGenerator(Node):
    def __init__(self):
        super().__init__('cocoax_generator_node')
        
        # Cocoax time 
        self.cocoa_time_ms = 0
        self.cocoa_time = 0
        self.cocoa_timer = self.create_timer(1/1000, self.cocoa_timer_callback)
        self.cocoa_trajectory_time_start = 0
        self.cocoa_trajectory_enable = False
        
        # define rate
        self.rate = 1000
        qos_profile = QoSProfile(depth=10)
        
        # Parameters
        self.time_rate = 1/self.rate 
        
        # Publishers
        self.trajectory_publisher = self.create_publisher(JointState,'/cocoax/end_effector_joint_states', qos_profile)
        
        # Services
        self.trajectory_service = self.create_service(CocoaXGenerator, '/cocoax/trajectory_generator', self.trajectory_service_callback)
        
        # Timers
        self.timer = self.create_timer(self.time_rate, self.timer_callback)
        
        # Memory
        self.trajecotry_param = []
        self.position_initial = []
        self.position_final = []
        self.duration = 0 
        
        
        # Test Service Call 
        self.proximity_service_cilent = self.create_client(CocoaXEnable, '/cocoax/proximity_detect')
        
    def proximity_service_cilent_call(self, enable):
        while not self.proximity_service_cilent.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('/cocoax/proximity_detect service not available, waiting again...')
        request = CocoaXEnable.Request()
        request.setenable = enable
        future = self.proximity_service_cilent.call_async(request)
        self.get_logger().info('cocoax/proximity_detect Service call success')
            

    def trajectory_service_callback(self, request: CocoaXGenerator, response: CocoaXGenerator):
        self.position_initial = request.position_initial
        self.position_final = request.position_final
        self.duration = request.duration
        self.trajecotry_param = self.cocoax_quintic_trajectory_generator(self.duration)
        self.get_logger().info('Trajectory generated')
        self.get_logger().info('Initial position: {}'.format(self.position_initial))
        self.get_logger().info('Final position: {}'.format(self.position_final))
        self.get_logger().info('Duration: {}'.format(self.duration))
        [Ax, Ay, Az] = self.trajecotry_param
        self.get_logger().info(f'Trajectory Polynomial (x-axis):')
        self.get_logger().info(f'{Ax[1,0]:.3f}t + {Ax[2,0]:.3f}t^2 + {Ax[3,0]:.3f}t^3 + {Ax[4,0]:.3f}t^4 + {Ax[5,0]:.3f}t^5')
        self.get_logger().info(f'Trajectory Polynomial (y-axis):')
        self.get_logger().info(f'{Ay[1,0]:.3f}t + {Ay[2,0]:.3f}t^2 + {Ay[3,0]:.3f}t^3 + {Ay[4,0]:.3f}t^4 + {Ay[5,0]:.3f}t^5')
        self.get_logger().info(f'Trajectory Polynomial (z-axis):')
        self.get_logger().info(f'{Az[1,0]:.3f}t + {Az[2,0]:.3f}t^2 + {Az[3,0]:.3f}t^3 + {Az[4,0]:.3f}t^4 + {Az[5,0]:.3f}t^5')
        self.cocoa_trajectory_time_start = self.cocoa_time
        self.cocoa_trajectory_enable = True
        return response
    
    def timer_callback(self):
        # self.get_logger().info(str(self.cocoa_trajectory_enable))
        if self.cocoa_trajectory_enable:
            time = self.cocoa_time - self.cocoa_trajectory_time_start
            if time > self.duration:
                self.cocoa_trajectory_enable = False
                self.get_logger().info('Trajectory finished')
                self.proximity_service_cilent_call(True)
            else:
                # self.get_logger().info('Time: {}'.format(time))
                [p, p_dot] = self.cocoax_quintic_linear_interpolation_taskspace(self.trajecotry_param, [self.position_initial, self.position_final], time)
                # self.get_logger().info('Position: {}'.format(p))
                # self.get_logger().info('Velocity: {}'.format(p_dot))
                msg = JointState()
                msg.header.stamp = self.get_clock().now().to_msg()
                msg.name = ['x','y','z']
                msg.position = p
                msg.velocity = p_dot
                self.trajectory_publisher.publish(msg)
    
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
        
    def cocoa_timer_callback(self):
        self.cocoa_time_ms += 1 
        self.cocoa_time = self.cocoa_time_ms/1000
        # print('time: ', self.cocoa_time)
        # print('node_time: ', self.get_clock().now().to_msg().sec - self.node_star_time)
    
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
