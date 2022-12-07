// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from cocoax_interfaces:srv/CocoaXFK.idl
// generated code does not contain a copyright notice

#ifndef COCOAX_INTERFACES__SRV__DETAIL__COCOA_XFK__BUILDER_HPP_
#define COCOAX_INTERFACES__SRV__DETAIL__COCOA_XFK__BUILDER_HPP_

#include "cocoax_interfaces/srv/detail/cocoa_xfk__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace cocoax_interfaces
{

namespace srv
{

namespace builder
{

class Init_CocoaXFK_Request_jointstate
{
public:
  Init_CocoaXFK_Request_jointstate()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::cocoax_interfaces::srv::CocoaXFK_Request jointstate(::cocoax_interfaces::srv::CocoaXFK_Request::_jointstate_type arg)
  {
    msg_.jointstate = std::move(arg);
    return std::move(msg_);
  }

private:
  ::cocoax_interfaces::srv::CocoaXFK_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::cocoax_interfaces::srv::CocoaXFK_Request>()
{
  return cocoax_interfaces::srv::builder::Init_CocoaXFK_Request_jointstate();
}

}  // namespace cocoax_interfaces


namespace cocoax_interfaces
{

namespace srv
{

namespace builder
{

class Init_CocoaXFK_Response_positionendeffector
{
public:
  Init_CocoaXFK_Response_positionendeffector()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::cocoax_interfaces::srv::CocoaXFK_Response positionendeffector(::cocoax_interfaces::srv::CocoaXFK_Response::_positionendeffector_type arg)
  {
    msg_.positionendeffector = std::move(arg);
    return std::move(msg_);
  }

private:
  ::cocoax_interfaces::srv::CocoaXFK_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::cocoax_interfaces::srv::CocoaXFK_Response>()
{
  return cocoax_interfaces::srv::builder::Init_CocoaXFK_Response_positionendeffector();
}

}  // namespace cocoax_interfaces

#endif  // COCOAX_INTERFACES__SRV__DETAIL__COCOA_XFK__BUILDER_HPP_
