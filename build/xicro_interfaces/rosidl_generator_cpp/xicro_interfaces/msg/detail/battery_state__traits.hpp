// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from xicro_interfaces:msg/BatteryState.idl
// generated code does not contain a copyright notice

#ifndef XICRO_INTERFACES__MSG__DETAIL__BATTERY_STATE__TRAITS_HPP_
#define XICRO_INTERFACES__MSG__DETAIL__BATTERY_STATE__TRAITS_HPP_

#include "xicro_interfaces/msg/detail/battery_state__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<xicro_interfaces::msg::BatteryState>()
{
  return "xicro_interfaces::msg::BatteryState";
}

template<>
inline const char * name<xicro_interfaces::msg::BatteryState>()
{
  return "xicro_interfaces/msg/BatteryState";
}

template<>
struct has_fixed_size<xicro_interfaces::msg::BatteryState>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<xicro_interfaces::msg::BatteryState>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<xicro_interfaces::msg::BatteryState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // XICRO_INTERFACES__MSG__DETAIL__BATTERY_STATE__TRAITS_HPP_
