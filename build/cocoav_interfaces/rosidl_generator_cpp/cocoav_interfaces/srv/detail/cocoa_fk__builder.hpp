// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from cocoav_interfaces:srv/CocoaFK.idl
// generated code does not contain a copyright notice

#ifndef COCOAV_INTERFACES__SRV__DETAIL__COCOA_FK__BUILDER_HPP_
#define COCOAV_INTERFACES__SRV__DETAIL__COCOA_FK__BUILDER_HPP_

#include "cocoav_interfaces/srv/detail/cocoa_fk__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace cocoav_interfaces
{

namespace srv
{

namespace builder
{

class Init_CocoaFK_Request_jointstate
{
public:
  Init_CocoaFK_Request_jointstate()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::cocoav_interfaces::srv::CocoaFK_Request jointstate(::cocoav_interfaces::srv::CocoaFK_Request::_jointstate_type arg)
  {
    msg_.jointstate = std::move(arg);
    return std::move(msg_);
  }

private:
  ::cocoav_interfaces::srv::CocoaFK_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::cocoav_interfaces::srv::CocoaFK_Request>()
{
  return cocoav_interfaces::srv::builder::Init_CocoaFK_Request_jointstate();
}

}  // namespace cocoav_interfaces


namespace cocoav_interfaces
{

namespace srv
{

namespace builder
{

class Init_CocoaFK_Response_positionendeffector
{
public:
  Init_CocoaFK_Response_positionendeffector()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::cocoav_interfaces::srv::CocoaFK_Response positionendeffector(::cocoav_interfaces::srv::CocoaFK_Response::_positionendeffector_type arg)
  {
    msg_.positionendeffector = std::move(arg);
    return std::move(msg_);
  }

private:
  ::cocoav_interfaces::srv::CocoaFK_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::cocoav_interfaces::srv::CocoaFK_Response>()
{
  return cocoav_interfaces::srv::builder::Init_CocoaFK_Response_positionendeffector();
}

}  // namespace cocoav_interfaces

#endif  // COCOAV_INTERFACES__SRV__DETAIL__COCOA_FK__BUILDER_HPP_
