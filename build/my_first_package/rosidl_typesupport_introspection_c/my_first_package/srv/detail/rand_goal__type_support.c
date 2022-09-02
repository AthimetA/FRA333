// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from my_first_package:srv/RandGoal.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "my_first_package/srv/detail/rand_goal__rosidl_typesupport_introspection_c.h"
#include "my_first_package/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "my_first_package/srv/detail/rand_goal__functions.h"
#include "my_first_package/srv/detail/rand_goal__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void RandGoal_Request__rosidl_typesupport_introspection_c__RandGoal_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  my_first_package__srv__RandGoal_Request__init(message_memory);
}

void RandGoal_Request__rosidl_typesupport_introspection_c__RandGoal_Request_fini_function(void * message_memory)
{
  my_first_package__srv__RandGoal_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember RandGoal_Request__rosidl_typesupport_introspection_c__RandGoal_Request_message_member_array[1] = {
  {
    "structure_needs_at_least_one_member",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_first_package__srv__RandGoal_Request, structure_needs_at_least_one_member),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers RandGoal_Request__rosidl_typesupport_introspection_c__RandGoal_Request_message_members = {
  "my_first_package__srv",  // message namespace
  "RandGoal_Request",  // message name
  1,  // number of fields
  sizeof(my_first_package__srv__RandGoal_Request),
  RandGoal_Request__rosidl_typesupport_introspection_c__RandGoal_Request_message_member_array,  // message members
  RandGoal_Request__rosidl_typesupport_introspection_c__RandGoal_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  RandGoal_Request__rosidl_typesupport_introspection_c__RandGoal_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t RandGoal_Request__rosidl_typesupport_introspection_c__RandGoal_Request_message_type_support_handle = {
  0,
  &RandGoal_Request__rosidl_typesupport_introspection_c__RandGoal_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_my_first_package
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_first_package, srv, RandGoal_Request)() {
  if (!RandGoal_Request__rosidl_typesupport_introspection_c__RandGoal_Request_message_type_support_handle.typesupport_identifier) {
    RandGoal_Request__rosidl_typesupport_introspection_c__RandGoal_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &RandGoal_Request__rosidl_typesupport_introspection_c__RandGoal_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "my_first_package/srv/detail/rand_goal__rosidl_typesupport_introspection_c.h"
// already included above
// #include "my_first_package/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "my_first_package/srv/detail/rand_goal__functions.h"
// already included above
// #include "my_first_package/srv/detail/rand_goal__struct.h"


// Include directives for member types
// Member `position`
#include "geometry_msgs/msg/point.h"
// Member `position`
#include "geometry_msgs/msg/detail/point__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void RandGoal_Response__rosidl_typesupport_introspection_c__RandGoal_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  my_first_package__srv__RandGoal_Response__init(message_memory);
}

void RandGoal_Response__rosidl_typesupport_introspection_c__RandGoal_Response_fini_function(void * message_memory)
{
  my_first_package__srv__RandGoal_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember RandGoal_Response__rosidl_typesupport_introspection_c__RandGoal_Response_message_member_array[1] = {
  {
    "position",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_first_package__srv__RandGoal_Response, position),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers RandGoal_Response__rosidl_typesupport_introspection_c__RandGoal_Response_message_members = {
  "my_first_package__srv",  // message namespace
  "RandGoal_Response",  // message name
  1,  // number of fields
  sizeof(my_first_package__srv__RandGoal_Response),
  RandGoal_Response__rosidl_typesupport_introspection_c__RandGoal_Response_message_member_array,  // message members
  RandGoal_Response__rosidl_typesupport_introspection_c__RandGoal_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  RandGoal_Response__rosidl_typesupport_introspection_c__RandGoal_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t RandGoal_Response__rosidl_typesupport_introspection_c__RandGoal_Response_message_type_support_handle = {
  0,
  &RandGoal_Response__rosidl_typesupport_introspection_c__RandGoal_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_my_first_package
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_first_package, srv, RandGoal_Response)() {
  RandGoal_Response__rosidl_typesupport_introspection_c__RandGoal_Response_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Point)();
  if (!RandGoal_Response__rosidl_typesupport_introspection_c__RandGoal_Response_message_type_support_handle.typesupport_identifier) {
    RandGoal_Response__rosidl_typesupport_introspection_c__RandGoal_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &RandGoal_Response__rosidl_typesupport_introspection_c__RandGoal_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "my_first_package/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "my_first_package/srv/detail/rand_goal__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers my_first_package__srv__detail__rand_goal__rosidl_typesupport_introspection_c__RandGoal_service_members = {
  "my_first_package__srv",  // service namespace
  "RandGoal",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // my_first_package__srv__detail__rand_goal__rosidl_typesupport_introspection_c__RandGoal_Request_message_type_support_handle,
  NULL  // response message
  // my_first_package__srv__detail__rand_goal__rosidl_typesupport_introspection_c__RandGoal_Response_message_type_support_handle
};

static rosidl_service_type_support_t my_first_package__srv__detail__rand_goal__rosidl_typesupport_introspection_c__RandGoal_service_type_support_handle = {
  0,
  &my_first_package__srv__detail__rand_goal__rosidl_typesupport_introspection_c__RandGoal_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_first_package, srv, RandGoal_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_first_package, srv, RandGoal_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_my_first_package
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_first_package, srv, RandGoal)() {
  if (!my_first_package__srv__detail__rand_goal__rosidl_typesupport_introspection_c__RandGoal_service_type_support_handle.typesupport_identifier) {
    my_first_package__srv__detail__rand_goal__rosidl_typesupport_introspection_c__RandGoal_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)my_first_package__srv__detail__rand_goal__rosidl_typesupport_introspection_c__RandGoal_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_first_package, srv, RandGoal_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_first_package, srv, RandGoal_Response)()->data;
  }

  return &my_first_package__srv__detail__rand_goal__rosidl_typesupport_introspection_c__RandGoal_service_type_support_handle;
}
