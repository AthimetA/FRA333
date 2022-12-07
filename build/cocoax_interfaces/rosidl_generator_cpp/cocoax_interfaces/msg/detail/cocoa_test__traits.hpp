// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from cocoax_interfaces:msg/CocoaTest.idl
// generated code does not contain a copyright notice

#ifndef COCOAX_INTERFACES__MSG__DETAIL__COCOA_TEST__TRAITS_HPP_
#define COCOAX_INTERFACES__MSG__DETAIL__COCOA_TEST__TRAITS_HPP_

#include "cocoax_interfaces/msg/detail/cocoa_test__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'check'
#include "std_msgs/msg/detail/float64__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<cocoax_interfaces::msg::CocoaTest>()
{
  return "cocoax_interfaces::msg::CocoaTest";
}

template<>
inline const char * name<cocoax_interfaces::msg::CocoaTest>()
{
  return "cocoax_interfaces/msg/CocoaTest";
}

template<>
struct has_fixed_size<cocoax_interfaces::msg::CocoaTest>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Float64>::value> {};

template<>
struct has_bounded_size<cocoax_interfaces::msg::CocoaTest>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Float64>::value> {};

template<>
struct is_message<cocoax_interfaces::msg::CocoaTest>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // COCOAX_INTERFACES__MSG__DETAIL__COCOA_TEST__TRAITS_HPP_
