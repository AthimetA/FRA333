// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from cocoav_interfaces:msg/CocoaTest.idl
// generated code does not contain a copyright notice
#include "cocoav_interfaces/msg/detail/cocoa_test__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "cocoav_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "cocoav_interfaces/msg/detail/cocoa_test__struct.h"
#include "cocoav_interfaces/msg/detail/cocoa_test__functions.h"
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

#include "std_msgs/msg/detail/float64__functions.h"  // check

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_cocoav_interfaces
size_t get_serialized_size_std_msgs__msg__Float64(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_cocoav_interfaces
size_t max_serialized_size_std_msgs__msg__Float64(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_cocoav_interfaces
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, std_msgs, msg, Float64)();


using _CocoaTest__ros_msg_type = cocoav_interfaces__msg__CocoaTest;

static bool _CocoaTest__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _CocoaTest__ros_msg_type * ros_message = static_cast<const _CocoaTest__ros_msg_type *>(untyped_ros_message);
  // Field name: check
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Float64
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->check, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _CocoaTest__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _CocoaTest__ros_msg_type * ros_message = static_cast<_CocoaTest__ros_msg_type *>(untyped_ros_message);
  // Field name: check
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Float64
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->check))
    {
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_cocoav_interfaces
size_t get_serialized_size_cocoav_interfaces__msg__CocoaTest(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _CocoaTest__ros_msg_type * ros_message = static_cast<const _CocoaTest__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name check

  current_alignment += get_serialized_size_std_msgs__msg__Float64(
    &(ros_message->check), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _CocoaTest__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_cocoav_interfaces__msg__CocoaTest(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_cocoav_interfaces
size_t max_serialized_size_cocoav_interfaces__msg__CocoaTest(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: check
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_std_msgs__msg__Float64(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _CocoaTest__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_cocoav_interfaces__msg__CocoaTest(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_CocoaTest = {
  "cocoav_interfaces::msg",
  "CocoaTest",
  _CocoaTest__cdr_serialize,
  _CocoaTest__cdr_deserialize,
  _CocoaTest__get_serialized_size,
  _CocoaTest__max_serialized_size
};

static rosidl_message_type_support_t _CocoaTest__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_CocoaTest,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, cocoav_interfaces, msg, CocoaTest)() {
  return &_CocoaTest__type_support;
}

#if defined(__cplusplus)
}
#endif
