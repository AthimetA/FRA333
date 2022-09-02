#!/usr/bin/python3
import rclpy
from rclpy.action import ActionClient
from rclpy.node import Node

from my_first_package.action import Fibonacci


class FibonacciActionClient(Node):

    def __init__(self):
        super().__init__('fibonacci_action_client')
        self._action_client = ActionClient(self, Fibonacci, 'fibonacciAth')

    def send_goal(self, order):
        goal_msg = Fibonacci.Goal()
        goal_msg.order = order
        self.get_logger().info('wait_for_server...1')
        
        self._action_client.wait_for_server()

        # The ActionClient.send_goal_async() method returns a future to a goal handle. 
        # We need to register the callback with the action client. This is achieved by additionally passing the callback to the action client when we send a goal:
        self._send_goal_future = self._action_client.send_goal_async(goal_msg, feedback_callback=self.feedback_callback)
        # First we register a callback for when the future is complete:
        self._send_goal_future.add_done_callback(self.goal_response_callback)

    def goal_response_callback(self, future):
        # Note that the future is completed when an action server accepts or rejects the goal request
        # We can check to see if the goal was rejected and return early since we know there will be no result:
        goal_handle = future.result()
        if not goal_handle.accepted:
            self.get_logger().info('Goal rejected :(')
            return

        self.get_logger().info('Goal accepted :)')

        # Now that we’ve got a goal handle, we can use it to request the result with the method get_result_async(). 
        # get a future that will complete when the result is ready
        self._get_result_future = goal_handle.get_result_async()
        # In the callback, we log the result sequence and shutdown ROS 2 for a clean exit:
        self._get_result_future.add_done_callback(self.get_result_callback)
        
        # ---------------------- CHECK ----------------------#
        # self.get_logger().info(str(self._send_goal_future)+" and "+str(self._get_result_future)) # they are not same future 
        # <rclpy.task.Future object at 0x7f5e34ebe940> and <rclpy.task.Future object at 0x7f5e34e8cb20>
        
        # self.get_logger().info(str(goal_handle)+" and "+str(self._get_result_future)) # They are not the same
        # goal_handle ===> ClientGoalHandle <id=[198 156 249 111 130 201  72  76 129 130  56 239  21 105  48 240], accepted=True, status=0> 
        # self._get_result_future ===> <rclpy.task.Future object at 0x7f43b82e69d0>
        # ---------------------- CHECK ----------------------#

    def get_result_callback(self, future):
        result = future.result().result
        self.get_logger().info('Result: {0}'.format(result.sequence))
        # rclpy.shutdown()
    
    
    def feedback_callback(self, feedback_msg):
        feedback = feedback_msg.feedback
        self.get_logger().info('Received feedback: {0}'.format(feedback.partial_sequence))

def main(args=None):
    rclpy.init(args=args)

    action_client = FibonacciActionClient()

    action_client.send_goal(10)

    rclpy.spin(action_client)

    action_client.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()