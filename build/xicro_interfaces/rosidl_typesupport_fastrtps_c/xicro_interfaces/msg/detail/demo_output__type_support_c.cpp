// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from xicro_interfaces:msg/DemoOutput.idl
// generated code does not contain a copyright notice
#include "xicro_interfaces/msg/detail/demo_output__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "xicro_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "xicro_interfaces/msg/detail/demo_output__struct.h"
#include "xicro_interfaces/msg/detail/demo_output__functions.h"
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


using _DemoOutput__ros_msg_type = xicro_interfaces__msg__DemoOutput;

static bool _DemoOutput__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _DemoOutput__ros_msg_type * ros_message = static_cast<const _DemoOutput__ros_msg_type *>(untyped_ros_message);
  // Field name: servo
  {
    cdr << ros_message->servo;
  }

  // Field name: buzzer
  {
    cdr << ros_message->buzzer;
  }

  // Field name: led
  {
    size_t size = 4;
    auto array_ptr = ros_message->led;
    cdr.serializeArray(array_ptr, size);
  }

  return true;
}

static bool _DemoOutput__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _DemoOutput__ros_msg_type * ros_message = static_cast<_DemoOutput__ros_msg_type *>(untyped_ros_message);
  // Field name: servo
  {
    cdr >> ros_message->servo;
  }

  // Field name: buzzer
  {
    cdr >> ros_message->buzzer;
  }

  // Field name: led
  {
    size_t size = 4;
    auto array_ptr = ros_message->led;
    for (size_t i = 0; i < size; ++i) {
      uint8_t tmp;
      cdr >> tmp;
      array_ptr[i] = tmp ? true : false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_xicro_interfaces
size_t get_serialized_size_xicro_interfaces__msg__DemoOutput(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _DemoOutput__ros_msg_type * ros_message = static_cast<const _DemoOutput__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name servo
  {
    size_t item_size = sizeof(ros_message->servo);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name buzzer
  {
    size_t item_size = sizeof(ros_message->buzzer);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name led
  {
    size_t array_size = 4;
    auto array_ptr = ros_message->led;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _DemoOutput__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_xicro_interfaces__msg__DemoOutput(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_xicro_interfaces
size_t max_serialized_size_xicro_interfaces__msg__DemoOutput(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: servo
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: buzzer
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: led
  {
    size_t array_size = 4;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _DemoOutput__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_xicro_interfaces__msg__DemoOutput(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_DemoOutput = {
  "xicro_interfaces::msg",
  "DemoOutput",
  _DemoOutput__cdr_serialize,
  _DemoOutput__cdr_deserialize,
  _DemoOutput__get_serialized_size,
  _DemoOutput__max_serialized_size
};

static rosidl_message_type_support_t _DemoOutput__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_DemoOutput,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, xicro_interfaces, msg, DemoOutput)() {
  return &_DemoOutput__type_support;
}

#if defined(__cplusplus)
}
#endif
