// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from lab1_interfaces:srv/SetNoise.idl
// generated code does not contain a copyright notice

#ifndef LAB1_INTERFACES__SRV__DETAIL__SET_NOISE__TRAITS_HPP_
#define LAB1_INTERFACES__SRV__DETAIL__SET_NOISE__TRAITS_HPP_

#include "lab1_interfaces/srv/detail/set_noise__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'mean'
// Member 'variance'
#include "std_msgs/msg/detail/float64__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<lab1_interfaces::srv::SetNoise_Request>()
{
  return "lab1_interfaces::srv::SetNoise_Request";
}

template<>
inline const char * name<lab1_interfaces::srv::SetNoise_Request>()
{
  return "lab1_interfaces/srv/SetNoise_Request";
}

template<>
struct has_fixed_size<lab1_interfaces::srv::SetNoise_Request>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Float64>::value> {};

template<>
struct has_bounded_size<lab1_interfaces::srv::SetNoise_Request>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Float64>::value> {};

template<>
struct is_message<lab1_interfaces::srv::SetNoise_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<lab1_interfaces::srv::SetNoise_Response>()
{
  return "lab1_interfaces::srv::SetNoise_Response";
}

template<>
inline const char * name<lab1_interfaces::srv::SetNoise_Response>()
{
  return "lab1_interfaces/srv/SetNoise_Response";
}

template<>
struct has_fixed_size<lab1_interfaces::srv::SetNoise_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<lab1_interfaces::srv::SetNoise_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<lab1_interfaces::srv::SetNoise_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<lab1_interfaces::srv::SetNoise>()
{
  return "lab1_interfaces::srv::SetNoise";
}

template<>
inline const char * name<lab1_interfaces::srv::SetNoise>()
{
  return "lab1_interfaces/srv/SetNoise";
}

template<>
struct has_fixed_size<lab1_interfaces::srv::SetNoise>
  : std::integral_constant<
    bool,
    has_fixed_size<lab1_interfaces::srv::SetNoise_Request>::value &&
    has_fixed_size<lab1_interfaces::srv::SetNoise_Response>::value
  >
{
};

template<>
struct has_bounded_size<lab1_interfaces::srv::SetNoise>
  : std::integral_constant<
    bool,
    has_bounded_size<lab1_interfaces::srv::SetNoise_Request>::value &&
    has_bounded_size<lab1_interfaces::srv::SetNoise_Response>::value
  >
{
};

template<>
struct is_service<lab1_interfaces::srv::SetNoise>
  : std::true_type
{
};

template<>
struct is_service_request<lab1_interfaces::srv::SetNoise_Request>
  : std::true_type
{
};

template<>
struct is_service_response<lab1_interfaces::srv::SetNoise_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // LAB1_INTERFACES__SRV__DETAIL__SET_NOISE__TRAITS_HPP_
