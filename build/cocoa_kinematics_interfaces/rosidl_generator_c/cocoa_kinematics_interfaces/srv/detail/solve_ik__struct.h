// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from cocoa_kinematics_interfaces:srv/SolveIK.idl
// generated code does not contain a copyright notice

#ifndef COCOA_KINEMATICS_INTERFACES__SRV__DETAIL__SOLVE_IK__STRUCT_H_
#define COCOA_KINEMATICS_INTERFACES__SRV__DETAIL__SOLVE_IK__STRUCT_H_

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

// Struct defined in srv/SolveIK in the package cocoa_kinematics_interfaces.
typedef struct cocoa_kinematics_interfaces__srv__SolveIK_Request
{
  geometry_msgs__msg__Point position;
  double jointorientation;
  int32_t r[2];
} cocoa_kinematics_interfaces__srv__SolveIK_Request;

// Struct for a sequence of cocoa_kinematics_interfaces__srv__SolveIK_Request.
typedef struct cocoa_kinematics_interfaces__srv__SolveIK_Request__Sequence
{
  cocoa_kinematics_interfaces__srv__SolveIK_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} cocoa_kinematics_interfaces__srv__SolveIK_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'jointstate'
#include "sensor_msgs/msg/detail/joint_state__struct.h"

// Struct defined in srv/SolveIK in the package cocoa_kinematics_interfaces.
typedef struct cocoa_kinematics_interfaces__srv__SolveIK_Response
{
  sensor_msgs__msg__JointState jointstate;
  bool flag;
} cocoa_kinematics_interfaces__srv__SolveIK_Response;

// Struct for a sequence of cocoa_kinematics_interfaces__srv__SolveIK_Response.
typedef struct cocoa_kinematics_interfaces__srv__SolveIK_Response__Sequence
{
  cocoa_kinematics_interfaces__srv__SolveIK_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} cocoa_kinematics_interfaces__srv__SolveIK_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // COCOA_KINEMATICS_INTERFACES__SRV__DETAIL__SOLVE_IK__STRUCT_H_
