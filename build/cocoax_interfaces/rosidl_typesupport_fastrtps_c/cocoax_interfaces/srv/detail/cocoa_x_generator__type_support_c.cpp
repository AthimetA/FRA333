// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from cocoax_interfaces:srv/CocoaXGenerator.idl
// generated code does not contain a copyright notice
#include "cocoax_interfaces/srv/detail/cocoa_x_generator__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "cocoax_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "cocoax_interfaces/srv/detail/cocoa_x_generator__struct.h"
#include "cocoax_interfaces/srv/detail/cocoa_x_generator__functions.h"
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


// forward declare type support functions


using _CocoaXGenerator_Request__ros_msg_type = cocoax_interfaces__srv__CocoaXGenerator_Request;

static bool _CocoaXGenerator_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _CocoaXGenerator_Request__ros_msg_type * ros_message = static_cast<const _CocoaXGenerator_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: position_initial
  {
    size_t size = 3;
    auto array_ptr = ros_message->position_initial;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: position_final
  {
    size_t size = 3;
    auto array_ptr = ros_message->position_final;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: duration
  {
    cdr << ros_message->duration;
  }

  return true;
}

static bool _CocoaXGenerator_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _CocoaXGenerator_Request__ros_msg_type * ros_message = static_cast<_CocoaXGenerator_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: position_initial
  {
    size_t size = 3;
    auto array_ptr = ros_message->position_initial;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: position_final
  {
    size_t size = 3;
    auto array_ptr = ros_message->position_final;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: duration
  {
    cdr >> ros_message->duration;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_cocoax_interfaces
size_t get_serialized_size_cocoax_interfaces__srv__CocoaXGenerator_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _CocoaXGenerator_Request__ros_msg_type * ros_message = static_cast<const _CocoaXGenerator_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name position_initial
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->position_initial;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name position_final
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->position_final;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name duration
  {
    size_t item_size = sizeof(ros_message->duration);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _CocoaXGenerator_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_cocoax_interfaces__srv__CocoaXGenerator_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_cocoax_interfaces
size_t max_serialized_size_cocoax_interfaces__srv__CocoaXGenerator_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: position_initial
  {
    size_t array_size = 3;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: position_final
  {
    size_t array_size = 3;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: duration
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _CocoaXGenerator_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_cocoax_interfaces__srv__CocoaXGenerator_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_CocoaXGenerator_Request = {
  "cocoax_interfaces::srv",
  "CocoaXGenerator_Request",
  _CocoaXGenerator_Request__cdr_serialize,
  _CocoaXGenerator_Request__cdr_deserialize,
  _CocoaXGenerator_Request__get_serialized_size,
  _CocoaXGenerator_Request__max_serialized_size
};

static rosidl_message_type_support_t _CocoaXGenerator_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_CocoaXGenerator_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, cocoax_interfaces, srv, CocoaXGenerator_Request)() {
  return &_CocoaXGenerator_Request__type_support;
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
// #include "cocoax_interfaces/srv/detail/cocoa_x_generator__struct.h"
// already included above
// #include "cocoax_interfaces/srv/detail/cocoa_x_generator__functions.h"
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


// forward declare type support functions


using _CocoaXGenerator_Response__ros_msg_type = cocoax_interfaces__srv__CocoaXGenerator_Response;

static bool _CocoaXGenerator_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _CocoaXGenerator_Response__ros_msg_type * ros_message = static_cast<const _CocoaXGenerator_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: structure_needs_at_least_one_member
  {
    cdr << ros_message->structure_needs_at_least_one_member;
  }

  return true;
}

static bool _CocoaXGenerator_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _CocoaXGenerator_Response__ros_msg_type * ros_message = static_cast<_CocoaXGenerator_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: structure_needs_at_least_one_member
  {
    cdr >> ros_message->structure_needs_at_least_one_member;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_cocoax_interfaces
size_t get_serialized_size_cocoax_interfaces__srv__CocoaXGenerator_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _CocoaXGenerator_Response__ros_msg_type * ros_message = static_cast<const _CocoaXGenerator_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name structure_needs_at_least_one_member
  {
    size_t item_size = sizeof(ros_message->structure_needs_at_least_one_member);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _CocoaXGenerator_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_cocoax_interfaces__srv__CocoaXGenerator_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_cocoax_interfaces
size_t max_serialized_size_cocoax_interfaces__srv__CocoaXGenerator_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: structure_needs_at_least_one_member
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _CocoaXGenerator_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_cocoax_interfaces__srv__CocoaXGenerator_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_CocoaXGenerator_Response = {
  "cocoax_interfaces::srv",
  "CocoaXGenerator_Response",
  _CocoaXGenerator_Response__cdr_serialize,
  _CocoaXGenerator_Response__cdr_deserialize,
  _CocoaXGenerator_Response__get_serialized_size,
  _CocoaXGenerator_Response__max_serialized_size
};

static rosidl_message_type_support_t _CocoaXGenerator_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_CocoaXGenerator_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, cocoax_interfaces, srv, CocoaXGenerator_Response)() {
  return &_CocoaXGenerator_Response__type_support;
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
#include "cocoax_interfaces/srv/cocoa_x_generator.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t CocoaXGenerator__callbacks = {
  "cocoax_interfaces::srv",
  "CocoaXGenerator",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, cocoax_interfaces, srv, CocoaXGenerator_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, cocoax_interfaces, srv, CocoaXGenerator_Response)(),
};

static rosidl_service_type_support_t CocoaXGenerator__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &CocoaXGenerator__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, cocoax_interfaces, srv, CocoaXGenerator)() {
  return &CocoaXGenerator__handle;
}

#if defined(__cplusplus)
}
#endif
