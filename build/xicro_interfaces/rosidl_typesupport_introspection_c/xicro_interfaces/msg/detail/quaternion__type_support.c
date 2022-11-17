// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from xicro_interfaces:msg/Quaternion.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "xicro_interfaces/msg/detail/quaternion__rosidl_typesupport_introspection_c.h"
#include "xicro_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "xicro_interfaces/msg/detail/quaternion__functions.h"
#include "xicro_interfaces/msg/detail/quaternion__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void Quaternion__rosidl_typesupport_introspection_c__Quaternion_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  xicro_interfaces__msg__Quaternion__init(message_memory);
}

void Quaternion__rosidl_typesupport_introspection_c__Quaternion_fini_function(void * message_memory)
{
  xicro_interfaces__msg__Quaternion__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Quaternion__rosidl_typesupport_introspection_c__Quaternion_message_member_array[4] = {
  {
    "x",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(xicro_interfaces__msg__Quaternion, x),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "y",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(xicro_interfaces__msg__Quaternion, y),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "z",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(xicro_interfaces__msg__Quaternion, z),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "w",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(xicro_interfaces__msg__Quaternion, w),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Quaternion__rosidl_typesupport_introspection_c__Quaternion_message_members = {
  "xicro_interfaces__msg",  // message namespace
  "Quaternion",  // message name
  4,  // number of fields
  sizeof(xicro_interfaces__msg__Quaternion),
  Quaternion__rosidl_typesupport_introspection_c__Quaternion_message_member_array,  // message members
  Quaternion__rosidl_typesupport_introspection_c__Quaternion_init_function,  // function to initialize message memory (memory has to be allocated)
  Quaternion__rosidl_typesupport_introspection_c__Quaternion_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Quaternion__rosidl_typesupport_introspection_c__Quaternion_message_type_support_handle = {
  0,
  &Quaternion__rosidl_typesupport_introspection_c__Quaternion_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_xicro_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, xicro_interfaces, msg, Quaternion)() {
  if (!Quaternion__rosidl_typesupport_introspection_c__Quaternion_message_type_support_handle.typesupport_identifier) {
    Quaternion__rosidl_typesupport_introspection_c__Quaternion_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Quaternion__rosidl_typesupport_introspection_c__Quaternion_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
