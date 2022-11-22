// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from cocoav_interfaces:msg/CocoaVIMU.idl
// generated code does not contain a copyright notice

#ifndef COCOAV_INTERFACES__MSG__DETAIL__COCOA_VIMU__BUILDER_HPP_
#define COCOAV_INTERFACES__MSG__DETAIL__COCOA_VIMU__BUILDER_HPP_

#include "cocoav_interfaces/msg/detail/cocoa_vimu__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace cocoav_interfaces
{

namespace msg
{

namespace builder
{

class Init_CocoaVIMU_linear_acceleration
{
public:
  explicit Init_CocoaVIMU_linear_acceleration(::cocoav_interfaces::msg::CocoaVIMU & msg)
  : msg_(msg)
  {}
  ::cocoav_interfaces::msg::CocoaVIMU linear_acceleration(::cocoav_interfaces::msg::CocoaVIMU::_linear_acceleration_type arg)
  {
    msg_.linear_acceleration = std::move(arg);
    return std::move(msg_);
  }

private:
  ::cocoav_interfaces::msg::CocoaVIMU msg_;
};

class Init_CocoaVIMU_angular_velocity
{
public:
  Init_CocoaVIMU_angular_velocity()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CocoaVIMU_linear_acceleration angular_velocity(::cocoav_interfaces::msg::CocoaVIMU::_angular_velocity_type arg)
  {
    msg_.angular_velocity = std::move(arg);
    return Init_CocoaVIMU_linear_acceleration(msg_);
  }

private:
  ::cocoav_interfaces::msg::CocoaVIMU msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::cocoav_interfaces::msg::CocoaVIMU>()
{
  return cocoav_interfaces::msg::builder::Init_CocoaVIMU_angular_velocity();
}

}  // namespace cocoav_interfaces

#endif  // COCOAV_INTERFACES__MSG__DETAIL__COCOA_VIMU__BUILDER_HPP_
