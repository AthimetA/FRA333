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
    
    # Add the description, the gazebo node and the control node
    control_package_name = 'cocoax_control'
    control_sub_folder = 'launch' 
    control_file_name = 'cocoax_control.launch.py'
    cocoax_control = IncludeLaunchDescription(
        PythonLaunchDescriptionSource([
            PathJoinSubstitution([
                FindPackageShare(control_package_name),
                control_sub_folder,
                control_file_name
            ])
        ])
    )
    launch_description.add_action(cocoax_control)
    
    kinematics_package_name = 'cocoax_kinematics'
    
    cocoax_kinematics_forward = Node(
        package=kinematics_package_name,
        executable='cocoax_kinematic.py',
        name='cocoax_kinematics_forward',
        output='screen',
        arguments=['forward']
    )
    launch_description.add_action(cocoax_kinematics_forward)
    
    cocoax_kinematics_inverse = Node(
        package=kinematics_package_name,
        executable='cocoax_kinematic.py',
        name='cocoax_kinematics_inverse',
        output='screen',
        arguments=['inverse']
    )
    launch_description.add_action(cocoax_kinematics_inverse)
    
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
    