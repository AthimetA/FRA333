// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from cocoax_interfaces:srv/CocoaXEnable.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "cocoax_interfaces/srv/detail/cocoa_x_enable__rosidl_typesupport_introspection_c.h"
#include "cocoax_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "cocoax_interfaces/srv/detail/cocoa_x_enable__functions.h"
#include "cocoax_interfaces/srv/detail/cocoa_x_enable__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void CocoaXEnable_Request__rosidl_typesupport_introspection_c__CocoaXEnable_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  cocoax_interfaces__srv__CocoaXEnable_Request__init(message_memory);
}

void CocoaXEnable_Request__rosidl_typesupport_introspection_c__CocoaXEnable_Request_fini_function(void * message_memory)
{
  cocoax_interfaces__srv__CocoaXEnable_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember CocoaXEnable_Request__rosidl_typesupport_introspection_c__CocoaXEnable_Request_message_member_array[1] = {
  {
    "enable",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cocoax_interfaces__srv__CocoaXEnable_Request, enable),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers CocoaXEnable_Request__rosidl_typesupport_introspection_c__CocoaXEnable_Request_message_members = {
  "cocoax_interfaces__srv",  // message namespace
  "CocoaXEnable_Request",  // message name
  1,  // number of fields
  sizeof(cocoax_interfaces__srv__CocoaXEnable_Request),
  CocoaXEnable_Request__rosidl_typesupport_introspection_c__CocoaXEnable_Request_message_member_array,  // message members
  CocoaXEnable_Request__rosidl_typesupport_introspection_c__CocoaXEnable_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  CocoaXEnable_Request__rosidl_typesupport_introspection_c__CocoaXEnable_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t CocoaXEnable_Request__rosidl_typesupport_introspection_c__CocoaXEnable_Request_message_type_support_handle = {
  0,
  &CocoaXEnable_Request__rosidl_typesupport_introspection_c__CocoaXEnable_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_cocoax_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cocoax_interfaces, srv, CocoaXEnable_Request)() {
  if (!CocoaXEnable_Request__rosidl_typesupport_introspection_c__CocoaXEnable_Request_message_type_support_handle.typesupport_identifier) {
    CocoaXEnable_Request__rosidl_typesupport_introspection_c__CocoaXEnable_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &CocoaXEnable_Request__rosidl_typesupport_introspection_c__CocoaXEnable_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "cocoax_interfaces/srv/detail/cocoa_x_enable__rosidl_typesupport_introspection_c.h"
// already included above
// #include "cocoax_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "cocoax_interfaces/srv/detail/cocoa_x_enable__functions.h"
// already included above
// #include "cocoax_interfaces/srv/detail/cocoa_x_enable__struct.h"


// Include directives for member types
// Member `status`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void CocoaXEnable_Response__rosidl_typesupport_introspection_c__CocoaXEnable_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  cocoax_interfaces__srv__CocoaXEnable_Response__init(message_memory);
}

void CocoaXEnable_Response__rosidl_typesupport_introspection_c__CocoaXEnable_Response_fini_function(void * message_memory)
{
  cocoax_interfaces__srv__CocoaXEnable_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember CocoaXEnable_Response__rosidl_typesupport_introspection_c__CocoaXEnable_Response_message_member_array[1] = {
  {
    "status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cocoax_interfaces__srv__CocoaXEnable_Response, status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers CocoaXEnable_Response__rosidl_typesupport_introspection_c__CocoaXEnable_Response_message_members = {
  "cocoax_interfaces__srv",  // message namespace
  "CocoaXEnable_Response",  // message name
  1,  // number of fields
  sizeof(cocoax_interfaces__srv__CocoaXEnable_Response),
  CocoaXEnable_Response__rosidl_typesupport_introspection_c__CocoaXEnable_Response_message_member_array,  // message members
  CocoaXEnable_Response__rosidl_typesupport_introspection_c__CocoaXEnable_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  CocoaXEnable_Response__rosidl_typesupport_introspection_c__CocoaXEnable_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t CocoaXEnable_Response__rosidl_typesupport_introspection_c__CocoaXEnable_Response_message_type_support_handle = {
  0,
  &CocoaXEnable_Response__rosidl_typesupport_introspection_c__CocoaXEnable_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_cocoax_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cocoax_interfaces, srv, CocoaXEnable_Response)() {
  if (!CocoaXEnable_Response__rosidl_typesupport_introspection_c__CocoaXEnable_Response_message_type_support_handle.typesupport_identifier) {
    CocoaXEnable_Response__rosidl_typesupport_introspection_c__CocoaXEnable_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &CocoaXEnable_Response__rosidl_typesupport_introspection_c__CocoaXEnable_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "cocoax_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "cocoax_interfaces/srv/detail/cocoa_x_enable__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers cocoax_interfaces__srv__detail__cocoa_x_enable__rosidl_typesupport_introspection_c__CocoaXEnable_service_members = {
  "cocoax_interfaces__srv",  // service namespace
  "CocoaXEnable",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // cocoax_interfaces__srv__detail__cocoa_x_enable__rosidl_typesupport_introspection_c__CocoaXEnable_Request_message_type_support_handle,
  NULL  // response message
  // cocoax_interfaces__srv__detail__cocoa_x_enable__rosidl_typesupport_introspection_c__CocoaXEnable_Response_message_type_support_handle
};

static rosidl_service_type_support_t cocoax_interfaces__srv__detail__cocoa_x_enable__rosidl_typesupport_introspection_c__CocoaXEnable_service_type_support_handle = {
  0,
  &cocoax_interfaces__srv__detail__cocoa_x_enable__rosidl_typesupport_introspection_c__CocoaXEnable_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cocoax_interfaces, srv, CocoaXEnable_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cocoax_interfaces, srv, CocoaXEnable_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_cocoax_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cocoax_interfaces, srv, CocoaXEnable)() {
  if (!cocoax_interfaces__srv__detail__cocoa_x_enable__rosidl_typesupport_introspection_c__CocoaXEnable_service_type_support_handle.typesupport_identifier) {
    cocoax_interfaces__srv__detail__cocoa_x_enable__rosidl_typesupport_introspection_c__CocoaXEnable_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)cocoax_interfaces__srv__detail__cocoa_x_enable__rosidl_typesupport_introspection_c__CocoaXEnable_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cocoax_interfaces, srv, CocoaXEnable_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cocoax_interfaces, srv, CocoaXEnable_Response)()->data;
  }

  return &cocoax_interfaces__srv__detail__cocoa_x_enable__rosidl_typesupport_introspection_c__CocoaXEnable_service_type_support_handle;
}
