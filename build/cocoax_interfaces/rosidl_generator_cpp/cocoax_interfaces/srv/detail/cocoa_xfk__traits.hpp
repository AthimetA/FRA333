// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from cocoax_interfaces:srv/CocoaXFK.idl
// generated code does not contain a copyright notice

#ifndef COCOAX_INTERFACES__SRV__DETAIL__COCOA_XFK__TRAITS_HPP_
#define COCOAX_INTERFACES__SRV__DETAIL__COCOA_XFK__TRAITS_HPP_

#include "cocoax_interfaces/srv/detail/cocoa_xfk__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'jointstate'
#include "sensor_msgs/msg/detail/joint_state__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<cocoax_interfaces::srv::CocoaXFK_Request>()
{
  return "cocoax_interfaces::srv::CocoaXFK_Request";
}

template<>
inline const char * name<cocoax_interfaces::srv::CocoaXFK_Request>()
{
  return "cocoax_interfaces/srv/CocoaXFK_Request";
}

template<>
struct has_fixed_size<cocoax_interfaces::srv::CocoaXFK_Request>
  : std::integral_constant<bool, has_fixed_size<sensor_msgs::msg::JointState>::value> {};

template<>
struct has_bounded_size<cocoax_interfaces::srv::CocoaXFK_Request>
  : std::integral_constant<bool, has_bounded_size<sensor_msgs::msg::JointState>::value> {};

template<>
struct is_message<cocoax_interfaces::srv::CocoaXFK_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'positionendeffector'
#include "geometry_msgs/msg/detail/point__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<cocoax_interfaces::srv::CocoaXFK_Response>()
{
  return "cocoax_interfaces::srv::CocoaXFK_Response";
}

template<>
inline const char * name<cocoax_interfaces::srv::CocoaXFK_Response>()
{
  return "cocoax_interfaces/srv/CocoaXFK_Response";
}

template<>
struct has_fixed_size<cocoax_interfaces::srv::CocoaXFK_Response>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Point>::value> {};

template<>
struct has_bounded_size<cocoax_interfaces::srv::CocoaXFK_Response>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Point>::value> {};

template<>
struct is_message<cocoax_interfaces::srv::CocoaXFK_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<cocoax_interfaces::srv::CocoaXFK>()
{
  return "cocoax_interfaces::srv::CocoaXFK";
}

template<>
inline const char * name<cocoax_interfaces::srv::CocoaXFK>()
{
  return "cocoax_interfaces/srv/CocoaXFK";
}

template<>
struct has_fixed_size<cocoax_interfaces::srv::CocoaXFK>
  : std::integral_constant<
    bool,
    has_fixed_size<cocoax_interfaces::srv::CocoaXFK_Request>::value &&
    has_fixed_size<cocoax_interfaces::srv::CocoaXFK_Response>::value
  >
{
};

template<>
struct has_bounded_size<cocoax_interfaces::srv::CocoaXFK>
  : std::integral_constant<
    bool,
    has_bounded_size<cocoax_interfaces::srv::CocoaXFK_Request>::value &&
    has_bounded_size<cocoax_interfaces::srv::CocoaXFK_Response>::value
  >
{
};

template<>
struct is_service<cocoax_interfaces::srv::CocoaXFK>
  : std::true_type
{
};

template<>
struct is_service_request<cocoax_interfaces::srv::CocoaXFK_Request>
  : std::true_type
{
};

template<>
struct is_service_response<cocoax_interfaces::srv::CocoaXFK_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // COCOAX_INTERFACES__SRV__DETAIL__COCOA_XFK__TRAITS_HPP_
