// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from xicro_interfaces:msg/Imu.idl
// generated code does not contain a copyright notice

#ifndef XICRO_INTERFACES__MSG__DETAIL__IMU__STRUCT_H_
#define XICRO_INTERFACES__MSG__DETAIL__IMU__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "xicro_interfaces/msg/detail/header__struct.h"
// Member 'orientation'
#include "xicro_interfaces/msg/detail/quaternion__struct.h"
// Member 'angular_velocity'
// Member 'linear_acceleration'
#include "xicro_interfaces/msg/detail/vector3__struct.h"

// Struct defined in msg/Imu in the package xicro_interfaces.
typedef struct xicro_interfaces__msg__Imu
{
  xicro_interfaces__msg__Header header;
  xicro_interfaces__msg__Quaternion orientation;
  float orientation_covariance[9];
  xicro_interfaces__msg__Vector3 angular_velocity;
  float angular_velocity_covariance[9];
  xicro_interfaces__msg__Vector3 linear_acceleration;
  float linear_acceleration_covariance[9];
} xicro_interfaces__msg__Imu;

// Struct for a sequence of xicro_interfaces__msg__Imu.
typedef struct xicro_interfaces__msg__Imu__Sequence
{
  xicro_interfaces__msg__Imu * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} xicro_interfaces__msg__Imu__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // XICRO_INTERFACES__MSG__DETAIL__IMU__STRUCT_H_
