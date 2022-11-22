// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from cocoav_interfaces:msg/CocoaTest.idl
// generated code does not contain a copyright notice

#ifndef COCOAV_INTERFACES__MSG__DETAIL__COCOA_TEST__BUILDER_HPP_
#define COCOAV_INTERFACES__MSG__DETAIL__COCOA_TEST__BUILDER_HPP_

#include "cocoav_interfaces/msg/detail/cocoa_test__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace cocoav_interfaces
{

namespace msg
{

namespace builder
{

class Init_CocoaTest_check
{
public:
  Init_CocoaTest_check()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::cocoav_interfaces::msg::CocoaTest check(::cocoav_interfaces::msg::CocoaTest::_check_type arg)
  {
    msg_.check = std::move(arg);
    return std::move(msg_);
  }

private:
  ::cocoav_interfaces::msg::CocoaTest msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::cocoav_interfaces::msg::CocoaTest>()
{
  return cocoav_interfaces::msg::builder::Init_CocoaTest_check();
}

}  // namespace cocoav_interfaces

#endif  // COCOAV_INTERFACES__MSG__DETAIL__COCOA_TEST__BUILDER_HPP_
