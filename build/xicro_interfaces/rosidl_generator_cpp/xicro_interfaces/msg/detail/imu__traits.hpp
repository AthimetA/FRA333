// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from xicro_interfaces:msg/Imu.idl
// generated code does not contain a copyright notice

#ifndef XICRO_INTERFACES__MSG__DETAIL__IMU__TRAITS_HPP_
#define XICRO_INTERFACES__MSG__DETAIL__IMU__TRAITS_HPP_

#include "xicro_interfaces/msg/detail/imu__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "xicro_interfaces/msg/detail/header__traits.hpp"
// Member 'orientation'
#include "xicro_interfaces/msg/detail/quaternion__traits.hpp"
// Member 'angular_velocity'
// Member 'linear_acceleration'
#include "xicro_interfaces/msg/detail/vector3__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<xicro_interfaces::msg::Imu>()
{
  return "xicro_interfaces::msg::Imu";
}

template<>
inline const char * name<xicro_interfaces::msg::Imu>()
{
  return "xicro_interfaces/msg/Imu";
}

template<>
struct has_fixed_size<xicro_interfaces::msg::Imu>
  : std::integral_constant<bool, has_fixed_size<xicro_interfaces::msg::Header>::value && has_fixed_size<xicro_interfaces::msg::Quaternion>::value && has_fixed_size<xicro_interfaces::msg::Vector3>::value> {};

template<>
struct has_bounded_size<xicro_interfaces::msg::Imu>
  : std::integral_constant<bool, has_bounded_size<xicro_interfaces::msg::Header>::value && has_bounded_size<xicro_interfaces::msg::Quaternion>::value && has_bounded_size<xicro_interfaces::msg::Vector3>::value> {};

template<>
struct is_message<xicro_interfaces::msg::Imu>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // XICRO_INTERFACES__MSG__DETAIL__IMU__TRAITS_HPP_
