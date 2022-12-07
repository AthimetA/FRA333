// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from cocoax_interfaces:msg/CocoaXIMU.idl
// generated code does not contain a copyright notice
#include "cocoax_interfaces/msg/detail/cocoa_ximu__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "cocoax_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "cocoax_interfaces/msg/detail/cocoa_ximu__struct.h"
#include "cocoax_interfaces/msg/detail/cocoa_ximu__functions.h"
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


using _CocoaXIMU__ros_msg_type = cocoax_interfaces__msg__CocoaXIMU;

static bool _CocoaXIMU__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _CocoaXIMU__ros_msg_type * ros_message = static_cast<const _CocoaXIMU__ros_msg_type *>(untyped_ros_message);
  // Field name: time_ms
  {
    cdr << ros_message->time_ms;
  }

  // Field name: angular_velocity
  {
    size_t size = 3;
    auto array_ptr = ros_message->angular_velocity;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: linear_acceleration
  {
    size_t size = 3;
    auto array_ptr = ros_message->linear_acceleration;
    cdr.serializeArray(array_ptr, size);
  }

  return true;
}

static bool _CocoaXIMU__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _CocoaXIMU__ros_msg_type * ros_message = static_cast<_CocoaXIMU__ros_msg_type *>(untyped_ros_message);
  // Field name: time_ms
  {
    cdr >> ros_message->time_ms;
  }

  // Field name: angular_velocity
  {
    size_t size = 3;
    auto array_ptr = ros_message->angular_velocity;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: linear_acceleration
  {
    size_t size = 3;
    auto array_ptr = ros_message->linear_acceleration;
    cdr.deserializeArray(array_ptr, size);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_cocoax_interfaces
size_t get_serialized_size_cocoax_interfaces__msg__CocoaXIMU(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _CocoaXIMU__ros_msg_type * ros_message = static_cast<const _CocoaXIMU__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name time_ms
  {
    size_t item_size = sizeof(ros_message->time_ms);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name angular_velocity
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->angular_velocity;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name linear_acceleration
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->linear_acceleration;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _CocoaXIMU__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_cocoax_interfaces__msg__CocoaXIMU(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_cocoax_interfaces
size_t max_serialized_size_cocoax_interfaces__msg__CocoaXIMU(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: time_ms
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: angular_velocity
  {
    size_t array_size = 3;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: linear_acceleration
  {
    size_t array_size = 3;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _CocoaXIMU__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_cocoax_interfaces__msg__CocoaXIMU(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_CocoaXIMU = {
  "cocoax_interfaces::msg",
  "CocoaXIMU",
  _CocoaXIMU__cdr_serialize,
  _CocoaXIMU__cdr_deserialize,
  _CocoaXIMU__get_serialized_size,
  _CocoaXIMU__max_serialized_size
};

static rosidl_message_type_support_t _CocoaXIMU__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_CocoaXIMU,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, cocoax_interfaces, msg, CocoaXIMU)() {
  return &_CocoaXIMU__type_support;
}

#if defined(__cplusplus)
}
#endif
