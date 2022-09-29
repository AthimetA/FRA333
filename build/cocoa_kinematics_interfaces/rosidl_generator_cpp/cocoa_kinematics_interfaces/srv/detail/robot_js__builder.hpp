// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from cocoa_kinematics_interfaces:srv/RobotJS.idl
// generated code does not contain a copyright notice

#ifndef COCOA_KINEMATICS_INTERFACES__SRV__DETAIL__ROBOT_JS__BUILDER_HPP_
#define COCOA_KINEMATICS_INTERFACES__SRV__DETAIL__ROBOT_JS__BUILDER_HPP_

#include "cocoa_kinematics_interfaces/srv/detail/robot_js__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace cocoa_kinematics_interfaces
{

namespace srv
{

namespace builder
{

class Init_RobotJS_Request_jointstate
{
public:
  Init_RobotJS_Request_jointstate()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::cocoa_kinematics_interfaces::srv::RobotJS_Request jointstate(::cocoa_kinematics_interfaces::srv::RobotJS_Request::_jointstate_type arg)
  {
    msg_.jointstate = std::move(arg);
    return std::move(msg_);
  }

private:
  ::cocoa_kinematics_interfaces::srv::RobotJS_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::cocoa_kinematics_interfaces::srv::RobotJS_Request>()
{
  return cocoa_kinematics_interfaces::srv::builder::Init_RobotJS_Request_jointstate();
}

}  // namespace cocoa_kinematics_interfaces


namespace cocoa_kinematics_interfaces
{

namespace srv
{

namespace builder
{

class Init_RobotJS_Response_positionendeffector
{
public:
  Init_RobotJS_Response_positionendeffector()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::cocoa_kinematics_interfaces::srv::RobotJS_Response positionendeffector(::cocoa_kinematics_interfaces::srv::RobotJS_Response::_positionendeffector_type arg)
  {
    msg_.positionendeffector = std::move(arg);
    return std::move(msg_);
  }

private:
  ::cocoa_kinematics_interfaces::srv::RobotJS_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::cocoa_kinematics_interfaces::srv::RobotJS_Response>()
{
  return cocoa_kinematics_interfaces::srv::builder::Init_RobotJS_Response_positionendeffector();
}

}  // namespace cocoa_kinematics_interfaces

#endif  // COCOA_KINEMATICS_INTERFACES__SRV__DETAIL__ROBOT_JS__BUILDER_HPP_
