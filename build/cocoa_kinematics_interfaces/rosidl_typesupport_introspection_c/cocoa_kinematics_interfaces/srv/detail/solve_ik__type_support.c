// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from cocoa_kinematics_interfaces:srv/SolveIK.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "cocoa_kinematics_interfaces/srv/detail/solve_ik__rosidl_typesupport_introspection_c.h"
#include "cocoa_kinematics_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "cocoa_kinematics_interfaces/srv/detail/solve_ik__functions.h"
#include "cocoa_kinematics_interfaces/srv/detail/solve_ik__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void SolveIK_Request__rosidl_typesupport_introspection_c__SolveIK_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  cocoa_kinematics_interfaces__srv__SolveIK_Request__init(message_memory);
}

void SolveIK_Request__rosidl_typesupport_introspection_c__SolveIK_Request_fini_function(void * message_memory)
{
  cocoa_kinematics_interfaces__srv__SolveIK_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember SolveIK_Request__rosidl_typesupport_introspection_c__SolveIK_Request_message_member_array[1] = {
  {
    "structure_needs_at_least_one_member",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cocoa_kinematics_interfaces__srv__SolveIK_Request, structure_needs_at_least_one_member),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers SolveIK_Request__rosidl_typesupport_introspection_c__SolveIK_Request_message_members = {
  "cocoa_kinematics_interfaces__srv",  // message namespace
  "SolveIK_Request",  // message name
  1,  // number of fields
  sizeof(cocoa_kinematics_interfaces__srv__SolveIK_Request),
  SolveIK_Request__rosidl_typesupport_introspection_c__SolveIK_Request_message_member_array,  // message members
  SolveIK_Request__rosidl_typesupport_introspection_c__SolveIK_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  SolveIK_Request__rosidl_typesupport_introspection_c__SolveIK_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t SolveIK_Request__rosidl_typesupport_introspection_c__SolveIK_Request_message_type_support_handle = {
  0,
  &SolveIK_Request__rosidl_typesupport_introspection_c__SolveIK_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_cocoa_kinematics_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cocoa_kinematics_interfaces, srv, SolveIK_Request)() {
  if (!SolveIK_Request__rosidl_typesupport_introspection_c__SolveIK_Request_message_type_support_handle.typesupport_identifier) {
    SolveIK_Request__rosidl_typesupport_introspection_c__SolveIK_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &SolveIK_Request__rosidl_typesupport_introspection_c__SolveIK_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "cocoa_kinematics_interfaces/srv/detail/solve_ik__rosidl_typesupport_introspection_c.h"
// already included above
// #include "cocoa_kinematics_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "cocoa_kinematics_interfaces/srv/detail/solve_ik__functions.h"
// already included above
// #include "cocoa_kinematics_interfaces/srv/detail/solve_ik__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void SolveIK_Response__rosidl_typesupport_introspection_c__SolveIK_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  cocoa_kinematics_interfaces__srv__SolveIK_Response__init(message_memory);
}

void SolveIK_Response__rosidl_typesupport_introspection_c__SolveIK_Response_fini_function(void * message_memory)
{
  cocoa_kinematics_interfaces__srv__SolveIK_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember SolveIK_Response__rosidl_typesupport_introspection_c__SolveIK_Response_message_member_array[1] = {
  {
    "structure_needs_at_least_one_member",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cocoa_kinematics_interfaces__srv__SolveIK_Response, structure_needs_at_least_one_member),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers SolveIK_Response__rosidl_typesupport_introspection_c__SolveIK_Response_message_members = {
  "cocoa_kinematics_interfaces__srv",  // message namespace
  "SolveIK_Response",  // message name
  1,  // number of fields
  sizeof(cocoa_kinematics_interfaces__srv__SolveIK_Response),
  SolveIK_Response__rosidl_typesupport_introspection_c__SolveIK_Response_message_member_array,  // message members
  SolveIK_Response__rosidl_typesupport_introspection_c__SolveIK_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  SolveIK_Response__rosidl_typesupport_introspection_c__SolveIK_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t SolveIK_Response__rosidl_typesupport_introspection_c__SolveIK_Response_message_type_support_handle = {
  0,
  &SolveIK_Response__rosidl_typesupport_introspection_c__SolveIK_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_cocoa_kinematics_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cocoa_kinematics_interfaces, srv, SolveIK_Response)() {
  if (!SolveIK_Response__rosidl_typesupport_introspection_c__SolveIK_Response_message_type_support_handle.typesupport_identifier) {
    SolveIK_Response__rosidl_typesupport_introspection_c__SolveIK_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &SolveIK_Response__rosidl_typesupport_introspection_c__SolveIK_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "cocoa_kinematics_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "cocoa_kinematics_interfaces/srv/detail/solve_ik__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers cocoa_kinematics_interfaces__srv__detail__solve_ik__rosidl_typesupport_introspection_c__SolveIK_service_members = {
  "cocoa_kinematics_interfaces__srv",  // service namespace
  "SolveIK",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // cocoa_kinematics_interfaces__srv__detail__solve_ik__rosidl_typesupport_introspection_c__SolveIK_Request_message_type_support_handle,
  NULL  // response message
  // cocoa_kinematics_interfaces__srv__detail__solve_ik__rosidl_typesupport_introspection_c__SolveIK_Response_message_type_support_handle
};

static rosidl_service_type_support_t cocoa_kinematics_interfaces__srv__detail__solve_ik__rosidl_typesupport_introspection_c__SolveIK_service_type_support_handle = {
  0,
  &cocoa_kinematics_interfaces__srv__detail__solve_ik__rosidl_typesupport_introspection_c__SolveIK_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cocoa_kinematics_interfaces, srv, SolveIK_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cocoa_kinematics_interfaces, srv, SolveIK_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_cocoa_kinematics_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cocoa_kinematics_interfaces, srv, SolveIK)() {
  if (!cocoa_kinematics_interfaces__srv__detail__solve_ik__rosidl_typesupport_introspection_c__SolveIK_service_type_support_handle.typesupport_identifier) {
    cocoa_kinematics_interfaces__srv__detail__solve_ik__rosidl_typesupport_introspection_c__SolveIK_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)cocoa_kinematics_interfaces__srv__detail__solve_ik__rosidl_typesupport_introspection_c__SolveIK_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cocoa_kinematics_interfaces, srv, SolveIK_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cocoa_kinematics_interfaces, srv, SolveIK_Response)()->data;
  }

  return &cocoa_kinematics_interfaces__srv__detail__solve_ik__rosidl_typesupport_introspection_c__SolveIK_service_type_support_handle;
}
