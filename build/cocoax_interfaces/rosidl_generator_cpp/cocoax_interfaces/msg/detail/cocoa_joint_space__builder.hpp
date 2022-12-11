// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from cocoax_interfaces:msg/CocoaJointSpace.idl
// generated code does not contain a copyright notice

#ifndef COCOAX_INTERFACES__MSG__DETAIL__COCOA_JOINT_SPACE__BUILDER_HPP_
#define COCOAX_INTERFACES__MSG__DETAIL__COCOA_JOINT_SPACE__BUILDER_HPP_

#include "cocoax_interfaces/msg/detail/cocoa_joint_space__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace cocoax_interfaces
{

namespace msg
{

namespace builder
{

class Init_CocoaJointSpace_joint_velocity
{
public:
  explicit Init_CocoaJointSpace_joint_velocity(::cocoax_interfaces::msg::CocoaJointSpace & msg)
  : msg_(msg)
  {}
  ::cocoax_interfaces::msg::CocoaJointSpace joint_velocity(::cocoax_interfaces::msg::CocoaJointSpace::_joint_velocity_type arg)
  {
    msg_.joint_velocity = std::move(arg);
    return std::move(msg_);
  }

private:
  ::cocoax_interfaces::msg::CocoaJointSpace msg_;
};

class Init_CocoaJointSpace_joint_position
{
public:
  Init_CocoaJointSpace_joint_position()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CocoaJointSpace_joint_velocity joint_position(::cocoax_interfaces::msg::CocoaJointSpace::_joint_position_type arg)
  {
    msg_.joint_position = std::move(arg);
    return Init_CocoaJointSpace_joint_velocity(msg_);
  }

private:
  ::cocoax_interfaces::msg::CocoaJointSpace msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::cocoax_interfaces::msg::CocoaJointSpace>()
{
  return cocoax_interfaces::msg::builder::Init_CocoaJointSpace_joint_position();
}

}  // namespace cocoax_interfaces

#endif  // COCOAX_INTERFACES__MSG__DETAIL__COCOA_JOINT_SPACE__BUILDER_HPP_
