// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from cocoav_interfaces:srv/CocoaTest.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "cocoav_interfaces/srv/detail/cocoa_test__rosidl_typesupport_introspection_c.h"
#include "cocoav_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "cocoav_interfaces/srv/detail/cocoa_test__functions.h"
#include "cocoav_interfaces/srv/detail/cocoa_test__struct.h"


// Include directives for member types
// Member `check`
#include "std_msgs/msg/float64.h"
// Member `check`
#include "std_msgs/msg/detail/float64__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void CocoaTest_Request__rosidl_typesupport_introspection_c__CocoaTest_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  cocoav_interfaces__srv__CocoaTest_Request__init(message_memory);
}

void CocoaTest_Request__rosidl_typesupport_introspection_c__CocoaTest_Request_fini_function(void * message_memory)
{
  cocoav_interfaces__srv__CocoaTest_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember CocoaTest_Request__rosidl_typesupport_introspection_c__CocoaTest_Request_message_member_array[1] = {
  {
    "check",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cocoav_interfaces__srv__CocoaTest_Request, check),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers CocoaTest_Request__rosidl_typesupport_introspection_c__CocoaTest_Request_message_members = {
  "cocoav_interfaces__srv",  // message namespace
  "CocoaTest_Request",  // message name
  1,  // number of fields
  sizeof(cocoav_interfaces__srv__CocoaTest_Request),
  CocoaTest_Request__rosidl_typesupport_introspection_c__CocoaTest_Request_message_member_array,  // message members
  CocoaTest_Request__rosidl_typesupport_introspection_c__CocoaTest_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  CocoaTest_Request__rosidl_typesupport_introspection_c__CocoaTest_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t CocoaTest_Request__rosidl_typesupport_introspection_c__CocoaTest_Request_message_type_support_handle = {
  0,
  &CocoaTest_Request__rosidl_typesupport_introspection_c__CocoaTest_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_cocoav_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cocoav_interfaces, srv, CocoaTest_Request)() {
  CocoaTest_Request__rosidl_typesupport_introspection_c__CocoaTest_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Float64)();
  if (!CocoaTest_Request__rosidl_typesupport_introspection_c__CocoaTest_Request_message_type_support_handle.typesupport_identifier) {
    CocoaTest_Request__rosidl_typesupport_introspection_c__CocoaTest_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &CocoaTest_Request__rosidl_typesupport_introspection_c__CocoaTest_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "cocoav_interfaces/srv/detail/cocoa_test__rosidl_typesupport_introspection_c.h"
// already included above
// #include "cocoav_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "cocoav_interfaces/srv/detail/cocoa_test__functions.h"
// already included above
// #include "cocoav_interfaces/srv/detail/cocoa_test__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void CocoaTest_Response__rosidl_typesupport_introspection_c__CocoaTest_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  cocoav_interfaces__srv__CocoaTest_Response__init(message_memory);
}

void CocoaTest_Response__rosidl_typesupport_introspection_c__CocoaTest_Response_fini_function(void * message_memory)
{
  cocoav_interfaces__srv__CocoaTest_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember CocoaTest_Response__rosidl_typesupport_introspection_c__CocoaTest_Response_message_member_array[1] = {
  {
    "structure_needs_at_least_one_member",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cocoav_interfaces__srv__CocoaTest_Response, structure_needs_at_least_one_member),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers CocoaTest_Response__rosidl_typesupport_introspection_c__CocoaTest_Response_message_members = {
  "cocoav_interfaces__srv",  // message namespace
  "CocoaTest_Response",  // message name
  1,  // number of fields
  sizeof(cocoav_interfaces__srv__CocoaTest_Response),
  CocoaTest_Response__rosidl_typesupport_introspection_c__CocoaTest_Response_message_member_array,  // message members
  CocoaTest_Response__rosidl_typesupport_introspection_c__CocoaTest_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  CocoaTest_Response__rosidl_typesupport_introspection_c__CocoaTest_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t CocoaTest_Response__rosidl_typesupport_introspection_c__CocoaTest_Response_message_type_support_handle = {
  0,
  &CocoaTest_Response__rosidl_typesupport_introspection_c__CocoaTest_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_cocoav_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cocoav_interfaces, srv, CocoaTest_Response)() {
  if (!CocoaTest_Response__rosidl_typesupport_introspection_c__CocoaTest_Response_message_type_support_handle.typesupport_identifier) {
    CocoaTest_Response__rosidl_typesupport_introspection_c__CocoaTest_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &CocoaTest_Response__rosidl_typesupport_introspection_c__CocoaTest_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "cocoav_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "cocoav_interfaces/srv/detail/cocoa_test__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers cocoav_interfaces__srv__detail__cocoa_test__rosidl_typesupport_introspection_c__CocoaTest_service_members = {
  "cocoav_interfaces__srv",  // service namespace
  "CocoaTest",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // cocoav_interfaces__srv__detail__cocoa_test__rosidl_typesupport_introspection_c__CocoaTest_Request_message_type_support_handle,
  NULL  // response message
  // cocoav_interfaces__srv__detail__cocoa_test__rosidl_typesupport_introspection_c__CocoaTest_Response_message_type_support_handle
};

static rosidl_service_type_support_t cocoav_interfaces__srv__detail__cocoa_test__rosidl_typesupport_introspection_c__CocoaTest_service_type_support_handle = {
  0,
  &cocoav_interfaces__srv__detail__cocoa_test__rosidl_typesupport_introspection_c__CocoaTest_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cocoav_interfaces, srv, CocoaTest_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cocoav_interfaces, srv, CocoaTest_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_cocoav_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cocoav_interfaces, srv, CocoaTest)() {
  if (!cocoav_interfaces__srv__detail__cocoa_test__rosidl_typesupport_introspection_c__CocoaTest_service_type_support_handle.typesupport_identifier) {
    cocoav_interfaces__srv__detail__cocoa_test__rosidl_typesupport_introspection_c__CocoaTest_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)cocoav_interfaces__srv__detail__cocoa_test__rosidl_typesupport_introspection_c__CocoaTest_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cocoav_interfaces, srv, CocoaTest_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cocoav_interfaces, srv, CocoaTest_Response)()->data;
  }

  return &cocoav_interfaces__srv__detail__cocoa_test__rosidl_typesupport_introspection_c__CocoaTest_service_type_support_handle;
}
