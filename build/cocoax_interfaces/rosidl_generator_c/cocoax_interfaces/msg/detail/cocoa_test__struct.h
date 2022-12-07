// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from cocoax_interfaces:msg/CocoaTest.idl
// generated code does not contain a copyright notice

#ifndef COCOAX_INTERFACES__MSG__DETAIL__COCOA_TEST__STRUCT_H_
#define COCOAX_INTERFACES__MSG__DETAIL__COCOA_TEST__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'check'
#include "std_msgs/msg/detail/float64__struct.h"

// Struct defined in msg/CocoaTest in the package cocoax_interfaces.
typedef struct cocoax_interfaces__msg__CocoaTest
{
  std_msgs__msg__Float64 check;
} cocoax_interfaces__msg__CocoaTest;

// Struct for a sequence of cocoax_interfaces__msg__CocoaTest.
typedef struct cocoax_interfaces__msg__CocoaTest__Sequence
{
  cocoax_interfaces__msg__CocoaTest * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} cocoax_interfaces__msg__CocoaTest__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // COCOAX_INTERFACES__MSG__DETAIL__COCOA_TEST__STRUCT_H_
