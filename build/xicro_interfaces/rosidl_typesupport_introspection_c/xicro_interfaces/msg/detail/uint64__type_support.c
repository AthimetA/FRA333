// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from xicro_interfaces:msg/Uint64.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "xicro_interfaces/msg/detail/uint64__rosidl_typesupport_introspection_c.h"
#include "xicro_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "xicro_interfaces/msg/detail/uint64__functions.h"
#include "xicro_interfaces/msg/detail/uint64__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void Uint64__rosidl_typesupport_introspection_c__Uint64_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  xicro_interfaces__msg__Uint64__init(message_memory);
}

void Uint64__rosidl_typesupport_introspection_c__Uint64_fini_function(void * message_memory)
{
  xicro_interfaces__msg__Uint64__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Uint64__rosidl_typesupport_introspection_c__Uint64_message_member_array[1] = {
  {
    "data",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(xicro_interfaces__msg__Uint64, data),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Uint64__rosidl_typesupport_introspection_c__Uint64_message_members = {
  "xicro_interfaces__msg",  // message namespace
  "Uint64",  // message name
  1,  // number of fields
  sizeof(xicro_interfaces__msg__Uint64),
  Uint64__rosidl_typesupport_introspection_c__Uint64_message_member_array,  // message members
  Uint64__rosidl_typesupport_introspection_c__Uint64_init_function,  // function to initialize message memory (memory has to be allocated)
  Uint64__rosidl_typesupport_introspection_c__Uint64_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Uint64__rosidl_typesupport_introspection_c__Uint64_message_type_support_handle = {
  0,
  &Uint64__rosidl_typesupport_introspection_c__Uint64_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_xicro_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, xicro_interfaces, msg, Uint64)() {
  if (!Uint64__rosidl_typesupport_introspection_c__Uint64_message_type_support_handle.typesupport_identifier) {
    Uint64__rosidl_typesupport_introspection_c__Uint64_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Uint64__rosidl_typesupport_introspection_c__Uint64_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
