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
    file_name = 'display.launch.py'
    
    display = IncludeLaunchDescription(
    
         PythonLaunchDescriptionSource([
            PathJoinSubstitution([
                FindPackageShare(package_name),
                sub_folder,
                file_name
            ])
        ])
    )
    
    kinematics_server = Node(
        package='cocoa_kinematics',
        executable='kinematics_server.py',
    )
    
    # Launch Description
    launch_description = LaunchDescription()
    launch_description.add_action(display)
    launch_description.add_action(kinematics_server)

    # Service call to set joint values
    # ros2 service call /set_joint cocoa_kinematics_interfaces/srv/RobotJS 
    [j1,j2,j3,j4]  =["joint_rev_b_0", "joint_rev_0_1", "joint_rev_1_2","joint_rev_2_3"]
    [joint_config_q1,joint_config_q2,joint_config_q3,joint_config_q4] = [10.0,10.0,10.0,10.0]
    srv_call_set_joint = ExecuteProcess(
        cmd=[[f'ros2 service call /set_joint cocoav_interfaces/srv/RobotJS "{{jointstate: {{name: [{j1}, {j2}, {j3}, {j4}], position: [{joint_config_q1}, {joint_config_q2}, {joint_config_q3}, {joint_config_q4}]}}}}"']],
        shell=True
    )
    
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
    