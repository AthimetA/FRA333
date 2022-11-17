// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from xicro_interfaces:msg/Vector3.idl
// generated code does not contain a copyright notice

#ifndef XICRO_INTERFACES__MSG__DETAIL__VECTOR3__BUILDER_HPP_
#define XICRO_INTERFACES__MSG__DETAIL__VECTOR3__BUILDER_HPP_

#include "xicro_interfaces/msg/detail/vector3__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace xicro_interfaces
{

namespace msg
{

namespace builder
{

class Init_Vector3_z
{
public:
  explicit Init_Vector3_z(::xicro_interfaces::msg::Vector3 & msg)
  : msg_(msg)
  {}
  ::xicro_interfaces::msg::Vector3 z(::xicro_interfaces::msg::Vector3::_z_type arg)
  {
    msg_.z = std::move(arg);
    return std::move(msg_);
  }

private:
  ::xicro_interfaces::msg::Vector3 msg_;
};

class Init_Vector3_y
{
public:
  explicit Init_Vector3_y(::xicro_interfaces::msg::Vector3 & msg)
  : msg_(msg)
  {}
  Init_Vector3_z y(::xicro_interfaces::msg::Vector3::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_Vector3_z(msg_);
  }

private:
  ::xicro_interfaces::msg::Vector3 msg_;
};

class Init_Vector3_x
{
public:
  Init_Vector3_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Vector3_y x(::xicro_interfaces::msg::Vector3::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_Vector3_y(msg_);
  }

private:
  ::xicro_interfaces::msg::Vector3 msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::xicro_interfaces::msg::Vector3>()
{
  return xicro_interfaces::msg::builder::Init_Vector3_x();
}

}  // namespace xicro_interfaces

#endif  // XICRO_INTERFACES__MSG__DETAIL__VECTOR3__BUILDER_HPP_
