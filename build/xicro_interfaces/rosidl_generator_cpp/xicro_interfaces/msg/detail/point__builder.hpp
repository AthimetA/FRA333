// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from xicro_interfaces:msg/Point.idl
// generated code does not contain a copyright notice

#ifndef XICRO_INTERFACES__MSG__DETAIL__POINT__BUILDER_HPP_
#define XICRO_INTERFACES__MSG__DETAIL__POINT__BUILDER_HPP_

#include "xicro_interfaces/msg/detail/point__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace xicro_interfaces
{

namespace msg
{

namespace builder
{

class Init_Point_z
{
public:
  explicit Init_Point_z(::xicro_interfaces::msg::Point & msg)
  : msg_(msg)
  {}
  ::xicro_interfaces::msg::Point z(::xicro_interfaces::msg::Point::_z_type arg)
  {
    msg_.z = std::move(arg);
    return std::move(msg_);
  }

private:
  ::xicro_interfaces::msg::Point msg_;
};

class Init_Point_y
{
public:
  explicit Init_Point_y(::xicro_interfaces::msg::Point & msg)
  : msg_(msg)
  {}
  Init_Point_z y(::xicro_interfaces::msg::Point::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_Point_z(msg_);
  }

private:
  ::xicro_interfaces::msg::Point msg_;
};

class Init_Point_x
{
public:
  Init_Point_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Point_y x(::xicro_interfaces::msg::Point::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_Point_y(msg_);
  }

private:
  ::xicro_interfaces::msg::Point msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::xicro_interfaces::msg::Point>()
{
  return xicro_interfaces::msg::builder::Init_Point_x();
}

}  // namespace xicro_interfaces

#endif  // XICRO_INTERFACES__MSG__DETAIL__POINT__BUILDER_HPP_
