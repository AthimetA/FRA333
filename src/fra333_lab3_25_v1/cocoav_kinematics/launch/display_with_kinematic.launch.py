#!/usr/bin/env python3
from launch import LaunchDescription
from launch_ros.actions import Node
from launch_ros.substitutions import FindPackageShare
from launch.actions import IncludeLaunchDescription,ExecuteProcess
from launch.substitutions import PathJoinSubstitution
from launch.launch_description_sources import PythonLaunchDescriptionSource

import sys


def generate_launch_description():

    ### How to launch another launch file ###
    #
    # You must specify the package, folder, and the name
    #
    package_name = 'cocoav_description'
    # path_to_package = get_package_share_directory(package_name)
    sub_folder = 'launch'    # launch_description.add_action(joint_state_publisher_gui)
    file_name = 'display_gazebo.launch.py'
    
    display = IncludeLaunchDescription(
    
         PythonLaunchDescriptionSource([
            PathJoinSubstitution([
                FindPackageShare(package_name),
                sub_folder,
                file_name
            ])
        ])
    )
    
    traject_test = Node(
        package='cocoav_kinematics',
        executable='fk_ik_server.py',
    )
    
    # Launch Description
    launch_description = LaunchDescription()
    launch_description.add_action(display)
    launch_description.add_action(traject_test)
    
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
    