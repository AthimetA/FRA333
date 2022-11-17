// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from xicro_interfaces:msg/DemoOutput.idl
// generated code does not contain a copyright notice

#ifndef XICRO_INTERFACES__MSG__DETAIL__DEMO_OUTPUT__STRUCT_HPP_
#define XICRO_INTERFACES__MSG__DETAIL__DEMO_OUTPUT__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__xicro_interfaces__msg__DemoOutput __attribute__((deprecated))
#else
# define DEPRECATED__xicro_interfaces__msg__DemoOutput __declspec(deprecated)
#endif

namespace xicro_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct DemoOutput_
{
  using Type = DemoOutput_<ContainerAllocator>;

  explicit DemoOutput_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->servo = 0;
      this->buzzer = 0;
      std::fill<typename std::array<bool, 4>::iterator, bool>(this->led.begin(), this->led.end(), false);
    }
  }

  explicit DemoOutput_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : led(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->servo = 0;
      this->buzzer = 0;
      std::fill<typename std::array<bool, 4>::iterator, bool>(this->led.begin(), this->led.end(), false);
    }
  }

  // field types and members
  using _servo_type =
    uint8_t;
  _servo_type servo;
  using _buzzer_type =
    uint8_t;
  _buzzer_type buzzer;
  using _led_type =
    std::array<bool, 4>;
  _led_type led;

  // setters for named parameter idiom
  Type & set__servo(
    const uint8_t & _arg)
  {
    this->servo = _arg;
    return *this;
  }
  Type & set__buzzer(
    const uint8_t & _arg)
  {
    this->buzzer = _arg;
    return *this;
  }
  Type & set__led(
    const std::array<bool, 4> & _arg)
  {
    this->led = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    xicro_interfaces::msg::DemoOutput_<ContainerAllocator> *;
  using ConstRawPtr =
    const xicro_interfaces::msg::DemoOutput_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<xicro_interfaces::msg::DemoOutput_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<xicro_interfaces::msg::DemoOutput_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      xicro_interfaces::msg::DemoOutput_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<xicro_interfaces::msg::DemoOutput_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      xicro_interfaces::msg::DemoOutput_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<xicro_interfaces::msg::DemoOutput_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<xicro_interfaces::msg::DemoOutput_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<xicro_interfaces::msg::DemoOutput_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__xicro_interfaces__msg__DemoOutput
    std::shared_ptr<xicro_interfaces::msg::DemoOutput_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__xicro_interfaces__msg__DemoOutput
    std::shared_ptr<xicro_interfaces::msg::DemoOutput_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DemoOutput_ & other) const
  {
    if (this->servo != other.servo) {
      return false;
    }
    if (this->buzzer != other.buzzer) {
      return false;
    }
    if (this->led != other.led) {
      return false;
    }
    return true;
  }
  bool operator!=(const DemoOutput_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DemoOutput_

// alias to use template instance with default allocator
using DemoOutput =
  xicro_interfaces::msg::DemoOutput_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace xicro_interfaces

#endif  // XICRO_INTERFACES__MSG__DETAIL__DEMO_OUTPUT__STRUCT_HPP_
