// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from cocoav_interfaces:srv/CocoaFK.idl
// generated code does not contain a copyright notice

#ifndef COCOAV_INTERFACES__SRV__DETAIL__COCOA_FK__STRUCT_HPP_
#define COCOAV_INTERFACES__SRV__DETAIL__COCOA_FK__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'jointstate'
#include "sensor_msgs/msg/detail/joint_state__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__cocoav_interfaces__srv__CocoaFK_Request __attribute__((deprecated))
#else
# define DEPRECATED__cocoav_interfaces__srv__CocoaFK_Request __declspec(deprecated)
#endif

namespace cocoav_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct CocoaFK_Request_
{
  using Type = CocoaFK_Request_<ContainerAllocator>;

  explicit CocoaFK_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : jointstate(_init)
  {
    (void)_init;
  }

  explicit CocoaFK_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : jointstate(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _jointstate_type =
    sensor_msgs::msg::JointState_<ContainerAllocator>;
  _jointstate_type jointstate;

  // setters for named parameter idiom
  Type & set__jointstate(
    const sensor_msgs::msg::JointState_<ContainerAllocator> & _arg)
  {
    this->jointstate = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    cocoav_interfaces::srv::CocoaFK_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const cocoav_interfaces::srv::CocoaFK_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<cocoav_interfaces::srv::CocoaFK_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<cocoav_interfaces::srv::CocoaFK_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      cocoav_interfaces::srv::CocoaFK_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<cocoav_interfaces::srv::CocoaFK_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      cocoav_interfaces::srv::CocoaFK_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<cocoav_interfaces::srv::CocoaFK_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<cocoav_interfaces::srv::CocoaFK_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<cocoav_interfaces::srv::CocoaFK_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__cocoav_interfaces__srv__CocoaFK_Request
    std::shared_ptr<cocoav_interfaces::srv::CocoaFK_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__cocoav_interfaces__srv__CocoaFK_Request
    std::shared_ptr<cocoav_interfaces::srv::CocoaFK_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CocoaFK_Request_ & other) const
  {
    if (this->jointstate != other.jointstate) {
      return false;
    }
    return true;
  }
  bool operator!=(const CocoaFK_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CocoaFK_Request_

// alias to use template instance with default allocator
using CocoaFK_Request =
  cocoav_interfaces::srv::CocoaFK_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace cocoav_interfaces


// Include directives for member types
// Member 'positionendeffector'
#include "geometry_msgs/msg/detail/point__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__cocoav_interfaces__srv__CocoaFK_Response __attribute__((deprecated))
#else
# define DEPRECATED__cocoav_interfaces__srv__CocoaFK_Response __declspec(deprecated)
#endif

namespace cocoav_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct CocoaFK_Response_
{
  using Type = CocoaFK_Response_<ContainerAllocator>;

  explicit CocoaFK_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : positionendeffector(_init)
  {
    (void)_init;
  }

  explicit CocoaFK_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : positionendeffector(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _positionendeffector_type =
    geometry_msgs::msg::Point_<ContainerAllocator>;
  _positionendeffector_type positionendeffector;

  // setters for named parameter idiom
  Type & set__positionendeffector(
    const geometry_msgs::msg::Point_<ContainerAllocator> & _arg)
  {
    this->positionendeffector = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    cocoav_interfaces::srv::CocoaFK_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const cocoav_interfaces::srv::CocoaFK_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<cocoav_interfaces::srv::CocoaFK_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<cocoav_interfaces::srv::CocoaFK_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      cocoav_interfaces::srv::CocoaFK_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<cocoav_interfaces::srv::CocoaFK_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      cocoav_interfaces::srv::CocoaFK_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<cocoav_interfaces::srv::CocoaFK_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<cocoav_interfaces::srv::CocoaFK_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<cocoav_interfaces::srv::CocoaFK_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__cocoav_interfaces__srv__CocoaFK_Response
    std::shared_ptr<cocoav_interfaces::srv::CocoaFK_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__cocoav_interfaces__srv__CocoaFK_Response
    std::shared_ptr<cocoav_interfaces::srv::CocoaFK_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CocoaFK_Response_ & other) const
  {
    if (this->positionendeffector != other.positionendeffector) {
      return false;
    }
    return true;
  }
  bool operator!=(const CocoaFK_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CocoaFK_Response_

// alias to use template instance with default allocator
using CocoaFK_Response =
  cocoav_interfaces::srv::CocoaFK_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace cocoav_interfaces

namespace cocoav_interfaces
{

namespace srv
{

struct CocoaFK
{
  using Request = cocoav_interfaces::srv::CocoaFK_Request;
  using Response = cocoav_interfaces::srv::CocoaFK_Response;
};

}  // namespace srv

}  // namespace cocoav_interfaces

#endif  // COCOAV_INTERFACES__SRV__DETAIL__COCOA_FK__STRUCT_HPP_
