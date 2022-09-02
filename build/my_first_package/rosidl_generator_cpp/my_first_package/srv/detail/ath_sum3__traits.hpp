// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from my_first_package:srv/AthSum3.idl
// generated code does not contain a copyright notice

#ifndef MY_FIRST_PACKAGE__SRV__DETAIL__ATH_SUM3__TRAITS_HPP_
#define MY_FIRST_PACKAGE__SRV__DETAIL__ATH_SUM3__TRAITS_HPP_

#include "my_first_package/srv/detail/ath_sum3__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<my_first_package::srv::AthSum3_Request>()
{
  return "my_first_package::srv::AthSum3_Request";
}

template<>
inline const char * name<my_first_package::srv::AthSum3_Request>()
{
  return "my_first_package/srv/AthSum3_Request";
}

template<>
struct has_fixed_size<my_first_package::srv::AthSum3_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<my_first_package::srv::AthSum3_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<my_first_package::srv::AthSum3_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<my_first_package::srv::AthSum3_Response>()
{
  return "my_first_package::srv::AthSum3_Response";
}

template<>
inline const char * name<my_first_package::srv::AthSum3_Response>()
{
  return "my_first_package/srv/AthSum3_Response";
}

template<>
struct has_fixed_size<my_first_package::srv::AthSum3_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<my_first_package::srv::AthSum3_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<my_first_package::srv::AthSum3_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<my_first_package::srv::AthSum3>()
{
  return "my_first_package::srv::AthSum3";
}

template<>
inline const char * name<my_first_package::srv::AthSum3>()
{
  return "my_first_package/srv/AthSum3";
}

template<>
struct has_fixed_size<my_first_package::srv::AthSum3>
  : std::integral_constant<
    bool,
    has_fixed_size<my_first_package::srv::AthSum3_Request>::value &&
    has_fixed_size<my_first_package::srv::AthSum3_Response>::value
  >
{
};

template<>
struct has_bounded_size<my_first_package::srv::AthSum3>
  : std::integral_constant<
    bool,
    has_bounded_size<my_first_package::srv::AthSum3_Request>::value &&
    has_bounded_size<my_first_package::srv::AthSum3_Response>::value
  >
{
};

template<>
struct is_service<my_first_package::srv::AthSum3>
  : std::true_type
{
};

template<>
struct is_service_request<my_first_package::srv::AthSum3_Request>
  : std::true_type
{
};

template<>
struct is_service_response<my_first_package::srv::AthSum3_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // MY_FIRST_PACKAGE__SRV__DETAIL__ATH_SUM3__TRAITS_HPP_
