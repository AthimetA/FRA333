// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from cocoax_interfaces:msg/CocoaTestMonitor.idl
// generated code does not contain a copyright notice

#ifndef COCOAX_INTERFACES__MSG__DETAIL__COCOA_TEST_MONITOR__BUILDER_HPP_
#define COCOAX_INTERFACES__MSG__DETAIL__COCOA_TEST_MONITOR__BUILDER_HPP_

#include "cocoax_interfaces/msg/detail/cocoa_test_monitor__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace cocoax_interfaces
{

namespace msg
{

namespace builder
{

class Init_CocoaTestMonitor_velz
{
public:
  explicit Init_CocoaTestMonitor_velz(::cocoax_interfaces::msg::CocoaTestMonitor & msg)
  : msg_(msg)
  {}
  ::cocoax_interfaces::msg::CocoaTestMonitor velz(::cocoax_interfaces::msg::CocoaTestMonitor::_velz_type arg)
  {
    msg_.velz = std::move(arg);
    return std::move(msg_);
  }

private:
  ::cocoax_interfaces::msg::CocoaTestMonitor msg_;
};

class Init_CocoaTestMonitor_vely
{
public:
  explicit Init_CocoaTestMonitor_vely(::cocoax_interfaces::msg::CocoaTestMonitor & msg)
  : msg_(msg)
  {}
  Init_CocoaTestMonitor_velz vely(::cocoax_interfaces::msg::CocoaTestMonitor::_vely_type arg)
  {
    msg_.vely = std::move(arg);
    return Init_CocoaTestMonitor_velz(msg_);
  }

private:
  ::cocoax_interfaces::msg::CocoaTestMonitor msg_;
};

class Init_CocoaTestMonitor_velx
{
public:
  explicit Init_CocoaTestMonitor_velx(::cocoax_interfaces::msg::CocoaTestMonitor & msg)
  : msg_(msg)
  {}
  Init_CocoaTestMonitor_vely velx(::cocoax_interfaces::msg::CocoaTestMonitor::_velx_type arg)
  {
    msg_.velx = std::move(arg);
    return Init_CocoaTestMonitor_vely(msg_);
  }

private:
  ::cocoax_interfaces::msg::CocoaTestMonitor msg_;
};

class Init_CocoaTestMonitor_posz
{
public:
  explicit Init_CocoaTestMonitor_posz(::cocoax_interfaces::msg::CocoaTestMonitor & msg)
  : msg_(msg)
  {}
  Init_CocoaTestMonitor_velx posz(::cocoax_interfaces::msg::CocoaTestMonitor::_posz_type arg)
  {
    msg_.posz = std::move(arg);
    return Init_CocoaTestMonitor_velx(msg_);
  }

private:
  ::cocoax_interfaces::msg::CocoaTestMonitor msg_;
};

class Init_CocoaTestMonitor_posy
{
public:
  explicit Init_CocoaTestMonitor_posy(::cocoax_interfaces::msg::CocoaTestMonitor & msg)
  : msg_(msg)
  {}
  Init_CocoaTestMonitor_posz posy(::cocoax_interfaces::msg::CocoaTestMonitor::_posy_type arg)
  {
    msg_.posy = std::move(arg);
    return Init_CocoaTestMonitor_posz(msg_);
  }

private:
  ::cocoax_interfaces::msg::CocoaTestMonitor msg_;
};

class Init_CocoaTestMonitor_posx
{
public:
  Init_CocoaTestMonitor_posx()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CocoaTestMonitor_posy posx(::cocoax_interfaces::msg::CocoaTestMonitor::_posx_type arg)
  {
    msg_.posx = std::move(arg);
    return Init_CocoaTestMonitor_posy(msg_);
  }

private:
  ::cocoax_interfaces::msg::CocoaTestMonitor msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::cocoax_interfaces::msg::CocoaTestMonitor>()
{
  return cocoax_interfaces::msg::builder::Init_CocoaTestMonitor_posx();
}

}  // namespace cocoax_interfaces

#endif  // COCOAX_INTERFACES__MSG__DETAIL__COCOA_TEST_MONITOR__BUILDER_HPP_
