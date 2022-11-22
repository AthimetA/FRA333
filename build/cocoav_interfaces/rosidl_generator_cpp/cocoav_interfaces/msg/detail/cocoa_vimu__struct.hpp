// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from cocoav_interfaces:msg/CocoaVIMU.idl
// generated code does not contain a copyright notice

#ifndef COCOAV_INTERFACES__MSG__DETAIL__COCOA_VIMU__STRUCT_HPP_
#define COCOAV_INTERFACES__MSG__DETAIL__COCOA_VIMU__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__cocoav_interfaces__msg__CocoaVIMU __attribute__((deprecated))
#else
# define DEPRECATED__cocoav_interfaces__msg__CocoaVIMU __declspec(deprecated)
#endif

namespace cocoav_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct CocoaVIMU_
{
  using Type = CocoaVIMU_<ContainerAllocator>;

  explicit CocoaVIMU_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->time_ms = 0ll;
      std::fill<typename std::array<float, 3>::iterator, float>(this->angular_velocity.begin(), this->angular_velocity.end(), 0.0f);
      std::fill<typename std::array<float, 3>::iterator, float>(this->linear_acceleration.begin(), this->linear_acceleration.end(), 0.0f);
    }
  }

  explicit CocoaVIMU_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : angular_velocity(_alloc),
    linear_acceleration(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->time_ms = 0ll;
      std::fill<typename std::array<float, 3>::iterator, float>(this->angular_velocity.begin(), this->angular_velocity.end(), 0.0f);
      std::fill<typename std::array<float, 3>::iterator, float>(this->linear_acceleration.begin(), this->linear_acceleration.end(), 0.0f);
    }
  }

  // field types and members
  using _time_ms_type =
    int64_t;
  _time_ms_type time_ms;
  using _angular_velocity_type =
    std::array<float, 3>;
  _angular_velocity_type angular_velocity;
  using _linear_acceleration_type =
    std::array<float, 3>;
  _linear_acceleration_type linear_acceleration;

  // setters for named parameter idiom
  Type & set__time_ms(
    const int64_t & _arg)
  {
    this->time_ms = _arg;
    return *this;
  }
  Type & set__angular_velocity(
    const std::array<float, 3> & _arg)
  {
    this->angular_velocity = _arg;
    return *this;
  }
  Type & set__linear_acceleration(
    const std::array<float, 3> & _arg)
  {
    this->linear_acceleration = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    cocoav_interfaces::msg::CocoaVIMU_<ContainerAllocator> *;
  using ConstRawPtr =
    const cocoav_interfaces::msg::CocoaVIMU_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<cocoav_interfaces::msg::CocoaVIMU_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<cocoav_interfaces::msg::CocoaVIMU_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      cocoav_interfaces::msg::CocoaVIMU_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<cocoav_interfaces::msg::CocoaVIMU_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      cocoav_interfaces::msg::CocoaVIMU_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<cocoav_interfaces::msg::CocoaVIMU_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<cocoav_interfaces::msg::CocoaVIMU_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<cocoav_interfaces::msg::CocoaVIMU_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__cocoav_interfaces__msg__CocoaVIMU
    std::shared_ptr<cocoav_interfaces::msg::CocoaVIMU_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__cocoav_interfaces__msg__CocoaVIMU
    std::shared_ptr<cocoav_interfaces::msg::CocoaVIMU_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CocoaVIMU_ & other) const
  {
    if (this->time_ms != other.time_ms) {
      return false;
    }
    if (this->angular_velocity != other.angular_velocity) {
      return false;
    }
    if (this->linear_acceleration != other.linear_acceleration) {
      return false;
    }
    return true;
  }
  bool operator!=(const CocoaVIMU_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CocoaVIMU_

// alias to use template instance with default allocator
using CocoaVIMU =
  cocoav_interfaces::msg::CocoaVIMU_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace cocoav_interfaces

#endif  // COCOAV_INTERFACES__MSG__DETAIL__COCOA_VIMU__STRUCT_HPP_
