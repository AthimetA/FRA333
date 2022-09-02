// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from my_first_package:msg/AddBook.idl
// generated code does not contain a copyright notice

#ifndef MY_FIRST_PACKAGE__MSG__DETAIL__ADD_BOOK__BUILDER_HPP_
#define MY_FIRST_PACKAGE__MSG__DETAIL__ADD_BOOK__BUILDER_HPP_

#include "my_first_package/msg/detail/add_book__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace my_first_package
{

namespace msg
{

namespace builder
{

class Init_AddBook_address
{
public:
  explicit Init_AddBook_address(::my_first_package::msg::AddBook & msg)
  : msg_(msg)
  {}
  ::my_first_package::msg::AddBook address(::my_first_package::msg::AddBook::_address_type arg)
  {
    msg_.address = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_first_package::msg::AddBook msg_;
};

class Init_AddBook_age
{
public:
  explicit Init_AddBook_age(::my_first_package::msg::AddBook & msg)
  : msg_(msg)
  {}
  Init_AddBook_address age(::my_first_package::msg::AddBook::_age_type arg)
  {
    msg_.age = std::move(arg);
    return Init_AddBook_address(msg_);
  }

private:
  ::my_first_package::msg::AddBook msg_;
};

class Init_AddBook_gender
{
public:
  explicit Init_AddBook_gender(::my_first_package::msg::AddBook & msg)
  : msg_(msg)
  {}
  Init_AddBook_age gender(::my_first_package::msg::AddBook::_gender_type arg)
  {
    msg_.gender = std::move(arg);
    return Init_AddBook_age(msg_);
  }

private:
  ::my_first_package::msg::AddBook msg_;
};

class Init_AddBook_last_name
{
public:
  explicit Init_AddBook_last_name(::my_first_package::msg::AddBook & msg)
  : msg_(msg)
  {}
  Init_AddBook_gender last_name(::my_first_package::msg::AddBook::_last_name_type arg)
  {
    msg_.last_name = std::move(arg);
    return Init_AddBook_gender(msg_);
  }

private:
  ::my_first_package::msg::AddBook msg_;
};

class Init_AddBook_first_name
{
public:
  Init_AddBook_first_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AddBook_last_name first_name(::my_first_package::msg::AddBook::_first_name_type arg)
  {
    msg_.first_name = std::move(arg);
    return Init_AddBook_last_name(msg_);
  }

private:
  ::my_first_package::msg::AddBook msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_first_package::msg::AddBook>()
{
  return my_first_package::msg::builder::Init_AddBook_first_name();
}

}  // namespace my_first_package

#endif  // MY_FIRST_PACKAGE__MSG__DETAIL__ADD_BOOK__BUILDER_HPP_
