// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from cocoax_interfaces:srv/CocoaXIK.idl
// generated code does not contain a copyright notice

#ifndef COCOAX_INTERFACES__SRV__DETAIL__COCOA_XIK__BUILDER_HPP_
#define COCOAX_INTERFACES__SRV__DETAIL__COCOA_XIK__BUILDER_HPP_

#include "cocoax_interfaces/srv/detail/cocoa_xik__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace cocoax_interfaces
{

namespace srv
{

namespace builder
{

class Init_CocoaXIK_Request_r
{
public:
  explicit Init_CocoaXIK_Request_r(::cocoax_interfaces::srv::CocoaXIK_Request & msg)
  : msg_(msg)
  {}
  ::cocoax_interfaces::srv::CocoaXIK_Request r(::cocoax_interfaces::srv::CocoaXIK_Request::_r_type arg)
  {
    msg_.r = std::move(arg);
    return std::move(msg_);
  }

private:
  ::cocoax_interfaces::srv::CocoaXIK_Request msg_;
};

class Init_CocoaXIK_Request_position
{
public:
  Init_CocoaXIK_Request_position()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CocoaXIK_Request_r position(::cocoax_interfaces::srv::CocoaXIK_Request::_position_type arg)
  {
    msg_.position = std::move(arg);
    return Init_CocoaXIK_Request_r(msg_);
  }

private:
  ::cocoax_interfaces::srv::CocoaXIK_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::cocoax_interfaces::srv::CocoaXIK_Request>()
{
  return cocoax_interfaces::srv::builder::Init_CocoaXIK_Request_position();
}

}  // namespace cocoax_interfaces


namespace cocoax_interfaces
{

namespace srv
{

namespace builder
{

class Init_CocoaXIK_Response_flag
{
public:
  explicit Init_CocoaXIK_Response_flag(::cocoax_interfaces::srv::CocoaXIK_Response & msg)
  : msg_(msg)
  {}
  ::cocoax_interfaces::srv::CocoaXIK_Response flag(::cocoax_interfaces::srv::CocoaXIK_Response::_flag_type arg)
  {
    msg_.flag = std::move(arg);
    return std::move(msg_);
  }

private:
  ::cocoax_interfaces::srv::CocoaXIK_Response msg_;
};

class Init_CocoaXIK_Response_jointstate
{
public:
  Init_CocoaXIK_Response_jointstate()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CocoaXIK_Response_flag jointstate(::cocoax_interfaces::srv::CocoaXIK_Response::_jointstate_type arg)
  {
    msg_.jointstate = std::move(arg);
    return Init_CocoaXIK_Response_flag(msg_);
  }

private:
  ::cocoax_interfaces::srv::CocoaXIK_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::cocoax_interfaces::srv::CocoaXIK_Response>()
{
  return cocoax_interfaces::srv::builder::Init_CocoaXIK_Response_jointstate();
}

}  // namespace cocoax_interfaces

#endif  // COCOAX_INTERFACES__SRV__DETAIL__COCOA_XIK__BUILDER_HPP_
