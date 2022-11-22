// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from cocoav_interfaces:msg/CocoaTest.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "cocoav_interfaces/msg/detail/cocoa_test__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace cocoav_interfaces
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void CocoaTest_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) cocoav_interfaces::msg::CocoaTest(_init);
}

void CocoaTest_fini_function(void * message_memory)
{
  auto typed_message = static_cast<cocoav_interfaces::msg::CocoaTest *>(message_memory);
  typed_message->~CocoaTest();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember CocoaTest_message_member_array[1] = {
  {
    "check",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Float64>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cocoav_interfaces::msg::CocoaTest, check),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers CocoaTest_message_members = {
  "cocoav_interfaces::msg",  // message namespace
  "CocoaTest",  // message name
  1,  // number of fields
  sizeof(cocoav_interfaces::msg::CocoaTest),
  CocoaTest_message_member_array,  // message members
  CocoaTest_init_function,  // function to initialize message memory (memory has to be allocated)
  CocoaTest_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t CocoaTest_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &CocoaTest_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace cocoav_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<cocoav_interfaces::msg::CocoaTest>()
{
  return &::cocoav_interfaces::msg::rosidl_typesupport_introspection_cpp::CocoaTest_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, cocoav_interfaces, msg, CocoaTest)() {
  return &::cocoav_interfaces::msg::rosidl_typesupport_introspection_cpp::CocoaTest_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
