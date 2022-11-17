// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from xicro_interfaces:msg/Uint16.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "xicro_interfaces/msg/detail/uint16__struct.hpp"
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

void Uint16_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) xicro_interfaces::msg::Uint16(_init);
}

void Uint16_fini_function(void * message_memory)
{
  auto typed_message = static_cast<xicro_interfaces::msg::Uint16 *>(message_memory);
  typed_message->~Uint16();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Uint16_message_member_array[1] = {
  {
    "data",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(xicro_interfaces::msg::Uint16, data),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Uint16_message_members = {
  "xicro_interfaces::msg",  // message namespace
  "Uint16",  // message name
  1,  // number of fields
  sizeof(xicro_interfaces::msg::Uint16),
  Uint16_message_member_array,  // message members
  Uint16_init_function,  // function to initialize message memory (memory has to be allocated)
  Uint16_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Uint16_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Uint16_message_members,
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
get_message_type_support_handle<xicro_interfaces::msg::Uint16>()
{
  return &::xicro_interfaces::msg::rosidl_typesupport_introspection_cpp::Uint16_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, xicro_interfaces, msg, Uint16)() {
  return &::xicro_interfaces::msg::rosidl_typesupport_introspection_cpp::Uint16_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
