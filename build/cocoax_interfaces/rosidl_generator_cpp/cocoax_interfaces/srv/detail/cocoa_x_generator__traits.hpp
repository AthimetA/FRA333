// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from cocoax_interfaces:srv/CocoaXGenerator.idl
// generated code does not contain a copyright notice

#ifndef COCOAX_INTERFACES__SRV__DETAIL__COCOA_X_GENERATOR__TRAITS_HPP_
#define COCOAX_INTERFACES__SRV__DETAIL__COCOA_X_GENERATOR__TRAITS_HPP_

#include "cocoax_interfaces/srv/detail/cocoa_x_generator__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<cocoax_interfaces::srv::CocoaXGenerator_Request>()
{
  return "cocoax_interfaces::srv::CocoaXGenerator_Request";
}

template<>
inline const char * name<cocoax_interfaces::srv::CocoaXGenerator_Request>()
{
  return "cocoax_interfaces/srv/CocoaXGenerator_Request";
}

template<>
struct has_fixed_size<cocoax_interfaces::srv::CocoaXGenerator_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<cocoax_interfaces::srv::CocoaXGenerator_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<cocoax_interfaces::srv::CocoaXGenerator_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<cocoax_interfaces::srv::CocoaXGenerator_Response>()
{
  return "cocoax_interfaces::srv::CocoaXGenerator_Response";
}

template<>
inline const char * name<cocoax_interfaces::srv::CocoaXGenerator_Response>()
{
  return "cocoax_interfaces/srv/CocoaXGenerator_Response";
}

template<>
struct has_fixed_size<cocoax_interfaces::srv::CocoaXGenerator_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<cocoax_interfaces::srv::CocoaXGenerator_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<cocoax_interfaces::srv::CocoaXGenerator_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<cocoax_interfaces::srv::CocoaXGenerator>()
{
  return "cocoax_interfaces::srv::CocoaXGenerator";
}

template<>
inline const char * name<cocoax_interfaces::srv::CocoaXGenerator>()
{
  return "cocoax_interfaces/srv/CocoaXGenerator";
}

template<>
struct has_fixed_size<cocoax_interfaces::srv::CocoaXGenerator>
  : std::integral_constant<
    bool,
    has_fixed_size<cocoax_interfaces::srv::CocoaXGenerator_Request>::value &&
    has_fixed_size<cocoax_interfaces::srv::CocoaXGenerator_Response>::value
  >
{
};

template<>
struct has_bounded_size<cocoax_interfaces::srv::CocoaXGenerator>
  : std::integral_constant<
    bool,
    has_bounded_size<cocoax_interfaces::srv::CocoaXGenerator_Request>::value &&
    has_bounded_size<cocoax_interfaces::srv::CocoaXGenerator_Response>::value
  >
{
};

template<>
struct is_service<cocoax_interfaces::srv::CocoaXGenerator>
  : std::true_type
{
};

template<>
struct is_service_request<cocoax_interfaces::srv::CocoaXGenerator_Request>
  : std::true_type
{
};

template<>
struct is_service_response<cocoax_interfaces::srv::CocoaXGenerator_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // COCOAX_INTERFACES__SRV__DETAIL__COCOA_X_GENERATOR__TRAITS_HPP_
