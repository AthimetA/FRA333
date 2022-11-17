// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from xicro_interfaces:msg/Temperature.idl
// generated code does not contain a copyright notice

#ifndef XICRO_INTERFACES__MSG__DETAIL__TEMPERATURE__BUILDER_HPP_
#define XICRO_INTERFACES__MSG__DETAIL__TEMPERATURE__BUILDER_HPP_

#include "xicro_interfaces/msg/detail/temperature__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace xicro_interfaces
{

namespace msg
{

namespace builder
{

class Init_Temperature_variance
{
public:
  explicit Init_Temperature_variance(::xicro_interfaces::msg::Temperature & msg)
  : msg_(msg)
  {}
  ::xicro_interfaces::msg::Temperature variance(::xicro_interfaces::msg::Temperature::_variance_type arg)
  {
    msg_.variance = std::move(arg);
    return std::move(msg_);
  }

private:
  ::xicro_interfaces::msg::Temperature msg_;
};

class Init_Temperature_temperature
{
public:
  Init_Temperature_temperature()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Temperature_variance temperature(::xicro_interfaces::msg::Temperature::_temperature_type arg)
  {
    msg_.temperature = std::move(arg);
    return Init_Temperature_variance(msg_);
  }

private:
  ::xicro_interfaces::msg::Temperature msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::xicro_interfaces::msg::Temperature>()
{
  return xicro_interfaces::msg::builder::Init_Temperature_temperature();
}

}  // namespace xicro_interfaces

#endif  // XICRO_INTERFACES__MSG__DETAIL__TEMPERATURE__BUILDER_HPP_
