// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from cocoav_interfaces:srv/CocoaFK.idl
// generated code does not contain a copyright notice

#ifndef COCOAV_INTERFACES__SRV__DETAIL__COCOA_FK__TRAITS_HPP_
#define COCOAV_INTERFACES__SRV__DETAIL__COCOA_FK__TRAITS_HPP_

#include "cocoav_interfaces/srv/detail/cocoa_fk__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'jointstate'
#include "sensor_msgs/msg/detail/joint_state__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<cocoav_interfaces::srv::CocoaFK_Request>()
{
  return "cocoav_interfaces::srv::CocoaFK_Request";
}

template<>
inline const char * name<cocoav_interfaces::srv::CocoaFK_Request>()
{
  return "cocoav_interfaces/srv/CocoaFK_Request";
}

template<>
struct has_fixed_size<cocoav_interfaces::srv::CocoaFK_Request>
  : std::integral_constant<bool, has_fixed_size<sensor_msgs::msg::JointState>::value> {};

template<>
struct has_bounded_size<cocoav_interfaces::srv::CocoaFK_Request>
  : std::integral_constant<bool, has_bounded_size<sensor_msgs::msg::JointState>::value> {};

template<>
struct is_message<cocoav_interfaces::srv::CocoaFK_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'positionendeffector'
#include "geometry_msgs/msg/detail/point__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<cocoav_interfaces::srv::CocoaFK_Response>()
{
  return "cocoav_interfaces::srv::CocoaFK_Response";
}

template<>
inline const char * name<cocoav_interfaces::srv::CocoaFK_Response>()
{
  return "cocoav_interfaces/srv/CocoaFK_Response";
}

template<>
struct has_fixed_size<cocoav_interfaces::srv::CocoaFK_Response>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Point>::value> {};

template<>
struct has_bounded_size<cocoav_interfaces::srv::CocoaFK_Response>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Point>::value> {};

template<>
struct is_message<cocoav_interfaces::srv::CocoaFK_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<cocoav_interfaces::srv::CocoaFK>()
{
  return "cocoav_interfaces::srv::CocoaFK";
}

template<>
inline const char * name<cocoav_interfaces::srv::CocoaFK>()
{
  return "cocoav_interfaces/srv/CocoaFK";
}

template<>
struct has_fixed_size<cocoav_interfaces::srv::CocoaFK>
  : std::integral_constant<
    bool,
    has_fixed_size<cocoav_interfaces::srv::CocoaFK_Request>::value &&
    has_fixed_size<cocoav_interfaces::srv::CocoaFK_Response>::value
  >
{
};

template<>
struct has_bounded_size<cocoav_interfaces::srv::CocoaFK>
  : std::integral_constant<
    bool,
    has_bounded_size<cocoav_interfaces::srv::CocoaFK_Request>::value &&
    has_bounded_size<cocoav_interfaces::srv::CocoaFK_Response>::value
  >
{
};

template<>
struct is_service<cocoav_interfaces::srv::CocoaFK>
  : std::true_type
{
};

template<>
struct is_service_request<cocoav_interfaces::srv::CocoaFK_Request>
  : std::true_type
{
};

template<>
struct is_service_response<cocoav_interfaces::srv::CocoaFK_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // COCOAV_INTERFACES__SRV__DETAIL__COCOA_FK__TRAITS_HPP_
