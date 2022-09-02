// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from my_first_package:msg/AddBook.idl
// generated code does not contain a copyright notice

#ifndef MY_FIRST_PACKAGE__MSG__DETAIL__ADD_BOOK__TRAITS_HPP_
#define MY_FIRST_PACKAGE__MSG__DETAIL__ADD_BOOK__TRAITS_HPP_

#include "my_first_package/msg/detail/add_book__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<my_first_package::msg::AddBook>()
{
  return "my_first_package::msg::AddBook";
}

template<>
inline const char * name<my_first_package::msg::AddBook>()
{
  return "my_first_package/msg/AddBook";
}

template<>
struct has_fixed_size<my_first_package::msg::AddBook>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<my_first_package::msg::AddBook>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<my_first_package::msg::AddBook>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MY_FIRST_PACKAGE__MSG__DETAIL__ADD_BOOK__TRAITS_HPP_
