// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from xicro_interfaces:msg/PoseWithCovariance.idl
// generated code does not contain a copyright notice

#ifndef XICRO_INTERFACES__MSG__DETAIL__POSE_WITH_COVARIANCE__STRUCT_HPP_
#define XICRO_INTERFACES__MSG__DETAIL__POSE_WITH_COVARIANCE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__xicro_interfaces__msg__PoseWithCovariance __attribute__((deprecated))
#else
# define DEPRECATED__xicro_interfaces__msg__PoseWithCovariance __declspec(deprecated)
#endif

namespace xicro_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PoseWithCovariance_
{
  using Type = PoseWithCovariance_<ContainerAllocator>;

  explicit PoseWithCovariance_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<float, 3>::iterator, float>(this->pose.begin(), this->pose.end(), 0.0f);
      std::fill<typename std::array<float, 36>::iterator, float>(this->covariance.begin(), this->covariance.end(), 0.0f);
    }
  }

  explicit PoseWithCovariance_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : pose(_alloc),
    covariance(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<float, 3>::iterator, float>(this->pose.begin(), this->pose.end(), 0.0f);
      std::fill<typename std::array<float, 36>::iterator, float>(this->covariance.begin(), this->covariance.end(), 0.0f);
    }
  }

  // field types and members
  using _pose_type =
    std::array<float, 3>;
  _pose_type pose;
  using _covariance_type =
    std::array<float, 36>;
  _covariance_type covariance;

  // setters for named parameter idiom
  Type & set__pose(
    const std::array<float, 3> & _arg)
  {
    this->pose = _arg;
    return *this;
  }
  Type & set__covariance(
    const std::array<float, 36> & _arg)
  {
    this->covariance = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    xicro_interfaces::msg::PoseWithCovariance_<ContainerAllocator> *;
  using ConstRawPtr =
    const xicro_interfaces::msg::PoseWithCovariance_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<xicro_interfaces::msg::PoseWithCovariance_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<xicro_interfaces::msg::PoseWithCovariance_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      xicro_interfaces::msg::PoseWithCovariance_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<xicro_interfaces::msg::PoseWithCovariance_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      xicro_interfaces::msg::PoseWithCovariance_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<xicro_interfaces::msg::PoseWithCovariance_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<xicro_interfaces::msg::PoseWithCovariance_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<xicro_interfaces::msg::PoseWithCovariance_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__xicro_interfaces__msg__PoseWithCovariance
    std::shared_ptr<xicro_interfaces::msg::PoseWithCovariance_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__xicro_interfaces__msg__PoseWithCovariance
    std::shared_ptr<xicro_interfaces::msg::PoseWithCovariance_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PoseWithCovariance_ & other) const
  {
    if (this->pose != other.pose) {
      return false;
    }
    if (this->covariance != other.covariance) {
      return false;
    }
    return true;
  }
  bool operator!=(const PoseWithCovariance_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PoseWithCovariance_

// alias to use template instance with default allocator
using PoseWithCovariance =
  xicro_interfaces::msg::PoseWithCovariance_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace xicro_interfaces

#endif  // XICRO_INTERFACES__MSG__DETAIL__POSE_WITH_COVARIANCE__STRUCT_HPP_
