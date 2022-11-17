// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from xicro_interfaces:msg/Vector3.idl
// generated code does not contain a copyright notice

#ifndef XICRO_INTERFACES__MSG__DETAIL__VECTOR3__STRUCT_H_
#define XICRO_INTERFACES__MSG__DETAIL__VECTOR3__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/Vector3 in the package xicro_interfaces.
typedef struct xicro_interfaces__msg__Vector3
{
  float x;
  float y;
  float z;
} xicro_interfaces__msg__Vector3;

// Struct for a sequence of xicro_interfaces__msg__Vector3.
typedef struct xicro_interfaces__msg__Vector3__Sequence
{
  xicro_interfaces__msg__Vector3 * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} xicro_interfaces__msg__Vector3__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // XICRO_INTERFACES__MSG__DETAIL__VECTOR3__STRUCT_H_
