// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from cocoax_interfaces:srv/CocoaXEnable.idl
// generated code does not contain a copyright notice

#ifndef COCOAX_INTERFACES__SRV__DETAIL__COCOA_X_ENABLE__STRUCT_HPP_
#define COCOAX_INTERFACES__SRV__DETAIL__COCOA_X_ENABLE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__cocoax_interfaces__srv__CocoaXEnable_Request __attribute__((deprecated))
#else
# define DEPRECATED__cocoax_interfaces__srv__CocoaXEnable_Request __declspec(deprecated)
#endif

namespace cocoax_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct CocoaXEnable_Request_
{
  using Type = CocoaXEnable_Request_<ContainerAllocator>;

  explicit CocoaXEnable_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->setenable = false;
    }
  }

  explicit CocoaXEnable_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->setenable = false;
    }
  }

  // field types and members
  using _setenable_type =
    bool;
  _setenable_type setenable;

  // setters for named parameter idiom
  Type & set__setenable(
    const bool & _arg)
  {
    this->setenable = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    cocoax_interfaces::srv::CocoaXEnable_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const cocoax_interfaces::srv::CocoaXEnable_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<cocoax_interfaces::srv::CocoaXEnable_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<cocoax_interfaces::srv::CocoaXEnable_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      cocoax_interfaces::srv::CocoaXEnable_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<cocoax_interfaces::srv::CocoaXEnable_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      cocoax_interfaces::srv::CocoaXEnable_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<cocoax_interfaces::srv::CocoaXEnable_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<cocoax_interfaces::srv::CocoaXEnable_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<cocoax_interfaces::srv::CocoaXEnable_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__cocoax_interfaces__srv__CocoaXEnable_Request
    std::shared_ptr<cocoax_interfaces::srv::CocoaXEnable_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__cocoax_interfaces__srv__CocoaXEnable_Request
    std::shared_ptr<cocoax_interfaces::srv::CocoaXEnable_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CocoaXEnable_Request_ & other) const
  {
    if (this->setenable != other.setenable) {
      return false;
    }
    return true;
  }
  bool operator!=(const CocoaXEnable_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CocoaXEnable_Request_

// alias to use template instance with default allocator
using CocoaXEnable_Request =
  cocoax_interfaces::srv::CocoaXEnable_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace cocoax_interfaces


#ifndef _WIN32
# define DEPRECATED__cocoax_interfaces__srv__CocoaXEnable_Response __attribute__((deprecated))
#else
# define DEPRECATED__cocoax_interfaces__srv__CocoaXEnable_Response __declspec(deprecated)
#endif

namespace cocoax_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct CocoaXEnable_Response_
{
  using Type = CocoaXEnable_Response_<ContainerAllocator>;

  explicit CocoaXEnable_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->trackerstatus = "";
    }
  }

  explicit CocoaXEnable_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : trackerstatus(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->trackerstatus = "";
    }
  }

  // field types and members
  using _trackerstatus_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _trackerstatus_type trackerstatus;

  // setters for named parameter idiom
  Type & set__trackerstatus(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->trackerstatus = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    cocoax_interfaces::srv::CocoaXEnable_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const cocoax_interfaces::srv::CocoaXEnable_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<cocoax_interfaces::srv::CocoaXEnable_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<cocoax_interfaces::srv::CocoaXEnable_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      cocoax_interfaces::srv::CocoaXEnable_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<cocoax_interfaces::srv::CocoaXEnable_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      cocoax_interfaces::srv::CocoaXEnable_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<cocoax_interfaces::srv::CocoaXEnable_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<cocoax_interfaces::srv::CocoaXEnable_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<cocoax_interfaces::srv::CocoaXEnable_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__cocoax_interfaces__srv__CocoaXEnable_Response
    std::shared_ptr<cocoax_interfaces::srv::CocoaXEnable_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__cocoax_interfaces__srv__CocoaXEnable_Response
    std::shared_ptr<cocoax_interfaces::srv::CocoaXEnable_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CocoaXEnable_Response_ & other) const
  {
    if (this->trackerstatus != other.trackerstatus) {
      return false;
    }
    return true;
  }
  bool operator!=(const CocoaXEnable_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CocoaXEnable_Response_

// alias to use template instance with default allocator
using CocoaXEnable_Response =
  cocoax_interfaces::srv::CocoaXEnable_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace cocoax_interfaces

namespace cocoax_interfaces
{

namespace srv
{

struct CocoaXEnable
{
  using Request = cocoax_interfaces::srv::CocoaXEnable_Request;
  using Response = cocoax_interfaces::srv::CocoaXEnable_Response;
};

}  // namespace srv

}  // namespace cocoax_interfaces

#endif  // COCOAX_INTERFACES__SRV__DETAIL__COCOA_X_ENABLE__STRUCT_HPP_
