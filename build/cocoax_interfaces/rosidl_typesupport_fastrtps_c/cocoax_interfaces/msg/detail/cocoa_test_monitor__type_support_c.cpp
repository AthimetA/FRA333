// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from cocoax_interfaces:msg/CocoaTestMonitor.idl
// generated code does not contain a copyright notice
#include "cocoax_interfaces/msg/detail/cocoa_test_monitor__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "cocoax_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "cocoax_interfaces/msg/detail/cocoa_test_monitor__struct.h"
#include "cocoax_interfaces/msg/detail/cocoa_test_monitor__functions.h"
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


using _CocoaTestMonitor__ros_msg_type = cocoax_interfaces__msg__CocoaTestMonitor;

static bool _CocoaTestMonitor__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _CocoaTestMonitor__ros_msg_type * ros_message = static_cast<const _CocoaTestMonitor__ros_msg_type *>(untyped_ros_message);
  // Field name: posx
  {
    cdr << ros_message->posx;
  }

  // Field name: posy
  {
    cdr << ros_message->posy;
  }

  // Field name: posz
  {
    cdr << ros_message->posz;
  }

  // Field name: velx
  {
    cdr << ros_message->velx;
  }

  // Field name: vely
  {
    cdr << ros_message->vely;
  }

  // Field name: velz
  {
    cdr << ros_message->velz;
  }

  return true;
}

static bool _CocoaTestMonitor__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _CocoaTestMonitor__ros_msg_type * ros_message = static_cast<_CocoaTestMonitor__ros_msg_type *>(untyped_ros_message);
  // Field name: posx
  {
    cdr >> ros_message->posx;
  }

  // Field name: posy
  {
    cdr >> ros_message->posy;
  }

  // Field name: posz
  {
    cdr >> ros_message->posz;
  }

  // Field name: velx
  {
    cdr >> ros_message->velx;
  }

  // Field name: vely
  {
    cdr >> ros_message->vely;
  }

  // Field name: velz
  {
    cdr >> ros_message->velz;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_cocoax_interfaces
size_t get_serialized_size_cocoax_interfaces__msg__CocoaTestMonitor(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _CocoaTestMonitor__ros_msg_type * ros_message = static_cast<const _CocoaTestMonitor__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name posx
  {
    size_t item_size = sizeof(ros_message->posx);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name posy
  {
    size_t item_size = sizeof(ros_message->posy);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name posz
  {
    size_t item_size = sizeof(ros_message->posz);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name velx
  {
    size_t item_size = sizeof(ros_message->velx);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name vely
  {
    size_t item_size = sizeof(ros_message->vely);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name velz
  {
    size_t item_size = sizeof(ros_message->velz);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _CocoaTestMonitor__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_cocoax_interfaces__msg__CocoaTestMonitor(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_cocoax_interfaces
size_t max_serialized_size_cocoax_interfaces__msg__CocoaTestMonitor(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: posx
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: posy
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: posz
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: velx
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: vely
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: velz
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _CocoaTestMonitor__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_cocoax_interfaces__msg__CocoaTestMonitor(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_CocoaTestMonitor = {
  "cocoax_interfaces::msg",
  "CocoaTestMonitor",
  _CocoaTestMonitor__cdr_serialize,
  _CocoaTestMonitor__cdr_deserialize,
  _CocoaTestMonitor__get_serialized_size,
  _CocoaTestMonitor__max_serialized_size
};

static rosidl_message_type_support_t _CocoaTestMonitor__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_CocoaTestMonitor,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, cocoax_interfaces, msg, CocoaTestMonitor)() {
  return &_CocoaTestMonitor__type_support;
}

#if defined(__cplusplus)
}
#endif
