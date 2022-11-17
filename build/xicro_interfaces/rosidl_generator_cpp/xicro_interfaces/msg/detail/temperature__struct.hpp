// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from xicro_interfaces:msg/Temperature.idl
// generated code does not contain a copyright notice

#ifndef XICRO_INTERFACES__MSG__DETAIL__TEMPERATURE__STRUCT_HPP_
#define XICRO_INTERFACES__MSG__DETAIL__TEMPERATURE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__xicro_interfaces__msg__Temperature __attribute__((deprecated))
#else
# define DEPRECATED__xicro_interfaces__msg__Temperature __declspec(deprecated)
#endif

namespace xicro_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Temperature_
{
  using Type = Temperature_<ContainerAllocator>;

  explicit Temperature_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->temperature = 0.0f;
      this->variance = 0.0f;
    }
  }

  explicit Temperature_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->temperature = 0.0f;
      this->variance = 0.0f;
    }
  }

  // field types and members
  using _temperature_type =
    float;
  _temperature_type temperature;
  using _variance_type =
    float;
  _variance_type variance;

  // setters for named parameter idiom
  Type & set__temperature(
    const float & _arg)
  {
    this->temperature = _arg;
    return *this;
  }
  Type & set__variance(
    const float & _arg)
  {
    this->variance = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    xicro_interfaces::msg::Temperature_<ContainerAllocator> *;
  using ConstRawPtr =
    const xicro_interfaces::msg::Temperature_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<xicro_interfaces::msg::Temperature_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<xicro_interfaces::msg::Temperature_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      xicro_interfaces::msg::Temperature_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<xicro_interfaces::msg::Temperature_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      xicro_interfaces::msg::Temperature_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<xicro_interfaces::msg::Temperature_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<xicro_interfaces::msg::Temperature_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<xicro_interfaces::msg::Temperature_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__xicro_interfaces__msg__Temperature
    std::shared_ptr<xicro_interfaces::msg::Temperature_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__xicro_interfaces__msg__Temperature
    std::shared_ptr<xicro_interfaces::msg::Temperature_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Temperature_ & other) const
  {
    if (this->temperature != other.temperature) {
      return false;
    }
    if (this->variance != other.variance) {
      return false;
    }
    return true;
  }
  bool operator!=(const Temperature_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Temperature_

// alias to use template instance with default allocator
using Temperature =
  xicro_interfaces::msg::Temperature_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace xicro_interfaces

#endif  // XICRO_INTERFACES__MSG__DETAIL__TEMPERATURE__STRUCT_HPP_
