// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from xicro_interfaces:msg/PoseWithCovariance.idl
// generated code does not contain a copyright notice

#ifndef XICRO_INTERFACES__MSG__DETAIL__POSE_WITH_COVARIANCE__BUILDER_HPP_
#define XICRO_INTERFACES__MSG__DETAIL__POSE_WITH_COVARIANCE__BUILDER_HPP_

#include "xicro_interfaces/msg/detail/pose_with_covariance__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace xicro_interfaces
{

namespace msg
{

namespace builder
{

class Init_PoseWithCovariance_covariance
{
public:
  explicit Init_PoseWithCovariance_covariance(::xicro_interfaces::msg::PoseWithCovariance & msg)
  : msg_(msg)
  {}
  ::xicro_interfaces::msg::PoseWithCovariance covariance(::xicro_interfaces::msg::PoseWithCovariance::_covariance_type arg)
  {
    msg_.covariance = std::move(arg);
    return std::move(msg_);
  }

private:
  ::xicro_interfaces::msg::PoseWithCovariance msg_;
};

class Init_PoseWithCovariance_pose
{
public:
  Init_PoseWithCovariance_pose()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PoseWithCovariance_covariance pose(::xicro_interfaces::msg::PoseWithCovariance::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return Init_PoseWithCovariance_covariance(msg_);
  }

private:
  ::xicro_interfaces::msg::PoseWithCovariance msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::xicro_interfaces::msg::PoseWithCovariance>()
{
  return xicro_interfaces::msg::builder::Init_PoseWithCovariance_pose();
}

}  // namespace xicro_interfaces

#endif  // XICRO_INTERFACES__MSG__DETAIL__POSE_WITH_COVARIANCE__BUILDER_HPP_
