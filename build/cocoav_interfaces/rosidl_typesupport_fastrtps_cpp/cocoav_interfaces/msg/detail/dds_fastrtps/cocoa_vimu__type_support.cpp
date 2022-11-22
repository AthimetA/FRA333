// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from cocoav_interfaces:msg/CocoaVIMU.idl
// generated code does not contain a copyright notice
#include "cocoav_interfaces/msg/detail/cocoa_vimu__rosidl_typesupport_fastrtps_cpp.hpp"
#include "cocoav_interfaces/msg/detail/cocoa_vimu__struct.hpp"

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

namespace cocoav_interfaces
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_cocoav_interfaces
cdr_serialize(
  const cocoav_interfaces::msg::CocoaVIMU & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: angular_velocity
  {
    cdr << ros_message.angular_velocity;
  }
  // Member: linear_acceleration
  {
    cdr << ros_message.linear_acceleration;
  }
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_cocoav_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  cocoav_interfaces::msg::CocoaVIMU & ros_message)
{
  // Member: angular_velocity
  {
    cdr >> ros_message.angular_velocity;
  }

  // Member: linear_acceleration
  {
    cdr >> ros_message.linear_acceleration;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_cocoav_interfaces
get_serialized_size(
  const cocoav_interfaces::msg::CocoaVIMU & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: angular_velocity
  {
    size_t array_size = 3;
    size_t item_size = sizeof(ros_message.angular_velocity[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: linear_acceleration
  {
    size_t array_size = 3;
    size_t item_size = sizeof(ros_message.linear_acceleration[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_cocoav_interfaces
max_serialized_size_CocoaVIMU(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: angular_velocity
  {
    size_t array_size = 3;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: linear_acceleration
  {
    size_t array_size = 3;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static bool _CocoaVIMU__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const cocoav_interfaces::msg::CocoaVIMU *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _CocoaVIMU__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<cocoav_interfaces::msg::CocoaVIMU *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _CocoaVIMU__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const cocoav_interfaces::msg::CocoaVIMU *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _CocoaVIMU__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_CocoaVIMU(full_bounded, 0);
}

static message_type_support_callbacks_t _CocoaVIMU__callbacks = {
  "cocoav_interfaces::msg",
  "CocoaVIMU",
  _CocoaVIMU__cdr_serialize,
  _CocoaVIMU__cdr_deserialize,
  _CocoaVIMU__get_serialized_size,
  _CocoaVIMU__max_serialized_size
};

static rosidl_message_type_support_t _CocoaVIMU__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_CocoaVIMU__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace cocoav_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_cocoav_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<cocoav_interfaces::msg::CocoaVIMU>()
{
  return &cocoav_interfaces::msg::typesupport_fastrtps_cpp::_CocoaVIMU__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, cocoav_interfaces, msg, CocoaVIMU)() {
  return &cocoav_interfaces::msg::typesupport_fastrtps_cpp::_CocoaVIMU__handle;
}

#ifdef __cplusplus
}
#endif
