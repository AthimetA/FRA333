// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from lab1_interfaces:srv/SetNoise.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "lab1_interfaces/srv/detail/set_noise__rosidl_typesupport_introspection_c.h"
#include "lab1_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "lab1_interfaces/srv/detail/set_noise__functions.h"
#include "lab1_interfaces/srv/detail/set_noise__struct.h"


// Include directives for member types
// Member `mean`
// Member `variance`
#include "std_msgs/msg/float64.h"
// Member `mean`
// Member `variance`
#include "std_msgs/msg/detail/float64__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void SetNoise_Request__rosidl_typesupport_introspection_c__SetNoise_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  lab1_interfaces__srv__SetNoise_Request__init(message_memory);
}

void SetNoise_Request__rosidl_typesupport_introspection_c__SetNoise_Request_fini_function(void * message_memory)
{
  lab1_interfaces__srv__SetNoise_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember SetNoise_Request__rosidl_typesupport_introspection_c__SetNoise_Request_message_member_array[2] = {
  {
    "mean",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lab1_interfaces__srv__SetNoise_Request, mean),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "variance",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lab1_interfaces__srv__SetNoise_Request, variance),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers SetNoise_Request__rosidl_typesupport_introspection_c__SetNoise_Request_message_members = {
  "lab1_interfaces__srv",  // message namespace
  "SetNoise_Request",  // message name
  2,  // number of fields
  sizeof(lab1_interfaces__srv__SetNoise_Request),
  SetNoise_Request__rosidl_typesupport_introspection_c__SetNoise_Request_message_member_array,  // message members
  SetNoise_Request__rosidl_typesupport_introspection_c__SetNoise_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  SetNoise_Request__rosidl_typesupport_introspection_c__SetNoise_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t SetNoise_Request__rosidl_typesupport_introspection_c__SetNoise_Request_message_type_support_handle = {
  0,
  &SetNoise_Request__rosidl_typesupport_introspection_c__SetNoise_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_lab1_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, lab1_interfaces, srv, SetNoise_Request)() {
  SetNoise_Request__rosidl_typesupport_introspection_c__SetNoise_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Float64)();
  SetNoise_Request__rosidl_typesupport_introspection_c__SetNoise_Request_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Float64)();
  if (!SetNoise_Request__rosidl_typesupport_introspection_c__SetNoise_Request_message_type_support_handle.typesupport_identifier) {
    SetNoise_Request__rosidl_typesupport_introspection_c__SetNoise_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &SetNoise_Request__rosidl_typesupport_introspection_c__SetNoise_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "lab1_interfaces/srv/detail/set_noise__rosidl_typesupport_introspection_c.h"
// already included above
// #include "lab1_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "lab1_interfaces/srv/detail/set_noise__functions.h"
// already included above
// #include "lab1_interfaces/srv/detail/set_noise__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void SetNoise_Response__rosidl_typesupport_introspection_c__SetNoise_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  lab1_interfaces__srv__SetNoise_Response__init(message_memory);
}

void SetNoise_Response__rosidl_typesupport_introspection_c__SetNoise_Response_fini_function(void * message_memory)
{
  lab1_interfaces__srv__SetNoise_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember SetNoise_Response__rosidl_typesupport_introspection_c__SetNoise_Response_message_member_array[1] = {
  {
    "structure_needs_at_least_one_member",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lab1_interfaces__srv__SetNoise_Response, structure_needs_at_least_one_member),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers SetNoise_Response__rosidl_typesupport_introspection_c__SetNoise_Response_message_members = {
  "lab1_interfaces__srv",  // message namespace
  "SetNoise_Response",  // message name
  1,  // number of fields
  sizeof(lab1_interfaces__srv__SetNoise_Response),
  SetNoise_Response__rosidl_typesupport_introspection_c__SetNoise_Response_message_member_array,  // message members
  SetNoise_Response__rosidl_typesupport_introspection_c__SetNoise_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  SetNoise_Response__rosidl_typesupport_introspection_c__SetNoise_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t SetNoise_Response__rosidl_typesupport_introspection_c__SetNoise_Response_message_type_support_handle = {
  0,
  &SetNoise_Response__rosidl_typesupport_introspection_c__SetNoise_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_lab1_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, lab1_interfaces, srv, SetNoise_Response)() {
  if (!SetNoise_Response__rosidl_typesupport_introspection_c__SetNoise_Response_message_type_support_handle.typesupport_identifier) {
    SetNoise_Response__rosidl_typesupport_introspection_c__SetNoise_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &SetNoise_Response__rosidl_typesupport_introspection_c__SetNoise_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "lab1_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "lab1_interfaces/srv/detail/set_noise__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers lab1_interfaces__srv__detail__set_noise__rosidl_typesupport_introspection_c__SetNoise_service_members = {
  "lab1_interfaces__srv",  // service namespace
  "SetNoise",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // lab1_interfaces__srv__detail__set_noise__rosidl_typesupport_introspection_c__SetNoise_Request_message_type_support_handle,
  NULL  // response message
  // lab1_interfaces__srv__detail__set_noise__rosidl_typesupport_introspection_c__SetNoise_Response_message_type_support_handle
};

static rosidl_service_type_support_t lab1_interfaces__srv__detail__set_noise__rosidl_typesupport_introspection_c__SetNoise_service_type_support_handle = {
  0,
  &lab1_interfaces__srv__detail__set_noise__rosidl_typesupport_introspection_c__SetNoise_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, lab1_interfaces, srv, SetNoise_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, lab1_interfaces, srv, SetNoise_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_lab1_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, lab1_interfaces, srv, SetNoise)() {
  if (!lab1_interfaces__srv__detail__set_noise__rosidl_typesupport_introspection_c__SetNoise_service_type_support_handle.typesupport_identifier) {
    lab1_interfaces__srv__detail__set_noise__rosidl_typesupport_introspection_c__SetNoise_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)lab1_interfaces__srv__detail__set_noise__rosidl_typesupport_introspection_c__SetNoise_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, lab1_interfaces, srv, SetNoise_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, lab1_interfaces, srv, SetNoise_Response)()->data;
  }

  return &lab1_interfaces__srv__detail__set_noise__rosidl_typesupport_introspection_c__SetNoise_service_type_support_handle;
}
