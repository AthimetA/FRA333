// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from cocoax_interfaces:msg/CocoaTestMonitor.idl
// generated code does not contain a copyright notice

#ifndef COCOAX_INTERFACES__MSG__DETAIL__COCOA_TEST_MONITOR__TRAITS_HPP_
#define COCOAX_INTERFACES__MSG__DETAIL__COCOA_TEST_MONITOR__TRAITS_HPP_

#include "cocoax_interfaces/msg/detail/cocoa_test_monitor__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<cocoax_interfaces::msg::CocoaTestMonitor>()
{
  return "cocoax_interfaces::msg::CocoaTestMonitor";
}

template<>
inline const char * name<cocoax_interfaces::msg::CocoaTestMonitor>()
{
  return "cocoax_interfaces/msg/CocoaTestMonitor";
}

template<>
struct has_fixed_size<cocoax_interfaces::msg::CocoaTestMonitor>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<cocoax_interfaces::msg::CocoaTestMonitor>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<cocoax_interfaces::msg::CocoaTestMonitor>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // COCOAX_INTERFACES__MSG__DETAIL__COCOA_TEST_MONITOR__TRAITS_HPP_
