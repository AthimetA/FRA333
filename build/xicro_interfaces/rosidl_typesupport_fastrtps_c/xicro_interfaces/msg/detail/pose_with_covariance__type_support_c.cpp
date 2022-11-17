// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from xicro_interfaces:msg/PoseWithCovariance.idl
// generated code does not contain a copyright notice
#include "xicro_interfaces/msg/detail/pose_with_covariance__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "xicro_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "xicro_interfaces/msg/detail/pose_with_covariance__struct.h"
#include "xicro_interfaces/msg/detail/pose_with_covariance__functions.h"
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


using _PoseWithCovariance__ros_msg_type = xicro_interfaces__msg__PoseWithCovariance;

static bool _PoseWithCovariance__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _PoseWithCovariance__ros_msg_type * ros_message = static_cast<const _PoseWithCovariance__ros_msg_type *>(untyped_ros_message);
  // Field name: pose
  {
    size_t size = 3;
    auto array_ptr = ros_message->pose;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: covariance
  {
    size_t size = 36;
    auto array_ptr = ros_message->covariance;
    cdr.serializeArray(array_ptr, size);
  }

  return true;
}

static bool _PoseWithCovariance__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _PoseWithCovariance__ros_msg_type * ros_message = static_cast<_PoseWithCovariance__ros_msg_type *>(untyped_ros_message);
  // Field name: pose
  {
    size_t size = 3;
    auto array_ptr = ros_message->pose;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: covariance
  {
    size_t size = 36;
    auto array_ptr = ros_message->covariance;
    cdr.deserializeArray(array_ptr, size);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_xicro_interfaces
size_t get_serialized_size_xicro_interfaces__msg__PoseWithCovariance(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _PoseWithCovariance__ros_msg_type * ros_message = static_cast<const _PoseWithCovariance__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name pose
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->pose;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name covariance
  {
    size_t array_size = 36;
    auto array_ptr = ros_message->covariance;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _PoseWithCovariance__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_xicro_interfaces__msg__PoseWithCovariance(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_xicro_interfaces
size_t max_serialized_size_xicro_interfaces__msg__PoseWithCovariance(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: pose
  {
    size_t array_size = 3;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: covariance
  {
    size_t array_size = 36;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _PoseWithCovariance__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_xicro_interfaces__msg__PoseWithCovariance(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_PoseWithCovariance = {
  "xicro_interfaces::msg",
  "PoseWithCovariance",
  _PoseWithCovariance__cdr_serialize,
  _PoseWithCovariance__cdr_deserialize,
  _PoseWithCovariance__get_serialized_size,
  _PoseWithCovariance__max_serialized_size
};

static rosidl_message_type_support_t _PoseWithCovariance__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_PoseWithCovariance,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, xicro_interfaces, msg, PoseWithCovariance)() {
  return &_PoseWithCovariance__type_support;
}

#if defined(__cplusplus)
}
#endif
