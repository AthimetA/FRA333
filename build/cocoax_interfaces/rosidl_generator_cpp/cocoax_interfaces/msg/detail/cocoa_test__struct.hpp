// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from cocoax_interfaces:msg/CocoaTest.idl
// generated code does not contain a copyright notice

#ifndef COCOAX_INTERFACES__MSG__DETAIL__COCOA_TEST__STRUCT_HPP_
#define COCOAX_INTERFACES__MSG__DETAIL__COCOA_TEST__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'check'
#include "std_msgs/msg/detail/float64__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__cocoax_interfaces__msg__CocoaTest __attribute__((deprecated))
#else
# define DEPRECATED__cocoax_interfaces__msg__CocoaTest __declspec(deprecated)
#endif

namespace cocoax_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct CocoaTest_
{
  using Type = CocoaTest_<ContainerAllocator>;

  explicit CocoaTest_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : check(_init)
  {
    (void)_init;
  }

  explicit CocoaTest_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : check(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _check_type =
    std_msgs::msg::Float64_<ContainerAllocator>;
  _check_type check;

  // setters for named parameter idiom
  Type & set__check(
    const std_msgs::msg::Float64_<ContainerAllocator> & _arg)
  {
    this->check = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    cocoax_interfaces::msg::CocoaTest_<ContainerAllocator> *;
  using ConstRawPtr =
    const cocoax_interfaces::msg::CocoaTest_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<cocoax_interfaces::msg::CocoaTest_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<cocoax_interfaces::msg::CocoaTest_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      cocoax_interfaces::msg::CocoaTest_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<cocoax_interfaces::msg::CocoaTest_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      cocoax_interfaces::msg::CocoaTest_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<cocoax_interfaces::msg::CocoaTest_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<cocoax_interfaces::msg::CocoaTest_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<cocoax_interfaces::msg::CocoaTest_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__cocoax_interfaces__msg__CocoaTest
    std::shared_ptr<cocoax_interfaces::msg::CocoaTest_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__cocoax_interfaces__msg__CocoaTest
    std::shared_ptr<cocoax_interfaces::msg::CocoaTest_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CocoaTest_ & other) const
  {
    if (this->check != other.check) {
      return false;
    }
    return true;
  }
  bool operator!=(const CocoaTest_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CocoaTest_

// alias to use template instance with default allocator
using CocoaTest =
  cocoax_interfaces::msg::CocoaTest_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace cocoax_interfaces

#endif  // COCOAX_INTERFACES__MSG__DETAIL__COCOA_TEST__STRUCT_HPP_
