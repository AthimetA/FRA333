// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from my_first_package:msg/Sphere.idl
// generated code does not contain a copyright notice

#ifndef MY_FIRST_PACKAGE__MSG__DETAIL__SPHERE__BUILDER_HPP_
#define MY_FIRST_PACKAGE__MSG__DETAIL__SPHERE__BUILDER_HPP_

#include "my_first_package/msg/detail/sphere__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace my_first_package
{

namespace msg
{

namespace builder
{

class Init_Sphere_radius
{
public:
  explicit Init_Sphere_radius(::my_first_package::msg::Sphere & msg)
  : msg_(msg)
  {}
  ::my_first_package::msg::Sphere radius(::my_first_package::msg::Sphere::_radius_type arg)
  {
    msg_.radius = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_first_package::msg::Sphere msg_;
};

class Init_Sphere_center
{
public:
  Init_Sphere_center()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Sphere_radius center(::my_first_package::msg::Sphere::_center_type arg)
  {
    msg_.center = std::move(arg);
    return Init_Sphere_radius(msg_);
  }

private:
  ::my_first_package::msg::Sphere msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_first_package::msg::Sphere>()
{
  return my_first_package::msg::builder::Init_Sphere_center();
}

}  // namespace my_first_package

#endif  // MY_FIRST_PACKAGE__MSG__DETAIL__SPHERE__BUILDER_HPP_
