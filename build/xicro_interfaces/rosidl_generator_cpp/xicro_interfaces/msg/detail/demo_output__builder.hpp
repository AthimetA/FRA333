// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from xicro_interfaces:msg/DemoOutput.idl
// generated code does not contain a copyright notice

#ifndef XICRO_INTERFACES__MSG__DETAIL__DEMO_OUTPUT__BUILDER_HPP_
#define XICRO_INTERFACES__MSG__DETAIL__DEMO_OUTPUT__BUILDER_HPP_

#include "xicro_interfaces/msg/detail/demo_output__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace xicro_interfaces
{

namespace msg
{

namespace builder
{

class Init_DemoOutput_led
{
public:
  explicit Init_DemoOutput_led(::xicro_interfaces::msg::DemoOutput & msg)
  : msg_(msg)
  {}
  ::xicro_interfaces::msg::DemoOutput led(::xicro_interfaces::msg::DemoOutput::_led_type arg)
  {
    msg_.led = std::move(arg);
    return std::move(msg_);
  }

private:
  ::xicro_interfaces::msg::DemoOutput msg_;
};

class Init_DemoOutput_buzzer
{
public:
  explicit Init_DemoOutput_buzzer(::xicro_interfaces::msg::DemoOutput & msg)
  : msg_(msg)
  {}
  Init_DemoOutput_led buzzer(::xicro_interfaces::msg::DemoOutput::_buzzer_type arg)
  {
    msg_.buzzer = std::move(arg);
    return Init_DemoOutput_led(msg_);
  }

private:
  ::xicro_interfaces::msg::DemoOutput msg_;
};

class Init_DemoOutput_servo
{
public:
  Init_DemoOutput_servo()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DemoOutput_buzzer servo(::xicro_interfaces::msg::DemoOutput::_servo_type arg)
  {
    msg_.servo = std::move(arg);
    return Init_DemoOutput_buzzer(msg_);
  }

private:
  ::xicro_interfaces::msg::DemoOutput msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::xicro_interfaces::msg::DemoOutput>()
{
  return xicro_interfaces::msg::builder::Init_DemoOutput_servo();
}

}  // namespace xicro_interfaces

#endif  // XICRO_INTERFACES__MSG__DETAIL__DEMO_OUTPUT__BUILDER_HPP_
