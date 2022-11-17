// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from xicro_interfaces:msg/Int32.idl
// generated code does not contain a copyright notice

#ifndef XICRO_INTERFACES__MSG__DETAIL__INT32__STRUCT_H_
#define XICRO_INTERFACES__MSG__DETAIL__INT32__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/Int32 in the package xicro_interfaces.
typedef struct xicro_interfaces__msg__Int32
{
  int32_t data;
} xicro_interfaces__msg__Int32;

// Struct for a sequence of xicro_interfaces__msg__Int32.
typedef struct xicro_interfaces__msg__Int32__Sequence
{
  xicro_interfaces__msg__Int32 * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} xicro_interfaces__msg__Int32__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // XICRO_INTERFACES__MSG__DETAIL__INT32__STRUCT_H_
