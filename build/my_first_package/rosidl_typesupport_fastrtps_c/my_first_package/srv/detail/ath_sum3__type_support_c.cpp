// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from my_first_package:srv/AthSum3.idl
// generated code does not contain a copyright notice
#include "my_first_package/srv/detail/ath_sum3__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "my_first_package/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "my_first_package/srv/detail/ath_sum3__struct.h"
#include "my_first_package/srv/detail/ath_sum3__functions.h"
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

#include "std_msgs/msg/detail/int64__functions.h"  // b

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_my_first_package
size_t get_serialized_size_std_msgs__msg__Int64(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_my_first_package
size_t max_serialized_size_std_msgs__msg__Int64(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_my_first_package
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, std_msgs, msg, Int64)();


using _AthSum3_Request__ros_msg_type = my_first_package__srv__AthSum3_Request;

static bool _AthSum3_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _AthSum3_Request__ros_msg_type * ros_message = static_cast<const _AthSum3_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: a
  {
    cdr << ros_message->a;
  }

  // Field name: b
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Int64
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->b, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _AthSum3_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _AthSum3_Request__ros_msg_type * ros_message = static_cast<_AthSum3_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: a
  {
    cdr >> ros_message->a;
  }

  // Field name: b
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Int64
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->b))
    {
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_my_first_package
size_t get_serialized_size_my_first_package__srv__AthSum3_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _AthSum3_Request__ros_msg_type * ros_message = static_cast<const _AthSum3_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name a
  {
    size_t item_size = sizeof(ros_message->a);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name b

  current_alignment += get_serialized_size_std_msgs__msg__Int64(
    &(ros_message->b), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _AthSum3_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_my_first_package__srv__AthSum3_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_my_first_package
size_t max_serialized_size_my_first_package__srv__AthSum3_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: a
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: b
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_std_msgs__msg__Int64(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _AthSum3_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_my_first_package__srv__AthSum3_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_AthSum3_Request = {
  "my_first_package::srv",
  "AthSum3_Request",
  _AthSum3_Request__cdr_serialize,
  _AthSum3_Request__cdr_deserialize,
  _AthSum3_Request__get_serialized_size,
  _AthSum3_Request__max_serialized_size
};

static rosidl_message_type_support_t _AthSum3_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_AthSum3_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, my_first_package, srv, AthSum3_Request)() {
  return &_AthSum3_Request__type_support;
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
// #include "my_first_package/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "my_first_package/srv/detail/ath_sum3__struct.h"
// already included above
// #include "my_first_package/srv/detail/ath_sum3__functions.h"
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


using _AthSum3_Response__ros_msg_type = my_first_package__srv__AthSum3_Response;

static bool _AthSum3_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _AthSum3_Response__ros_msg_type * ros_message = static_cast<const _AthSum3_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: sum
  {
    cdr << ros_message->sum;
  }

  return true;
}

static bool _AthSum3_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _AthSum3_Response__ros_msg_type * ros_message = static_cast<_AthSum3_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: sum
  {
    cdr >> ros_message->sum;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_my_first_package
size_t get_serialized_size_my_first_package__srv__AthSum3_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _AthSum3_Response__ros_msg_type * ros_message = static_cast<const _AthSum3_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name sum
  {
    size_t item_size = sizeof(ros_message->sum);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _AthSum3_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_my_first_package__srv__AthSum3_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_my_first_package
size_t max_serialized_size_my_first_package__srv__AthSum3_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: sum
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _AthSum3_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_my_first_package__srv__AthSum3_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_AthSum3_Response = {
  "my_first_package::srv",
  "AthSum3_Response",
  _AthSum3_Response__cdr_serialize,
  _AthSum3_Response__cdr_deserialize,
  _AthSum3_Response__get_serialized_size,
  _AthSum3_Response__max_serialized_size
};

static rosidl_message_type_support_t _AthSum3_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_AthSum3_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, my_first_package, srv, AthSum3_Response)() {
  return &_AthSum3_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "my_first_package/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "my_first_package/srv/ath_sum3.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t AthSum3__callbacks = {
  "my_first_package::srv",
  "AthSum3",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, my_first_package, srv, AthSum3_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, my_first_package, srv, AthSum3_Response)(),
};

static rosidl_service_type_support_t AthSum3__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &AthSum3__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, my_first_package, srv, AthSum3)() {
  return &AthSum3__handle;
}

#if defined(__cplusplus)
}
#endif
