// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from cocoax_interfaces:srv/CocoaXIK.idl
// generated code does not contain a copyright notice

#ifndef COCOAX_INTERFACES__SRV__DETAIL__COCOA_XIK__TRAITS_HPP_
#define COCOAX_INTERFACES__SRV__DETAIL__COCOA_XIK__TRAITS_HPP_

#include "cocoax_interfaces/srv/detail/cocoa_xik__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'position'
#include "geometry_msgs/msg/detail/point__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<cocoax_interfaces::srv::CocoaXIK_Request>()
{
  return "cocoax_interfaces::srv::CocoaXIK_Request";
}

template<>
inline const char * name<cocoax_interfaces::srv::CocoaXIK_Request>()
{
  return "cocoax_interfaces/srv/CocoaXIK_Request";
}

template<>
struct has_fixed_size<cocoax_interfaces::srv::CocoaXIK_Request>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Point>::value> {};

template<>
struct has_bounded_size<cocoax_interfaces::srv::CocoaXIK_Request>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Point>::value> {};

template<>
struct is_message<cocoax_interfaces::srv::CocoaXIK_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'jointstate'
#include "sensor_msgs/msg/detail/joint_state__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<cocoax_interfaces::srv::CocoaXIK_Response>()
{
  return "cocoax_interfaces::srv::CocoaXIK_Response";
}

template<>
inline const char * name<cocoax_interfaces::srv::CocoaXIK_Response>()
{
  return "cocoax_interfaces/srv/CocoaXIK_Response";
}

template<>
struct has_fixed_size<cocoax_interfaces::srv::CocoaXIK_Response>
  : std::integral_constant<bool, has_fixed_size<sensor_msgs::msg::JointState>::value> {};

template<>
struct has_bounded_size<cocoax_interfaces::srv::CocoaXIK_Response>
  : std::integral_constant<bool, has_bounded_size<sensor_msgs::msg::JointState>::value> {};

template<>
struct is_message<cocoax_interfaces::srv::CocoaXIK_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<cocoax_interfaces::srv::CocoaXIK>()
{
  return "cocoax_interfaces::srv::CocoaXIK";
}

template<>
inline const char * name<cocoax_interfaces::srv::CocoaXIK>()
{
  return "cocoax_interfaces/srv/CocoaXIK";
}

template<>
struct has_fixed_size<cocoax_interfaces::srv::CocoaXIK>
  : std::integral_constant<
    bool,
    has_fixed_size<cocoax_interfaces::srv::CocoaXIK_Request>::value &&
    has_fixed_size<cocoax_interfaces::srv::CocoaXIK_Response>::value
  >
{
};

template<>
struct has_bounded_size<cocoax_interfaces::srv::CocoaXIK>
  : std::integral_constant<
    bool,
    has_bounded_size<cocoax_interfaces::srv::CocoaXIK_Request>::value &&
    has_bounded_size<cocoax_interfaces::srv::CocoaXIK_Response>::value
  >
{
};

template<>
struct is_service<cocoax_interfaces::srv::CocoaXIK>
  : std::true_type
{
};

template<>
struct is_service_request<cocoax_interfaces::srv::CocoaXIK_Request>
  : std::true_type
{
};

template<>
struct is_service_response<cocoax_interfaces::srv::CocoaXIK_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // COCOAX_INTERFACES__SRV__DETAIL__COCOA_XIK__TRAITS_HPP_
