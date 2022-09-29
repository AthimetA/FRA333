// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from cocoa_kinematics_interfaces:srv/RobotJS.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "cocoa_kinematics_interfaces/srv/detail/robot_js__rosidl_typesupport_introspection_c.h"
#include "cocoa_kinematics_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "cocoa_kinematics_interfaces/srv/detail/robot_js__functions.h"
#include "cocoa_kinematics_interfaces/srv/detail/robot_js__struct.h"


// Include directives for member types
// Member `jointstate`
#include "sensor_msgs/msg/joint_state.h"
// Member `jointstate`
#include "sensor_msgs/msg/detail/joint_state__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void RobotJS_Request__rosidl_typesupport_introspection_c__RobotJS_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  cocoa_kinematics_interfaces__srv__RobotJS_Request__init(message_memory);
}

void RobotJS_Request__rosidl_typesupport_introspection_c__RobotJS_Request_fini_function(void * message_memory)
{
  cocoa_kinematics_interfaces__srv__RobotJS_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember RobotJS_Request__rosidl_typesupport_introspection_c__RobotJS_Request_message_member_array[1] = {
  {
    "jointstate",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cocoa_kinematics_interfaces__srv__RobotJS_Request, jointstate),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers RobotJS_Request__rosidl_typesupport_introspection_c__RobotJS_Request_message_members = {
  "cocoa_kinematics_interfaces__srv",  // message namespace
  "RobotJS_Request",  // message name
  1,  // number of fields
  sizeof(cocoa_kinematics_interfaces__srv__RobotJS_Request),
  RobotJS_Request__rosidl_typesupport_introspection_c__RobotJS_Request_message_member_array,  // message members
  RobotJS_Request__rosidl_typesupport_introspection_c__RobotJS_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  RobotJS_Request__rosidl_typesupport_introspection_c__RobotJS_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t RobotJS_Request__rosidl_typesupport_introspection_c__RobotJS_Request_message_type_support_handle = {
  0,
  &RobotJS_Request__rosidl_typesupport_introspection_c__RobotJS_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_cocoa_kinematics_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cocoa_kinematics_interfaces, srv, RobotJS_Request)() {
  RobotJS_Request__rosidl_typesupport_introspection_c__RobotJS_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sensor_msgs, msg, JointState)();
  if (!RobotJS_Request__rosidl_typesupport_introspection_c__RobotJS_Request_message_type_support_handle.typesupport_identifier) {
    RobotJS_Request__rosidl_typesupport_introspection_c__RobotJS_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &RobotJS_Request__rosidl_typesupport_introspection_c__RobotJS_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "cocoa_kinematics_interfaces/srv/detail/robot_js__rosidl_typesupport_introspection_c.h"
// already included above
// #include "cocoa_kinematics_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "cocoa_kinematics_interfaces/srv/detail/robot_js__functions.h"
// already included above
// #include "cocoa_kinematics_interfaces/srv/detail/robot_js__struct.h"


// Include directives for member types
// Member `positionendeffector`
#include "geometry_msgs/msg/point.h"
// Member `positionendeffector`
#include "geometry_msgs/msg/detail/point__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void RobotJS_Response__rosidl_typesupport_introspection_c__RobotJS_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  cocoa_kinematics_interfaces__srv__RobotJS_Response__init(message_memory);
}

void RobotJS_Response__rosidl_typesupport_introspection_c__RobotJS_Response_fini_function(void * message_memory)
{
  cocoa_kinematics_interfaces__srv__RobotJS_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember RobotJS_Response__rosidl_typesupport_introspection_c__RobotJS_Response_message_member_array[1] = {
  {
    "positionendeffector",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cocoa_kinematics_interfaces__srv__RobotJS_Response, positionendeffector),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers RobotJS_Response__rosidl_typesupport_introspection_c__RobotJS_Response_message_members = {
  "cocoa_kinematics_interfaces__srv",  // message namespace
  "RobotJS_Response",  // message name
  1,  // number of fields
  sizeof(cocoa_kinematics_interfaces__srv__RobotJS_Response),
  RobotJS_Response__rosidl_typesupport_introspection_c__RobotJS_Response_message_member_array,  // message members
  RobotJS_Response__rosidl_typesupport_introspection_c__RobotJS_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  RobotJS_Response__rosidl_typesupport_introspection_c__RobotJS_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t RobotJS_Response__rosidl_typesupport_introspection_c__RobotJS_Response_message_type_support_handle = {
  0,
  &RobotJS_Response__rosidl_typesupport_introspection_c__RobotJS_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_cocoa_kinematics_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cocoa_kinematics_interfaces, srv, RobotJS_Response)() {
  RobotJS_Response__rosidl_typesupport_introspection_c__RobotJS_Response_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Point)();
  if (!RobotJS_Response__rosidl_typesupport_introspection_c__RobotJS_Response_message_type_support_handle.typesupport_identifier) {
    RobotJS_Response__rosidl_typesupport_introspection_c__RobotJS_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &RobotJS_Response__rosidl_typesupport_introspection_c__RobotJS_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "cocoa_kinematics_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "cocoa_kinematics_interfaces/srv/detail/robot_js__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers cocoa_kinematics_interfaces__srv__detail__robot_js__rosidl_typesupport_introspection_c__RobotJS_service_members = {
  "cocoa_kinematics_interfaces__srv",  // service namespace
  "RobotJS",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // cocoa_kinematics_interfaces__srv__detail__robot_js__rosidl_typesupport_introspection_c__RobotJS_Request_message_type_support_handle,
  NULL  // response message
  // cocoa_kinematics_interfaces__srv__detail__robot_js__rosidl_typesupport_introspection_c__RobotJS_Response_message_type_support_handle
};

static rosidl_service_type_support_t cocoa_kinematics_interfaces__srv__detail__robot_js__rosidl_typesupport_introspection_c__RobotJS_service_type_support_handle = {
  0,
  &cocoa_kinematics_interfaces__srv__detail__robot_js__rosidl_typesupport_introspection_c__RobotJS_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cocoa_kinematics_interfaces, srv, RobotJS_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cocoa_kinematics_interfaces, srv, RobotJS_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_cocoa_kinematics_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cocoa_kinematics_interfaces, srv, RobotJS)() {
  if (!cocoa_kinematics_interfaces__srv__detail__robot_js__rosidl_typesupport_introspection_c__RobotJS_service_type_support_handle.typesupport_identifier) {
    cocoa_kinematics_interfaces__srv__detail__robot_js__rosidl_typesupport_introspection_c__RobotJS_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)cocoa_kinematics_interfaces__srv__detail__robot_js__rosidl_typesupport_introspection_c__RobotJS_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cocoa_kinematics_interfaces, srv, RobotJS_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cocoa_kinematics_interfaces, srv, RobotJS_Response)()->data;
  }

  return &cocoa_kinematics_interfaces__srv__detail__robot_js__rosidl_typesupport_introspection_c__RobotJS_service_type_support_handle;
}
