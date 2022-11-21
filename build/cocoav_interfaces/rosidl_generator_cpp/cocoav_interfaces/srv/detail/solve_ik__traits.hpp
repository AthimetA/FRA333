// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from cocoav_interfaces:srv/SolveIK.idl
// generated code does not contain a copyright notice

#ifndef COCOAV_INTERFACES__SRV__DETAIL__SOLVE_IK__TRAITS_HPP_
#define COCOAV_INTERFACES__SRV__DETAIL__SOLVE_IK__TRAITS_HPP_

#include "cocoav_interfaces/srv/detail/solve_ik__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'position'
#include "geometry_msgs/msg/detail/point__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<cocoav_interfaces::srv::SolveIK_Request>()
{
  return "cocoav_interfaces::srv::SolveIK_Request";
}

template<>
inline const char * name<cocoav_interfaces::srv::SolveIK_Request>()
{
  return "cocoav_interfaces/srv/SolveIK_Request";
}

template<>
struct has_fixed_size<cocoav_interfaces::srv::SolveIK_Request>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Point>::value> {};

template<>
struct has_bounded_size<cocoav_interfaces::srv::SolveIK_Request>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Point>::value> {};

template<>
struct is_message<cocoav_interfaces::srv::SolveIK_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'jointstate'
#include "sensor_msgs/msg/detail/joint_state__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<cocoav_interfaces::srv::SolveIK_Response>()
{
  return "cocoav_interfaces::srv::SolveIK_Response";
}

template<>
inline const char * name<cocoav_interfaces::srv::SolveIK_Response>()
{
  return "cocoav_interfaces/srv/SolveIK_Response";
}

template<>
struct has_fixed_size<cocoav_interfaces::srv::SolveIK_Response>
  : std::integral_constant<bool, has_fixed_size<sensor_msgs::msg::JointState>::value> {};

template<>
struct has_bounded_size<cocoav_interfaces::srv::SolveIK_Response>
  : std::integral_constant<bool, has_bounded_size<sensor_msgs::msg::JointState>::value> {};

template<>
struct is_message<cocoav_interfaces::srv::SolveIK_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<cocoav_interfaces::srv::SolveIK>()
{
  return "cocoav_interfaces::srv::SolveIK";
}

template<>
inline const char * name<cocoav_interfaces::srv::SolveIK>()
{
  return "cocoav_interfaces/srv/SolveIK";
}

template<>
struct has_fixed_size<cocoav_interfaces::srv::SolveIK>
  : std::integral_constant<
    bool,
    has_fixed_size<cocoav_interfaces::srv::SolveIK_Request>::value &&
    has_fixed_size<cocoav_interfaces::srv::SolveIK_Response>::value
  >
{
};

template<>
struct has_bounded_size<cocoav_interfaces::srv::SolveIK>
  : std::integral_constant<
    bool,
    has_bounded_size<cocoav_interfaces::srv::SolveIK_Request>::value &&
    has_bounded_size<cocoav_interfaces::srv::SolveIK_Response>::value
  >
{
};

template<>
struct is_service<cocoav_interfaces::srv::SolveIK>
  : std::true_type
{
};

template<>
struct is_service_request<cocoav_interfaces::srv::SolveIK_Request>
  : std::true_type
{
};

template<>
struct is_service_response<cocoav_interfaces::srv::SolveIK_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // COCOAV_INTERFACES__SRV__DETAIL__SOLVE_IK__TRAITS_HPP_
