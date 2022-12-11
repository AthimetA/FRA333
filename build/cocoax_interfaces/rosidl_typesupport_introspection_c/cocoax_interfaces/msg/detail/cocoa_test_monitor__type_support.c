// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from cocoax_interfaces:msg/CocoaTestMonitor.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "cocoax_interfaces/msg/detail/cocoa_test_monitor__rosidl_typesupport_introspection_c.h"
#include "cocoax_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "cocoax_interfaces/msg/detail/cocoa_test_monitor__functions.h"
#include "cocoax_interfaces/msg/detail/cocoa_test_monitor__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void CocoaTestMonitor__rosidl_typesupport_introspection_c__CocoaTestMonitor_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  cocoax_interfaces__msg__CocoaTestMonitor__init(message_memory);
}

void CocoaTestMonitor__rosidl_typesupport_introspection_c__CocoaTestMonitor_fini_function(void * message_memory)
{
  cocoax_interfaces__msg__CocoaTestMonitor__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember CocoaTestMonitor__rosidl_typesupport_introspection_c__CocoaTestMonitor_message_member_array[6] = {
  {
    "posx",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cocoax_interfaces__msg__CocoaTestMonitor, posx),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "posy",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cocoax_interfaces__msg__CocoaTestMonitor, posy),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "posz",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cocoax_interfaces__msg__CocoaTestMonitor, posz),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "velx",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cocoax_interfaces__msg__CocoaTestMonitor, velx),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "vely",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cocoax_interfaces__msg__CocoaTestMonitor, vely),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "velz",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cocoax_interfaces__msg__CocoaTestMonitor, velz),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers CocoaTestMonitor__rosidl_typesupport_introspection_c__CocoaTestMonitor_message_members = {
  "cocoax_interfaces__msg",  // message namespace
  "CocoaTestMonitor",  // message name
  6,  // number of fields
  sizeof(cocoax_interfaces__msg__CocoaTestMonitor),
  CocoaTestMonitor__rosidl_typesupport_introspection_c__CocoaTestMonitor_message_member_array,  // message members
  CocoaTestMonitor__rosidl_typesupport_introspection_c__CocoaTestMonitor_init_function,  // function to initialize message memory (memory has to be allocated)
  CocoaTestMonitor__rosidl_typesupport_introspection_c__CocoaTestMonitor_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t CocoaTestMonitor__rosidl_typesupport_introspection_c__CocoaTestMonitor_message_type_support_handle = {
  0,
  &CocoaTestMonitor__rosidl_typesupport_introspection_c__CocoaTestMonitor_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_cocoax_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cocoax_interfaces, msg, CocoaTestMonitor)() {
  if (!CocoaTestMonitor__rosidl_typesupport_introspection_c__CocoaTestMonitor_message_type_support_handle.typesupport_identifier) {
    CocoaTestMonitor__rosidl_typesupport_introspection_c__CocoaTestMonitor_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &CocoaTestMonitor__rosidl_typesupport_introspection_c__CocoaTestMonitor_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
