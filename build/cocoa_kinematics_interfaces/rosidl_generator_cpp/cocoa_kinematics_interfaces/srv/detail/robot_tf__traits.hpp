// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from cocoa_kinematics_interfaces:srv/RobotTF.idl
// generated code does not contain a copyright notice

#ifndef COCOA_KINEMATICS_INTERFACES__SRV__DETAIL__ROBOT_TF__TRAITS_HPP_
#define COCOA_KINEMATICS_INTERFACES__SRV__DETAIL__ROBOT_TF__TRAITS_HPP_

#include "cocoa_kinematics_interfaces/srv/detail/robot_tf__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'jointconfig'
#include "sensor_msgs/msg/detail/joint_state__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<cocoa_kinematics_interfaces::srv::RobotTF_Request>()
{
  return "cocoa_kinematics_interfaces::srv::RobotTF_Request";
}

template<>
inline const char * name<cocoa_kinematics_interfaces::srv::RobotTF_Request>()
{
  return "cocoa_kinematics_interfaces/srv/RobotTF_Request";
}

template<>
struct has_fixed_size<cocoa_kinematics_interfaces::srv::RobotTF_Request>
  : std::integral_constant<bool, has_fixed_size<sensor_msgs::msg::JointState>::value> {};

template<>
struct has_bounded_size<cocoa_kinematics_interfaces::srv::RobotTF_Request>
  : std::integral_constant<bool, has_bounded_size<sensor_msgs::msg::JointState>::value> {};

template<>
struct is_message<cocoa_kinematics_interfaces::srv::RobotTF_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'positionviabase'
#include "geometry_msgs/msg/detail/point__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<cocoa_kinematics_interfaces::srv::RobotTF_Response>()
{
  return "cocoa_kinematics_interfaces::srv::RobotTF_Response";
}

template<>
inline const char * name<cocoa_kinematics_interfaces::srv::RobotTF_Response>()
{
  return "cocoa_kinematics_interfaces/srv/RobotTF_Response";
}

template<>
struct has_fixed_size<cocoa_kinematics_interfaces::srv::RobotTF_Response>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Point>::value> {};

template<>
struct has_bounded_size<cocoa_kinematics_interfaces::srv::RobotTF_Response>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Point>::value> {};

template<>
struct is_message<cocoa_kinematics_interfaces::srv::RobotTF_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<cocoa_kinematics_interfaces::srv::RobotTF>()
{
  return "cocoa_kinematics_interfaces::srv::RobotTF";
}

template<>
inline const char * name<cocoa_kinematics_interfaces::srv::RobotTF>()
{
  return "cocoa_kinematics_interfaces/srv/RobotTF";
}

template<>
struct has_fixed_size<cocoa_kinematics_interfaces::srv::RobotTF>
  : std::integral_constant<
    bool,
    has_fixed_size<cocoa_kinematics_interfaces::srv::RobotTF_Request>::value &&
    has_fixed_size<cocoa_kinematics_interfaces::srv::RobotTF_Response>::value
  >
{
};

template<>
struct has_bounded_size<cocoa_kinematics_interfaces::srv::RobotTF>
  : std::integral_constant<
    bool,
    has_bounded_size<cocoa_kinematics_interfaces::srv::RobotTF_Request>::value &&
    has_bounded_size<cocoa_kinematics_interfaces::srv::RobotTF_Response>::value
  >
{
};

template<>
struct is_service<cocoa_kinematics_interfaces::srv::RobotTF>
  : std::true_type
{
};

template<>
struct is_service_request<cocoa_kinematics_interfaces::srv::RobotTF_Request>
  : std::true_type
{
};

template<>
struct is_service_response<cocoa_kinematics_interfaces::srv::RobotTF_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // COCOA_KINEMATICS_INTERFACES__SRV__DETAIL__ROBOT_TF__TRAITS_HPP_
