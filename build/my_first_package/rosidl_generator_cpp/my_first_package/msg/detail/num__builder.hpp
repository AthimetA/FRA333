// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from my_first_package:msg/Num.idl
// generated code does not contain a copyright notice

#ifndef MY_FIRST_PACKAGE__MSG__DETAIL__NUM__BUILDER_HPP_
#define MY_FIRST_PACKAGE__MSG__DETAIL__NUM__BUILDER_HPP_

#include "my_first_package/msg/detail/num__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace my_first_package
{

namespace msg
{

namespace builder
{

class Init_Num_num2
{
public:
  explicit Init_Num_num2(::my_first_package::msg::Num & msg)
  : msg_(msg)
  {}
  ::my_first_package::msg::Num num2(::my_first_package::msg::Num::_num2_type arg)
  {
    msg_.num2 = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_first_package::msg::Num msg_;
};

class Init_Num_num1
{
public:
  Init_Num_num1()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Num_num2 num1(::my_first_package::msg::Num::_num1_type arg)
  {
    msg_.num1 = std::move(arg);
    return Init_Num_num2(msg_);
  }

private:
  ::my_first_package::msg::Num msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_first_package::msg::Num>()
{
  return my_first_package::msg::builder::Init_Num_num1();
}

}  // namespace my_first_package

#endif  // MY_FIRST_PACKAGE__MSG__DETAIL__NUM__BUILDER_HPP_
