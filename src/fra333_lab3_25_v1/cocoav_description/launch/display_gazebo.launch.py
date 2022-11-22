import os
from ament_index_python.packages import get_package_share_directory
from launch import LaunchDescription
from launch.actions import IncludeLaunchDescription
from launch.launch_description_sources import PythonLaunchDescriptionSource

from launch.actions import ExecuteProcess, IncludeLaunchDescription, RegisterEventHandler

from launch_ros.actions import Node
import xacro
from launch.substitutions import Command, FindExecutable, PathJoinSubstitution

from launch_ros.substitutions import FindPackageShare
from launch.event_handlers import OnProcessExit

import sys

def generate_launch_description():

    # Specify the name of the package and path to xacro file within the package
    pkg_name = 'cocoav_description'
    file_subpath = 'robot/cocoav_robot.urdf.xacro'

    # Use xacro to process the file
    xacro_file = os.path.join(get_package_share_directory(pkg_name),file_subpath)
    print(xacro_file)
    robot_description_raw = xacro.process_file(xacro_file).toxml()

    # Configure the node
    node_robot_state_publisher = Node(
        package='robot_state_publisher',
        executable='robot_state_publisher',
        output='screen',
        parameters=[{'robot_description': robot_description_raw,
        'use_sim_time': True}] # add other parameters here if required
    )

    gazebo = IncludeLaunchDescription(
        PythonLaunchDescriptionSource([os.path.join(
            get_package_share_directory('gazebo_ros'), 'launch'), '/gazebo.launch.py']),
        )


    spawn_entity = Node(package='gazebo_ros', executable='spawn_entity.py',
                    arguments=['-topic', 'robot_description',
                                '-entity', 'robot'],
                    output='screen')

    joint_state_broadcaster_spawner = Node(
        package="controller_manager",
        executable="spawner.py",
        arguments=["joint_state_broadcaster", "--controller-manager", "/controller_manager"],
    )

    robot_controller_spawner = Node(
        package="controller_manager",
        executable="spawner.py",
        arguments=["joint_trajectory_position_controller", "--controller-manager", "/controller_manager"],
    )
    
    #
    ## With -d rviz_file_path, you can load the previous setting of rviz
    #
    package_name = 'cocoav_description'
    path_to_package = get_package_share_directory(package_name)
    sub_folder = 'config'
    file_name = 'cocoav.rviz'
    rviz_file_path = os.path.join(path_to_package,sub_folder,file_name) 
    print(rviz_file_path)
    rviz = Node(
       package='rviz2',
       executable='rviz2',
       name='rviz',
       arguments=['-d', rviz_file_path],
       output='screen')

    launch_description = LaunchDescription()
    launch_description.add_action(rviz)
    launch_description.add_action(gazebo)
    launch_description.add_action(node_robot_state_publisher)
    launch_description.add_action(spawn_entity)
    launch_description.add_action(joint_state_broadcaster_spawner)
    launch_description.add_action(robot_controller_spawner)
    return launch_description

def main(args=None):
    try:
        generate_launch_description()
    except KeyboardInterrupt:
        # quit
        sys.exit()

if __name__ == '__main__':
    main()