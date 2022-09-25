// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from my_first_package:srv/AthSum3.idl
// generated code does not contain a copyright notice

#ifndef MY_FIRST_PACKAGE__SRV__DETAIL__ATH_SUM3__BUILDER_HPP_
#define MY_FIRST_PACKAGE__SRV__DETAIL__ATH_SUM3__BUILDER_HPP_

#include "my_first_package/srv/detail/ath_sum3__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace my_first_package
{

namespace srv
{

namespace builder
{

class Init_AthSum3_Request_b
{
public:
  explicit Init_AthSum3_Request_b(::my_first_package::srv::AthSum3_Request & msg)
  : msg_(msg)
  {}
  ::my_first_package::srv::AthSum3_Request b(::my_first_package::srv::AthSum3_Request::_b_type arg)
  {
    msg_.b = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_first_package::srv::AthSum3_Request msg_;
};

class Init_AthSum3_Request_a
{
public:
  Init_AthSum3_Request_a()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AthSum3_Request_b a(::my_first_package::srv::AthSum3_Request::_a_type arg)
  {
    msg_.a = std::move(arg);
    return Init_AthSum3_Request_b(msg_);
  }

private:
  ::my_first_package::srv::AthSum3_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_first_package::srv::AthSum3_Request>()
{
  return my_first_package::srv::builder::Init_AthSum3_Request_a();
}

}  // namespace my_first_package


namespace my_first_package
{

namespace srv
{

namespace builder
{

class Init_AthSum3_Response_sum
{
public:
  Init_AthSum3_Response_sum()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::my_first_package::srv::AthSum3_Response sum(::my_first_package::srv::AthSum3_Response::_sum_type arg)
  {
    msg_.sum = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_first_package::srv::AthSum3_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_first_package::srv::AthSum3_Response>()
{
  return my_first_package::srv::builder::Init_AthSum3_Response_sum();
}

}  // namespace my_first_package

#endif  // MY_FIRST_PACKAGE__SRV__DETAIL__ATH_SUM3__BUILDER_HPP_
