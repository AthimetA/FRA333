// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from my_first_package:srv/AthSum3.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "my_first_package/srv/detail/ath_sum3__rosidl_typesupport_introspection_c.h"
#include "my_first_package/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "my_first_package/srv/detail/ath_sum3__functions.h"
#include "my_first_package/srv/detail/ath_sum3__struct.h"


// Include directives for member types
// Member `b`
#include "std_msgs/msg/int64.h"
// Member `b`
#include "std_msgs/msg/detail/int64__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void AthSum3_Request__rosidl_typesupport_introspection_c__AthSum3_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  my_first_package__srv__AthSum3_Request__init(message_memory);
}

void AthSum3_Request__rosidl_typesupport_introspection_c__AthSum3_Request_fini_function(void * message_memory)
{
  my_first_package__srv__AthSum3_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember AthSum3_Request__rosidl_typesupport_introspection_c__AthSum3_Request_message_member_array[2] = {
  {
    "a",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_first_package__srv__AthSum3_Request, a),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "b",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_first_package__srv__AthSum3_Request, b),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers AthSum3_Request__rosidl_typesupport_introspection_c__AthSum3_Request_message_members = {
  "my_first_package__srv",  // message namespace
  "AthSum3_Request",  // message name
  2,  // number of fields
  sizeof(my_first_package__srv__AthSum3_Request),
  AthSum3_Request__rosidl_typesupport_introspection_c__AthSum3_Request_message_member_array,  // message members
  AthSum3_Request__rosidl_typesupport_introspection_c__AthSum3_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  AthSum3_Request__rosidl_typesupport_introspection_c__AthSum3_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t AthSum3_Request__rosidl_typesupport_introspection_c__AthSum3_Request_message_type_support_handle = {
  0,
  &AthSum3_Request__rosidl_typesupport_introspection_c__AthSum3_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_my_first_package
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_first_package, srv, AthSum3_Request)() {
  AthSum3_Request__rosidl_typesupport_introspection_c__AthSum3_Request_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Int64)();
  if (!AthSum3_Request__rosidl_typesupport_introspection_c__AthSum3_Request_message_type_support_handle.typesupport_identifier) {
    AthSum3_Request__rosidl_typesupport_introspection_c__AthSum3_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &AthSum3_Request__rosidl_typesupport_introspection_c__AthSum3_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "my_first_package/srv/detail/ath_sum3__rosidl_typesupport_introspection_c.h"
// already included above
// #include "my_first_package/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "my_first_package/srv/detail/ath_sum3__functions.h"
// already included above
// #include "my_first_package/srv/detail/ath_sum3__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void AthSum3_Response__rosidl_typesupport_introspection_c__AthSum3_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  my_first_package__srv__AthSum3_Response__init(message_memory);
}

void AthSum3_Response__rosidl_typesupport_introspection_c__AthSum3_Response_fini_function(void * message_memory)
{
  my_first_package__srv__AthSum3_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember AthSum3_Response__rosidl_typesupport_introspection_c__AthSum3_Response_message_member_array[1] = {
  {
    "sum",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_first_package__srv__AthSum3_Response, sum),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers AthSum3_Response__rosidl_typesupport_introspection_c__AthSum3_Response_message_members = {
  "my_first_package__srv",  // message namespace
  "AthSum3_Response",  // message name
  1,  // number of fields
  sizeof(my_first_package__srv__AthSum3_Response),
  AthSum3_Response__rosidl_typesupport_introspection_c__AthSum3_Response_message_member_array,  // message members
  AthSum3_Response__rosidl_typesupport_introspection_c__AthSum3_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  AthSum3_Response__rosidl_typesupport_introspection_c__AthSum3_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t AthSum3_Response__rosidl_typesupport_introspection_c__AthSum3_Response_message_type_support_handle = {
  0,
  &AthSum3_Response__rosidl_typesupport_introspection_c__AthSum3_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_my_first_package
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_first_package, srv, AthSum3_Response)() {
  if (!AthSum3_Response__rosidl_typesupport_introspection_c__AthSum3_Response_message_type_support_handle.typesupport_identifier) {
    AthSum3_Response__rosidl_typesupport_introspection_c__AthSum3_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &AthSum3_Response__rosidl_typesupport_introspection_c__AthSum3_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "my_first_package/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "my_first_package/srv/detail/ath_sum3__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers my_first_package__srv__detail__ath_sum3__rosidl_typesupport_introspection_c__AthSum3_service_members = {
  "my_first_package__srv",  // service namespace
  "AthSum3",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // my_first_package__srv__detail__ath_sum3__rosidl_typesupport_introspection_c__AthSum3_Request_message_type_support_handle,
  NULL  // response message
  // my_first_package__srv__detail__ath_sum3__rosidl_typesupport_introspection_c__AthSum3_Response_message_type_support_handle
};

static rosidl_service_type_support_t my_first_package__srv__detail__ath_sum3__rosidl_typesupport_introspection_c__AthSum3_service_type_support_handle = {
  0,
  &my_first_package__srv__detail__ath_sum3__rosidl_typesupport_introspection_c__AthSum3_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_first_package, srv, AthSum3_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_first_package, srv, AthSum3_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_my_first_package
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_first_package, srv, AthSum3)() {
  if (!my_first_package__srv__detail__ath_sum3__rosidl_typesupport_introspection_c__AthSum3_service_type_support_handle.typesupport_identifier) {
    my_first_package__srv__detail__ath_sum3__rosidl_typesupport_introspection_c__AthSum3_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)my_first_package__srv__detail__ath_sum3__rosidl_typesupport_introspection_c__AthSum3_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_first_package, srv, AthSum3_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_first_package, srv, AthSum3_Response)()->data;
  }

  return &my_first_package__srv__detail__ath_sum3__rosidl_typesupport_introspection_c__AthSum3_service_type_support_handle;
}
