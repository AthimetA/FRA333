// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from cocoax_interfaces:msg/CocoaJointSpace.idl
// generated code does not contain a copyright notice

#ifndef COCOAX_INTERFACES__MSG__DETAIL__COCOA_JOINT_SPACE__STRUCT_H_
#define COCOAX_INTERFACES__MSG__DETAIL__COCOA_JOINT_SPACE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/CocoaJointSpace in the package cocoax_interfaces.
typedef struct cocoax_interfaces__msg__CocoaJointSpace
{
  double joint_position[3];
  double joint_velocity[3];
} cocoax_interfaces__msg__CocoaJointSpace;

// Struct for a sequence of cocoax_interfaces__msg__CocoaJointSpace.
typedef struct cocoax_interfaces__msg__CocoaJointSpace__Sequence
{
  cocoax_interfaces__msg__CocoaJointSpace * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} cocoax_interfaces__msg__CocoaJointSpace__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // COCOAX_INTERFACES__MSG__DETAIL__COCOA_JOINT_SPACE__STRUCT_H_
