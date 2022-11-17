// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from xicro_interfaces:msg/Twist.idl
// generated code does not contain a copyright notice

#ifndef XICRO_INTERFACES__MSG__DETAIL__TWIST__STRUCT_HPP_
#define XICRO_INTERFACES__MSG__DETAIL__TWIST__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__xicro_interfaces__msg__Twist __attribute__((deprecated))
#else
# define DEPRECATED__xicro_interfaces__msg__Twist __declspec(deprecated)
#endif

namespace xicro_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Twist_
{
  using Type = Twist_<ContainerAllocator>;

  explicit Twist_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<float, 3>::iterator, float>(this->linear.begin(), this->linear.end(), 0.0f);
      std::fill<typename std::array<float, 3>::iterator, float>(this->angular.begin(), this->angular.end(), 0.0f);
    }
  }

  explicit Twist_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : linear(_alloc),
    angular(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<float, 3>::iterator, float>(this->linear.begin(), this->linear.end(), 0.0f);
      std::fill<typename std::array<float, 3>::iterator, float>(this->angular.begin(), this->angular.end(), 0.0f);
    }
  }

  // field types and members
  using _linear_type =
    std::array<float, 3>;
  _linear_type linear;
  using _angular_type =
    std::array<float, 3>;
  _angular_type angular;

  // setters for named parameter idiom
  Type & set__linear(
    const std::array<float, 3> & _arg)
  {
    this->linear = _arg;
    return *this;
  }
  Type & set__angular(
    const std::array<float, 3> & _arg)
  {
    this->angular = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    xicro_interfaces::msg::Twist_<ContainerAllocator> *;
  using ConstRawPtr =
    const xicro_interfaces::msg::Twist_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<xicro_interfaces::msg::Twist_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<xicro_interfaces::msg::Twist_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      xicro_interfaces::msg::Twist_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<xicro_interfaces::msg::Twist_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      xicro_interfaces::msg::Twist_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<xicro_interfaces::msg::Twist_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<xicro_interfaces::msg::Twist_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<xicro_interfaces::msg::Twist_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__xicro_interfaces__msg__Twist
    std::shared_ptr<xicro_interfaces::msg::Twist_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__xicro_interfaces__msg__Twist
    std::shared_ptr<xicro_interfaces::msg::Twist_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Twist_ & other) const
  {
    if (this->linear != other.linear) {
      return false;
    }
    if (this->angular != other.angular) {
      return false;
    }
    return true;
  }
  bool operator!=(const Twist_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Twist_

// alias to use template instance with default allocator
using Twist =
  xicro_interfaces::msg::Twist_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace xicro_interfaces

#endif  // XICRO_INTERFACES__MSG__DETAIL__TWIST__STRUCT_HPP_
