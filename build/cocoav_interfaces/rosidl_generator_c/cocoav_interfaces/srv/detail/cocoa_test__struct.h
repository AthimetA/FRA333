// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from cocoav_interfaces:srv/CocoaTest.idl
// generated code does not contain a copyright notice

#ifndef COCOAV_INTERFACES__SRV__DETAIL__COCOA_TEST__STRUCT_H_
#define COCOAV_INTERFACES__SRV__DETAIL__COCOA_TEST__STRUCT_H_

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

// Struct defined in srv/CocoaTest in the package cocoav_interfaces.
typedef struct cocoav_interfaces__srv__CocoaTest_Request
{
  std_msgs__msg__Float64 check;
} cocoav_interfaces__srv__CocoaTest_Request;

// Struct for a sequence of cocoav_interfaces__srv__CocoaTest_Request.
typedef struct cocoav_interfaces__srv__CocoaTest_Request__Sequence
{
  cocoav_interfaces__srv__CocoaTest_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} cocoav_interfaces__srv__CocoaTest_Request__Sequence;


// Constants defined in the message

// Struct defined in srv/CocoaTest in the package cocoav_interfaces.
typedef struct cocoav_interfaces__srv__CocoaTest_Response
{
  uint8_t structure_needs_at_least_one_member;
} cocoav_interfaces__srv__CocoaTest_Response;

// Struct for a sequence of cocoav_interfaces__srv__CocoaTest_Response.
typedef struct cocoav_interfaces__srv__CocoaTest_Response__Sequence
{
  cocoav_interfaces__srv__CocoaTest_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} cocoav_interfaces__srv__CocoaTest_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // COCOAV_INTERFACES__SRV__DETAIL__COCOA_TEST__STRUCT_H_
