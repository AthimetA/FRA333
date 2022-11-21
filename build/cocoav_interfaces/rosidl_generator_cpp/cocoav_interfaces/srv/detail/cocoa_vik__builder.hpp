// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from cocoav_interfaces:srv/CocoaVIK.idl
// generated code does not contain a copyright notice

#ifndef COCOAV_INTERFACES__SRV__DETAIL__COCOA_VIK__BUILDER_HPP_
#define COCOAV_INTERFACES__SRV__DETAIL__COCOA_VIK__BUILDER_HPP_

#include "cocoav_interfaces/srv/detail/cocoa_vik__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace cocoav_interfaces
{

namespace srv
{

namespace builder
{

class Init_CocoaVIK_Request_r
{
public:
  explicit Init_CocoaVIK_Request_r(::cocoav_interfaces::srv::CocoaVIK_Request & msg)
  : msg_(msg)
  {}
  ::cocoav_interfaces::srv::CocoaVIK_Request r(::cocoav_interfaces::srv::CocoaVIK_Request::_r_type arg)
  {
    msg_.r = std::move(arg);
    return std::move(msg_);
  }

private:
  ::cocoav_interfaces::srv::CocoaVIK_Request msg_;
};

class Init_CocoaVIK_Request_position
{
public:
  Init_CocoaVIK_Request_position()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CocoaVIK_Request_r position(::cocoav_interfaces::srv::CocoaVIK_Request::_position_type arg)
  {
    msg_.position = std::move(arg);
    return Init_CocoaVIK_Request_r(msg_);
  }

private:
  ::cocoav_interfaces::srv::CocoaVIK_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::cocoav_interfaces::srv::CocoaVIK_Request>()
{
  return cocoav_interfaces::srv::builder::Init_CocoaVIK_Request_position();
}

}  // namespace cocoav_interfaces


namespace cocoav_interfaces
{

namespace srv
{

namespace builder
{

class Init_CocoaVIK_Response_flag
{
public:
  explicit Init_CocoaVIK_Response_flag(::cocoav_interfaces::srv::CocoaVIK_Response & msg)
  : msg_(msg)
  {}
  ::cocoav_interfaces::srv::CocoaVIK_Response flag(::cocoav_interfaces::srv::CocoaVIK_Response::_flag_type arg)
  {
    msg_.flag = std::move(arg);
    return std::move(msg_);
  }

private:
  ::cocoav_interfaces::srv::CocoaVIK_Response msg_;
};

class Init_CocoaVIK_Response_jointstate
{
public:
  Init_CocoaVIK_Response_jointstate()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CocoaVIK_Response_flag jointstate(::cocoav_interfaces::srv::CocoaVIK_Response::_jointstate_type arg)
  {
    msg_.jointstate = std::move(arg);
    return Init_CocoaVIK_Response_flag(msg_);
  }

private:
  ::cocoav_interfaces::srv::CocoaVIK_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::cocoav_interfaces::srv::CocoaVIK_Response>()
{
  return cocoav_interfaces::srv::builder::Init_CocoaVIK_Response_jointstate();
}

}  // namespace cocoav_interfaces

#endif  // COCOAV_INTERFACES__SRV__DETAIL__COCOA_VIK__BUILDER_HPP_
