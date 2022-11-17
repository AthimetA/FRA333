// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from xicro_interfaces:msg/Header.idl
// generated code does not contain a copyright notice

#ifndef XICRO_INTERFACES__MSG__DETAIL__HEADER__BUILDER_HPP_
#define XICRO_INTERFACES__MSG__DETAIL__HEADER__BUILDER_HPP_

#include "xicro_interfaces/msg/detail/header__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace xicro_interfaces
{

namespace msg
{

namespace builder
{

class Init_Header_frame_id
{
public:
  explicit Init_Header_frame_id(::xicro_interfaces::msg::Header & msg)
  : msg_(msg)
  {}
  ::xicro_interfaces::msg::Header frame_id(::xicro_interfaces::msg::Header::_frame_id_type arg)
  {
    msg_.frame_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::xicro_interfaces::msg::Header msg_;
};

class Init_Header_stamp
{
public:
  Init_Header_stamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Header_frame_id stamp(::xicro_interfaces::msg::Header::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return Init_Header_frame_id(msg_);
  }

private:
  ::xicro_interfaces::msg::Header msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::xicro_interfaces::msg::Header>()
{
  return xicro_interfaces::msg::builder::Init_Header_stamp();
}

}  // namespace xicro_interfaces

#endif  // XICRO_INTERFACES__MSG__DETAIL__HEADER__BUILDER_HPP_
