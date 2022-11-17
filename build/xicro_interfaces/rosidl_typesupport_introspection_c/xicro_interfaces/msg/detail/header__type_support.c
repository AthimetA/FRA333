// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from xicro_interfaces:msg/Header.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "xicro_interfaces/msg/detail/header__rosidl_typesupport_introspection_c.h"
#include "xicro_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "xicro_interfaces/msg/detail/header__functions.h"
#include "xicro_interfaces/msg/detail/header__struct.h"


// Include directives for member types
// Member `stamp`
#include "xicro_interfaces/msg/time.h"
// Member `stamp`
#include "xicro_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"
// Member `frame_id`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Header__rosidl_typesupport_introspection_c__Header_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  xicro_interfaces__msg__Header__init(message_memory);
}

void Header__rosidl_typesupport_introspection_c__Header_fini_function(void * message_memory)
{
  xicro_interfaces__msg__Header__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Header__rosidl_typesupport_introspection_c__Header_message_member_array[2] = {
  {
    "stamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(xicro_interfaces__msg__Header, stamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "frame_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(xicro_interfaces__msg__Header, frame_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Header__rosidl_typesupport_introspection_c__Header_message_members = {
  "xicro_interfaces__msg",  // message namespace
  "Header",  // message name
  2,  // number of fields
  sizeof(xicro_interfaces__msg__Header),
  Header__rosidl_typesupport_introspection_c__Header_message_member_array,  // message members
  Header__rosidl_typesupport_introspection_c__Header_init_function,  // function to initialize message memory (memory has to be allocated)
  Header__rosidl_typesupport_introspection_c__Header_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Header__rosidl_typesupport_introspection_c__Header_message_type_support_handle = {
  0,
  &Header__rosidl_typesupport_introspection_c__Header_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_xicro_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, xicro_interfaces, msg, Header)() {
  Header__rosidl_typesupport_introspection_c__Header_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, xicro_interfaces, msg, Time)();
  if (!Header__rosidl_typesupport_introspection_c__Header_message_type_support_handle.typesupport_identifier) {
    Header__rosidl_typesupport_introspection_c__Header_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Header__rosidl_typesupport_introspection_c__Header_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
