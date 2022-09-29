// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from cocoa_kinematics_interfaces:srv/RobotTF.idl
// generated code does not contain a copyright notice

#ifndef COCOA_KINEMATICS_INTERFACES__SRV__DETAIL__ROBOT_TF__BUILDER_HPP_
#define COCOA_KINEMATICS_INTERFACES__SRV__DETAIL__ROBOT_TF__BUILDER_HPP_

#include "cocoa_kinematics_interfaces/srv/detail/robot_tf__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace cocoa_kinematics_interfaces
{

namespace srv
{

namespace builder
{

class Init_RobotTF_Request_jointconfig
{
public:
  Init_RobotTF_Request_jointconfig()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::cocoa_kinematics_interfaces::srv::RobotTF_Request jointconfig(::cocoa_kinematics_interfaces::srv::RobotTF_Request::_jointconfig_type arg)
  {
    msg_.jointconfig = std::move(arg);
    return std::move(msg_);
  }

private:
  ::cocoa_kinematics_interfaces::srv::RobotTF_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::cocoa_kinematics_interfaces::srv::RobotTF_Request>()
{
  return cocoa_kinematics_interfaces::srv::builder::Init_RobotTF_Request_jointconfig();
}

}  // namespace cocoa_kinematics_interfaces


namespace cocoa_kinematics_interfaces
{

namespace srv
{

namespace builder
{

class Init_RobotTF_Response_positionviabase
{
public:
  Init_RobotTF_Response_positionviabase()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::cocoa_kinematics_interfaces::srv::RobotTF_Response positionviabase(::cocoa_kinematics_interfaces::srv::RobotTF_Response::_positionviabase_type arg)
  {
    msg_.positionviabase = std::move(arg);
    return std::move(msg_);
  }

private:
  ::cocoa_kinematics_interfaces::srv::RobotTF_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::cocoa_kinematics_interfaces::srv::RobotTF_Response>()
{
  return cocoa_kinematics_interfaces::srv::builder::Init_RobotTF_Response_positionviabase();
}

}  // namespace cocoa_kinematics_interfaces

#endif  // COCOA_KINEMATICS_INTERFACES__SRV__DETAIL__ROBOT_TF__BUILDER_HPP_
