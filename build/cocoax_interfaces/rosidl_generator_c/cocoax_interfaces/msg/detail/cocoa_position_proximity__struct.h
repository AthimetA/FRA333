// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from cocoax_interfaces:msg/CocoaPositionProximity.idl
// generated code does not contain a copyright notice

#ifndef COCOAX_INTERFACES__MSG__DETAIL__COCOA_POSITION_PROXIMITY__STRUCT_H_
#define COCOAX_INTERFACES__MSG__DETAIL__COCOA_POSITION_PROXIMITY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/CocoaPositionProximity in the package cocoax_interfaces.
typedef struct cocoax_interfaces__msg__CocoaPositionProximity
{
  double position[3];
} cocoax_interfaces__msg__CocoaPositionProximity;

// Struct for a sequence of cocoax_interfaces__msg__CocoaPositionProximity.
typedef struct cocoax_interfaces__msg__CocoaPositionProximity__Sequence
{
  cocoax_interfaces__msg__CocoaPositionProximity * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} cocoax_interfaces__msg__CocoaPositionProximity__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // COCOAX_INTERFACES__MSG__DETAIL__COCOA_POSITION_PROXIMITY__STRUCT_H_
