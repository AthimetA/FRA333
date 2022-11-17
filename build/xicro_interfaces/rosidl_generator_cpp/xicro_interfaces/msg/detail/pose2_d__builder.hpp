// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from xicro_interfaces:msg/Pose2D.idl
// generated code does not contain a copyright notice

#ifndef XICRO_INTERFACES__MSG__DETAIL__POSE2_D__BUILDER_HPP_
#define XICRO_INTERFACES__MSG__DETAIL__POSE2_D__BUILDER_HPP_

#include "xicro_interfaces/msg/detail/pose2_d__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace xicro_interfaces
{

namespace msg
{

namespace builder
{

class Init_Pose2D_theta
{
public:
  explicit Init_Pose2D_theta(::xicro_interfaces::msg::Pose2D & msg)
  : msg_(msg)
  {}
  ::xicro_interfaces::msg::Pose2D theta(::xicro_interfaces::msg::Pose2D::_theta_type arg)
  {
    msg_.theta = std::move(arg);
    return std::move(msg_);
  }

private:
  ::xicro_interfaces::msg::Pose2D msg_;
};

class Init_Pose2D_y
{
public:
  explicit Init_Pose2D_y(::xicro_interfaces::msg::Pose2D & msg)
  : msg_(msg)
  {}
  Init_Pose2D_theta y(::xicro_interfaces::msg::Pose2D::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_Pose2D_theta(msg_);
  }

private:
  ::xicro_interfaces::msg::Pose2D msg_;
};

class Init_Pose2D_x
{
public:
  Init_Pose2D_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Pose2D_y x(::xicro_interfaces::msg::Pose2D::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_Pose2D_y(msg_);
  }

private:
  ::xicro_interfaces::msg::Pose2D msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::xicro_interfaces::msg::Pose2D>()
{
  return xicro_interfaces::msg::builder::Init_Pose2D_x();
}

}  // namespace xicro_interfaces

#endif  // XICRO_INTERFACES__MSG__DETAIL__POSE2_D__BUILDER_HPP_
