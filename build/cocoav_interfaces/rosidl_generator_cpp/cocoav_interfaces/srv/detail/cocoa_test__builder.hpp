// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from cocoav_interfaces:srv/CocoaTest.idl
// generated code does not contain a copyright notice

#ifndef COCOAV_INTERFACES__SRV__DETAIL__COCOA_TEST__BUILDER_HPP_
#define COCOAV_INTERFACES__SRV__DETAIL__COCOA_TEST__BUILDER_HPP_

#include "cocoav_interfaces/srv/detail/cocoa_test__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace cocoav_interfaces
{

namespace srv
{

namespace builder
{

class Init_CocoaTest_Request_check
{
public:
  Init_CocoaTest_Request_check()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::cocoav_interfaces::srv::CocoaTest_Request check(::cocoav_interfaces::srv::CocoaTest_Request::_check_type arg)
  {
    msg_.check = std::move(arg);
    return std::move(msg_);
  }

private:
  ::cocoav_interfaces::srv::CocoaTest_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::cocoav_interfaces::srv::CocoaTest_Request>()
{
  return cocoav_interfaces::srv::builder::Init_CocoaTest_Request_check();
}

}  // namespace cocoav_interfaces


namespace cocoav_interfaces
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::cocoav_interfaces::srv::CocoaTest_Response>()
{
  return ::cocoav_interfaces::srv::CocoaTest_Response(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace cocoav_interfaces

#endif  // COCOAV_INTERFACES__SRV__DETAIL__COCOA_TEST__BUILDER_HPP_
