// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from cocoav_interfaces:srv/CocoaTest.idl
// generated code does not contain a copyright notice

#ifndef COCOAV_INTERFACES__SRV__DETAIL__COCOA_TEST__TRAITS_HPP_
#define COCOAV_INTERFACES__SRV__DETAIL__COCOA_TEST__TRAITS_HPP_

#include "cocoav_interfaces/srv/detail/cocoa_test__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'check'
#include "std_msgs/msg/detail/float64__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<cocoav_interfaces::srv::CocoaTest_Request>()
{
  return "cocoav_interfaces::srv::CocoaTest_Request";
}

template<>
inline const char * name<cocoav_interfaces::srv::CocoaTest_Request>()
{
  return "cocoav_interfaces/srv/CocoaTest_Request";
}

template<>
struct has_fixed_size<cocoav_interfaces::srv::CocoaTest_Request>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Float64>::value> {};

template<>
struct has_bounded_size<cocoav_interfaces::srv::CocoaTest_Request>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Float64>::value> {};

template<>
struct is_message<cocoav_interfaces::srv::CocoaTest_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<cocoav_interfaces::srv::CocoaTest_Response>()
{
  return "cocoav_interfaces::srv::CocoaTest_Response";
}

template<>
inline const char * name<cocoav_interfaces::srv::CocoaTest_Response>()
{
  return "cocoav_interfaces/srv/CocoaTest_Response";
}

template<>
struct has_fixed_size<cocoav_interfaces::srv::CocoaTest_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<cocoav_interfaces::srv::CocoaTest_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<cocoav_interfaces::srv::CocoaTest_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<cocoav_interfaces::srv::CocoaTest>()
{
  return "cocoav_interfaces::srv::CocoaTest";
}

template<>
inline const char * name<cocoav_interfaces::srv::CocoaTest>()
{
  return "cocoav_interfaces/srv/CocoaTest";
}

template<>
struct has_fixed_size<cocoav_interfaces::srv::CocoaTest>
  : std::integral_constant<
    bool,
    has_fixed_size<cocoav_interfaces::srv::CocoaTest_Request>::value &&
    has_fixed_size<cocoav_interfaces::srv::CocoaTest_Response>::value
  >
{
};

template<>
struct has_bounded_size<cocoav_interfaces::srv::CocoaTest>
  : std::integral_constant<
    bool,
    has_bounded_size<cocoav_interfaces::srv::CocoaTest_Request>::value &&
    has_bounded_size<cocoav_interfaces::srv::CocoaTest_Response>::value
  >
{
};

template<>
struct is_service<cocoav_interfaces::srv::CocoaTest>
  : std::true_type
{
};

template<>
struct is_service_request<cocoav_interfaces::srv::CocoaTest_Request>
  : std::true_type
{
};

template<>
struct is_service_response<cocoav_interfaces::srv::CocoaTest_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // COCOAV_INTERFACES__SRV__DETAIL__COCOA_TEST__TRAITS_HPP_
