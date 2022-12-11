#!/usr/bin/python3

# import all other neccesary libraries
import sys

import rclpy
import numpy as np
from rclpy.node import Node
from rclpy.qos import QoSProfile
from rclpy.clock import Clock
from sensor_msgs.msg import JointState

from cocoax_interfaces.srv import CocoaXGenerator, CocoaXEnable
from cocoax_interfaces.msg import CocoaControlRef, CocoaJointSpace, CocoaTaskSpace

np.set_printoptions(precision=4, suppress=True)

class CocoaScheduler(Node):
    def __init__(self):
        super().__init__('cocoax_scheduler_node')
        
        # Delay on start 
        self.node_star_time = self.get_clock().now().to_msg().sec
        self.node_start_delay = 5
        self.node_start_timer = self.create_timer(1, self.node_start_timer_callback)
                
        # define rate
        self.rate = 10
        qos_profile = QoSProfile(depth=10)
        
        # Parameters
        self.time_rate = 1/self.rate 
        
        # Service Client
        self.trajectory_client = self.create_client(CocoaXGenerator,
                                                    '/cocoax/trajectory_generator_generate_trajectory')
        
        self.tracker_client = self.create_client(CocoaXEnable,
                                                 '/cocoax/tracker_enable')
        
        # Service Server
        self.trajectory_eval_status_is_active = False
        self.trajectory_finish_service = self.create_service(CocoaXEnable,
                                                     '/cocoax/trajectory_generator_finish_trajectory',
                                                     self.trajectory_finish_service_callback)
        
        # Subscribers
        self.proximity_position_buffer = [0.0,0.0,0.0]
        self.proximity_velocity_buffer = [0.0,0.0,0.0]
        self.cocoax_proximity_position_subscriber = self.create_subscription(CocoaTaskSpace,
                                                                             "/cocoax/cocoax_proximity_endeff_position",
                                                                             self.cocoax_proximity_position_subscriber_callback,
                                                                             qos_profile)
        
        # Test Via Point
        self.via_point = [[0.2, 0.0, 0.3978],[-0.0153, -0.0084, 0.534],
                          [0.2, 0.0, 0.3978],[-0.0153, -0.0084, 0.534],
                          [0.2, 0.0, 0.3978],[-0.0153, -0.0084, 0.534],
                          [0.2, 0.0, 0.3978],[-0.0153, -0.0084, 0.534],
                          [0.2, 0.0, 0.3978],[-0.0153, -0.0084, 0.534],]
        self.via_point_iteration = 0
        self.via_point_max_iteration = len(self.via_point)-2
        self.via_point_initial = self.via_point[self.via_point_iteration]
        self.via_point_final = self.via_point[self.via_point_iteration+1]
        
        self.get_logger().info(f'Via point iteration : {self.via_point_max_iteration}')
        
        # Proximity
        tol = 0.001
        self.proximity_tolerance = [tol, tol, tol]
        
        # State Machine
        self.cocoax_state = 'sleep'
        self.cocoax_state_timer = self.create_timer(self.time_rate, self.cocoax_state_timer_callback)
    
    def cocoax_state_timer_callback(self):
        # self.get_logger().info('State: {}'.format(self.cocoax_state))
        if self.cocoax_state == 'sleep':
            # zzz delay on start
            pass
        elif self.cocoax_state == 'start':
            
            # Tracker enable
            self.get_logger().info('Starting Tracker')
            self.tracker_service_call(True)
            
            # Change state
            self.cocoax_state = 'trajectoryGenerate'
    
        elif self.cocoax_state == 'trajectoryGenerate':
            
            # Generate trajectory
            self.via_point_initial = self.via_point[self.via_point_iteration] # Initial via point
            self.via_point_final = self.via_point[self.via_point_iteration+1] # Final via point
            
            self.get_logger().info(f'Starting trajectory of via point {self.via_point_initial} to {self.via_point_final}')
            # Service call for trajectory generation to CocoaX_Generator
            self.trajectory_service_call(self.via_point_initial, self.via_point_final)
                        
            # Change state
            self.cocoax_state = 'trajectoryExecute'
            
            self.get_logger().info('------------------------------------')        
            self.get_logger().info(f'Via point iteration   : {self.via_point_iteration}')

            
        elif self.cocoax_state == 'trajectoryExecute':
            
            # Check if trajectory is finished and proximity is detected
            proximity_status = self.proximity_detection()
            
            # self.get_logger().info(f'Proximity status      : {proximity_status}')
            # self.get_logger().info(f'Trajectory eval status: {self.trajectory_eval_status_is_active}')
            # self.get_logger().info(f'------------------------------------')
            
            # if proximity_status == True and self.trajectory_eval_status_is_active == False:
            if self.trajectory_eval_status_is_active == False:
                if self.via_point_iteration < self.via_point_max_iteration:
                    self.via_point_iteration += 1
                    self.cocoax_state = 'trajectoryGenerate'
                else:
                    self.cocoax_state = 'stop'
            else:
                # self.get_logger().info('CocoaX is not reching the via point')
                pass
            
        elif self.cocoax_state == 'stop':
            # Disable tracker
            self.tracker_service_call(False)
            
            # Change state
            self.cocoax_state = 'idle'
            
        elif self.cocoax_state == 'idle':
            self.get_logger().info('Idle')
        else:
            self.get_logger().info('Unknown state')
            
    def proximity_detection(self):
        # Current position
        current_position = np.array(self.proximity_position_buffer) # [x, y, z]
        reference_position = np.array(self.via_point_final) # [x, y, z]
        
        # Check if current position is within tolerance
        if np.all(np.abs(current_position - reference_position) < self.proximity_tolerance):
            self.get_logger().info('Proximity detected')
            return True
        else:
            return False
        
    # This function is called when the trajectory service is called by the CocoaX_Generator    
    def trajectory_finish_service_callback(self, request: CocoaXEnable, response: CocoaXEnable):
        self.trajectory_eval_status_is_active = request.enable
        self.get_logger().info(f"Trajectory evaluator : trajectory_eval_status_is_active : {self.trajectory_eval_status_is_active}")
        return response
    
    # This function is called when scheduler enable/disable CocoaX_Tracker
    def tracker_service_call(self, enable):
        while not self.tracker_client.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('/cocoax/tracker_enable service not available, waiting again...')
        request = CocoaXEnable.Request()
        request.enable = enable
        future = self.tracker_client.call_async(request)
        self.get_logger().info('/cocoax/tracker_enable Service call success')
    
    # This function is called when scheduler generate trajectory for CocoaX_Generator    
    def trajectory_service_call(self, position_initial, position_final):
        # Calculate duration from via point final and via point initial
        duration = self.via_point_duration_calculator(self.via_point)
        while not self.trajectory_client.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('/cocoax/trajectory_generator_generate_trajectory service not available, waiting again...')
        request = CocoaXGenerator.Request()
        request.position_initial = position_initial
        request.position_final = position_final
        request.duration = duration
        future = self.trajectory_client.call_async(request)
        self.get_logger().info('/cocoax/trajectory_generator_generate_trajectory Service call success')

    # This function is called when the proximity position is published by the CocoaX_ForwardKinematics
    def cocoax_proximity_position_subscriber_callback(self, msg : CocoaTaskSpace):
        self.proximity_position_buffer = msg.position
        self.proximity_velocity_buffer = msg.velocity
    
    def via_point_duration_calculator(self, via_point):
        via_point_initial = via_point[0]
        via_point_final = via_point[1]
        
        overall_distance = np.sqrt((via_point_final[0]-via_point_initial[0])**2 + (via_point_final[1]-via_point_initial[1])**2 + (via_point_final[2]-via_point_initial[2])**2)
        print('overall_distance: ', overall_distance)
        
        jmax = 0.01
        amax = 0.01
        vmax = 0.1
        # # Speed test
        # jmax = 0.5
        # amax = 0.5
        # vmax = 1.0
        # # mid test
        # jmax = 0.05
        # amax = 0.05
        # vmax = 0.05

        via_point_duration = (amax/jmax) +(vmax/amax) + (overall_distance/vmax)
        print('via_point_duration: ', via_point_duration)
        return via_point_duration
    
    def node_start_timer_callback(self):
        if self.get_clock().now().to_msg().sec - self.node_star_time > self.node_start_delay:
            self.get_logger().info('Node start delay finished')
            # Cancel timer
            self.node_start_timer.cancel()
            # Change state
            self.cocoax_state = 'start'

        
        
def main(args=None):
    rclpy.init(args=args)
    tracker_obj = CocoaScheduler()
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
