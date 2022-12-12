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

from visualization_msgs.msg import Marker
from visualization_msgs.msg import MarkerArray

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
        
        # Marker
        self.marker_array_buffer = MarkerArray()
        self.marker_id = 0
        self.marker_publisher = self.create_publisher(MarkerArray, 'visualization_marker_array', qos_profile)
        self.marker_pub_msg = self.create_publisher(Marker, '/cocoax/marker', qos_profile)
        
        self.home_pos = [0.2, 0.0, 0.3978]
        self.xplane = 0.2
        self.yplane = 0.0
        self.zplane = 0.4
        self.step = 0.05
        self.via_point = [  {'Position': [0.2, 0.0, 0.3978], 'Pentype': 'PenUp'},
                            {'Position': [0.2, 0.0, 0.3978], 'Pentype': 'PenUp'},
                            # Draw a 'F'
                            {'Position': [self.xplane, self.yplane + (-2*self.step), self.zplane + (-1*self.step)], 'Pentype': 'PenDown'},
                            {'Position': [self.xplane, self.yplane + (-2*self.step), self.zplane + ( 0*self.step)], 'Pentype': 'PenDown'},
                            {'Position': [self.xplane, self.yplane + (-1*self.step), self.zplane + ( 0*self.step)], 'Pentype': 'PenDown'},
                            {'Position': [self.xplane, self.yplane + (-2*self.step), self.zplane + ( 0*self.step)], 'Pentype': 'PenDown'},
                            {'Position': [self.xplane, self.yplane + (-2*self.step), self.zplane + ( 1*self.step)], 'Pentype': 'PenDown'},
                            {'Position': [self.xplane, self.yplane + (-1*self.step), self.zplane + ( 1*self.step)], 'Pentype': 'PenUp'},
                            # Draw a 'I'
                            {'Position': [self.xplane, self.yplane + ( 0*self.step), self.zplane + ( 1*self.step)], 'Pentype': 'PenDown'},
                            {'Position': [self.xplane, self.yplane + ( 0*self.step), self.zplane + (-1*self.step)], 'Pentype': 'PenUp'},
                            # Draw a 'B
                            {'Position': [self.xplane, self.yplane + ( 1*self.step), self.zplane + ( 1*self.step)], 'Pentype': 'PenDown'},
                            {'Position': [self.xplane, self.yplane + ( 2*self.step), self.zplane + ( 1*self.step)], 'Pentype': 'PenDown'},
                            {'Position': [self.xplane, self.yplane + ( 1*self.step), self.zplane + ( 0*self.step)], 'Pentype': 'PenDown'},
                            {'Position': [self.xplane, self.yplane + ( 2*self.step), self.zplane + (-1*self.step)], 'Pentype': 'PenDown'},
                            {'Position': [self.xplane, self.yplane + ( 1*self.step), self.zplane + (-1*self.step)], 'Pentype': 'PenDown'},
                            {'Position': [self.xplane, self.yplane + ( 1*self.step), self.zplane + ( 1*self.step)], 'Pentype': 'PenUp'},
                            # Draw a 'O'
                            {'Position': [self.xplane, self.yplane + ( 3*self.step), self.zplane + ( 1*self.step)], 'Pentype': 'PenDown'},
                            {'Position': [self.xplane, self.yplane + ( 4*self.step), self.zplane + ( 1*self.step)], 'Pentype': 'PenDown'},
                            {'Position': [self.xplane, self.yplane + ( 4*self.step), self.zplane + (-1*self.step)], 'Pentype': 'PenDown'},
                            {'Position': [self.xplane, self.yplane + ( 3*self.step), self.zplane + (-1*self.step)], 'Pentype': 'PenDown'},
                            {'Position': [self.xplane, self.yplane + ( 3*self.step), self.zplane + ( 1*self.step)], 'Pentype': 'PenUp'},
                            # Move out of the way
                            {'Position': [self.xplane, self.yplane + (-3*self.step), self.zplane + ( 1*self.step)], 'Pentype': 'PenUp'},
                           ]

                          
        self.via_point_iteration = 0
        self.via_point_max_iteration = len(self.via_point)-2
        self.via_point_pen_type = self.via_point[self.via_point_iteration]['Pentype']
        self.via_point_initial = self.via_point[self.via_point_iteration]['Position']
        self.via_point_final = self.via_point[self.via_point_iteration+1]['Position']
        
        self.get_logger().info(f'Via point iteration : {self.via_point_max_iteration}')
        
        # Proximity
        self.proximity_status = False
        tol = 0.001
        self.proximity_tolerance = [tol, tol, tol]
        
        # State Machine
        self.cocoax_state = 'sleep'
        self.cocoax_state_timer = self.create_timer(self.time_rate, self.cocoax_state_timer_callback)
        
        self.tcount = 0
        
    def cocoax_marker(self):
        if self.via_point_pen_type == 'PenDown':
            current_position = np.array(self.proximity_position_buffer)
            marker = Marker()
            marker.header.frame_id = 'world'
            marker.header.stamp = self.get_clock().now().to_msg()
            # set shape, Arrow: 0; Cube: 1 ; Sphere: 2 ; Cylinder: 3
            marker.type = 2
            marker.id = self.marker_id
            self.marker_id += 1
            marker.scale.x = 0.01
            marker.scale.y = 0.01
            marker.scale.z = 0.01
            marker.color.r = 0.0
            marker.color.g = 1.0
            marker.color.b = 0.0
            marker.color.a = 1.0
            marker.pose.position.x = current_position[0]
            marker.pose.position.y = current_position[1]
            marker.pose.position.z = current_position[2]
            self.marker_pub_msg.publish(marker)
            self.marker_array_buffer.markers.append(marker)
    
    def cocoax_state_timer_callback(self):
        
        # Delay on start
        if self.cocoax_state == 'sleep':
            pass
        
        # Enable Tracker
        elif self.cocoax_state == 'start':
            
            # Tracker enable
            self.get_logger().info('Starting Tracker')
            self.tracker_service_call(True)
            
            # Change state
            self.cocoax_state = 'trajectoryGenerate'
            
        # Trajectory Generation
        elif self.cocoax_state == 'trajectoryGenerate':
            
            # Generate trajectory
            self.via_point_pen_type = self.via_point[self.via_point_iteration]['Pentype']
            self.via_point_initial = self.via_point[self.via_point_iteration]['Position'] # Initial via point
            self.via_point_final = self.via_point[self.via_point_iteration+1]['Position'] # Final via point
            
            self.get_logger().info(f'Via point iteration : {self.via_point_iteration}')
            self.get_logger().info(f'Via point initial : {self.via_point_initial}')
            self.get_logger().info(f'Via point final : {self.via_point_final}')
            self.get_logger().info(f'Via point pen type : {self.via_point_pen_type}')
            
            # Service call for trajectory generation to CocoaX_Generator
            self.trajectory_service_call(self.via_point_initial, self.via_point_final)        
                        
            # Change state
            self.cocoax_state = 'trajectoryExecute'

        # Trajectory Evaluation
        elif self.cocoax_state == 'trajectoryExecute':
            
            self.cocoax_marker()
            
            # Check if trajectory is finished and proximity is detected
            if self.proximity_status == False:
                self.proximity_status = self.proximity_detection()
            
            if self.proximity_status == True and self.trajectory_eval_status_is_active == False:
                self.proximity_status = True
                if self.via_point_iteration < self.via_point_max_iteration:
                    self.via_point_iteration += 1
                    self.cocoax_state = 'awaiting'
                    self.tcount = 0
                else:
                    self.via_point_iteration += 1
                    self.cocoax_state = 'stop'
                self.get_logger().info(f'-------------------Completed----------------------')
                self.get_logger().info(f'                       |                          ')
                self.get_logger().info(f'Via Point {self.via_point_iteration} {self.via_point_initial} to {self.via_point_final}')
                self.get_logger().info(f'                       |                          ')
                self.get_logger().info(f'--------------------------------------------------')
        
        # Disable Tracker
        elif self.cocoax_state == 'stop':
            # Disable tracker
            self.tracker_service_call(False)
            
            # Change state
            self.get_logger().info('All Via Points Completed : CocoaX is Idle :)')
            self.cocoax_state = 'idle'
            
        elif self.cocoax_state == 'awaiting':

            # Wait for 1 seconds
            if self.tcount > 10: 
                self.cocoax_state = 'trajectoryGenerate'
            else:
                self.tcount += 1   
                
        elif self.cocoax_state == 'idle':
            pass
            
        else:
            self.get_logger().info('Unknown state')
            
    def proximity_detection(self):
        # Current position
        current_position = np.array(self.proximity_position_buffer) # [x, y, z]
        reference_position = np.array(self.via_point_final) # [x, y, z]
        
        # Check if current position is within tolerance
        if np.all(np.abs(current_position - reference_position) < self.proximity_tolerance):
            self.get_logger().info(f'************************************')
            self.get_logger().info('Proximity detected (Waiting for trajectory to finish)')
            self.get_logger().info(f'************************************')
            return True
        else:
            # self.get_logger().info(f'Current position      : {current_position}')
            # self.get_logger().info(f'Reference position    : {reference_position}')
            # self.get_logger().info(f'Error                 : {np.abs(current_position - reference_position)}')
            # self.get_logger().info(f'------------------------------------')
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
        duration = self.via_point_duration_calculator(self.via_point_initial, self.via_point_final)
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
    
    def via_point_duration_calculator(self, via_point_initial, via_point_final):
        via_point_initial = via_point_initial
        via_point_final = via_point_final
        
        overall_distance = np.sqrt((via_point_final[0]-via_point_initial[0])**2 + (via_point_final[1]-via_point_initial[1])**2 + (via_point_final[2]-via_point_initial[2])**2)
        print('overall_distance: ', overall_distance)
        
        # Slow test        
        # jmax = 0.01
        # amax = 0.01
        # vmax = 0.1
        # Speed test
        jmax = 0.5
        amax = 0.5
        vmax = 1.0
        # # mid test
        # jmax = 0.05
        # amax = 0.05
        # vmax = 0.5
        # jmax = 0.001
        # amax = 0.001
        # vmax = 0.01

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
