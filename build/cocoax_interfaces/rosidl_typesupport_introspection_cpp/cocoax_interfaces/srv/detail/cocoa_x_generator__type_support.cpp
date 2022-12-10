// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from cocoax_interfaces:srv/CocoaXGenerator.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "cocoax_interfaces/srv/detail/cocoa_x_generator__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace cocoax_interfaces
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void CocoaXGenerator_Request_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) cocoax_interfaces::srv::CocoaXGenerator_Request(_init);
}

void CocoaXGenerator_Request_fini_function(void * message_memory)
{
  auto typed_message = static_cast<cocoax_interfaces::srv::CocoaXGenerator_Request *>(message_memory);
  typed_message->~CocoaXGenerator_Request();
}

size_t size_function__CocoaXGenerator_Request__position_initial(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__CocoaXGenerator_Request__position_initial(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<double, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__CocoaXGenerator_Request__position_initial(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<double, 3> *>(untyped_member);
  return &member[index];
}

size_t size_function__CocoaXGenerator_Request__position_final(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__CocoaXGenerator_Request__position_final(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<double, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__CocoaXGenerator_Request__position_final(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<double, 3> *>(untyped_member);
  return &member[index];
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember CocoaXGenerator_Request_message_member_array[3] = {
  {
    "position_initial",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(cocoax_interfaces::srv::CocoaXGenerator_Request, position_initial),  // bytes offset in struct
    nullptr,  // default value
    size_function__CocoaXGenerator_Request__position_initial,  // size() function pointer
    get_const_function__CocoaXGenerator_Request__position_initial,  // get_const(index) function pointer
    get_function__CocoaXGenerator_Request__position_initial,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "position_final",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(cocoax_interfaces::srv::CocoaXGenerator_Request, position_final),  // bytes offset in struct
    nullptr,  // default value
    size_function__CocoaXGenerator_Request__position_final,  // size() function pointer
    get_const_function__CocoaXGenerator_Request__position_final,  // get_const(index) function pointer
    get_function__CocoaXGenerator_Request__position_final,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "duration",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cocoax_interfaces::srv::CocoaXGenerator_Request, duration),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers CocoaXGenerator_Request_message_members = {
  "cocoax_interfaces::srv",  // message namespace
  "CocoaXGenerator_Request",  // message name
  3,  // number of fields
  sizeof(cocoax_interfaces::srv::CocoaXGenerator_Request),
  CocoaXGenerator_Request_message_member_array,  // message members
  CocoaXGenerator_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  CocoaXGenerator_Request_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t CocoaXGenerator_Request_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &CocoaXGenerator_Request_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace cocoax_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<cocoax_interfaces::srv::CocoaXGenerator_Request>()
{
  return &::cocoax_interfaces::srv::rosidl_typesupport_introspection_cpp::CocoaXGenerator_Request_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, cocoax_interfaces, srv, CocoaXGenerator_Request)() {
  return &::cocoax_interfaces::srv::rosidl_typesupport_introspection_cpp::CocoaXGenerator_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "cocoax_interfaces/srv/detail/cocoa_x_generator__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace cocoax_interfaces
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void CocoaXGenerator_Response_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) cocoax_interfaces::srv::CocoaXGenerator_Response(_init);
}

void CocoaXGenerator_Response_fini_function(void * message_memory)
{
  auto typed_message = static_cast<cocoax_interfaces::srv::CocoaXGenerator_Response *>(message_memory);
  typed_message->~CocoaXGenerator_Response();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember CocoaXGenerator_Response_message_member_array[1] = {
  {
    "structure_needs_at_least_one_member",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cocoax_interfaces::srv::CocoaXGenerator_Response, structure_needs_at_least_one_member),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers CocoaXGenerator_Response_message_members = {
  "cocoax_interfaces::srv",  // message namespace
  "CocoaXGenerator_Response",  // message name
  1,  // number of fields
  sizeof(cocoax_interfaces::srv::CocoaXGenerator_Response),
  CocoaXGenerator_Response_message_member_array,  // message members
  CocoaXGenerator_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  CocoaXGenerator_Response_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t CocoaXGenerator_Response_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &CocoaXGenerator_Response_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace cocoax_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<cocoax_interfaces::srv::CocoaXGenerator_Response>()
{
  return &::cocoax_interfaces::srv::rosidl_typesupport_introspection_cpp::CocoaXGenerator_Response_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, cocoax_interfaces, srv, CocoaXGenerator_Response)() {
  return &::cocoax_interfaces::srv::rosidl_typesupport_introspection_cpp::CocoaXGenerator_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"
// already included above
// #include "cocoax_interfaces/srv/detail/cocoa_x_generator__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/service_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/service_type_support_decl.hpp"

namespace cocoax_interfaces
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

// this is intentionally not const to allow initialization later to prevent an initialization race
static ::rosidl_typesupport_introspection_cpp::ServiceMembers CocoaXGenerator_service_members = {
  "cocoax_interfaces::srv",  // service namespace
  "CocoaXGenerator",  // service name
  // these two fields are initialized below on the first access
  // see get_service_type_support_handle<cocoax_interfaces::srv::CocoaXGenerator>()
  nullptr,  // request message
  nullptr  // response message
};

static const rosidl_service_type_support_t CocoaXGenerator_service_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &CocoaXGenerator_service_members,
  get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace cocoax_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<cocoax_interfaces::srv::CocoaXGenerator>()
{
  // get a handle to the value to be returned
  auto service_type_support =
    &::cocoax_interfaces::srv::rosidl_typesupport_introspection_cpp::CocoaXGenerator_service_type_support_handle;
  // get a non-const and properly typed version of the data void *
  auto service_members = const_cast<::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
    static_cast<const ::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
      service_type_support->data));
  // make sure that both the request_members_ and the response_members_ are initialized
  // if they are not, initialize them
  if (
    service_members->request_members_ == nullptr ||
    service_members->response_members_ == nullptr)
  {
    // initialize the request_members_ with the static function from the external library
    service_members->request_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::cocoax_interfaces::srv::CocoaXGenerator_Request
      >()->data
      );
    // initialize the response_members_ with the static function from the external library
    service_members->response_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::cocoax_interfaces::srv::CocoaXGenerator_Response
      >()->data
      );
  }
  // finally return the properly initialized service_type_support handle
  return service_type_support;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, cocoax_interfaces, srv, CocoaXGenerator)() {
  return ::rosidl_typesupport_introspection_cpp::get_service_type_support_handle<cocoax_interfaces::srv::CocoaXGenerator>();
}

#ifdef __cplusplus
}
#endif
