// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from xicro_interfaces:msg/DemoOutput.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "xicro_interfaces/msg/detail/demo_output__struct.hpp"
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

void DemoOutput_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) xicro_interfaces::msg::DemoOutput(_init);
}

void DemoOutput_fini_function(void * message_memory)
{
  auto typed_message = static_cast<xicro_interfaces::msg::DemoOutput *>(message_memory);
  typed_message->~DemoOutput();
}

size_t size_function__DemoOutput__led(const void * untyped_member)
{
  (void)untyped_member;
  return 4;
}

const void * get_const_function__DemoOutput__led(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<bool, 4> *>(untyped_member);
  return &member[index];
}

void * get_function__DemoOutput__led(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<bool, 4> *>(untyped_member);
  return &member[index];
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember DemoOutput_message_member_array[3] = {
  {
    "servo",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(xicro_interfaces::msg::DemoOutput, servo),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "buzzer",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(xicro_interfaces::msg::DemoOutput, buzzer),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "led",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    4,  // array size
    false,  // is upper bound
    offsetof(xicro_interfaces::msg::DemoOutput, led),  // bytes offset in struct
    nullptr,  // default value
    size_function__DemoOutput__led,  // size() function pointer
    get_const_function__DemoOutput__led,  // get_const(index) function pointer
    get_function__DemoOutput__led,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers DemoOutput_message_members = {
  "xicro_interfaces::msg",  // message namespace
  "DemoOutput",  // message name
  3,  // number of fields
  sizeof(xicro_interfaces::msg::DemoOutput),
  DemoOutput_message_member_array,  // message members
  DemoOutput_init_function,  // function to initialize message memory (memory has to be allocated)
  DemoOutput_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t DemoOutput_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &DemoOutput_message_members,
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
get_message_type_support_handle<xicro_interfaces::msg::DemoOutput>()
{
  return &::xicro_interfaces::msg::rosidl_typesupport_introspection_cpp::DemoOutput_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, xicro_interfaces, msg, DemoOutput)() {
  return &::xicro_interfaces::msg::rosidl_typesupport_introspection_cpp::DemoOutput_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
