// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from xicro_interfaces:msg/Twist.idl
// generated code does not contain a copyright notice
#include "xicro_interfaces/msg/detail/twist__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "xicro_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "xicro_interfaces/msg/detail/twist__struct.h"
#include "xicro_interfaces/msg/detail/twist__functions.h"
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


using _Twist__ros_msg_type = xicro_interfaces__msg__Twist;

static bool _Twist__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Twist__ros_msg_type * ros_message = static_cast<const _Twist__ros_msg_type *>(untyped_ros_message);
  // Field name: linear
  {
    size_t size = 3;
    auto array_ptr = ros_message->linear;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: angular
  {
    size_t size = 3;
    auto array_ptr = ros_message->angular;
    cdr.serializeArray(array_ptr, size);
  }

  return true;
}

static bool _Twist__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Twist__ros_msg_type * ros_message = static_cast<_Twist__ros_msg_type *>(untyped_ros_message);
  // Field name: linear
  {
    size_t size = 3;
    auto array_ptr = ros_message->linear;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: angular
  {
    size_t size = 3;
    auto array_ptr = ros_message->angular;
    cdr.deserializeArray(array_ptr, size);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_xicro_interfaces
size_t get_serialized_size_xicro_interfaces__msg__Twist(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Twist__ros_msg_type * ros_message = static_cast<const _Twist__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name linear
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->linear;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name angular
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->angular;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _Twist__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_xicro_interfaces__msg__Twist(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_xicro_interfaces
size_t max_serialized_size_xicro_interfaces__msg__Twist(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: linear
  {
    size_t array_size = 3;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: angular
  {
    size_t array_size = 3;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _Twist__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_xicro_interfaces__msg__Twist(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_Twist = {
  "xicro_interfaces::msg",
  "Twist",
  _Twist__cdr_serialize,
  _Twist__cdr_deserialize,
  _Twist__get_serialized_size,
  _Twist__max_serialized_size
};

static rosidl_message_type_support_t _Twist__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Twist,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, xicro_interfaces, msg, Twist)() {
  return &_Twist__type_support;
}

#if defined(__cplusplus)
}
#endif
