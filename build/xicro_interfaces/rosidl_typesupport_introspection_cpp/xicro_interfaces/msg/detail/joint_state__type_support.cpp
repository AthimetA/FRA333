// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from xicro_interfaces:msg/JointState.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "xicro_interfaces/msg/detail/joint_state__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace xicro_interfaces
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void JointState_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) xicro_interfaces::msg::JointState(_init);
}

void JointState_fini_function(void * message_memory)
{
  auto typed_message = static_cast<xicro_interfaces::msg::JointState *>(message_memory);
  typed_message->~JointState();
}

size_t size_function__JointState__name(const void * untyped_member)
{
  (void)untyped_member;
  return 4;
}

const void * get_const_function__JointState__name(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<std::string, 4> *>(untyped_member);
  return &member[index];
}

void * get_function__JointState__name(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<std::string, 4> *>(untyped_member);
  return &member[index];
}

size_t size_function__JointState__position(const void * untyped_member)
{
  (void)untyped_member;
  return 4;
}

const void * get_const_function__JointState__position(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 4> *>(untyped_member);
  return &member[index];
}

void * get_function__JointState__position(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 4> *>(untyped_member);
  return &member[index];
}

size_t size_function__JointState__velocity(const void * untyped_member)
{
  (void)untyped_member;
  return 4;
}

const void * get_const_function__JointState__velocity(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 4> *>(untyped_member);
  return &member[index];
}

void * get_function__JointState__velocity(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 4> *>(untyped_member);
  return &member[index];
}

size_t size_function__JointState__effort(const void * untyped_member)
{
  (void)untyped_member;
  return 4;
}

const void * get_const_function__JointState__effort(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 4> *>(untyped_member);
  return &member[index];
}

void * get_function__JointState__effort(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 4> *>(untyped_member);
  return &member[index];
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember JointState_message_member_array[4] = {
  {
    "name",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    4,  // array size
    false,  // is upper bound
    offsetof(xicro_interfaces::msg::JointState, name),  // bytes offset in struct
    nullptr,  // default value
    size_function__JointState__name,  // size() function pointer
    get_const_function__JointState__name,  // get_const(index) function pointer
    get_function__JointState__name,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "position",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    4,  // array size
    false,  // is upper bound
    offsetof(xicro_interfaces::msg::JointState, position),  // bytes offset in struct
    nullptr,  // default value
    size_function__JointState__position,  // size() function pointer
    get_const_function__JointState__position,  // get_const(index) function pointer
    get_function__JointState__position,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "velocity",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    4,  // array size
    false,  // is upper bound
    offsetof(xicro_interfaces::msg::JointState, velocity),  // bytes offset in struct
    nullptr,  // default value
    size_function__JointState__velocity,  // size() function pointer
    get_const_function__JointState__velocity,  // get_const(index) function pointer
    get_function__JointState__velocity,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "effort",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    4,  // array size
    false,  // is upper bound
    offsetof(xicro_interfaces::msg::JointState, effort),  // bytes offset in struct
    nullptr,  // default value
    size_function__JointState__effort,  // size() function pointer
    get_const_function__JointState__effort,  // get_const(index) function pointer
    get_function__JointState__effort,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers JointState_message_members = {
  "xicro_interfaces::msg",  // message namespace
  "JointState",  // message name
  4,  // number of fields
  sizeof(xicro_interfaces::msg::JointState),
  JointState_message_member_array,  // message members
  JointState_init_function,  // function to initialize message memory (memory has to be allocated)
  JointState_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t JointState_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &JointState_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace xicro_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<xicro_interfaces::msg::JointState>()
{
  return &::xicro_interfaces::msg::rosidl_typesupport_introspection_cpp::JointState_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, xicro_interfaces, msg, JointState)() {
  return &::xicro_interfaces::msg::rosidl_typesupport_introspection_cpp::JointState_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
