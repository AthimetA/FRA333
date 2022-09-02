// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from my_first_package:msg/AddBook.idl
// generated code does not contain a copyright notice

#ifndef MY_FIRST_PACKAGE__MSG__DETAIL__ADD_BOOK__STRUCT_H_
#define MY_FIRST_PACKAGE__MSG__DETAIL__ADD_BOOK__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'FEMALE'.
static const bool my_first_package__msg__AddBook__FEMALE = true;

/// Constant 'MALE'.
static const bool my_first_package__msg__AddBook__MALE = false;

// Include directives for member types
// Member 'first_name'
// Member 'last_name'
// Member 'address'
#include "rosidl_runtime_c/string.h"

// Struct defined in msg/AddBook in the package my_first_package.
typedef struct my_first_package__msg__AddBook
{
  rosidl_runtime_c__String first_name;
  rosidl_runtime_c__String last_name;
  bool gender;
  uint8_t age;
  rosidl_runtime_c__String address;
} my_first_package__msg__AddBook;

// Struct for a sequence of my_first_package__msg__AddBook.
typedef struct my_first_package__msg__AddBook__Sequence
{
  my_first_package__msg__AddBook * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_first_package__msg__AddBook__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MY_FIRST_PACKAGE__MSG__DETAIL__ADD_BOOK__STRUCT_H_
