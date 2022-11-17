// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from xicro_interfaces:msg/DemoInput.idl
// generated code does not contain a copyright notice

#ifndef XICRO_INTERFACES__MSG__DETAIL__DEMO_INPUT__STRUCT_H_
#define XICRO_INTERFACES__MSG__DETAIL__DEMO_INPUT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/DemoInput in the package xicro_interfaces.
typedef struct xicro_interfaces__msg__DemoInput
{
  bool buttonstate[3];
  float poten;
} xicro_interfaces__msg__DemoInput;

// Struct for a sequence of xicro_interfaces__msg__DemoInput.
typedef struct xicro_interfaces__msg__DemoInput__Sequence
{
  xicro_interfaces__msg__DemoInput * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} xicro_interfaces__msg__DemoInput__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // XICRO_INTERFACES__MSG__DETAIL__DEMO_INPUT__STRUCT_H_
