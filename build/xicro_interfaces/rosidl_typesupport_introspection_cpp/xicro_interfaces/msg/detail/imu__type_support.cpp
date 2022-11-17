// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from xicro_interfaces:msg/Imu.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "xicro_interfaces/msg/detail/imu__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace xicro_interfaces
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void Imu_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) xicro_interfaces::msg::Imu(_init);
}

void Imu_fini_function(void * message_memory)
{
  auto typed_message = static_cast<xicro_interfaces::msg::Imu *>(message_memory);
  typed_message->~Imu();
}

size_t size_function__Imu__orientation_covariance(const void * untyped_member)
{
  (void)untyped_member;
  return 9;
}

const void * get_const_function__Imu__orientation_covariance(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 9> *>(untyped_member);
  return &member[index];
}

void * get_function__Imu__orientation_covariance(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 9> *>(untyped_member);
  return &member[index];
}

size_t size_function__Imu__angular_velocity_covariance(const void * untyped_member)
{
  (void)untyped_member;
  return 9;
}

const void * get_const_function__Imu__angular_velocity_covariance(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 9> *>(untyped_member);
  return &member[index];
}

void * get_function__Imu__angular_velocity_covariance(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 9> *>(untyped_member);
  return &member[index];
}

size_t size_function__Imu__linear_acceleration_covariance(const void * untyped_member)
{
  (void)untyped_member;
  return 9;
}

const void * get_const_function__Imu__linear_acceleration_covariance(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 9> *>(untyped_member);
  return &member[index];
}

void * get_function__Imu__linear_acceleration_covariance(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 9> *>(untyped_member);
  return &member[index];
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Imu_message_member_array[7] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<xicro_interfaces::msg::Header>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(xicro_interfaces::msg::Imu, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "orientation",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<xicro_interfaces::msg::Quaternion>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(xicro_interfaces::msg::Imu, orientation),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "orientation_covariance",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    9,  // array size
    false,  // is upper bound
    offsetof(xicro_interfaces::msg::Imu, orientation_covariance),  // bytes offset in struct
    nullptr,  // default value
    size_function__Imu__orientation_covariance,  // size() function pointer
    get_const_function__Imu__orientation_covariance,  // get_const(index) function pointer
    get_function__Imu__orientation_covariance,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "angular_velocity",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<xicro_interfaces::msg::Vector3>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(xicro_interfaces::msg::Imu, angular_velocity),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "angular_velocity_covariance",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    9,  // array size
    false,  // is upper bound
    offsetof(xicro_interfaces::msg::Imu, angular_velocity_covariance),  // bytes offset in struct
    nullptr,  // default value
    size_function__Imu__angular_velocity_covariance,  // size() function pointer
    get_const_function__Imu__angular_velocity_covariance,  // get_const(index) function pointer
    get_function__Imu__angular_velocity_covariance,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "linear_acceleration",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<xicro_interfaces::msg::Vector3>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(xicro_interfaces::msg::Imu, linear_acceleration),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "linear_acceleration_covariance",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    9,  // array size
    false,  // is upper bound
    offsetof(xicro_interfaces::msg::Imu, linear_acceleration_covariance),  // bytes offset in struct
    nullptr,  // default value
    size_function__Imu__linear_acceleration_covariance,  // size() function pointer
    get_const_function__Imu__linear_acceleration_covariance,  // get_const(index) function pointer
    get_function__Imu__linear_acceleration_covariance,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Imu_message_members = {
  "xicro_interfaces::msg",  // message namespace
  "Imu",  // message name
  7,  // number of fields
  sizeof(xicro_interfaces::msg::Imu),
  Imu_message_member_array,  // message members
  Imu_init_function,  // function to initialize message memory (memory has to be allocated)
  Imu_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Imu_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Imu_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace xicro_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<xicro_interfaces::msg::Imu>()
{
  return &::xicro_interfaces::msg::rosidl_typesupport_introspection_cpp::Imu_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, xicro_interfaces, msg, Imu)() {
  return &::xicro_interfaces::msg::rosidl_typesupport_introspection_cpp::Imu_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
