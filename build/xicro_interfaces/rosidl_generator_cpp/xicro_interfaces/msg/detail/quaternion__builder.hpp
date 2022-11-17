// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from xicro_interfaces:msg/Quaternion.idl
// generated code does not contain a copyright notice

#ifndef XICRO_INTERFACES__MSG__DETAIL__QUATERNION__BUILDER_HPP_
#define XICRO_INTERFACES__MSG__DETAIL__QUATERNION__BUILDER_HPP_

#include "xicro_interfaces/msg/detail/quaternion__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace xicro_interfaces
{

namespace msg
{

namespace builder
{

class Init_Quaternion_w
{
public:
  explicit Init_Quaternion_w(::xicro_interfaces::msg::Quaternion & msg)
  : msg_(msg)
  {}
  ::xicro_interfaces::msg::Quaternion w(::xicro_interfaces::msg::Quaternion::_w_type arg)
  {
    msg_.w = std::move(arg);
    return std::move(msg_);
  }

private:
  ::xicro_interfaces::msg::Quaternion msg_;
};

class Init_Quaternion_z
{
public:
  explicit Init_Quaternion_z(::xicro_interfaces::msg::Quaternion & msg)
  : msg_(msg)
  {}
  Init_Quaternion_w z(::xicro_interfaces::msg::Quaternion::_z_type arg)
  {
    msg_.z = std::move(arg);
    return Init_Quaternion_w(msg_);
  }

private:
  ::xicro_interfaces::msg::Quaternion msg_;
};

class Init_Quaternion_y
{
public:
  explicit Init_Quaternion_y(::xicro_interfaces::msg::Quaternion & msg)
  : msg_(msg)
  {}
  Init_Quaternion_z y(::xicro_interfaces::msg::Quaternion::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_Quaternion_z(msg_);
  }

private:
  ::xicro_interfaces::msg::Quaternion msg_;
};

class Init_Quaternion_x
{
public:
  Init_Quaternion_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Quaternion_y x(::xicro_interfaces::msg::Quaternion::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_Quaternion_y(msg_);
  }

private:
  ::xicro_interfaces::msg::Quaternion msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::xicro_interfaces::msg::Quaternion>()
{
  return xicro_interfaces::msg::builder::Init_Quaternion_x();
}

}  // namespace xicro_interfaces

#endif  // XICRO_INTERFACES__MSG__DETAIL__QUATERNION__BUILDER_HPP_
