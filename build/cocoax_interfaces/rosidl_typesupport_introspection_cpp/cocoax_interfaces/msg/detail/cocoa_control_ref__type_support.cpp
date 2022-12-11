// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from cocoax_interfaces:msg/CocoaControlRef.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "cocoax_interfaces/msg/detail/cocoa_control_ref__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace cocoax_interfaces
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void CocoaControlRef_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) cocoax_interfaces::msg::CocoaControlRef(_init);
}

void CocoaControlRef_fini_function(void * message_memory)
{
  auto typed_message = static_cast<cocoax_interfaces::msg::CocoaControlRef *>(message_memory);
  typed_message->~CocoaControlRef();
}

size_t size_function__CocoaControlRef__reference_joint_position(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__CocoaControlRef__reference_joint_position(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<double, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__CocoaControlRef__reference_joint_position(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<double, 3> *>(untyped_member);
  return &member[index];
}

size_t size_function__CocoaControlRef__reference_joint_velocity(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__CocoaControlRef__reference_joint_velocity(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<double, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__CocoaControlRef__reference_joint_velocity(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<double, 3> *>(untyped_member);
  return &member[index];
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember CocoaControlRef_message_member_array[2] = {
  {
    "reference_joint_position",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(cocoax_interfaces::msg::CocoaControlRef, reference_joint_position),  // bytes offset in struct
    nullptr,  // default value
    size_function__CocoaControlRef__reference_joint_position,  // size() function pointer
    get_const_function__CocoaControlRef__reference_joint_position,  // get_const(index) function pointer
    get_function__CocoaControlRef__reference_joint_position,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "reference_joint_velocity",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(cocoax_interfaces::msg::CocoaControlRef, reference_joint_velocity),  // bytes offset in struct
    nullptr,  // default value
    size_function__CocoaControlRef__reference_joint_velocity,  // size() function pointer
    get_const_function__CocoaControlRef__reference_joint_velocity,  // get_const(index) function pointer
    get_function__CocoaControlRef__reference_joint_velocity,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers CocoaControlRef_message_members = {
  "cocoax_interfaces::msg",  // message namespace
  "CocoaControlRef",  // message name
  2,  // number of fields
  sizeof(cocoax_interfaces::msg::CocoaControlRef),
  CocoaControlRef_message_member_array,  // message members
  CocoaControlRef_init_function,  // function to initialize message memory (memory has to be allocated)
  CocoaControlRef_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t CocoaControlRef_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &CocoaControlRef_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace cocoax_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<cocoax_interfaces::msg::CocoaControlRef>()
{
  return &::cocoax_interfaces::msg::rosidl_typesupport_introspection_cpp::CocoaControlRef_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, cocoax_interfaces, msg, CocoaControlRef)() {
  return &::cocoax_interfaces::msg::rosidl_typesupport_introspection_cpp::CocoaControlRef_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
