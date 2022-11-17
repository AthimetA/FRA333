// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from xicro_interfaces:msg/JointState.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "xicro_interfaces/msg/detail/joint_state__rosidl_typesupport_introspection_c.h"
#include "xicro_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "xicro_interfaces/msg/detail/joint_state__functions.h"
#include "xicro_interfaces/msg/detail/joint_state__struct.h"


// Include directives for member types
// Member `name`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void JointState__rosidl_typesupport_introspection_c__JointState_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  xicro_interfaces__msg__JointState__init(message_memory);
}

void JointState__rosidl_typesupport_introspection_c__JointState_fini_function(void * message_memory)
{
  xicro_interfaces__msg__JointState__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember JointState__rosidl_typesupport_introspection_c__JointState_message_member_array[4] = {
  {
    "name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    4,  // array size
    false,  // is upper bound
    offsetof(xicro_interfaces__msg__JointState, name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "position",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    4,  // array size
    false,  // is upper bound
    offsetof(xicro_interfaces__msg__JointState, position),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "velocity",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    4,  // array size
    false,  // is upper bound
    offsetof(xicro_interfaces__msg__JointState, velocity),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "effort",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    4,  // array size
    false,  // is upper bound
    offsetof(xicro_interfaces__msg__JointState, effort),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers JointState__rosidl_typesupport_introspection_c__JointState_message_members = {
  "xicro_interfaces__msg",  // message namespace
  "JointState",  // message name
  4,  // number of fields
  sizeof(xicro_interfaces__msg__JointState),
  JointState__rosidl_typesupport_introspection_c__JointState_message_member_array,  // message members
  JointState__rosidl_typesupport_introspection_c__JointState_init_function,  // function to initialize message memory (memory has to be allocated)
  JointState__rosidl_typesupport_introspection_c__JointState_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t JointState__rosidl_typesupport_introspection_c__JointState_message_type_support_handle = {
  0,
  &JointState__rosidl_typesupport_introspection_c__JointState_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_xicro_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, xicro_interfaces, msg, JointState)() {
  if (!JointState__rosidl_typesupport_introspection_c__JointState_message_type_support_handle.typesupport_identifier) {
    JointState__rosidl_typesupport_introspection_c__JointState_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &JointState__rosidl_typesupport_introspection_c__JointState_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
