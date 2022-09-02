// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from my_first_package:srv/SetNoise.idl
// generated code does not contain a copyright notice

#ifndef MY_FIRST_PACKAGE__SRV__DETAIL__SET_NOISE__BUILDER_HPP_
#define MY_FIRST_PACKAGE__SRV__DETAIL__SET_NOISE__BUILDER_HPP_

#include "my_first_package/srv/detail/set_noise__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace my_first_package
{

namespace srv
{

namespace builder
{

class Init_SetNoise_Request_variance
{
public:
  explicit Init_SetNoise_Request_variance(::my_first_package::srv::SetNoise_Request & msg)
  : msg_(msg)
  {}
  ::my_first_package::srv::SetNoise_Request variance(::my_first_package::srv::SetNoise_Request::_variance_type arg)
  {
    msg_.variance = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_first_package::srv::SetNoise_Request msg_;
};

class Init_SetNoise_Request_mean
{
public:
  Init_SetNoise_Request_mean()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetNoise_Request_variance mean(::my_first_package::srv::SetNoise_Request::_mean_type arg)
  {
    msg_.mean = std::move(arg);
    return Init_SetNoise_Request_variance(msg_);
  }

private:
  ::my_first_package::srv::SetNoise_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_first_package::srv::SetNoise_Request>()
{
  return my_first_package::srv::builder::Init_SetNoise_Request_mean();
}

}  // namespace my_first_package


namespace my_first_package
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_first_package::srv::SetNoise_Response>()
{
  return ::my_first_package::srv::SetNoise_Response(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace my_first_package

#endif  // MY_FIRST_PACKAGE__SRV__DETAIL__SET_NOISE__BUILDER_HPP_
