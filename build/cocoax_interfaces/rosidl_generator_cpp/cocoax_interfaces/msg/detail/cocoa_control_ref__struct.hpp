// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from cocoax_interfaces:msg/CocoaControlRef.idl
// generated code does not contain a copyright notice

#ifndef COCOAX_INTERFACES__MSG__DETAIL__COCOA_CONTROL_REF__STRUCT_HPP_
#define COCOAX_INTERFACES__MSG__DETAIL__COCOA_CONTROL_REF__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__cocoax_interfaces__msg__CocoaControlRef __attribute__((deprecated))
#else
# define DEPRECATED__cocoax_interfaces__msg__CocoaControlRef __declspec(deprecated)
#endif

namespace cocoax_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct CocoaControlRef_
{
  using Type = CocoaControlRef_<ContainerAllocator>;

  explicit CocoaControlRef_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<double, 3>::iterator, double>(this->reference_joint_position.begin(), this->reference_joint_position.end(), 0.0);
      std::fill<typename std::array<double, 3>::iterator, double>(this->reference_joint_velocity.begin(), this->reference_joint_velocity.end(), 0.0);
    }
  }

  explicit CocoaControlRef_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : reference_joint_position(_alloc),
    reference_joint_velocity(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<double, 3>::iterator, double>(this->reference_joint_position.begin(), this->reference_joint_position.end(), 0.0);
      std::fill<typename std::array<double, 3>::iterator, double>(this->reference_joint_velocity.begin(), this->reference_joint_velocity.end(), 0.0);
    }
  }

  // field types and members
  using _reference_joint_position_type =
    std::array<double, 3>;
  _reference_joint_position_type reference_joint_position;
  using _reference_joint_velocity_type =
    std::array<double, 3>;
  _reference_joint_velocity_type reference_joint_velocity;

  // setters for named parameter idiom
  Type & set__reference_joint_position(
    const std::array<double, 3> & _arg)
  {
    this->reference_joint_position = _arg;
    return *this;
  }
  Type & set__reference_joint_velocity(
    const std::array<double, 3> & _arg)
  {
    this->reference_joint_velocity = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    cocoax_interfaces::msg::CocoaControlRef_<ContainerAllocator> *;
  using ConstRawPtr =
    const cocoax_interfaces::msg::CocoaControlRef_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<cocoax_interfaces::msg::CocoaControlRef_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<cocoax_interfaces::msg::CocoaControlRef_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      cocoax_interfaces::msg::CocoaControlRef_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<cocoax_interfaces::msg::CocoaControlRef_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      cocoax_interfaces::msg::CocoaControlRef_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<cocoax_interfaces::msg::CocoaControlRef_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<cocoax_interfaces::msg::CocoaControlRef_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<cocoax_interfaces::msg::CocoaControlRef_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__cocoax_interfaces__msg__CocoaControlRef
    std::shared_ptr<cocoax_interfaces::msg::CocoaControlRef_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__cocoax_interfaces__msg__CocoaControlRef
    std::shared_ptr<cocoax_interfaces::msg::CocoaControlRef_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CocoaControlRef_ & other) const
  {
    if (this->reference_joint_position != other.reference_joint_position) {
      return false;
    }
    if (this->reference_joint_velocity != other.reference_joint_velocity) {
      return false;
    }
    return true;
  }
  bool operator!=(const CocoaControlRef_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CocoaControlRef_

// alias to use template instance with default allocator
using CocoaControlRef =
  cocoax_interfaces::msg::CocoaControlRef_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace cocoax_interfaces

#endif  // COCOAX_INTERFACES__MSG__DETAIL__COCOA_CONTROL_REF__STRUCT_HPP_
