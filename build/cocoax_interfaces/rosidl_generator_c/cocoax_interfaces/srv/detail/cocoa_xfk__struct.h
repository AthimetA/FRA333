// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from cocoax_interfaces:srv/CocoaXFK.idl
// generated code does not contain a copyright notice

#ifndef COCOAX_INTERFACES__SRV__DETAIL__COCOA_XFK__STRUCT_H_
#define COCOAX_INTERFACES__SRV__DETAIL__COCOA_XFK__STRUCT_H_

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

// Struct defined in srv/CocoaXFK in the package cocoax_interfaces.
typedef struct cocoax_interfaces__srv__CocoaXFK_Request
{
  sensor_msgs__msg__JointState jointstate;
} cocoax_interfaces__srv__CocoaXFK_Request;

// Struct for a sequence of cocoax_interfaces__srv__CocoaXFK_Request.
typedef struct cocoax_interfaces__srv__CocoaXFK_Request__Sequence
{
  cocoax_interfaces__srv__CocoaXFK_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} cocoax_interfaces__srv__CocoaXFK_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'positionendeffector'
#include "geometry_msgs/msg/detail/point__struct.h"

// Struct defined in srv/CocoaXFK in the package cocoax_interfaces.
typedef struct cocoax_interfaces__srv__CocoaXFK_Response
{
  geometry_msgs__msg__Point positionendeffector;
} cocoax_interfaces__srv__CocoaXFK_Response;

// Struct for a sequence of cocoax_interfaces__srv__CocoaXFK_Response.
typedef struct cocoax_interfaces__srv__CocoaXFK_Response__Sequence
{
  cocoax_interfaces__srv__CocoaXFK_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} cocoax_interfaces__srv__CocoaXFK_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // COCOAX_INTERFACES__SRV__DETAIL__COCOA_XFK__STRUCT_H_
