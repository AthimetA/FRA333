// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from xicro_interfaces:msg/DemoInput.idl
// generated code does not contain a copyright notice

#ifndef XICRO_INTERFACES__MSG__DETAIL__DEMO_INPUT__STRUCT_HPP_
#define XICRO_INTERFACES__MSG__DETAIL__DEMO_INPUT__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__xicro_interfaces__msg__DemoInput __attribute__((deprecated))
#else
# define DEPRECATED__xicro_interfaces__msg__DemoInput __declspec(deprecated)
#endif

namespace xicro_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct DemoInput_
{
  using Type = DemoInput_<ContainerAllocator>;

  explicit DemoInput_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<bool, 3>::iterator, bool>(this->buttonstate.begin(), this->buttonstate.end(), false);
      this->poten = 0.0f;
    }
  }

  explicit DemoInput_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : buttonstate(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<bool, 3>::iterator, bool>(this->buttonstate.begin(), this->buttonstate.end(), false);
      this->poten = 0.0f;
    }
  }

  // field types and members
  using _buttonstate_type =
    std::array<bool, 3>;
  _buttonstate_type buttonstate;
  using _poten_type =
    float;
  _poten_type poten;

  // setters for named parameter idiom
  Type & set__buttonstate(
    const std::array<bool, 3> & _arg)
  {
    this->buttonstate = _arg;
    return *this;
  }
  Type & set__poten(
    const float & _arg)
  {
    this->poten = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    xicro_interfaces::msg::DemoInput_<ContainerAllocator> *;
  using ConstRawPtr =
    const xicro_interfaces::msg::DemoInput_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<xicro_interfaces::msg::DemoInput_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<xicro_interfaces::msg::DemoInput_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      xicro_interfaces::msg::DemoInput_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<xicro_interfaces::msg::DemoInput_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      xicro_interfaces::msg::DemoInput_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<xicro_interfaces::msg::DemoInput_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<xicro_interfaces::msg::DemoInput_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<xicro_interfaces::msg::DemoInput_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__xicro_interfaces__msg__DemoInput
    std::shared_ptr<xicro_interfaces::msg::DemoInput_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__xicro_interfaces__msg__DemoInput
    std::shared_ptr<xicro_interfaces::msg::DemoInput_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DemoInput_ & other) const
  {
    if (this->buttonstate != other.buttonstate) {
      return false;
    }
    if (this->poten != other.poten) {
      return false;
    }
    return true;
  }
  bool operator!=(const DemoInput_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DemoInput_

// alias to use template instance with default allocator
using DemoInput =
  xicro_interfaces::msg::DemoInput_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace xicro_interfaces

#endif  // XICRO_INTERFACES__MSG__DETAIL__DEMO_INPUT__STRUCT_HPP_
