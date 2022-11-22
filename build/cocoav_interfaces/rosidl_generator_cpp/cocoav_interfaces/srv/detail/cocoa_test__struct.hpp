// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from cocoav_interfaces:srv/CocoaTest.idl
// generated code does not contain a copyright notice

#ifndef COCOAV_INTERFACES__SRV__DETAIL__COCOA_TEST__STRUCT_HPP_
#define COCOAV_INTERFACES__SRV__DETAIL__COCOA_TEST__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'check'
#include "std_msgs/msg/detail/float64__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__cocoav_interfaces__srv__CocoaTest_Request __attribute__((deprecated))
#else
# define DEPRECATED__cocoav_interfaces__srv__CocoaTest_Request __declspec(deprecated)
#endif

namespace cocoav_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct CocoaTest_Request_
{
  using Type = CocoaTest_Request_<ContainerAllocator>;

  explicit CocoaTest_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : check(_init)
  {
    (void)_init;
  }

  explicit CocoaTest_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : check(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _check_type =
    std_msgs::msg::Float64_<ContainerAllocator>;
  _check_type check;

  // setters for named parameter idiom
  Type & set__check(
    const std_msgs::msg::Float64_<ContainerAllocator> & _arg)
  {
    this->check = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    cocoav_interfaces::srv::CocoaTest_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const cocoav_interfaces::srv::CocoaTest_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<cocoav_interfaces::srv::CocoaTest_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<cocoav_interfaces::srv::CocoaTest_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      cocoav_interfaces::srv::CocoaTest_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<cocoav_interfaces::srv::CocoaTest_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      cocoav_interfaces::srv::CocoaTest_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<cocoav_interfaces::srv::CocoaTest_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<cocoav_interfaces::srv::CocoaTest_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<cocoav_interfaces::srv::CocoaTest_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__cocoav_interfaces__srv__CocoaTest_Request
    std::shared_ptr<cocoav_interfaces::srv::CocoaTest_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__cocoav_interfaces__srv__CocoaTest_Request
    std::shared_ptr<cocoav_interfaces::srv::CocoaTest_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CocoaTest_Request_ & other) const
  {
    if (this->check != other.check) {
      return false;
    }
    return true;
  }
  bool operator!=(const CocoaTest_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CocoaTest_Request_

// alias to use template instance with default allocator
using CocoaTest_Request =
  cocoav_interfaces::srv::CocoaTest_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace cocoav_interfaces


#ifndef _WIN32
# define DEPRECATED__cocoav_interfaces__srv__CocoaTest_Response __attribute__((deprecated))
#else
# define DEPRECATED__cocoav_interfaces__srv__CocoaTest_Response __declspec(deprecated)
#endif

namespace cocoav_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct CocoaTest_Response_
{
  using Type = CocoaTest_Response_<ContainerAllocator>;

  explicit CocoaTest_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit CocoaTest_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  // field types and members
  using _structure_needs_at_least_one_member_type =
    uint8_t;
  _structure_needs_at_least_one_member_type structure_needs_at_least_one_member;


  // constant declarations

  // pointer types
  using RawPtr =
    cocoav_interfaces::srv::CocoaTest_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const cocoav_interfaces::srv::CocoaTest_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<cocoav_interfaces::srv::CocoaTest_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<cocoav_interfaces::srv::CocoaTest_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      cocoav_interfaces::srv::CocoaTest_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<cocoav_interfaces::srv::CocoaTest_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      cocoav_interfaces::srv::CocoaTest_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<cocoav_interfaces::srv::CocoaTest_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<cocoav_interfaces::srv::CocoaTest_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<cocoav_interfaces::srv::CocoaTest_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__cocoav_interfaces__srv__CocoaTest_Response
    std::shared_ptr<cocoav_interfaces::srv::CocoaTest_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__cocoav_interfaces__srv__CocoaTest_Response
    std::shared_ptr<cocoav_interfaces::srv::CocoaTest_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CocoaTest_Response_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const CocoaTest_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CocoaTest_Response_

// alias to use template instance with default allocator
using CocoaTest_Response =
  cocoav_interfaces::srv::CocoaTest_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace cocoav_interfaces

namespace cocoav_interfaces
{

namespace srv
{

struct CocoaTest
{
  using Request = cocoav_interfaces::srv::CocoaTest_Request;
  using Response = cocoav_interfaces::srv::CocoaTest_Response;
};

}  // namespace srv

}  // namespace cocoav_interfaces

#endif  // COCOAV_INTERFACES__SRV__DETAIL__COCOA_TEST__STRUCT_HPP_
