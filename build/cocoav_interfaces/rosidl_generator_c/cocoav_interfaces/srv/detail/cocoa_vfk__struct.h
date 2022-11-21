// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from cocoav_interfaces:srv/CocoaVFK.idl
// generated code does not contain a copyright notice

#ifndef COCOAV_INTERFACES__SRV__DETAIL__COCOA_VFK__STRUCT_H_
#define COCOAV_INTERFACES__SRV__DETAIL__COCOA_VFK__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'jointstate'
#include "sensor_msgs/msg/detail/joint_state__struct.h"

// Struct defined in srv/CocoaVFK in the package cocoav_interfaces.
typedef struct cocoav_interfaces__srv__CocoaVFK_Request
{
  sensor_msgs__msg__JointState jointstate;
} cocoav_interfaces__srv__CocoaVFK_Request;

// Struct for a sequence of cocoav_interfaces__srv__CocoaVFK_Request.
typedef struct cocoav_interfaces__srv__CocoaVFK_Request__Sequence
{
  cocoav_interfaces__srv__CocoaVFK_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} cocoav_interfaces__srv__CocoaVFK_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'positionendeffector'
#include "geometry_msgs/msg/detail/point__struct.h"

// Struct defined in srv/CocoaVFK in the package cocoav_interfaces.
typedef struct cocoav_interfaces__srv__CocoaVFK_Response
{
  geometry_msgs__msg__Point positionendeffector;
} cocoav_interfaces__srv__CocoaVFK_Response;

// Struct for a sequence of cocoav_interfaces__srv__CocoaVFK_Response.
typedef struct cocoav_interfaces__srv__CocoaVFK_Response__Sequence
{
  cocoav_interfaces__srv__CocoaVFK_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} cocoav_interfaces__srv__CocoaVFK_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // COCOAV_INTERFACES__SRV__DETAIL__COCOA_VFK__STRUCT_H_
