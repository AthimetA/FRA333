// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from cocoa_kinematics_interfaces:srv/SolveIK.idl
// generated code does not contain a copyright notice

#ifndef COCOA_KINEMATICS_INTERFACES__SRV__DETAIL__SOLVE_IK__TRAITS_HPP_
#define COCOA_KINEMATICS_INTERFACES__SRV__DETAIL__SOLVE_IK__TRAITS_HPP_

#include "cocoa_kinematics_interfaces/srv/detail/solve_ik__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<cocoa_kinematics_interfaces::srv::SolveIK_Request>()
{
  return "cocoa_kinematics_interfaces::srv::SolveIK_Request";
}

template<>
inline const char * name<cocoa_kinematics_interfaces::srv::SolveIK_Request>()
{
  return "cocoa_kinematics_interfaces/srv/SolveIK_Request";
}

template<>
struct has_fixed_size<cocoa_kinematics_interfaces::srv::SolveIK_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<cocoa_kinematics_interfaces::srv::SolveIK_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<cocoa_kinematics_interfaces::srv::SolveIK_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<cocoa_kinematics_interfaces::srv::SolveIK_Response>()
{
  return "cocoa_kinematics_interfaces::srv::SolveIK_Response";
}

template<>
inline const char * name<cocoa_kinematics_interfaces::srv::SolveIK_Response>()
{
  return "cocoa_kinematics_interfaces/srv/SolveIK_Response";
}

template<>
struct has_fixed_size<cocoa_kinematics_interfaces::srv::SolveIK_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<cocoa_kinematics_interfaces::srv::SolveIK_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<cocoa_kinematics_interfaces::srv::SolveIK_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<cocoa_kinematics_interfaces::srv::SolveIK>()
{
  return "cocoa_kinematics_interfaces::srv::SolveIK";
}

template<>
inline const char * name<cocoa_kinematics_interfaces::srv::SolveIK>()
{
  return "cocoa_kinematics_interfaces/srv/SolveIK";
}

template<>
struct has_fixed_size<cocoa_kinematics_interfaces::srv::SolveIK>
  : std::integral_constant<
    bool,
    has_fixed_size<cocoa_kinematics_interfaces::srv::SolveIK_Request>::value &&
    has_fixed_size<cocoa_kinematics_interfaces::srv::SolveIK_Response>::value
  >
{
};

template<>
struct has_bounded_size<cocoa_kinematics_interfaces::srv::SolveIK>
  : std::integral_constant<
    bool,
    has_bounded_size<cocoa_kinematics_interfaces::srv::SolveIK_Request>::value &&
    has_bounded_size<cocoa_kinematics_interfaces::srv::SolveIK_Response>::value
  >
{
};

template<>
struct is_service<cocoa_kinematics_interfaces::srv::SolveIK>
  : std::true_type
{
};

template<>
struct is_service_request<cocoa_kinematics_interfaces::srv::SolveIK_Request>
  : std::true_type
{
};

template<>
struct is_service_response<cocoa_kinematics_interfaces::srv::SolveIK_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // COCOA_KINEMATICS_INTERFACES__SRV__DETAIL__SOLVE_IK__TRAITS_HPP_
