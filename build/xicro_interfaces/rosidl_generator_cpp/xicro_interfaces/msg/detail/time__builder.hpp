// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from xicro_interfaces:msg/Time.idl
// generated code does not contain a copyright notice

#ifndef XICRO_INTERFACES__MSG__DETAIL__TIME__BUILDER_HPP_
#define XICRO_INTERFACES__MSG__DETAIL__TIME__BUILDER_HPP_

#include "xicro_interfaces/msg/detail/time__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace xicro_interfaces
{

namespace msg
{

namespace builder
{

class Init_Time_nanosec
{
public:
  explicit Init_Time_nanosec(::xicro_interfaces::msg::Time & msg)
  : msg_(msg)
  {}
  ::xicro_interfaces::msg::Time nanosec(::xicro_interfaces::msg::Time::_nanosec_type arg)
  {
    msg_.nanosec = std::move(arg);
    return std::move(msg_);
  }

private:
  ::xicro_interfaces::msg::Time msg_;
};

class Init_Time_sec
{
public:
  Init_Time_sec()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Time_nanosec sec(::xicro_interfaces::msg::Time::_sec_type arg)
  {
    msg_.sec = std::move(arg);
    return Init_Time_nanosec(msg_);
  }

private:
  ::xicro_interfaces::msg::Time msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::xicro_interfaces::msg::Time>()
{
  return xicro_interfaces::msg::builder::Init_Time_sec();
}

}  // namespace xicro_interfaces

#endif  // XICRO_INTERFACES__MSG__DETAIL__TIME__BUILDER_HPP_
