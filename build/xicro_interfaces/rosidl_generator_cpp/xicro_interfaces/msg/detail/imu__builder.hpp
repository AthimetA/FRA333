// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from xicro_interfaces:msg/Imu.idl
// generated code does not contain a copyright notice

#ifndef XICRO_INTERFACES__MSG__DETAIL__IMU__BUILDER_HPP_
#define XICRO_INTERFACES__MSG__DETAIL__IMU__BUILDER_HPP_

#include "xicro_interfaces/msg/detail/imu__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace xicro_interfaces
{

namespace msg
{

namespace builder
{

class Init_Imu_linear_acceleration_covariance
{
public:
  explicit Init_Imu_linear_acceleration_covariance(::xicro_interfaces::msg::Imu & msg)
  : msg_(msg)
  {}
  ::xicro_interfaces::msg::Imu linear_acceleration_covariance(::xicro_interfaces::msg::Imu::_linear_acceleration_covariance_type arg)
  {
    msg_.linear_acceleration_covariance = std::move(arg);
    return std::move(msg_);
  }

private:
  ::xicro_interfaces::msg::Imu msg_;
};

class Init_Imu_linear_acceleration
{
public:
  explicit Init_Imu_linear_acceleration(::xicro_interfaces::msg::Imu & msg)
  : msg_(msg)
  {}
  Init_Imu_linear_acceleration_covariance linear_acceleration(::xicro_interfaces::msg::Imu::_linear_acceleration_type arg)
  {
    msg_.linear_acceleration = std::move(arg);
    return Init_Imu_linear_acceleration_covariance(msg_);
  }

private:
  ::xicro_interfaces::msg::Imu msg_;
};

class Init_Imu_angular_velocity_covariance
{
public:
  explicit Init_Imu_angular_velocity_covariance(::xicro_interfaces::msg::Imu & msg)
  : msg_(msg)
  {}
  Init_Imu_linear_acceleration angular_velocity_covariance(::xicro_interfaces::msg::Imu::_angular_velocity_covariance_type arg)
  {
    msg_.angular_velocity_covariance = std::move(arg);
    return Init_Imu_linear_acceleration(msg_);
  }

private:
  ::xicro_interfaces::msg::Imu msg_;
};

class Init_Imu_angular_velocity
{
public:
  explicit Init_Imu_angular_velocity(::xicro_interfaces::msg::Imu & msg)
  : msg_(msg)
  {}
  Init_Imu_angular_velocity_covariance angular_velocity(::xicro_interfaces::msg::Imu::_angular_velocity_type arg)
  {
    msg_.angular_velocity = std::move(arg);
    return Init_Imu_angular_velocity_covariance(msg_);
  }

private:
  ::xicro_interfaces::msg::Imu msg_;
};

class Init_Imu_orientation_covariance
{
public:
  explicit Init_Imu_orientation_covariance(::xicro_interfaces::msg::Imu & msg)
  : msg_(msg)
  {}
  Init_Imu_angular_velocity orientation_covariance(::xicro_interfaces::msg::Imu::_orientation_covariance_type arg)
  {
    msg_.orientation_covariance = std::move(arg);
    return Init_Imu_angular_velocity(msg_);
  }

private:
  ::xicro_interfaces::msg::Imu msg_;
};

class Init_Imu_orientation
{
public:
  explicit Init_Imu_orientation(::xicro_interfaces::msg::Imu & msg)
  : msg_(msg)
  {}
  Init_Imu_orientation_covariance orientation(::xicro_interfaces::msg::Imu::_orientation_type arg)
  {
    msg_.orientation = std::move(arg);
    return Init_Imu_orientation_covariance(msg_);
  }

private:
  ::xicro_interfaces::msg::Imu msg_;
};

class Init_Imu_header
{
public:
  Init_Imu_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Imu_orientation header(::xicro_interfaces::msg::Imu::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Imu_orientation(msg_);
  }

private:
  ::xicro_interfaces::msg::Imu msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::xicro_interfaces::msg::Imu>()
{
  return xicro_interfaces::msg::builder::Init_Imu_header();
}

}  // namespace xicro_interfaces

#endif  // XICRO_INTERFACES__MSG__DETAIL__IMU__BUILDER_HPP_
