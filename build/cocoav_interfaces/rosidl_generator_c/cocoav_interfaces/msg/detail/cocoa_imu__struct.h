// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from cocoav_interfaces:msg/CocoaIMU.idl
// generated code does not contain a copyright notice

#ifndef COCOAV_INTERFACES__MSG__DETAIL__COCOA_IMU__STRUCT_H_
#define COCOAV_INTERFACES__MSG__DETAIL__COCOA_IMU__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/CocoaIMU in the package cocoav_interfaces.
typedef struct cocoav_interfaces__msg__CocoaIMU
{
  float angular_velocity[3];
  float linear_acceleration[3];
} cocoav_interfaces__msg__CocoaIMU;

// Struct for a sequence of cocoav_interfaces__msg__CocoaIMU.
typedef struct cocoav_interfaces__msg__CocoaIMU__Sequence
{
  cocoav_interfaces__msg__CocoaIMU * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} cocoav_interfaces__msg__CocoaIMU__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // COCOAV_INTERFACES__MSG__DETAIL__COCOA_IMU__STRUCT_H_
