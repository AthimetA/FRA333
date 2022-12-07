// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from cocoax_interfaces:msg/CocoaXIMU.idl
// generated code does not contain a copyright notice

#ifndef COCOAX_INTERFACES__MSG__DETAIL__COCOA_XIMU__BUILDER_HPP_
#define COCOAX_INTERFACES__MSG__DETAIL__COCOA_XIMU__BUILDER_HPP_

#include "cocoax_interfaces/msg/detail/cocoa_ximu__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace cocoax_interfaces
{

namespace msg
{

namespace builder
{

class Init_CocoaXIMU_linear_acceleration
{
public:
  explicit Init_CocoaXIMU_linear_acceleration(::cocoax_interfaces::msg::CocoaXIMU & msg)
  : msg_(msg)
  {}
  ::cocoax_interfaces::msg::CocoaXIMU linear_acceleration(::cocoax_interfaces::msg::CocoaXIMU::_linear_acceleration_type arg)
  {
    msg_.linear_acceleration = std::move(arg);
    return std::move(msg_);
  }

private:
  ::cocoax_interfaces::msg::CocoaXIMU msg_;
};

class Init_CocoaXIMU_angular_velocity
{
public:
  explicit Init_CocoaXIMU_angular_velocity(::cocoax_interfaces::msg::CocoaXIMU & msg)
  : msg_(msg)
  {}
  Init_CocoaXIMU_linear_acceleration angular_velocity(::cocoax_interfaces::msg::CocoaXIMU::_angular_velocity_type arg)
  {
    msg_.angular_velocity = std::move(arg);
    return Init_CocoaXIMU_linear_acceleration(msg_);
  }

private:
  ::cocoax_interfaces::msg::CocoaXIMU msg_;
};

class Init_CocoaXIMU_time_ms
{
public:
  Init_CocoaXIMU_time_ms()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CocoaXIMU_angular_velocity time_ms(::cocoax_interfaces::msg::CocoaXIMU::_time_ms_type arg)
  {
    msg_.time_ms = std::move(arg);
    return Init_CocoaXIMU_angular_velocity(msg_);
  }

private:
  ::cocoax_interfaces::msg::CocoaXIMU msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::cocoax_interfaces::msg::CocoaXIMU>()
{
  return cocoax_interfaces::msg::builder::Init_CocoaXIMU_time_ms();
}

}  // namespace cocoax_interfaces

#endif  // COCOAX_INTERFACES__MSG__DETAIL__COCOA_XIMU__BUILDER_HPP_
