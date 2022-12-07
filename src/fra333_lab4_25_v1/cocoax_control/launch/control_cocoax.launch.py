#!/usr/bin/env python3
from launch import LaunchDescription
from launch_ros.actions import Node
from launch_ros.substitutions import FindPackageShare
from launch.actions import IncludeLaunchDescription,ExecuteProcess
from launch.substitutions import PathJoinSubstitution
from launch.launch_description_sources import PythonLaunchDescriptionSource

import sys


def generate_launch_description():
    # Launch Description
    launch_description = LaunchDescription()
    
    # Add the tracker node
    control_package_name = 'cocoax_control'
    cocoax_control = Node(
        package=control_package_name,
        executable="tracker.py",
        name="cocoax_tracker_node",
        namespace="cocoax_tracker",)
    launch_description.add_action(cocoax_control)
    
    # launch_description.add_action(srv_call_set_joint)
    return launch_description

def main(args=None):
    try:
        generate_launch_description()
    except KeyboardInterrupt:
        # quit
        sys.exit()

if __name__ == '__main__':
    main()
    