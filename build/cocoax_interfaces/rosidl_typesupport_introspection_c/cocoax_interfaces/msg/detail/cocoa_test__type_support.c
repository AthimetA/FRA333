// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from cocoax_interfaces:msg/CocoaTest.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "cocoax_interfaces/msg/detail/cocoa_test__rosidl_typesupport_introspection_c.h"
#include "cocoax_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "cocoax_interfaces/msg/detail/cocoa_test__functions.h"
#include "cocoax_interfaces/msg/detail/cocoa_test__struct.h"


// Include directives for member types
// Member `check`
#include "std_msgs/msg/float64.h"
// Member `check`
#include "std_msgs/msg/detail/float64__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void CocoaTest__rosidl_typesupport_introspection_c__CocoaTest_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  cocoax_interfaces__msg__CocoaTest__init(message_memory);
}

void CocoaTest__rosidl_typesupport_introspection_c__CocoaTest_fini_function(void * message_memory)
{
  cocoax_interfaces__msg__CocoaTest__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember CocoaTest__rosidl_typesupport_introspection_c__CocoaTest_message_member_array[1] = {
  {
    "check",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cocoax_interfaces__msg__CocoaTest, check),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers CocoaTest__rosidl_typesupport_introspection_c__CocoaTest_message_members = {
  "cocoax_interfaces__msg",  // message namespace
  "CocoaTest",  // message name
  1,  // number of fields
  sizeof(cocoax_interfaces__msg__CocoaTest),
  CocoaTest__rosidl_typesupport_introspection_c__CocoaTest_message_member_array,  // message members
  CocoaTest__rosidl_typesupport_introspection_c__CocoaTest_init_function,  // function to initialize message memory (memory has to be allocated)
  CocoaTest__rosidl_typesupport_introspection_c__CocoaTest_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t CocoaTest__rosidl_typesupport_introspection_c__CocoaTest_message_type_support_handle = {
  0,
  &CocoaTest__rosidl_typesupport_introspection_c__CocoaTest_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_cocoax_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cocoax_interfaces, msg, CocoaTest)() {
  CocoaTest__rosidl_typesupport_introspection_c__CocoaTest_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Float64)();
  if (!CocoaTest__rosidl_typesupport_introspection_c__CocoaTest_message_type_support_handle.typesupport_identifier) {
    CocoaTest__rosidl_typesupport_introspection_c__CocoaTest_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &CocoaTest__rosidl_typesupport_introspection_c__CocoaTest_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
