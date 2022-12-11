// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from cocoax_interfaces:msg/CocoaTaskSpace.idl
// generated code does not contain a copyright notice

#ifndef COCOAX_INTERFACES__MSG__DETAIL__COCOA_TASK_SPACE__STRUCT_HPP_
#define COCOAX_INTERFACES__MSG__DETAIL__COCOA_TASK_SPACE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__cocoax_interfaces__msg__CocoaTaskSpace __attribute__((deprecated))
#else
# define DEPRECATED__cocoax_interfaces__msg__CocoaTaskSpace __declspec(deprecated)
#endif

namespace cocoax_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct CocoaTaskSpace_
{
  using Type = CocoaTaskSpace_<ContainerAllocator>;

  explicit CocoaTaskSpace_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<double, 3>::iterator, double>(this->position.begin(), this->position.end(), 0.0);
      std::fill<typename std::array<double, 3>::iterator, double>(this->velocity.begin(), this->velocity.end(), 0.0);
    }
  }

  explicit CocoaTaskSpace_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : position(_alloc),
    velocity(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<double, 3>::iterator, double>(this->position.begin(), this->position.end(), 0.0);
      std::fill<typename std::array<double, 3>::iterator, double>(this->velocity.begin(), this->velocity.end(), 0.0);
    }
  }

  // field types and members
  using _position_type =
    std::array<double, 3>;
  _position_type position;
  using _velocity_type =
    std::array<double, 3>;
  _velocity_type velocity;

  // setters for named parameter idiom
  Type & set__position(
    const std::array<double, 3> & _arg)
  {
    this->position = _arg;
    return *this;
  }
  Type & set__velocity(
    const std::array<double, 3> & _arg)
  {
    this->velocity = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    cocoax_interfaces::msg::CocoaTaskSpace_<ContainerAllocator> *;
  using ConstRawPtr =
    const cocoax_interfaces::msg::CocoaTaskSpace_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<cocoax_interfaces::msg::CocoaTaskSpace_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<cocoax_interfaces::msg::CocoaTaskSpace_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      cocoax_interfaces::msg::CocoaTaskSpace_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<cocoax_interfaces::msg::CocoaTaskSpace_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      cocoax_interfaces::msg::CocoaTaskSpace_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<cocoax_interfaces::msg::CocoaTaskSpace_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<cocoax_interfaces::msg::CocoaTaskSpace_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<cocoax_interfaces::msg::CocoaTaskSpace_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__cocoax_interfaces__msg__CocoaTaskSpace
    std::shared_ptr<cocoax_interfaces::msg::CocoaTaskSpace_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__cocoax_interfaces__msg__CocoaTaskSpace
    std::shared_ptr<cocoax_interfaces::msg::CocoaTaskSpace_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CocoaTaskSpace_ & other) const
  {
    if (this->position != other.position) {
      return false;
    }
    if (this->velocity != other.velocity) {
      return false;
    }
    return true;
  }
  bool operator!=(const CocoaTaskSpace_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CocoaTaskSpace_

// alias to use template instance with default allocator
using CocoaTaskSpace =
  cocoax_interfaces::msg::CocoaTaskSpace_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace cocoax_interfaces

#endif  // COCOAX_INTERFACES__MSG__DETAIL__COCOA_TASK_SPACE__STRUCT_HPP_
