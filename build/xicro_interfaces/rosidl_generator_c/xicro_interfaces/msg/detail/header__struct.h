// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from xicro_interfaces:msg/Header.idl
// generated code does not contain a copyright notice

#ifndef XICRO_INTERFACES__MSG__DETAIL__HEADER__STRUCT_H_
#define XICRO_INTERFACES__MSG__DETAIL__HEADER__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "xicro_interfaces/msg/detail/time__struct.h"
// Member 'frame_id'
#include "rosidl_runtime_c/string.h"

// Struct defined in msg/Header in the package xicro_interfaces.
typedef struct xicro_interfaces__msg__Header
{
  xicro_interfaces__msg__Time stamp;
  rosidl_runtime_c__String frame_id;
} xicro_interfaces__msg__Header;

// Struct for a sequence of xicro_interfaces__msg__Header.
typedef struct xicro_interfaces__msg__Header__Sequence
{
  xicro_interfaces__msg__Header * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} xicro_interfaces__msg__Header__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // XICRO_INTERFACES__MSG__DETAIL__HEADER__STRUCT_H_
