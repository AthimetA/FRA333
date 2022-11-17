// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from xicro_interfaces:msg/JointState.idl
// generated code does not contain a copyright notice

#ifndef XICRO_INTERFACES__MSG__DETAIL__JOINT_STATE__BUILDER_HPP_
#define XICRO_INTERFACES__MSG__DETAIL__JOINT_STATE__BUILDER_HPP_

#include "xicro_interfaces/msg/detail/joint_state__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace xicro_interfaces
{

namespace msg
{

namespace builder
{

class Init_JointState_effort
{
public:
  explicit Init_JointState_effort(::xicro_interfaces::msg::JointState & msg)
  : msg_(msg)
  {}
  ::xicro_interfaces::msg::JointState effort(::xicro_interfaces::msg::JointState::_effort_type arg)
  {
    msg_.effort = std::move(arg);
    return std::move(msg_);
  }

private:
  ::xicro_interfaces::msg::JointState msg_;
};

class Init_JointState_velocity
{
public:
  explicit Init_JointState_velocity(::xicro_interfaces::msg::JointState & msg)
  : msg_(msg)
  {}
  Init_JointState_effort velocity(::xicro_interfaces::msg::JointState::_velocity_type arg)
  {
    msg_.velocity = std::move(arg);
    return Init_JointState_effort(msg_);
  }

private:
  ::xicro_interfaces::msg::JointState msg_;
};

class Init_JointState_position
{
public:
  explicit Init_JointState_position(::xicro_interfaces::msg::JointState & msg)
  : msg_(msg)
  {}
  Init_JointState_velocity position(::xicro_interfaces::msg::JointState::_position_type arg)
  {
    msg_.position = std::move(arg);
    return Init_JointState_velocity(msg_);
  }

private:
  ::xicro_interfaces::msg::JointState msg_;
};

class Init_JointState_name
{
public:
  Init_JointState_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_JointState_position name(::xicro_interfaces::msg::JointState::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_JointState_position(msg_);
  }

private:
  ::xicro_interfaces::msg::JointState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::xicro_interfaces::msg::JointState>()
{
  return xicro_interfaces::msg::builder::Init_JointState_name();
}

}  // namespace xicro_interfaces

#endif  // XICRO_INTERFACES__MSG__DETAIL__JOINT_STATE__BUILDER_HPP_
