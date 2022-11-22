// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from cocoav_interfaces:msg/CocoaVIMU.idl
// generated code does not contain a copyright notice

#ifndef COCOAV_INTERFACES__MSG__DETAIL__COCOA_VIMU__TRAITS_HPP_
#define COCOAV_INTERFACES__MSG__DETAIL__COCOA_VIMU__TRAITS_HPP_

#include "cocoav_interfaces/msg/detail/cocoa_vimu__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<cocoav_interfaces::msg::CocoaVIMU>()
{
  return "cocoav_interfaces::msg::CocoaVIMU";
}

template<>
inline const char * name<cocoav_interfaces::msg::CocoaVIMU>()
{
  return "cocoav_interfaces/msg/CocoaVIMU";
}

template<>
struct has_fixed_size<cocoav_interfaces::msg::CocoaVIMU>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<cocoav_interfaces::msg::CocoaVIMU>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<cocoav_interfaces::msg::CocoaVIMU>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // COCOAV_INTERFACES__MSG__DETAIL__COCOA_VIMU__TRAITS_HPP_
