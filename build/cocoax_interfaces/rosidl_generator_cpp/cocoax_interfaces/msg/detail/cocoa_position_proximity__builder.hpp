// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from cocoax_interfaces:msg/CocoaPositionProximity.idl
// generated code does not contain a copyright notice

#ifndef COCOAX_INTERFACES__MSG__DETAIL__COCOA_POSITION_PROXIMITY__BUILDER_HPP_
#define COCOAX_INTERFACES__MSG__DETAIL__COCOA_POSITION_PROXIMITY__BUILDER_HPP_

#include "cocoax_interfaces/msg/detail/cocoa_position_proximity__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace cocoax_interfaces
{

namespace msg
{

namespace builder
{

class Init_CocoaPositionProximity_position
{
public:
  Init_CocoaPositionProximity_position()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::cocoax_interfaces::msg::CocoaPositionProximity position(::cocoax_interfaces::msg::CocoaPositionProximity::_position_type arg)
  {
    msg_.position = std::move(arg);
    return std::move(msg_);
  }

private:
  ::cocoax_interfaces::msg::CocoaPositionProximity msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::cocoax_interfaces::msg::CocoaPositionProximity>()
{
  return cocoax_interfaces::msg::builder::Init_CocoaPositionProximity_position();
}

}  // namespace cocoax_interfaces

#endif  // COCOAX_INTERFACES__MSG__DETAIL__COCOA_POSITION_PROXIMITY__BUILDER_HPP_
