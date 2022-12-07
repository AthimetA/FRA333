// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from cocoax_interfaces:msg/CocoaTest.idl
// generated code does not contain a copyright notice
#include "cocoax_interfaces/msg/detail/cocoa_test__rosidl_typesupport_fastrtps_cpp.hpp"
#include "cocoax_interfaces/msg/detail/cocoa_test__struct.hpp"

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
namespace std_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const std_msgs::msg::Float64 &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  std_msgs::msg::Float64 &);
size_t get_serialized_size(
  const std_msgs::msg::Float64 &,
  size_t current_alignment);
size_t
max_serialized_size_Float64(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace std_msgs


namespace cocoax_interfaces
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_cocoax_interfaces
cdr_serialize(
  const cocoax_interfaces::msg::CocoaTest & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: check
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.check,
    cdr);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_cocoax_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  cocoax_interfaces::msg::CocoaTest & ros_message)
{
  // Member: check
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.check);

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_cocoax_interfaces
get_serialized_size(
  const cocoax_interfaces::msg::CocoaTest & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: check

  current_alignment +=
    std_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.check, current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_cocoax_interfaces
max_serialized_size_CocoaTest(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: check
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        std_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Float64(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static bool _CocoaTest__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const cocoax_interfaces::msg::CocoaTest *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _CocoaTest__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<cocoax_interfaces::msg::CocoaTest *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _CocoaTest__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const cocoax_interfaces::msg::CocoaTest *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _CocoaTest__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_CocoaTest(full_bounded, 0);
}

static message_type_support_callbacks_t _CocoaTest__callbacks = {
  "cocoax_interfaces::msg",
  "CocoaTest",
  _CocoaTest__cdr_serialize,
  _CocoaTest__cdr_deserialize,
  _CocoaTest__get_serialized_size,
  _CocoaTest__max_serialized_size
};

static rosidl_message_type_support_t _CocoaTest__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_CocoaTest__callbacks,
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
get_message_type_support_handle<cocoax_interfaces::msg::CocoaTest>()
{
  return &cocoax_interfaces::msg::typesupport_fastrtps_cpp::_CocoaTest__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, cocoax_interfaces, msg, CocoaTest)() {
  return &cocoax_interfaces::msg::typesupport_fastrtps_cpp::_CocoaTest__handle;
}

#ifdef __cplusplus
}
#endif
