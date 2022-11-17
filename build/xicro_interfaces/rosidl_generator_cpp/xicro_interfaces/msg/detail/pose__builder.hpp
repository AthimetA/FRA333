// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from xicro_interfaces:msg/Pose.idl
// generated code does not contain a copyright notice

#ifndef XICRO_INTERFACES__MSG__DETAIL__POSE__BUILDER_HPP_
#define XICRO_INTERFACES__MSG__DETAIL__POSE__BUILDER_HPP_

#include "xicro_interfaces/msg/detail/pose__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace xicro_interfaces
{

namespace msg
{

namespace builder
{

class Init_Pose_orientation
{
public:
  explicit Init_Pose_orientation(::xicro_interfaces::msg::Pose & msg)
  : msg_(msg)
  {}
  ::xicro_interfaces::msg::Pose orientation(::xicro_interfaces::msg::Pose::_orientation_type arg)
  {
    msg_.orientation = std::move(arg);
    return std::move(msg_);
  }

private:
  ::xicro_interfaces::msg::Pose msg_;
};

class Init_Pose_position
{
public:
  Init_Pose_position()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Pose_orientation position(::xicro_interfaces::msg::Pose::_position_type arg)
  {
    msg_.position = std::move(arg);
    return Init_Pose_orientation(msg_);
  }

private:
  ::xicro_interfaces::msg::Pose msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::xicro_interfaces::msg::Pose>()
{
  return xicro_interfaces::msg::builder::Init_Pose_position();
}

}  // namespace xicro_interfaces

#endif  // XICRO_INTERFACES__MSG__DETAIL__POSE__BUILDER_HPP_
