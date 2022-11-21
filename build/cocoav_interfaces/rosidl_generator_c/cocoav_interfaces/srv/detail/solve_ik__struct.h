// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from cocoav_interfaces:srv/SolveIK.idl
// generated code does not contain a copyright notice

#ifndef COCOAV_INTERFACES__SRV__DETAIL__SOLVE_IK__STRUCT_H_
#define COCOAV_INTERFACES__SRV__DETAIL__SOLVE_IK__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'position'
#include "geometry_msgs/msg/detail/point__struct.h"

// Struct defined in srv/SolveIK in the package cocoav_interfaces.
typedef struct cocoav_interfaces__srv__SolveIK_Request
{
  geometry_msgs__msg__Point position;
  double jointorientation;
  int32_t r[2];
} cocoav_interfaces__srv__SolveIK_Request;

// Struct for a sequence of cocoav_interfaces__srv__SolveIK_Request.
typedef struct cocoav_interfaces__srv__SolveIK_Request__Sequence
{
  cocoav_interfaces__srv__SolveIK_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} cocoav_interfaces__srv__SolveIK_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'jointstate'
#include "sensor_msgs/msg/detail/joint_state__struct.h"

// Struct defined in srv/SolveIK in the package cocoav_interfaces.
typedef struct cocoav_interfaces__srv__SolveIK_Response
{
  sensor_msgs__msg__JointState jointstate;
  bool flag;
} cocoav_interfaces__srv__SolveIK_Response;

// Struct for a sequence of cocoav_interfaces__srv__SolveIK_Response.
typedef struct cocoav_interfaces__srv__SolveIK_Response__Sequence
{
  cocoav_interfaces__srv__SolveIK_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} cocoav_interfaces__srv__SolveIK_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // COCOAV_INTERFACES__SRV__DETAIL__SOLVE_IK__STRUCT_H_
