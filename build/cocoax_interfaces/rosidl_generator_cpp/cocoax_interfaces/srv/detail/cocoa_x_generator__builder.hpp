// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from cocoax_interfaces:srv/CocoaXGenerator.idl
// generated code does not contain a copyright notice

#ifndef COCOAX_INTERFACES__SRV__DETAIL__COCOA_X_GENERATOR__BUILDER_HPP_
#define COCOAX_INTERFACES__SRV__DETAIL__COCOA_X_GENERATOR__BUILDER_HPP_

#include "cocoax_interfaces/srv/detail/cocoa_x_generator__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace cocoax_interfaces
{

namespace srv
{

namespace builder
{

class Init_CocoaXGenerator_Request_duration
{
public:
  explicit Init_CocoaXGenerator_Request_duration(::cocoax_interfaces::srv::CocoaXGenerator_Request & msg)
  : msg_(msg)
  {}
  ::cocoax_interfaces::srv::CocoaXGenerator_Request duration(::cocoax_interfaces::srv::CocoaXGenerator_Request::_duration_type arg)
  {
    msg_.duration = std::move(arg);
    return std::move(msg_);
  }

private:
  ::cocoax_interfaces::srv::CocoaXGenerator_Request msg_;
};

class Init_CocoaXGenerator_Request_position_final
{
public:
  explicit Init_CocoaXGenerator_Request_position_final(::cocoax_interfaces::srv::CocoaXGenerator_Request & msg)
  : msg_(msg)
  {}
  Init_CocoaXGenerator_Request_duration position_final(::cocoax_interfaces::srv::CocoaXGenerator_Request::_position_final_type arg)
  {
    msg_.position_final = std::move(arg);
    return Init_CocoaXGenerator_Request_duration(msg_);
  }

private:
  ::cocoax_interfaces::srv::CocoaXGenerator_Request msg_;
};

class Init_CocoaXGenerator_Request_position_initial
{
public:
  Init_CocoaXGenerator_Request_position_initial()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CocoaXGenerator_Request_position_final position_initial(::cocoax_interfaces::srv::CocoaXGenerator_Request::_position_initial_type arg)
  {
    msg_.position_initial = std::move(arg);
    return Init_CocoaXGenerator_Request_position_final(msg_);
  }

private:
  ::cocoax_interfaces::srv::CocoaXGenerator_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::cocoax_interfaces::srv::CocoaXGenerator_Request>()
{
  return cocoax_interfaces::srv::builder::Init_CocoaXGenerator_Request_position_initial();
}

}  // namespace cocoax_interfaces


namespace cocoax_interfaces
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::cocoax_interfaces::srv::CocoaXGenerator_Response>()
{
  return ::cocoax_interfaces::srv::CocoaXGenerator_Response(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace cocoax_interfaces

#endif  // COCOAX_INTERFACES__SRV__DETAIL__COCOA_X_GENERATOR__BUILDER_HPP_
