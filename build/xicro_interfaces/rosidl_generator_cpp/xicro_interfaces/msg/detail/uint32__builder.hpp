// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from xicro_interfaces:msg/Uint32.idl
// generated code does not contain a copyright notice

#ifndef XICRO_INTERFACES__MSG__DETAIL__UINT32__BUILDER_HPP_
#define XICRO_INTERFACES__MSG__DETAIL__UINT32__BUILDER_HPP_

#include "xicro_interfaces/msg/detail/uint32__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace xicro_interfaces
{

namespace msg
{

namespace builder
{

class Init_Uint32_data
{
public:
  Init_Uint32_data()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::xicro_interfaces::msg::Uint32 data(::xicro_interfaces::msg::Uint32::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::xicro_interfaces::msg::Uint32 msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::xicro_interfaces::msg::Uint32>()
{
  return xicro_interfaces::msg::builder::Init_Uint32_data();
}

}  // namespace xicro_interfaces

#endif  // XICRO_INTERFACES__MSG__DETAIL__UINT32__BUILDER_HPP_
