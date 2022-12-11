// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from cocoax_interfaces:msg/CocoaPositionProximity.idl
// generated code does not contain a copyright notice
#include "cocoax_interfaces/msg/detail/cocoa_position_proximity__rosidl_typesupport_fastrtps_cpp.hpp"
#include "cocoax_interfaces/msg/detail/cocoa_position_proximity__struct.hpp"

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
  const cocoax_interfaces::msg::CocoaPositionProximity & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: position
  {
    cdr << ros_message.position;
  }
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_cocoax_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  cocoax_interfaces::msg::CocoaPositionProximity & ros_message)
{
  // Member: position
  {
    cdr >> ros_message.position;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_cocoax_interfaces
get_serialized_size(
  const cocoax_interfaces::msg::CocoaPositionProximity & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: position
  {
    size_t array_size = 3;
    size_t item_size = sizeof(ros_message.position[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_cocoax_interfaces
max_serialized_size_CocoaPositionProximity(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: position
  {
    size_t array_size = 3;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static bool _CocoaPositionProximity__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const cocoax_interfaces::msg::CocoaPositionProximity *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _CocoaPositionProximity__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<cocoax_interfaces::msg::CocoaPositionProximity *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _CocoaPositionProximity__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const cocoax_interfaces::msg::CocoaPositionProximity *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _CocoaPositionProximity__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_CocoaPositionProximity(full_bounded, 0);
}

static message_type_support_callbacks_t _CocoaPositionProximity__callbacks = {
  "cocoax_interfaces::msg",
  "CocoaPositionProximity",
  _CocoaPositionProximity__cdr_serialize,
  _CocoaPositionProximity__cdr_deserialize,
  _CocoaPositionProximity__get_serialized_size,
  _CocoaPositionProximity__max_serialized_size
};

static rosidl_message_type_support_t _CocoaPositionProximity__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_CocoaPositionProximity__callbacks,
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
get_message_type_support_handle<cocoax_interfaces::msg::CocoaPositionProximity>()
{
  return &cocoax_interfaces::msg::typesupport_fastrtps_cpp::_CocoaPositionProximity__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, cocoax_interfaces, msg, CocoaPositionProximity)() {
  return &cocoax_interfaces::msg::typesupport_fastrtps_cpp::_CocoaPositionProximity__handle;
}

#ifdef __cplusplus
}
#endif
