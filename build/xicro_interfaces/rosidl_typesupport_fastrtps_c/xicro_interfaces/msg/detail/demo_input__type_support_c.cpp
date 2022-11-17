// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from xicro_interfaces:msg/DemoInput.idl
// generated code does not contain a copyright notice
#include "xicro_interfaces/msg/detail/demo_input__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "xicro_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "xicro_interfaces/msg/detail/demo_input__struct.h"
#include "xicro_interfaces/msg/detail/demo_input__functions.h"
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


using _DemoInput__ros_msg_type = xicro_interfaces__msg__DemoInput;

static bool _DemoInput__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _DemoInput__ros_msg_type * ros_message = static_cast<const _DemoInput__ros_msg_type *>(untyped_ros_message);
  // Field name: buttonstate
  {
    size_t size = 3;
    auto array_ptr = ros_message->buttonstate;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: poten
  {
    cdr << ros_message->poten;
  }

  return true;
}

static bool _DemoInput__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _DemoInput__ros_msg_type * ros_message = static_cast<_DemoInput__ros_msg_type *>(untyped_ros_message);
  // Field name: buttonstate
  {
    size_t size = 3;
    auto array_ptr = ros_message->buttonstate;
    for (size_t i = 0; i < size; ++i) {
      uint8_t tmp;
      cdr >> tmp;
      array_ptr[i] = tmp ? true : false;
    }
  }

  // Field name: poten
  {
    cdr >> ros_message->poten;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_xicro_interfaces
size_t get_serialized_size_xicro_interfaces__msg__DemoInput(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _DemoInput__ros_msg_type * ros_message = static_cast<const _DemoInput__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name buttonstate
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->buttonstate;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name poten
  {
    size_t item_size = sizeof(ros_message->poten);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _DemoInput__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_xicro_interfaces__msg__DemoInput(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_xicro_interfaces
size_t max_serialized_size_xicro_interfaces__msg__DemoInput(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: buttonstate
  {
    size_t array_size = 3;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: poten
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _DemoInput__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_xicro_interfaces__msg__DemoInput(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_DemoInput = {
  "xicro_interfaces::msg",
  "DemoInput",
  _DemoInput__cdr_serialize,
  _DemoInput__cdr_deserialize,
  _DemoInput__get_serialized_size,
  _DemoInput__max_serialized_size
};

static rosidl_message_type_support_t _DemoInput__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_DemoInput,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, xicro_interfaces, msg, DemoInput)() {
  return &_DemoInput__type_support;
}

#if defined(__cplusplus)
}
#endif
