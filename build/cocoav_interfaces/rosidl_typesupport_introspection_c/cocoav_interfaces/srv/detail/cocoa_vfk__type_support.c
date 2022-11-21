// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from cocoav_interfaces:srv/CocoaVFK.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "cocoav_interfaces/srv/detail/cocoa_vfk__rosidl_typesupport_introspection_c.h"
#include "cocoav_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "cocoav_interfaces/srv/detail/cocoa_vfk__functions.h"
#include "cocoav_interfaces/srv/detail/cocoa_vfk__struct.h"


// Include directives for member types
// Member `jointstate`
#include "sensor_msgs/msg/joint_state.h"
// Member `jointstate`
#include "sensor_msgs/msg/detail/joint_state__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void CocoaVFK_Request__rosidl_typesupport_introspection_c__CocoaVFK_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  cocoav_interfaces__srv__CocoaVFK_Request__init(message_memory);
}

void CocoaVFK_Request__rosidl_typesupport_introspection_c__CocoaVFK_Request_fini_function(void * message_memory)
{
  cocoav_interfaces__srv__CocoaVFK_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember CocoaVFK_Request__rosidl_typesupport_introspection_c__CocoaVFK_Request_message_member_array[1] = {
  {
    "jointstate",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cocoav_interfaces__srv__CocoaVFK_Request, jointstate),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers CocoaVFK_Request__rosidl_typesupport_introspection_c__CocoaVFK_Request_message_members = {
  "cocoav_interfaces__srv",  // message namespace
  "CocoaVFK_Request",  // message name
  1,  // number of fields
  sizeof(cocoav_interfaces__srv__CocoaVFK_Request),
  CocoaVFK_Request__rosidl_typesupport_introspection_c__CocoaVFK_Request_message_member_array,  // message members
  CocoaVFK_Request__rosidl_typesupport_introspection_c__CocoaVFK_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  CocoaVFK_Request__rosidl_typesupport_introspection_c__CocoaVFK_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t CocoaVFK_Request__rosidl_typesupport_introspection_c__CocoaVFK_Request_message_type_support_handle = {
  0,
  &CocoaVFK_Request__rosidl_typesupport_introspection_c__CocoaVFK_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_cocoav_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cocoav_interfaces, srv, CocoaVFK_Request)() {
  CocoaVFK_Request__rosidl_typesupport_introspection_c__CocoaVFK_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sensor_msgs, msg, JointState)();
  if (!CocoaVFK_Request__rosidl_typesupport_introspection_c__CocoaVFK_Request_message_type_support_handle.typesupport_identifier) {
    CocoaVFK_Request__rosidl_typesupport_introspection_c__CocoaVFK_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &CocoaVFK_Request__rosidl_typesupport_introspection_c__CocoaVFK_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "cocoav_interfaces/srv/detail/cocoa_vfk__rosidl_typesupport_introspection_c.h"
// already included above
// #include "cocoav_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "cocoav_interfaces/srv/detail/cocoa_vfk__functions.h"
// already included above
// #include "cocoav_interfaces/srv/detail/cocoa_vfk__struct.h"


// Include directives for member types
// Member `positionendeffector`
#include "geometry_msgs/msg/point.h"
// Member `positionendeffector`
#include "geometry_msgs/msg/detail/point__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void CocoaVFK_Response__rosidl_typesupport_introspection_c__CocoaVFK_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  cocoav_interfaces__srv__CocoaVFK_Response__init(message_memory);
}

void CocoaVFK_Response__rosidl_typesupport_introspection_c__CocoaVFK_Response_fini_function(void * message_memory)
{
  cocoav_interfaces__srv__CocoaVFK_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember CocoaVFK_Response__rosidl_typesupport_introspection_c__CocoaVFK_Response_message_member_array[1] = {
  {
    "positionendeffector",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cocoav_interfaces__srv__CocoaVFK_Response, positionendeffector),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers CocoaVFK_Response__rosidl_typesupport_introspection_c__CocoaVFK_Response_message_members = {
  "cocoav_interfaces__srv",  // message namespace
  "CocoaVFK_Response",  // message name
  1,  // number of fields
  sizeof(cocoav_interfaces__srv__CocoaVFK_Response),
  CocoaVFK_Response__rosidl_typesupport_introspection_c__CocoaVFK_Response_message_member_array,  // message members
  CocoaVFK_Response__rosidl_typesupport_introspection_c__CocoaVFK_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  CocoaVFK_Response__rosidl_typesupport_introspection_c__CocoaVFK_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t CocoaVFK_Response__rosidl_typesupport_introspection_c__CocoaVFK_Response_message_type_support_handle = {
  0,
  &CocoaVFK_Response__rosidl_typesupport_introspection_c__CocoaVFK_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_cocoav_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cocoav_interfaces, srv, CocoaVFK_Response)() {
  CocoaVFK_Response__rosidl_typesupport_introspection_c__CocoaVFK_Response_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Point)();
  if (!CocoaVFK_Response__rosidl_typesupport_introspection_c__CocoaVFK_Response_message_type_support_handle.typesupport_identifier) {
    CocoaVFK_Response__rosidl_typesupport_introspection_c__CocoaVFK_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &CocoaVFK_Response__rosidl_typesupport_introspection_c__CocoaVFK_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "cocoav_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "cocoav_interfaces/srv/detail/cocoa_vfk__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers cocoav_interfaces__srv__detail__cocoa_vfk__rosidl_typesupport_introspection_c__CocoaVFK_service_members = {
  "cocoav_interfaces__srv",  // service namespace
  "CocoaVFK",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // cocoav_interfaces__srv__detail__cocoa_vfk__rosidl_typesupport_introspection_c__CocoaVFK_Request_message_type_support_handle,
  NULL  // response message
  // cocoav_interfaces__srv__detail__cocoa_vfk__rosidl_typesupport_introspection_c__CocoaVFK_Response_message_type_support_handle
};

static rosidl_service_type_support_t cocoav_interfaces__srv__detail__cocoa_vfk__rosidl_typesupport_introspection_c__CocoaVFK_service_type_support_handle = {
  0,
  &cocoav_interfaces__srv__detail__cocoa_vfk__rosidl_typesupport_introspection_c__CocoaVFK_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cocoav_interfaces, srv, CocoaVFK_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cocoav_interfaces, srv, CocoaVFK_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_cocoav_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cocoav_interfaces, srv, CocoaVFK)() {
  if (!cocoav_interfaces__srv__detail__cocoa_vfk__rosidl_typesupport_introspection_c__CocoaVFK_service_type_support_handle.typesupport_identifier) {
    cocoav_interfaces__srv__detail__cocoa_vfk__rosidl_typesupport_introspection_c__CocoaVFK_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)cocoav_interfaces__srv__detail__cocoa_vfk__rosidl_typesupport_introspection_c__CocoaVFK_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cocoav_interfaces, srv, CocoaVFK_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cocoav_interfaces, srv, CocoaVFK_Response)()->data;
  }

  return &cocoav_interfaces__srv__detail__cocoa_vfk__rosidl_typesupport_introspection_c__CocoaVFK_service_type_support_handle;
}
