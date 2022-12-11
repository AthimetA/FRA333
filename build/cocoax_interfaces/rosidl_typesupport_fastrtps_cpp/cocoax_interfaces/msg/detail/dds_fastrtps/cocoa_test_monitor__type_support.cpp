// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from cocoax_interfaces:msg/CocoaTestMonitor.idl
// generated code does not contain a copyright notice
#include "cocoax_interfaces/msg/detail/cocoa_test_monitor__rosidl_typesupport_fastrtps_cpp.hpp"
#include "cocoax_interfaces/msg/detail/cocoa_test_monitor__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace cocoax_interfaces
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_cocoax_interfaces
cdr_serialize(
  const cocoax_interfaces::msg::CocoaTestMonitor & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: posx
  cdr << ros_message.posx;
  // Member: posy
  cdr << ros_message.posy;
  // Member: posz
  cdr << ros_message.posz;
  // Member: velx
  cdr << ros_message.velx;
  // Member: vely
  cdr << ros_message.vely;
  // Member: velz
  cdr << ros_message.velz;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_cocoax_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  cocoax_interfaces::msg::CocoaTestMonitor & ros_message)
{
  // Member: posx
  cdr >> ros_message.posx;

  // Member: posy
  cdr >> ros_message.posy;

  // Member: posz
  cdr >> ros_message.posz;

  // Member: velx
  cdr >> ros_message.velx;

  // Member: vely
  cdr >> ros_message.vely;

  // Member: velz
  cdr >> ros_message.velz;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_cocoax_interfaces
get_serialized_size(
  const cocoax_interfaces::msg::CocoaTestMonitor & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: posx
  {
    size_t item_size = sizeof(ros_message.posx);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: posy
  {
    size_t item_size = sizeof(ros_message.posy);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: posz
  {
    size_t item_size = sizeof(ros_message.posz);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: velx
  {
    size_t item_size = sizeof(ros_message.velx);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: vely
  {
    size_t item_size = sizeof(ros_message.vely);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: velz
  {
    size_t item_size = sizeof(ros_message.velz);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_cocoax_interfaces
max_serialized_size_CocoaTestMonitor(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: posx
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: posy
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: posz
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: velx
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: vely
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: velz
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static bool _CocoaTestMonitor__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const cocoax_interfaces::msg::CocoaTestMonitor *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _CocoaTestMonitor__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<cocoax_interfaces::msg::CocoaTestMonitor *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _CocoaTestMonitor__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const cocoax_interfaces::msg::CocoaTestMonitor *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _CocoaTestMonitor__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_CocoaTestMonitor(full_bounded, 0);
}

static message_type_support_callbacks_t _CocoaTestMonitor__callbacks = {
  "cocoax_interfaces::msg",
  "CocoaTestMonitor",
  _CocoaTestMonitor__cdr_serialize,
  _CocoaTestMonitor__cdr_deserialize,
  _CocoaTestMonitor__get_serialized_size,
  _CocoaTestMonitor__max_serialized_size
};

static rosidl_message_type_support_t _CocoaTestMonitor__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_CocoaTestMonitor__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace cocoax_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_cocoax_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<cocoax_interfaces::msg::CocoaTestMonitor>()
{
  return &cocoax_interfaces::msg::typesupport_fastrtps_cpp::_CocoaTestMonitor__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, cocoax_interfaces, msg, CocoaTestMonitor)() {
  return &cocoax_interfaces::msg::typesupport_fastrtps_cpp::_CocoaTestMonitor__handle;
}

#ifdef __cplusplus
}
#endif
