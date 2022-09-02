#!usr/bin/python3
from launch import LaunchDescription
from launch.actions import ExecuteProcess,DeclareLaunchArgument
from launch_ros.actions import Node
from launch.substitutions import LaunchConfiguration
def generate_launch_description():
    # create a place holder for launch description
    launch_description = LaunchDescription()

    ### Example for adding launch argument ###
    # v_max = LaunchConfiguration('v_max')
    # v_max_launch_arg = DeclareLaunchArgument('v_max',default_value='1.0')
    # launch_description.add_action(v_max_launch_arg)
    
    hz = LaunchConfiguration('hz')
    hz_launch_arg = DeclareLaunchArgument('hz',default_value='5.0')
    launch_description.add_action(hz_launch_arg)
    
    turtle_name = LaunchConfiguration('turtle_name')
    turtle_name_launch_arg = DeclareLaunchArgument('turtle_name',default_value='turtle1')
    launch_description.add_action(turtle_name_launch_arg)
    
    ### Example for adding a node ###
    # node = Node(
    #     package='my_package',
    #     executable='my_executable',
    #     namespace= 'this_namespace',
    #     arguments=[v_max],
    #     remappings=[
    #         ('/topic_1','/topic_a'),
    #         ('/topic_2','/topic_b'),
    #     ]
    # )
    # launch_description.add_action(node)
    
    turtle_node =  Node(
            package='turtlesim',
            executable='turtlesim_node',
    )   
    launch_description.add_action(turtle_node)
    
    linear_Noise_node = Node(
        package='fra333_lab1_25',
        executable='noise_generator.py',
        namespace='linear',
        arguments=[hz],
    )
    launch_description.add_action(linear_Noise_node)
    
    angular_Noise_node = Node(
        package='fra333_lab1_25',
        executable='noise_generator.py',
        namespace='angular',
        arguments=[hz],
    )
    launch_description.add_action(angular_Noise_node)
    
    velocity_mux_node = Node(
        package='fra333_lab1_25',
        executable='velocity_mux.py',
        parameters=[{'turtlename':turtle_name}],
        arguments=[hz]
        )
    launch_description.add_action(velocity_mux_node)   

    ### Example for execute a shell command in python script ###
    # vx = 1.0
    # wz = 1.0
    # pub_cmd_vel = ExecuteProcess(
    #     cmd = [[f'ros2 topic pub -r 10 /turtle1/cmd_vel geometry_msgs/msg/Twist "{{linear: {{x: {vx}, y: 0.0, z: 0.0}}, angular: {{x: 0.0, y: 0.0, z: {wz}}}}}"']],
    #     shell=True
    # )
    # launch_description.add_action(pub_cmd_vel)
    
    new_mean_linear = 2.0
    new_variance_linear = 4.0
    new_mean_angular = 2.0
    new_variance_angular = 4.0
    
    srv_call_linear = ExecuteProcess(
        cmd=[[f'ros2 service call /linear/set_noise lab1_interfaces/srv/SetNoise "{{mean: {{data : {new_mean_linear}}}, variance: {{data : {new_variance_linear}}}}}"']], 
        shell=True
    )
    launch_description.add_action(srv_call_linear)
    
    srv_call_angular = ExecuteProcess(
        cmd=[[f'ros2 service call /angular/set_noise lab1_interfaces/srv/SetNoise "{{mean: {{data : {new_mean_angular}}}, variance: {{data : {new_variance_angular}}}}}"']],
        shell=True
    )
    launch_description.add_action(srv_call_angular)
    
    return launch_description

    