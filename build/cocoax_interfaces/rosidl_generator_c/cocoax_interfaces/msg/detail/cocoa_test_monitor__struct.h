// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from cocoax_interfaces:msg/CocoaTestMonitor.idl
// generated code does not contain a copyright notice

#ifndef COCOAX_INTERFACES__MSG__DETAIL__COCOA_TEST_MONITOR__STRUCT_H_
#define COCOAX_INTERFACES__MSG__DETAIL__COCOA_TEST_MONITOR__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/CocoaTestMonitor in the package cocoax_interfaces.
typedef struct cocoax_interfaces__msg__CocoaTestMonitor
{
  double posx;
  double posy;
  double posz;
  double velx;
  double vely;
  double velz;
} cocoax_interfaces__msg__CocoaTestMonitor;

// Struct for a sequence of cocoax_interfaces__msg__CocoaTestMonitor.
typedef struct cocoax_interfaces__msg__CocoaTestMonitor__Sequence
{
  cocoax_interfaces__msg__CocoaTestMonitor * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} cocoax_interfaces__msg__CocoaTestMonitor__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // COCOAX_INTERFACES__MSG__DETAIL__COCOA_TEST_MONITOR__STRUCT_H_
