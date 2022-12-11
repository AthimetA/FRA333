// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from cocoax_interfaces:msg/CocoaPositionProximity.idl
// generated code does not contain a copyright notice

#ifndef COCOAX_INTERFACES__MSG__DETAIL__COCOA_POSITION_PROXIMITY__STRUCT_HPP_
#define COCOAX_INTERFACES__MSG__DETAIL__COCOA_POSITION_PROXIMITY__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__cocoax_interfaces__msg__CocoaPositionProximity __attribute__((deprecated))
#else
# define DEPRECATED__cocoax_interfaces__msg__CocoaPositionProximity __declspec(deprecated)
#endif

namespace cocoax_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct CocoaPositionProximity_
{
  using Type = CocoaPositionProximity_<ContainerAllocator>;

  explicit CocoaPositionProximity_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<double, 3>::iterator, double>(this->position.begin(), this->position.end(), 0.0);
    }
  }

  explicit CocoaPositionProximity_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : position(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<double, 3>::iterator, double>(this->position.begin(), this->position.end(), 0.0);
    }
  }

  // field types and members
  using _position_type =
    std::array<double, 3>;
  _position_type position;

  // setters for named parameter idiom
  Type & set__position(
    const std::array<double, 3> & _arg)
  {
    this->position = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    cocoax_interfaces::msg::CocoaPositionProximity_<ContainerAllocator> *;
  using ConstRawPtr =
    const cocoax_interfaces::msg::CocoaPositionProximity_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<cocoax_interfaces::msg::CocoaPositionProximity_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<cocoax_interfaces::msg::CocoaPositionProximity_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      cocoax_interfaces::msg::CocoaPositionProximity_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<cocoax_interfaces::msg::CocoaPositionProximity_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      cocoax_interfaces::msg::CocoaPositionProximity_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<cocoax_interfaces::msg::CocoaPositionProximity_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<cocoax_interfaces::msg::CocoaPositionProximity_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<cocoax_interfaces::msg::CocoaPositionProximity_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__cocoax_interfaces__msg__CocoaPositionProximity
    std::shared_ptr<cocoax_interfaces::msg::CocoaPositionProximity_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__cocoax_interfaces__msg__CocoaPositionProximity
    std::shared_ptr<cocoax_interfaces::msg::CocoaPositionProximity_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CocoaPositionProximity_ & other) const
  {
    if (this->position != other.position) {
      return false;
    }
    return true;
  }
  bool operator!=(const CocoaPositionProximity_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CocoaPositionProximity_

// alias to use template instance with default allocator
using CocoaPositionProximity =
  cocoax_interfaces::msg::CocoaPositionProximity_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace cocoax_interfaces

#endif  // COCOAX_INTERFACES__MSG__DETAIL__COCOA_POSITION_PROXIMITY__STRUCT_HPP_
