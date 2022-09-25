// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from cocoa_kinematics_interfaces:srv/GetPosition.idl
// generated code does not contain a copyright notice

#ifndef COCOA_KINEMATICS_INTERFACES__SRV__DETAIL__GET_POSITION__STRUCT_H_
#define COCOA_KINEMATICS_INTERFACES__SRV__DETAIL__GET_POSITION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in srv/GetPosition in the package cocoa_kinematics_interfaces.
typedef struct cocoa_kinematics_interfaces__srv__GetPosition_Request
{
  uint8_t structure_needs_at_least_one_member;
} cocoa_kinematics_interfaces__srv__GetPosition_Request;

// Struct for a sequence of cocoa_kinematics_interfaces__srv__GetPosition_Request.
typedef struct cocoa_kinematics_interfaces__srv__GetPosition_Request__Sequence
{
  cocoa_kinematics_interfaces__srv__GetPosition_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} cocoa_kinematics_interfaces__srv__GetPosition_Request__Sequence;


// Constants defined in the message

// Struct defined in srv/GetPosition in the package cocoa_kinematics_interfaces.
typedef struct cocoa_kinematics_interfaces__srv__GetPosition_Response
{
  uint8_t structure_needs_at_least_one_member;
} cocoa_kinematics_interfaces__srv__GetPosition_Response;

// Struct for a sequence of cocoa_kinematics_interfaces__srv__GetPosition_Response.
typedef struct cocoa_kinematics_interfaces__srv__GetPosition_Response__Sequence
{
  cocoa_kinematics_interfaces__srv__GetPosition_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} cocoa_kinematics_interfaces__srv__GetPosition_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // COCOA_KINEMATICS_INTERFACES__SRV__DETAIL__GET_POSITION__STRUCT_H_
