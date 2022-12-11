// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from cocoax_interfaces:msg/CocoaControlRef.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "cocoax_interfaces/msg/detail/cocoa_control_ref__rosidl_typesupport_introspection_c.h"
#include "cocoax_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "cocoax_interfaces/msg/detail/cocoa_control_ref__functions.h"
#include "cocoax_interfaces/msg/detail/cocoa_control_ref__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void CocoaControlRef__rosidl_typesupport_introspection_c__CocoaControlRef_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  cocoax_interfaces__msg__CocoaControlRef__init(message_memory);
}

void CocoaControlRef__rosidl_typesupport_introspection_c__CocoaControlRef_fini_function(void * message_memory)
{
  cocoax_interfaces__msg__CocoaControlRef__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember CocoaControlRef__rosidl_typesupport_introspection_c__CocoaControlRef_message_member_array[2] = {
  {
    "reference_joint_position",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(cocoax_interfaces__msg__CocoaControlRef, reference_joint_position),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "reference_joint_velocity",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(cocoax_interfaces__msg__CocoaControlRef, reference_joint_velocity),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers CocoaControlRef__rosidl_typesupport_introspection_c__CocoaControlRef_message_members = {
  "cocoax_interfaces__msg",  // message namespace
  "CocoaControlRef",  // message name
  2,  // number of fields
  sizeof(cocoax_interfaces__msg__CocoaControlRef),
  CocoaControlRef__rosidl_typesupport_introspection_c__CocoaControlRef_message_member_array,  // message members
  CocoaControlRef__rosidl_typesupport_introspection_c__CocoaControlRef_init_function,  // function to initialize message memory (memory has to be allocated)
  CocoaControlRef__rosidl_typesupport_introspection_c__CocoaControlRef_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t CocoaControlRef__rosidl_typesupport_introspection_c__CocoaControlRef_message_type_support_handle = {
  0,
  &CocoaControlRef__rosidl_typesupport_introspection_c__CocoaControlRef_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_cocoax_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cocoax_interfaces, msg, CocoaControlRef)() {
  if (!CocoaControlRef__rosidl_typesupport_introspection_c__CocoaControlRef_message_type_support_handle.typesupport_identifier) {
    CocoaControlRef__rosidl_typesupport_introspection_c__CocoaControlRef_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &CocoaControlRef__rosidl_typesupport_introspection_c__CocoaControlRef_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
