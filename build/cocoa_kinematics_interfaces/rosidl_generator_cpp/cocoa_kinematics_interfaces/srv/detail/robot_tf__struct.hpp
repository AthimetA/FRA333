// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from cocoa_kinematics_interfaces:srv/RobotTF.idl
// generated code does not contain a copyright notice

#ifndef COCOA_KINEMATICS_INTERFACES__SRV__DETAIL__ROBOT_TF__STRUCT_HPP_
#define COCOA_KINEMATICS_INTERFACES__SRV__DETAIL__ROBOT_TF__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'jointconfig'
#include "sensor_msgs/msg/detail/joint_state__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__cocoa_kinematics_interfaces__srv__RobotTF_Request __attribute__((deprecated))
#else
# define DEPRECATED__cocoa_kinematics_interfaces__srv__RobotTF_Request __declspec(deprecated)
#endif

namespace cocoa_kinematics_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct RobotTF_Request_
{
  using Type = RobotTF_Request_<ContainerAllocator>;

  explicit RobotTF_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : jointconfig(_init)
  {
    (void)_init;
  }

  explicit RobotTF_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : jointconfig(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _jointconfig_type =
    sensor_msgs::msg::JointState_<ContainerAllocator>;
  _jointconfig_type jointconfig;

  // setters for named parameter idiom
  Type & set__jointconfig(
    const sensor_msgs::msg::JointState_<ContainerAllocator> & _arg)
  {
    this->jointconfig = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    cocoa_kinematics_interfaces::srv::RobotTF_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const cocoa_kinematics_interfaces::srv::RobotTF_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<cocoa_kinematics_interfaces::srv::RobotTF_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<cocoa_kinematics_interfaces::srv::RobotTF_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      cocoa_kinematics_interfaces::srv::RobotTF_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<cocoa_kinematics_interfaces::srv::RobotTF_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      cocoa_kinematics_interfaces::srv::RobotTF_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<cocoa_kinematics_interfaces::srv::RobotTF_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<cocoa_kinematics_interfaces::srv::RobotTF_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<cocoa_kinematics_interfaces::srv::RobotTF_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__cocoa_kinematics_interfaces__srv__RobotTF_Request
    std::shared_ptr<cocoa_kinematics_interfaces::srv::RobotTF_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__cocoa_kinematics_interfaces__srv__RobotTF_Request
    std::shared_ptr<cocoa_kinematics_interfaces::srv::RobotTF_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RobotTF_Request_ & other) const
  {
    if (this->jointconfig != other.jointconfig) {
      return false;
    }
    return true;
  }
  bool operator!=(const RobotTF_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RobotTF_Request_

// alias to use template instance with default allocator
using RobotTF_Request =
  cocoa_kinematics_interfaces::srv::RobotTF_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace cocoa_kinematics_interfaces


// Include directives for member types
// Member 'positionviabase'
#include "geometry_msgs/msg/detail/point__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__cocoa_kinematics_interfaces__srv__RobotTF_Response __attribute__((deprecated))
#else
# define DEPRECATED__cocoa_kinematics_interfaces__srv__RobotTF_Response __declspec(deprecated)
#endif

namespace cocoa_kinematics_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct RobotTF_Response_
{
  using Type = RobotTF_Response_<ContainerAllocator>;

  explicit RobotTF_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : positionviabase(_init)
  {
    (void)_init;
  }

  explicit RobotTF_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : positionviabase(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _positionviabase_type =
    geometry_msgs::msg::Point_<ContainerAllocator>;
  _positionviabase_type positionviabase;

  // setters for named parameter idiom
  Type & set__positionviabase(
    const geometry_msgs::msg::Point_<ContainerAllocator> & _arg)
  {
    this->positionviabase = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    cocoa_kinematics_interfaces::srv::RobotTF_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const cocoa_kinematics_interfaces::srv::RobotTF_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<cocoa_kinematics_interfaces::srv::RobotTF_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<cocoa_kinematics_interfaces::srv::RobotTF_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      cocoa_kinematics_interfaces::srv::RobotTF_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<cocoa_kinematics_interfaces::srv::RobotTF_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      cocoa_kinematics_interfaces::srv::RobotTF_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<cocoa_kinematics_interfaces::srv::RobotTF_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<cocoa_kinematics_interfaces::srv::RobotTF_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<cocoa_kinematics_interfaces::srv::RobotTF_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__cocoa_kinematics_interfaces__srv__RobotTF_Response
    std::shared_ptr<cocoa_kinematics_interfaces::srv::RobotTF_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__cocoa_kinematics_interfaces__srv__RobotTF_Response
    std::shared_ptr<cocoa_kinematics_interfaces::srv::RobotTF_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RobotTF_Response_ & other) const
  {
    if (this->positionviabase != other.positionviabase) {
      return false;
    }
    return true;
  }
  bool operator!=(const RobotTF_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RobotTF_Response_

// alias to use template instance with default allocator
using RobotTF_Response =
  cocoa_kinematics_interfaces::srv::RobotTF_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace cocoa_kinematics_interfaces

namespace cocoa_kinematics_interfaces
{

namespace srv
{

struct RobotTF
{
  using Request = cocoa_kinematics_interfaces::srv::RobotTF_Request;
  using Response = cocoa_kinematics_interfaces::srv::RobotTF_Response;
};

}  // namespace srv

}  // namespace cocoa_kinematics_interfaces

#endif  // COCOA_KINEMATICS_INTERFACES__SRV__DETAIL__ROBOT_TF__STRUCT_HPP_
