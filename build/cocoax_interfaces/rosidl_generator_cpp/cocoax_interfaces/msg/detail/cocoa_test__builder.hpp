// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from cocoax_interfaces:msg/CocoaTest.idl
// generated code does not contain a copyright notice

#ifndef COCOAX_INTERFACES__MSG__DETAIL__COCOA_TEST__BUILDER_HPP_
#define COCOAX_INTERFACES__MSG__DETAIL__COCOA_TEST__BUILDER_HPP_

#include "cocoax_interfaces/msg/detail/cocoa_test__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace cocoax_interfaces
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
  ::cocoax_interfaces::msg::CocoaTest check(::cocoax_interfaces::msg::CocoaTest::_check_type arg)
  {
    msg_.check = std::move(arg);
    return std::move(msg_);
  }

private:
  ::cocoax_interfaces::msg::CocoaTest msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::cocoax_interfaces::msg::CocoaTest>()
{
  return cocoax_interfaces::msg::builder::Init_CocoaTest_check();
}

}  // namespace cocoax_interfaces

#endif  // COCOAX_INTERFACES__MSG__DETAIL__COCOA_TEST__BUILDER_HPP_
