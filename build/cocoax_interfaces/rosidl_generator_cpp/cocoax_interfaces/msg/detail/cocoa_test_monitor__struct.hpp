// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from cocoax_interfaces:msg/CocoaTestMonitor.idl
// generated code does not contain a copyright notice

#ifndef COCOAX_INTERFACES__MSG__DETAIL__COCOA_TEST_MONITOR__STRUCT_HPP_
#define COCOAX_INTERFACES__MSG__DETAIL__COCOA_TEST_MONITOR__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__cocoax_interfaces__msg__CocoaTestMonitor __attribute__((deprecated))
#else
# define DEPRECATED__cocoax_interfaces__msg__CocoaTestMonitor __declspec(deprecated)
#endif

namespace cocoax_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct CocoaTestMonitor_
{
  using Type = CocoaTestMonitor_<ContainerAllocator>;

  explicit CocoaTestMonitor_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->posx = 0.0;
      this->posy = 0.0;
      this->posz = 0.0;
      this->velx = 0.0;
      this->vely = 0.0;
      this->velz = 0.0;
    }
  }

  explicit CocoaTestMonitor_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->posx = 0.0;
      this->posy = 0.0;
      this->posz = 0.0;
      this->velx = 0.0;
      this->vely = 0.0;
      this->velz = 0.0;
    }
  }

  // field types and members
  using _posx_type =
    double;
  _posx_type posx;
  using _posy_type =
    double;
  _posy_type posy;
  using _posz_type =
    double;
  _posz_type posz;
  using _velx_type =
    double;
  _velx_type velx;
  using _vely_type =
    double;
  _vely_type vely;
  using _velz_type =
    double;
  _velz_type velz;

  // setters for named parameter idiom
  Type & set__posx(
    const double & _arg)
  {
    this->posx = _arg;
    return *this;
  }
  Type & set__posy(
    const double & _arg)
  {
    this->posy = _arg;
    return *this;
  }
  Type & set__posz(
    const double & _arg)
  {
    this->posz = _arg;
    return *this;
  }
  Type & set__velx(
    const double & _arg)
  {
    this->velx = _arg;
    return *this;
  }
  Type & set__vely(
    const double & _arg)
  {
    this->vely = _arg;
    return *this;
  }
  Type & set__velz(
    const double & _arg)
  {
    this->velz = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    cocoax_interfaces::msg::CocoaTestMonitor_<ContainerAllocator> *;
  using ConstRawPtr =
    const cocoax_interfaces::msg::CocoaTestMonitor_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<cocoax_interfaces::msg::CocoaTestMonitor_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<cocoax_interfaces::msg::CocoaTestMonitor_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      cocoax_interfaces::msg::CocoaTestMonitor_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<cocoax_interfaces::msg::CocoaTestMonitor_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      cocoax_interfaces::msg::CocoaTestMonitor_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<cocoax_interfaces::msg::CocoaTestMonitor_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<cocoax_interfaces::msg::CocoaTestMonitor_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<cocoax_interfaces::msg::CocoaTestMonitor_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__cocoax_interfaces__msg__CocoaTestMonitor
    std::shared_ptr<cocoax_interfaces::msg::CocoaTestMonitor_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__cocoax_interfaces__msg__CocoaTestMonitor
    std::shared_ptr<cocoax_interfaces::msg::CocoaTestMonitor_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CocoaTestMonitor_ & other) const
  {
    if (this->posx != other.posx) {
      return false;
    }
    if (this->posy != other.posy) {
      return false;
    }
    if (this->posz != other.posz) {
      return false;
    }
    if (this->velx != other.velx) {
      return false;
    }
    if (this->vely != other.vely) {
      return false;
    }
    if (this->velz != other.velz) {
      return false;
    }
    return true;
  }
  bool operator!=(const CocoaTestMonitor_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CocoaTestMonitor_

// alias to use template instance with default allocator
using CocoaTestMonitor =
  cocoax_interfaces::msg::CocoaTestMonitor_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace cocoax_interfaces

#endif  // COCOAX_INTERFACES__MSG__DETAIL__COCOA_TEST_MONITOR__STRUCT_HPP_
