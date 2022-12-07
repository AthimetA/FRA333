// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from cocoax_interfaces:srv/CocoaXFK.idl
// generated code does not contain a copyright notice
#include "cocoax_interfaces/srv/detail/cocoa_xfk__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "cocoax_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "cocoax_interfaces/srv/detail/cocoa_xfk__struct.h"
#include "cocoax_interfaces/srv/detail/cocoa_xfk__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "sensor_msgs/msg/detail/joint_state__functions.h"  // jointstate

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_cocoax_interfaces
size_t get_serialized_size_sensor_msgs__msg__JointState(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_cocoax_interfaces
size_t max_serialized_size_sensor_msgs__msg__JointState(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_cocoax_interfaces
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, sensor_msgs, msg, JointState)();


using _CocoaXFK_Request__ros_msg_type = cocoax_interfaces__srv__CocoaXFK_Request;

static bool _CocoaXFK_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _CocoaXFK_Request__ros_msg_type * ros_message = static_cast<const _CocoaXFK_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: jointstate
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, sensor_msgs, msg, JointState
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->jointstate, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _CocoaXFK_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _CocoaXFK_Request__ros_msg_type * ros_message = static_cast<_CocoaXFK_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: jointstate
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, sensor_msgs, msg, JointState
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->jointstate))
    {
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_cocoax_interfaces
size_t get_serialized_size_cocoax_interfaces__srv__CocoaXFK_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _CocoaXFK_Request__ros_msg_type * ros_message = static_cast<const _CocoaXFK_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name jointstate

  current_alignment += get_serialized_size_sensor_msgs__msg__JointState(
    &(ros_message->jointstate), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _CocoaXFK_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_cocoax_interfaces__srv__CocoaXFK_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_cocoax_interfaces
size_t max_serialized_size_cocoax_interfaces__srv__CocoaXFK_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: jointstate
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_sensor_msgs__msg__JointState(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _CocoaXFK_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_cocoax_interfaces__srv__CocoaXFK_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_CocoaXFK_Request = {
  "cocoax_interfaces::srv",
  "CocoaXFK_Request",
  _CocoaXFK_Request__cdr_serialize,
  _CocoaXFK_Request__cdr_deserialize,
  _CocoaXFK_Request__get_serialized_size,
  _CocoaXFK_Request__max_serialized_size
};

static rosidl_message_type_support_t _CocoaXFK_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_CocoaXFK_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, cocoax_interfaces, srv, CocoaXFK_Request)() {
  return &_CocoaXFK_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "cocoax_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "cocoax_interfaces/srv/detail/cocoa_xfk__struct.h"
// already included above
// #include "cocoax_interfaces/srv/detail/cocoa_xfk__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "geometry_msgs/msg/detail/point__functions.h"  // positionendeffector

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_cocoax_interfaces
size_t get_serialized_size_geometry_msgs__msg__Point(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_cocoax_interfaces
size_t max_serialized_size_geometry_msgs__msg__Point(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_cocoax_interfaces
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Point)();


using _CocoaXFK_Response__ros_msg_type = cocoax_interfaces__srv__CocoaXFK_Response;

static bool _CocoaXFK_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _CocoaXFK_Response__ros_msg_type * ros_message = static_cast<const _CocoaXFK_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: positionendeffector
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Point
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->positionendeffector, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _CocoaXFK_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _CocoaXFK_Response__ros_msg_type * ros_message = static_cast<_CocoaXFK_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: positionendeffector
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Point
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->positionendeffector))
    {
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_cocoax_interfaces
size_t get_serialized_size_cocoax_interfaces__srv__CocoaXFK_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _CocoaXFK_Response__ros_msg_type * ros_message = static_cast<const _CocoaXFK_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name positionendeffector

  current_alignment += get_serialized_size_geometry_msgs__msg__Point(
    &(ros_message->positionendeffector), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _CocoaXFK_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_cocoax_interfaces__srv__CocoaXFK_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_cocoax_interfaces
size_t max_serialized_size_cocoax_interfaces__srv__CocoaXFK_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: positionendeffector
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_geometry_msgs__msg__Point(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _CocoaXFK_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_cocoax_interfaces__srv__CocoaXFK_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_CocoaXFK_Response = {
  "cocoax_interfaces::srv",
  "CocoaXFK_Response",
  _CocoaXFK_Response__cdr_serialize,
  _CocoaXFK_Response__cdr_deserialize,
  _CocoaXFK_Response__get_serialized_size,
  _CocoaXFK_Response__max_serialized_size
};

static rosidl_message_type_support_t _CocoaXFK_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_CocoaXFK_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, cocoax_interfaces, srv, CocoaXFK_Response)() {
  return &_CocoaXFK_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "cocoax_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "cocoax_interfaces/srv/cocoa_xfk.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t CocoaXFK__callbacks = {
  "cocoax_interfaces::srv",
  "CocoaXFK",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, cocoax_interfaces, srv, CocoaXFK_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, cocoax_interfaces, srv, CocoaXFK_Response)(),
};

static rosidl_service_type_support_t CocoaXFK__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &CocoaXFK__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, cocoax_interfaces, srv, CocoaXFK)() {
  return &CocoaXFK__handle;
}

#if defined(__cplusplus)
}
#endif
