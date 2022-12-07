// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from cocoax_interfaces:srv/CocoaXIK.idl
// generated code does not contain a copyright notice

#ifndef COCOAX_INTERFACES__SRV__DETAIL__COCOA_XIK__STRUCT_HPP_
#define COCOAX_INTERFACES__SRV__DETAIL__COCOA_XIK__STRUCT_HPP_

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
# define DEPRECATED__cocoax_interfaces__srv__CocoaXIK_Request __attribute__((deprecated))
#else
# define DEPRECATED__cocoax_interfaces__srv__CocoaXIK_Request __declspec(deprecated)
#endif

namespace cocoax_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct CocoaXIK_Request_
{
  using Type = CocoaXIK_Request_<ContainerAllocator>;

  explicit CocoaXIK_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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

  explicit CocoaXIK_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    cocoax_interfaces::srv::CocoaXIK_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const cocoax_interfaces::srv::CocoaXIK_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<cocoax_interfaces::srv::CocoaXIK_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<cocoax_interfaces::srv::CocoaXIK_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      cocoax_interfaces::srv::CocoaXIK_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<cocoax_interfaces::srv::CocoaXIK_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      cocoax_interfaces::srv::CocoaXIK_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<cocoax_interfaces::srv::CocoaXIK_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<cocoax_interfaces::srv::CocoaXIK_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<cocoax_interfaces::srv::CocoaXIK_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__cocoax_interfaces__srv__CocoaXIK_Request
    std::shared_ptr<cocoax_interfaces::srv::CocoaXIK_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__cocoax_interfaces__srv__CocoaXIK_Request
    std::shared_ptr<cocoax_interfaces::srv::CocoaXIK_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CocoaXIK_Request_ & other) const
  {
    if (this->position != other.position) {
      return false;
    }
    if (this->r != other.r) {
      return false;
    }
    return true;
  }
  bool operator!=(const CocoaXIK_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CocoaXIK_Request_

// alias to use template instance with default allocator
using CocoaXIK_Request =
  cocoax_interfaces::srv::CocoaXIK_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace cocoax_interfaces


// Include directives for member types
// Member 'jointstate'
#include "sensor_msgs/msg/detail/joint_state__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__cocoax_interfaces__srv__CocoaXIK_Response __attribute__((deprecated))
#else
# define DEPRECATED__cocoax_interfaces__srv__CocoaXIK_Response __declspec(deprecated)
#endif

namespace cocoax_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct CocoaXIK_Response_
{
  using Type = CocoaXIK_Response_<ContainerAllocator>;

  explicit CocoaXIK_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : jointstate(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->flag = false;
    }
  }

  explicit CocoaXIK_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    cocoax_interfaces::srv::CocoaXIK_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const cocoax_interfaces::srv::CocoaXIK_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<cocoax_interfaces::srv::CocoaXIK_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<cocoax_interfaces::srv::CocoaXIK_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      cocoax_interfaces::srv::CocoaXIK_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<cocoax_interfaces::srv::CocoaXIK_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      cocoax_interfaces::srv::CocoaXIK_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<cocoax_interfaces::srv::CocoaXIK_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<cocoax_interfaces::srv::CocoaXIK_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<cocoax_interfaces::srv::CocoaXIK_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__cocoax_interfaces__srv__CocoaXIK_Response
    std::shared_ptr<cocoax_interfaces::srv::CocoaXIK_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__cocoax_interfaces__srv__CocoaXIK_Response
    std::shared_ptr<cocoax_interfaces::srv::CocoaXIK_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CocoaXIK_Response_ & other) const
  {
    if (this->jointstate != other.jointstate) {
      return false;
    }
    if (this->flag != other.flag) {
      return false;
    }
    return true;
  }
  bool operator!=(const CocoaXIK_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CocoaXIK_Response_

// alias to use template instance with default allocator
using CocoaXIK_Response =
  cocoax_interfaces::srv::CocoaXIK_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace cocoax_interfaces

namespace cocoax_interfaces
{

namespace srv
{

struct CocoaXIK
{
  using Request = cocoax_interfaces::srv::CocoaXIK_Request;
  using Response = cocoax_interfaces::srv::CocoaXIK_Response;
};

}  // namespace srv

}  // namespace cocoax_interfaces

#endif  // COCOAX_INTERFACES__SRV__DETAIL__COCOA_XIK__STRUCT_HPP_
