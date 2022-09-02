// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from my_first_package:msg/AddBook.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "my_first_package/msg/detail/add_book__rosidl_typesupport_introspection_c.h"
#include "my_first_package/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "my_first_package/msg/detail/add_book__functions.h"
#include "my_first_package/msg/detail/add_book__struct.h"


// Include directives for member types
// Member `first_name`
// Member `last_name`
// Member `address`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void AddBook__rosidl_typesupport_introspection_c__AddBook_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  my_first_package__msg__AddBook__init(message_memory);
}

void AddBook__rosidl_typesupport_introspection_c__AddBook_fini_function(void * message_memory)
{
  my_first_package__msg__AddBook__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember AddBook__rosidl_typesupport_introspection_c__AddBook_message_member_array[5] = {
  {
    "first_name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_first_package__msg__AddBook, first_name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "last_name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_first_package__msg__AddBook, last_name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "gender",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_first_package__msg__AddBook, gender),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "age",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_first_package__msg__AddBook, age),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "address",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_first_package__msg__AddBook, address),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers AddBook__rosidl_typesupport_introspection_c__AddBook_message_members = {
  "my_first_package__msg",  // message namespace
  "AddBook",  // message name
  5,  // number of fields
  sizeof(my_first_package__msg__AddBook),
  AddBook__rosidl_typesupport_introspection_c__AddBook_message_member_array,  // message members
  AddBook__rosidl_typesupport_introspection_c__AddBook_init_function,  // function to initialize message memory (memory has to be allocated)
  AddBook__rosidl_typesupport_introspection_c__AddBook_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t AddBook__rosidl_typesupport_introspection_c__AddBook_message_type_support_handle = {
  0,
  &AddBook__rosidl_typesupport_introspection_c__AddBook_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_my_first_package
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_first_package, msg, AddBook)() {
  if (!AddBook__rosidl_typesupport_introspection_c__AddBook_message_type_support_handle.typesupport_identifier) {
    AddBook__rosidl_typesupport_introspection_c__AddBook_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &AddBook__rosidl_typesupport_introspection_c__AddBook_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
