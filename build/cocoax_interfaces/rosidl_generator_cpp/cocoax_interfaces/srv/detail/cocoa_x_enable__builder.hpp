// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from cocoax_interfaces:srv/CocoaXEnable.idl
// generated code does not contain a copyright notice

#ifndef COCOAX_INTERFACES__SRV__DETAIL__COCOA_X_ENABLE__BUILDER_HPP_
#define COCOAX_INTERFACES__SRV__DETAIL__COCOA_X_ENABLE__BUILDER_HPP_

#include "cocoax_interfaces/srv/detail/cocoa_x_enable__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace cocoax_interfaces
{

namespace srv
{

namespace builder
{

class Init_CocoaXEnable_Request_enable
{
public:
  Init_CocoaXEnable_Request_enable()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::cocoax_interfaces::srv::CocoaXEnable_Request enable(::cocoax_interfaces::srv::CocoaXEnable_Request::_enable_type arg)
  {
    msg_.enable = std::move(arg);
    return std::move(msg_);
  }

private:
  ::cocoax_interfaces::srv::CocoaXEnable_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::cocoax_interfaces::srv::CocoaXEnable_Request>()
{
  return cocoax_interfaces::srv::builder::Init_CocoaXEnable_Request_enable();
}

}  // namespace cocoax_interfaces


namespace cocoax_interfaces
{

namespace srv
{

namespace builder
{

class Init_CocoaXEnable_Response_status
{
public:
  Init_CocoaXEnable_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::cocoax_interfaces::srv::CocoaXEnable_Response status(::cocoax_interfaces::srv::CocoaXEnable_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::cocoax_interfaces::srv::CocoaXEnable_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::cocoax_interfaces::srv::CocoaXEnable_Response>()
{
  return cocoax_interfaces::srv::builder::Init_CocoaXEnable_Response_status();
}

}  // namespace cocoax_interfaces

#endif  // COCOAX_INTERFACES__SRV__DETAIL__COCOA_X_ENABLE__BUILDER_HPP_
