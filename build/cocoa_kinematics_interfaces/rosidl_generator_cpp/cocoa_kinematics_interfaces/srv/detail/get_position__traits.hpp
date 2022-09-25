// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from cocoa_kinematics_interfaces:srv/GetPosition.idl
// generated code does not contain a copyright notice

#ifndef COCOA_KINEMATICS_INTERFACES__SRV__DETAIL__GET_POSITION__TRAITS_HPP_
#define COCOA_KINEMATICS_INTERFACES__SRV__DETAIL__GET_POSITION__TRAITS_HPP_

#include "cocoa_kinematics_interfaces/srv/detail/get_position__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<cocoa_kinematics_interfaces::srv::GetPosition_Request>()
{
  return "cocoa_kinematics_interfaces::srv::GetPosition_Request";
}

template<>
inline const char * name<cocoa_kinematics_interfaces::srv::GetPosition_Request>()
{
  return "cocoa_kinematics_interfaces/srv/GetPosition_Request";
}

template<>
struct has_fixed_size<cocoa_kinematics_interfaces::srv::GetPosition_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<cocoa_kinematics_interfaces::srv::GetPosition_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<cocoa_kinematics_interfaces::srv::GetPosition_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<cocoa_kinematics_interfaces::srv::GetPosition_Response>()
{
  return "cocoa_kinematics_interfaces::srv::GetPosition_Response";
}

template<>
inline const char * name<cocoa_kinematics_interfaces::srv::GetPosition_Response>()
{
  return "cocoa_kinematics_interfaces/srv/GetPosition_Response";
}

template<>
struct has_fixed_size<cocoa_kinematics_interfaces::srv::GetPosition_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<cocoa_kinematics_interfaces::srv::GetPosition_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<cocoa_kinematics_interfaces::srv::GetPosition_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<cocoa_kinematics_interfaces::srv::GetPosition>()
{
  return "cocoa_kinematics_interfaces::srv::GetPosition";
}

template<>
inline const char * name<cocoa_kinematics_interfaces::srv::GetPosition>()
{
  return "cocoa_kinematics_interfaces/srv/GetPosition";
}

template<>
struct has_fixed_size<cocoa_kinematics_interfaces::srv::GetPosition>
  : std::integral_constant<
    bool,
    has_fixed_size<cocoa_kinematics_interfaces::srv::GetPosition_Request>::value &&
    has_fixed_size<cocoa_kinematics_interfaces::srv::GetPosition_Response>::value
  >
{
};

template<>
struct has_bounded_size<cocoa_kinematics_interfaces::srv::GetPosition>
  : std::integral_constant<
    bool,
    has_bounded_size<cocoa_kinematics_interfaces::srv::GetPosition_Request>::value &&
    has_bounded_size<cocoa_kinematics_interfaces::srv::GetPosition_Response>::value
  >
{
};

template<>
struct is_service<cocoa_kinematics_interfaces::srv::GetPosition>
  : std::true_type
{
};

template<>
struct is_service_request<cocoa_kinematics_interfaces::srv::GetPosition_Request>
  : std::true_type
{
};

template<>
struct is_service_response<cocoa_kinematics_interfaces::srv::GetPosition_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // COCOA_KINEMATICS_INTERFACES__SRV__DETAIL__GET_POSITION__TRAITS_HPP_
