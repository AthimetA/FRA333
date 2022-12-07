// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from cocoax_interfaces:msg/CocoaXIMU.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "cocoax_interfaces/msg/detail/cocoa_ximu__rosidl_typesupport_introspection_c.h"
#include "cocoax_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "cocoax_interfaces/msg/detail/cocoa_ximu__functions.h"
#include "cocoax_interfaces/msg/detail/cocoa_ximu__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void CocoaXIMU__rosidl_typesupport_introspection_c__CocoaXIMU_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  cocoax_interfaces__msg__CocoaXIMU__init(message_memory);
}

void CocoaXIMU__rosidl_typesupport_introspection_c__CocoaXIMU_fini_function(void * message_memory)
{
  cocoax_interfaces__msg__CocoaXIMU__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember CocoaXIMU__rosidl_typesupport_introspection_c__CocoaXIMU_message_member_array[3] = {
  {
    "time_ms",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cocoax_interfaces__msg__CocoaXIMU, time_ms),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "angular_velocity",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(cocoax_interfaces__msg__CocoaXIMU, angular_velocity),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "linear_acceleration",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(cocoax_interfaces__msg__CocoaXIMU, linear_acceleration),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers CocoaXIMU__rosidl_typesupport_introspection_c__CocoaXIMU_message_members = {
  "cocoax_interfaces__msg",  // message namespace
  "CocoaXIMU",  // message name
  3,  // number of fields
  sizeof(cocoax_interfaces__msg__CocoaXIMU),
  CocoaXIMU__rosidl_typesupport_introspection_c__CocoaXIMU_message_member_array,  // message members
  CocoaXIMU__rosidl_typesupport_introspection_c__CocoaXIMU_init_function,  // function to initialize message memory (memory has to be allocated)
  CocoaXIMU__rosidl_typesupport_introspection_c__CocoaXIMU_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t CocoaXIMU__rosidl_typesupport_introspection_c__CocoaXIMU_message_type_support_handle = {
  0,
  &CocoaXIMU__rosidl_typesupport_introspection_c__CocoaXIMU_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_cocoax_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cocoax_interfaces, msg, CocoaXIMU)() {
  if (!CocoaXIMU__rosidl_typesupport_introspection_c__CocoaXIMU_message_type_support_handle.typesupport_identifier) {
    CocoaXIMU__rosidl_typesupport_introspection_c__CocoaXIMU_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &CocoaXIMU__rosidl_typesupport_introspection_c__CocoaXIMU_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
