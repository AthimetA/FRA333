// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from xicro_interfaces:msg/DemoInput.idl
// generated code does not contain a copyright notice

#ifndef XICRO_INTERFACES__MSG__DETAIL__DEMO_INPUT__BUILDER_HPP_
#define XICRO_INTERFACES__MSG__DETAIL__DEMO_INPUT__BUILDER_HPP_

#include "xicro_interfaces/msg/detail/demo_input__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace xicro_interfaces
{

namespace msg
{

namespace builder
{

class Init_DemoInput_poten
{
public:
  explicit Init_DemoInput_poten(::xicro_interfaces::msg::DemoInput & msg)
  : msg_(msg)
  {}
  ::xicro_interfaces::msg::DemoInput poten(::xicro_interfaces::msg::DemoInput::_poten_type arg)
  {
    msg_.poten = std::move(arg);
    return std::move(msg_);
  }

private:
  ::xicro_interfaces::msg::DemoInput msg_;
};

class Init_DemoInput_buttonstate
{
public:
  Init_DemoInput_buttonstate()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DemoInput_poten buttonstate(::xicro_interfaces::msg::DemoInput::_buttonstate_type arg)
  {
    msg_.buttonstate = std::move(arg);
    return Init_DemoInput_poten(msg_);
  }

private:
  ::xicro_interfaces::msg::DemoInput msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::xicro_interfaces::msg::DemoInput>()
{
  return xicro_interfaces::msg::builder::Init_DemoInput_buttonstate();
}

}  // namespace xicro_interfaces

#endif  // XICRO_INTERFACES__MSG__DETAIL__DEMO_INPUT__BUILDER_HPP_
