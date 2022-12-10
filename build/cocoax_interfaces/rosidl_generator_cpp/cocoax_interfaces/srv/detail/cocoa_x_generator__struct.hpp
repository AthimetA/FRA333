// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from cocoax_interfaces:srv/CocoaXGenerator.idl
// generated code does not contain a copyright notice

#ifndef COCOAX_INTERFACES__SRV__DETAIL__COCOA_X_GENERATOR__STRUCT_HPP_
#define COCOAX_INTERFACES__SRV__DETAIL__COCOA_X_GENERATOR__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__cocoax_interfaces__srv__CocoaXGenerator_Request __attribute__((deprecated))
#else
# define DEPRECATED__cocoax_interfaces__srv__CocoaXGenerator_Request __declspec(deprecated)
#endif

namespace cocoax_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct CocoaXGenerator_Request_
{
  using Type = CocoaXGenerator_Request_<ContainerAllocator>;

  explicit CocoaXGenerator_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<double, 3>::iterator, double>(this->position_initial.begin(), this->position_initial.end(), 0.0);
      std::fill<typename std::array<double, 3>::iterator, double>(this->position_final.begin(), this->position_final.end(), 0.0);
      this->duration = 0.0;
    }
  }

  explicit CocoaXGenerator_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : position_initial(_alloc),
    position_final(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<double, 3>::iterator, double>(this->position_initial.begin(), this->position_initial.end(), 0.0);
      std::fill<typename std::array<double, 3>::iterator, double>(this->position_final.begin(), this->position_final.end(), 0.0);
      this->duration = 0.0;
    }
  }

  // field types and members
  using _position_initial_type =
    std::array<double, 3>;
  _position_initial_type position_initial;
  using _position_final_type =
    std::array<double, 3>;
  _position_final_type position_final;
  using _duration_type =
    double;
  _duration_type duration;

  // setters for named parameter idiom
  Type & set__position_initial(
    const std::array<double, 3> & _arg)
  {
    this->position_initial = _arg;
    return *this;
  }
  Type & set__position_final(
    const std::array<double, 3> & _arg)
  {
    this->position_final = _arg;
    return *this;
  }
  Type & set__duration(
    const double & _arg)
  {
    this->duration = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    cocoax_interfaces::srv::CocoaXGenerator_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const cocoax_interfaces::srv::CocoaXGenerator_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<cocoax_interfaces::srv::CocoaXGenerator_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<cocoax_interfaces::srv::CocoaXGenerator_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      cocoax_interfaces::srv::CocoaXGenerator_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<cocoax_interfaces::srv::CocoaXGenerator_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      cocoax_interfaces::srv::CocoaXGenerator_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<cocoax_interfaces::srv::CocoaXGenerator_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<cocoax_interfaces::srv::CocoaXGenerator_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<cocoax_interfaces::srv::CocoaXGenerator_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__cocoax_interfaces__srv__CocoaXGenerator_Request
    std::shared_ptr<cocoax_interfaces::srv::CocoaXGenerator_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__cocoax_interfaces__srv__CocoaXGenerator_Request
    std::shared_ptr<cocoax_interfaces::srv::CocoaXGenerator_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CocoaXGenerator_Request_ & other) const
  {
    if (this->position_initial != other.position_initial) {
      return false;
    }
    if (this->position_final != other.position_final) {
      return false;
    }
    if (this->duration != other.duration) {
      return false;
    }
    return true;
  }
  bool operator!=(const CocoaXGenerator_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CocoaXGenerator_Request_

// alias to use template instance with default allocator
using CocoaXGenerator_Request =
  cocoax_interfaces::srv::CocoaXGenerator_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace cocoax_interfaces


#ifndef _WIN32
# define DEPRECATED__cocoax_interfaces__srv__CocoaXGenerator_Response __attribute__((deprecated))
#else
# define DEPRECATED__cocoax_interfaces__srv__CocoaXGenerator_Response __declspec(deprecated)
#endif

namespace cocoax_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct CocoaXGenerator_Response_
{
  using Type = CocoaXGenerator_Response_<ContainerAllocator>;

  explicit CocoaXGenerator_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit CocoaXGenerator_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    cocoax_interfaces::srv::CocoaXGenerator_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const cocoax_interfaces::srv::CocoaXGenerator_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<cocoax_interfaces::srv::CocoaXGenerator_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<cocoax_interfaces::srv::CocoaXGenerator_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      cocoax_interfaces::srv::CocoaXGenerator_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<cocoax_interfaces::srv::CocoaXGenerator_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      cocoax_interfaces::srv::CocoaXGenerator_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<cocoax_interfaces::srv::CocoaXGenerator_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<cocoax_interfaces::srv::CocoaXGenerator_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<cocoax_interfaces::srv::CocoaXGenerator_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__cocoax_interfaces__srv__CocoaXGenerator_Response
    std::shared_ptr<cocoax_interfaces::srv::CocoaXGenerator_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__cocoax_interfaces__srv__CocoaXGenerator_Response
    std::shared_ptr<cocoax_interfaces::srv::CocoaXGenerator_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CocoaXGenerator_Response_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const CocoaXGenerator_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CocoaXGenerator_Response_

// alias to use template instance with default allocator
using CocoaXGenerator_Response =
  cocoax_interfaces::srv::CocoaXGenerator_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace cocoax_interfaces

namespace cocoax_interfaces
{

namespace srv
{

struct CocoaXGenerator
{
  using Request = cocoax_interfaces::srv::CocoaXGenerator_Request;
  using Response = cocoax_interfaces::srv::CocoaXGenerator_Response;
};

}  // namespace srv

}  // namespace cocoax_interfaces

#endif  // COCOAX_INTERFACES__SRV__DETAIL__COCOA_X_GENERATOR__STRUCT_HPP_
