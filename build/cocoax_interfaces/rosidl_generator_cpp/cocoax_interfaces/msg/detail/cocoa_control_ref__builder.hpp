// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from cocoax_interfaces:msg/CocoaControlRef.idl
// generated code does not contain a copyright notice

#ifndef COCOAX_INTERFACES__MSG__DETAIL__COCOA_CONTROL_REF__BUILDER_HPP_
#define COCOAX_INTERFACES__MSG__DETAIL__COCOA_CONTROL_REF__BUILDER_HPP_

#include "cocoax_interfaces/msg/detail/cocoa_control_ref__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace cocoax_interfaces
{

namespace msg
{

namespace builder
{

class Init_CocoaControlRef_reference_velocity
{
public:
  explicit Init_CocoaControlRef_reference_velocity(::cocoax_interfaces::msg::CocoaControlRef & msg)
  : msg_(msg)
  {}
  ::cocoax_interfaces::msg::CocoaControlRef reference_velocity(::cocoax_interfaces::msg::CocoaControlRef::_reference_velocity_type arg)
  {
    msg_.reference_velocity = std::move(arg);
    return std::move(msg_);
  }

private:
  ::cocoax_interfaces::msg::CocoaControlRef msg_;
};

class Init_CocoaControlRef_reference_position
{
public:
  Init_CocoaControlRef_reference_position()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CocoaControlRef_reference_velocity reference_position(::cocoax_interfaces::msg::CocoaControlRef::_reference_position_type arg)
  {
    msg_.reference_position = std::move(arg);
    return Init_CocoaControlRef_reference_velocity(msg_);
  }

private:
  ::cocoax_interfaces::msg::CocoaControlRef msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::cocoax_interfaces::msg::CocoaControlRef>()
{
  return cocoax_interfaces::msg::builder::Init_CocoaControlRef_reference_position();
}

}  // namespace cocoax_interfaces

#endif  // COCOAX_INTERFACES__MSG__DETAIL__COCOA_CONTROL_REF__BUILDER_HPP_
