// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from xicro_interfaces:msg/JointState.idl
// generated code does not contain a copyright notice

#ifndef XICRO_INTERFACES__MSG__DETAIL__JOINT_STATE__STRUCT_H_
#define XICRO_INTERFACES__MSG__DETAIL__JOINT_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'name'
#include "rosidl_runtime_c/string.h"

// Struct defined in msg/JointState in the package xicro_interfaces.
typedef struct xicro_interfaces__msg__JointState
{
  rosidl_runtime_c__String name[4];
  float position[4];
  float velocity[4];
  float effort[4];
} xicro_interfaces__msg__JointState;

// Struct for a sequence of xicro_interfaces__msg__JointState.
typedef struct xicro_interfaces__msg__JointState__Sequence
{
  xicro_interfaces__msg__JointState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} xicro_interfaces__msg__JointState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // XICRO_INTERFACES__MSG__DETAIL__JOINT_STATE__STRUCT_H_
