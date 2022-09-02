#!/usr/bin/python3
import sys
import rclpy
from rclpy.node import Node

from tf2_ros import TransformBroadcaster
from tf2_ros.static_transform_broadcaster import StaticTransformBroadcaster

import tf_transformations

from turtlesim.msg import Pose
from geometry_msgs.msg import TransformStamped

# class StaticFramePublisher(Node):
#    """
#    Broadcast transforms that never change.

#    This example publishes transforms from `world` to a static turtle frame.
#    The transforms are only published once at startup, and are constant for all
#    time.
#    """

#    def __init__(self, transformation):
#       super().__init__('static_turtle_tf2_broadcaster')

#       self._tf_publisher = StaticTransformBroadcaster(self)
      

#       # Publish static transforms once at startup
#       self.make_transforms(transformation)

#    def make_transforms(self, transformation):
#       static_transformStamped = TransformStamped()
#       static_transformStamped.header.stamp = self.get_clock().now().to_msg()
#       static_transformStamped.header.frame_id = 'world'
#       static_transformStamped.child_frame_id = sys.argv[1]
#       static_transformStamped.transform.translation.x = float(sys.argv[2])
#       static_transformStamped.transform.translation.y = float(sys.argv[3])
#       static_transformStamped.transform.translation.z = float(sys.argv[4])
#       quat = tf_transformations.quaternion_from_euler(
#             float(sys.argv[5]), float(sys.argv[6]), float(sys.argv[7]))
#       static_transformStamped.transform.rotation.x = quat[0]
#       static_transformStamped.transform.rotation.y = quat[1]
#       static_transformStamped.transform.rotation.z = quat[2]
#       static_transformStamped.transform.rotation.w = quat[3]

#       self._tf_publisher.sendTransform(static_transformStamped)

class FramePublisher(Node):

    def __init__(self):
        super().__init__('Athturtle_tf2_frame_publisher')

        # Declare and acquire `turtlename` parameter
        self.declare_parameter('turtlename', 'turtle')
        self.turtlename = self.get_parameter(
            'turtlename').get_parameter_value().string_value

        # Initialize the transform broadcaster
        self.br = TransformBroadcaster(self) 

        # Subscribe to a turtle{1}{2}/pose topic and call handle_turtle_pose
        # callback function on each message
        self.subscription = self.create_subscription(
            Pose,
            f'/{self.turtlename}/pose',
            self.handle_turtle_pose,
            1)
        self.subscription  # prevent unused variable warning

    def handle_turtle_pose(self, msg):
        t = TransformStamped()

        # Read message content and assign it to
        # corresponding tf variables
        t.header.stamp = self.get_clock().now().to_msg()
        t.header.frame_id = 'world'
        t.child_frame_id = self.turtlename

        # Turtle only exists in 2D, thus we get x and y translation
        # coordinates from the message and set the z coordinate to 0
        t.transform.translation.x = msg.x
        t.transform.translation.y = msg.y
        t.transform.translation.z = 0.0

        # For the same reason, turtle can only rotate around one axis
        # and this why we set rotation in x and y to 0 and obtain
        # rotation in z axis from the message
        q = tf_transformations.quaternion_from_euler(0, 0, msg.theta)
        t.transform.rotation.x = q[0]
        t.transform.rotation.y = q[1]
        t.transform.rotation.z = q[2]
        t.transform.rotation.w = q[3]

        # Send the transformation
        self.br.sendTransform(t)
        
# def main():
#    logger = rclpy.logging.get_logger('logger')

#    # obtain parameters from command line arguments
#    if len(sys.argv) < 8:
#       logger.info('Invalid number of parameters. Usage: \n'
#                   '$ ros2 run learning_tf2_py static_turtle_tf2_broadcaster'
#                   'child_frame_name x y z roll pitch yaw')
#       sys.exit(0)
#    else:
#       if sys.argv[1] == 'world':
#             logger.info('Your static turtle name cannot be "world"')
#             sys.exit(0)

#    # pass parameters and initialize node
#    rclpy.init()
#    node = StaticFramePublisher(sys.argv)
#    try:
#       rclpy.spin(node)
#    except KeyboardInterrupt:
#       pass

   # rclpy.shutdown()
   
def main():
    rclpy.init()
    node = FramePublisher()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass

    rclpy.shutdown()

if __name__=='__main__':
   main()