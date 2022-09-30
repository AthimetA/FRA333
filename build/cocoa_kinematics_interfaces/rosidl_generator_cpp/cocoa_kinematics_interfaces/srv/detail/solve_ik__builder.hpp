// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from cocoa_kinematics_interfaces:srv/SolveIK.idl
// generated code does not contain a copyright notice

#ifndef COCOA_KINEMATICS_INTERFACES__SRV__DETAIL__SOLVE_IK__BUILDER_HPP_
#define COCOA_KINEMATICS_INTERFACES__SRV__DETAIL__SOLVE_IK__BUILDER_HPP_

#include "cocoa_kinematics_interfaces/srv/detail/solve_ik__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace cocoa_kinematics_interfaces
{

namespace srv
{

namespace builder
{

class Init_SolveIK_Request_r
{
public:
  explicit Init_SolveIK_Request_r(::cocoa_kinematics_interfaces::srv::SolveIK_Request & msg)
  : msg_(msg)
  {}
  ::cocoa_kinematics_interfaces::srv::SolveIK_Request r(::cocoa_kinematics_interfaces::srv::SolveIK_Request::_r_type arg)
  {
    msg_.r = std::move(arg);
    return std::move(msg_);
  }

private:
  ::cocoa_kinematics_interfaces::srv::SolveIK_Request msg_;
};

class Init_SolveIK_Request_jointorientation
{
public:
  explicit Init_SolveIK_Request_jointorientation(::cocoa_kinematics_interfaces::srv::SolveIK_Request & msg)
  : msg_(msg)
  {}
  Init_SolveIK_Request_r jointorientation(::cocoa_kinematics_interfaces::srv::SolveIK_Request::_jointorientation_type arg)
  {
    msg_.jointorientation = std::move(arg);
    return Init_SolveIK_Request_r(msg_);
  }

private:
  ::cocoa_kinematics_interfaces::srv::SolveIK_Request msg_;
};

class Init_SolveIK_Request_position
{
public:
  Init_SolveIK_Request_position()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SolveIK_Request_jointorientation position(::cocoa_kinematics_interfaces::srv::SolveIK_Request::_position_type arg)
  {
    msg_.position = std::move(arg);
    return Init_SolveIK_Request_jointorientation(msg_);
  }

private:
  ::cocoa_kinematics_interfaces::srv::SolveIK_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::cocoa_kinematics_interfaces::srv::SolveIK_Request>()
{
  return cocoa_kinematics_interfaces::srv::builder::Init_SolveIK_Request_position();
}

}  // namespace cocoa_kinematics_interfaces


namespace cocoa_kinematics_interfaces
{

namespace srv
{

namespace builder
{

class Init_SolveIK_Response_flag
{
public:
  explicit Init_SolveIK_Response_flag(::cocoa_kinematics_interfaces::srv::SolveIK_Response & msg)
  : msg_(msg)
  {}
  ::cocoa_kinematics_interfaces::srv::SolveIK_Response flag(::cocoa_kinematics_interfaces::srv::SolveIK_Response::_flag_type arg)
  {
    msg_.flag = std::move(arg);
    return std::move(msg_);
  }

private:
  ::cocoa_kinematics_interfaces::srv::SolveIK_Response msg_;
};

class Init_SolveIK_Response_jointstate
{
public:
  Init_SolveIK_Response_jointstate()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SolveIK_Response_flag jointstate(::cocoa_kinematics_interfaces::srv::SolveIK_Response::_jointstate_type arg)
  {
    msg_.jointstate = std::move(arg);
    return Init_SolveIK_Response_flag(msg_);
  }

private:
  ::cocoa_kinematics_interfaces::srv::SolveIK_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::cocoa_kinematics_interfaces::srv::SolveIK_Response>()
{
  return cocoa_kinematics_interfaces::srv::builder::Init_SolveIK_Response_jointstate();
}

}  // namespace cocoa_kinematics_interfaces

#endif  // COCOA_KINEMATICS_INTERFACES__SRV__DETAIL__SOLVE_IK__BUILDER_HPP_
