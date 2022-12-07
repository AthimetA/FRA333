// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from cocoax_interfaces:srv/CocoaXIK.idl
// generated code does not contain a copyright notice

#ifndef COCOAX_INTERFACES__SRV__DETAIL__COCOA_XIK__STRUCT_H_
#define COCOAX_INTERFACES__SRV__DETAIL__COCOA_XIK__STRUCT_H_

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

// Struct defined in srv/CocoaXIK in the package cocoax_interfaces.
typedef struct cocoax_interfaces__srv__CocoaXIK_Request
{
  geometry_msgs__msg__Point position;
  int32_t r[2];
} cocoax_interfaces__srv__CocoaXIK_Request;

// Struct for a sequence of cocoax_interfaces__srv__CocoaXIK_Request.
typedef struct cocoax_interfaces__srv__CocoaXIK_Request__Sequence
{
  cocoax_interfaces__srv__CocoaXIK_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} cocoax_interfaces__srv__CocoaXIK_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'jointstate'
#include "sensor_msgs/msg/detail/joint_state__struct.h"

// Struct defined in srv/CocoaXIK in the package cocoax_interfaces.
typedef struct cocoax_interfaces__srv__CocoaXIK_Response
{
  sensor_msgs__msg__JointState jointstate;
  bool flag;
} cocoax_interfaces__srv__CocoaXIK_Response;

// Struct for a sequence of cocoax_interfaces__srv__CocoaXIK_Response.
typedef struct cocoax_interfaces__srv__CocoaXIK_Response__Sequence
{
  cocoax_interfaces__srv__CocoaXIK_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} cocoax_interfaces__srv__CocoaXIK_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // COCOAX_INTERFACES__SRV__DETAIL__COCOA_XIK__STRUCT_H_
