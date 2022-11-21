// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from cocoav_interfaces:srv/CocoaVIK.idl
// generated code does not contain a copyright notice

#ifndef COCOAV_INTERFACES__SRV__DETAIL__COCOA_VIK__STRUCT_HPP_
#define COCOAV_INTERFACES__SRV__DETAIL__COCOA_VIK__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'position'
#include "geometry_msgs/msg/detail/point__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__cocoav_interfaces__srv__CocoaVIK_Request __attribute__((deprecated))
#else
# define DEPRECATED__cocoav_interfaces__srv__CocoaVIK_Request __declspec(deprecated)
#endif

namespace cocoav_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct CocoaVIK_Request_
{
  using Type = CocoaVIK_Request_<ContainerAllocator>;

  explicit CocoaVIK_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : position(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::DEFAULTS_ONLY == _init)
    {
      std::fill<typename std::array<int32_t, 2>::iterator, int32_t>(this->r.begin(), this->r.end(), 1l);
    } else if (rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      std::fill<typename std::array<int32_t, 2>::iterator, int32_t>(this->r.begin(), this->r.end(), 0l);
    }
  }

  explicit CocoaVIK_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : position(_alloc, _init),
    r(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::DEFAULTS_ONLY == _init)
    {
      std::fill<typename std::array<int32_t, 2>::iterator, int32_t>(this->r.begin(), this->r.end(), 1l);
    } else if (rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      std::fill<typename std::array<int32_t, 2>::iterator, int32_t>(this->r.begin(), this->r.end(), 0l);
    }
  }

  // field types and members
  using _position_type =
    geometry_msgs::msg::Point_<ContainerAllocator>;
  _position_type position;
  using _r_type =
    std::array<int32_t, 2>;
  _r_type r;

  // setters for named parameter idiom
  Type & set__position(
    const geometry_msgs::msg::Point_<ContainerAllocator> & _arg)
  {
    this->position = _arg;
    return *this;
  }
  Type & set__r(
    const std::array<int32_t, 2> & _arg)
  {
    this->r = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    cocoav_interfaces::srv::CocoaVIK_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const cocoav_interfaces::srv::CocoaVIK_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<cocoav_interfaces::srv::CocoaVIK_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<cocoav_interfaces::srv::CocoaVIK_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      cocoav_interfaces::srv::CocoaVIK_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<cocoav_interfaces::srv::CocoaVIK_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      cocoav_interfaces::srv::CocoaVIK_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<cocoav_interfaces::srv::CocoaVIK_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<cocoav_interfaces::srv::CocoaVIK_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<cocoav_interfaces::srv::CocoaVIK_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__cocoav_interfaces__srv__CocoaVIK_Request
    std::shared_ptr<cocoav_interfaces::srv::CocoaVIK_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__cocoav_interfaces__srv__CocoaVIK_Request
    std::shared_ptr<cocoav_interfaces::srv::CocoaVIK_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CocoaVIK_Request_ & other) const
  {
    if (this->position != other.position) {
      return false;
    }
    if (this->r != other.r) {
      return false;
    }
    return true;
  }
  bool operator!=(const CocoaVIK_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CocoaVIK_Request_

// alias to use template instance with default allocator
using CocoaVIK_Request =
  cocoav_interfaces::srv::CocoaVIK_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace cocoav_interfaces


// Include directives for member types
// Member 'jointstate'
#include "sensor_msgs/msg/detail/joint_state__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__cocoav_interfaces__srv__CocoaVIK_Response __attribute__((deprecated))
#else
# define DEPRECATED__cocoav_interfaces__srv__CocoaVIK_Response __declspec(deprecated)
#endif

namespace cocoav_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct CocoaVIK_Response_
{
  using Type = CocoaVIK_Response_<ContainerAllocator>;

  explicit CocoaVIK_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : jointstate(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->flag = false;
    }
  }

  explicit CocoaVIK_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : jointstate(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->flag = false;
    }
  }

  // field types and members
  using _jointstate_type =
    sensor_msgs::msg::JointState_<ContainerAllocator>;
  _jointstate_type jointstate;
  using _flag_type =
    bool;
  _flag_type flag;

  // setters for named parameter idiom
  Type & set__jointstate(
    const sensor_msgs::msg::JointState_<ContainerAllocator> & _arg)
  {
    this->jointstate = _arg;
    return *this;
  }
  Type & set__flag(
    const bool & _arg)
  {
    this->flag = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    cocoav_interfaces::srv::CocoaVIK_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const cocoav_interfaces::srv::CocoaVIK_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<cocoav_interfaces::srv::CocoaVIK_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<cocoav_interfaces::srv::CocoaVIK_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      cocoav_interfaces::srv::CocoaVIK_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<cocoav_interfaces::srv::CocoaVIK_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      cocoav_interfaces::srv::CocoaVIK_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<cocoav_interfaces::srv::CocoaVIK_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<cocoav_interfaces::srv::CocoaVIK_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<cocoav_interfaces::srv::CocoaVIK_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__cocoav_interfaces__srv__CocoaVIK_Response
    std::shared_ptr<cocoav_interfaces::srv::CocoaVIK_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__cocoav_interfaces__srv__CocoaVIK_Response
    std::shared_ptr<cocoav_interfaces::srv::CocoaVIK_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CocoaVIK_Response_ & other) const
  {
    if (this->jointstate != other.jointstate) {
      return false;
    }
    if (this->flag != other.flag) {
      return false;
    }
    return true;
  }
  bool operator!=(const CocoaVIK_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CocoaVIK_Response_

// alias to use template instance with default allocator
using CocoaVIK_Response =
  cocoav_interfaces::srv::CocoaVIK_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace cocoav_interfaces

namespace cocoav_interfaces
{

namespace srv
{

struct CocoaVIK
{
  using Request = cocoav_interfaces::srv::CocoaVIK_Request;
  using Response = cocoav_interfaces::srv::CocoaVIK_Response;
};

}  // namespace srv

}  // namespace cocoav_interfaces

#endif  // COCOAV_INTERFACES__SRV__DETAIL__COCOA_VIK__STRUCT_HPP_
