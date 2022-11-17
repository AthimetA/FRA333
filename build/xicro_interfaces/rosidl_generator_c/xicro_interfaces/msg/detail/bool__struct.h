// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from xicro_interfaces:msg/Bool.idl
// generated code does not contain a copyright notice

#ifndef XICRO_INTERFACES__MSG__DETAIL__BOOL__STRUCT_H_
#define XICRO_INTERFACES__MSG__DETAIL__BOOL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/Bool in the package xicro_interfaces.
typedef struct xicro_interfaces__msg__Bool
{
  bool data;
} xicro_interfaces__msg__Bool;

// Struct for a sequence of xicro_interfaces__msg__Bool.
typedef struct xicro_interfaces__msg__Bool__Sequence
{
  xicro_interfaces__msg__Bool * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} xicro_interfaces__msg__Bool__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // XICRO_INTERFACES__MSG__DETAIL__BOOL__STRUCT_H_
