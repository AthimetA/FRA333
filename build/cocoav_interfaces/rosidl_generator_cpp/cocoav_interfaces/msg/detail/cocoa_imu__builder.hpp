// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from cocoav_interfaces:msg/CocoaIMU.idl
// generated code does not contain a copyright notice

#ifndef COCOAV_INTERFACES__MSG__DETAIL__COCOA_IMU__BUILDER_HPP_
#define COCOAV_INTERFACES__MSG__DETAIL__COCOA_IMU__BUILDER_HPP_

#include "cocoav_interfaces/msg/detail/cocoa_imu__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace cocoav_interfaces
{

namespace msg
{

namespace builder
{

class Init_CocoaIMU_linear_acceleration
{
public:
  explicit Init_CocoaIMU_linear_acceleration(::cocoav_interfaces::msg::CocoaIMU & msg)
  : msg_(msg)
  {}
  ::cocoav_interfaces::msg::CocoaIMU linear_acceleration(::cocoav_interfaces::msg::CocoaIMU::_linear_acceleration_type arg)
  {
    msg_.linear_acceleration = std::move(arg);
    return std::move(msg_);
  }

private:
  ::cocoav_interfaces::msg::CocoaIMU msg_;
};

class Init_CocoaIMU_angular_velocity
{
public:
  Init_CocoaIMU_angular_velocity()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CocoaIMU_linear_acceleration angular_velocity(::cocoav_interfaces::msg::CocoaIMU::_angular_velocity_type arg)
  {
    msg_.angular_velocity = std::move(arg);
    return Init_CocoaIMU_linear_acceleration(msg_);
  }

private:
  ::cocoav_interfaces::msg::CocoaIMU msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::cocoav_interfaces::msg::CocoaIMU>()
{
  return cocoav_interfaces::msg::builder::Init_CocoaIMU_angular_velocity();
}

}  // namespace cocoav_interfaces

#endif  // COCOAV_INTERFACES__MSG__DETAIL__COCOA_IMU__BUILDER_HPP_
