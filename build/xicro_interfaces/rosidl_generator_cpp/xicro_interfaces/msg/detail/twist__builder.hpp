// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from xicro_interfaces:msg/Twist.idl
// generated code does not contain a copyright notice

#ifndef XICRO_INTERFACES__MSG__DETAIL__TWIST__BUILDER_HPP_
#define XICRO_INTERFACES__MSG__DETAIL__TWIST__BUILDER_HPP_

#include "xicro_interfaces/msg/detail/twist__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace xicro_interfaces
{

namespace msg
{

namespace builder
{

class Init_Twist_angular
{
public:
  explicit Init_Twist_angular(::xicro_interfaces::msg::Twist & msg)
  : msg_(msg)
  {}
  ::xicro_interfaces::msg::Twist angular(::xicro_interfaces::msg::Twist::_angular_type arg)
  {
    msg_.angular = std::move(arg);
    return std::move(msg_);
  }

private:
  ::xicro_interfaces::msg::Twist msg_;
};

class Init_Twist_linear
{
public:
  Init_Twist_linear()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Twist_angular linear(::xicro_interfaces::msg::Twist::_linear_type arg)
  {
    msg_.linear = std::move(arg);
    return Init_Twist_angular(msg_);
  }

private:
  ::xicro_interfaces::msg::Twist msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::xicro_interfaces::msg::Twist>()
{
  return xicro_interfaces::msg::builder::Init_Twist_linear();
}

}  // namespace xicro_interfaces

#endif  // XICRO_INTERFACES__MSG__DETAIL__TWIST__BUILDER_HPP_
