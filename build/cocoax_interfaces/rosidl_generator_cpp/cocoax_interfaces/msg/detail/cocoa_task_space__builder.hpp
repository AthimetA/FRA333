// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from cocoax_interfaces:msg/CocoaTaskSpace.idl
// generated code does not contain a copyright notice

#ifndef COCOAX_INTERFACES__MSG__DETAIL__COCOA_TASK_SPACE__BUILDER_HPP_
#define COCOAX_INTERFACES__MSG__DETAIL__COCOA_TASK_SPACE__BUILDER_HPP_

#include "cocoax_interfaces/msg/detail/cocoa_task_space__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace cocoax_interfaces
{

namespace msg
{

namespace builder
{

class Init_CocoaTaskSpace_velocity
{
public:
  explicit Init_CocoaTaskSpace_velocity(::cocoax_interfaces::msg::CocoaTaskSpace & msg)
  : msg_(msg)
  {}
  ::cocoax_interfaces::msg::CocoaTaskSpace velocity(::cocoax_interfaces::msg::CocoaTaskSpace::_velocity_type arg)
  {
    msg_.velocity = std::move(arg);
    return std::move(msg_);
  }

private:
  ::cocoax_interfaces::msg::CocoaTaskSpace msg_;
};

class Init_CocoaTaskSpace_position
{
public:
  Init_CocoaTaskSpace_position()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CocoaTaskSpace_velocity position(::cocoax_interfaces::msg::CocoaTaskSpace::_position_type arg)
  {
    msg_.position = std::move(arg);
    return Init_CocoaTaskSpace_velocity(msg_);
  }

private:
  ::cocoax_interfaces::msg::CocoaTaskSpace msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::cocoax_interfaces::msg::CocoaTaskSpace>()
{
  return cocoax_interfaces::msg::builder::Init_CocoaTaskSpace_position();
}

}  // namespace cocoax_interfaces

#endif  // COCOAX_INTERFACES__MSG__DETAIL__COCOA_TASK_SPACE__BUILDER_HPP_
