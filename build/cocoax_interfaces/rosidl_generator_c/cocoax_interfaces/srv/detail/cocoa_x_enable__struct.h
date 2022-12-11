// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from cocoax_interfaces:srv/CocoaXEnable.idl
// generated code does not contain a copyright notice

#ifndef COCOAX_INTERFACES__SRV__DETAIL__COCOA_X_ENABLE__STRUCT_H_
#define COCOAX_INTERFACES__SRV__DETAIL__COCOA_X_ENABLE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in srv/CocoaXEnable in the package cocoax_interfaces.
typedef struct cocoax_interfaces__srv__CocoaXEnable_Request
{
  bool enable;
} cocoax_interfaces__srv__CocoaXEnable_Request;

// Struct for a sequence of cocoax_interfaces__srv__CocoaXEnable_Request.
typedef struct cocoax_interfaces__srv__CocoaXEnable_Request__Sequence
{
  cocoax_interfaces__srv__CocoaXEnable_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} cocoax_interfaces__srv__CocoaXEnable_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'status'
#include "rosidl_runtime_c/string.h"

// Struct defined in srv/CocoaXEnable in the package cocoax_interfaces.
typedef struct cocoax_interfaces__srv__CocoaXEnable_Response
{
  rosidl_runtime_c__String status;
} cocoax_interfaces__srv__CocoaXEnable_Response;

// Struct for a sequence of cocoax_interfaces__srv__CocoaXEnable_Response.
typedef struct cocoax_interfaces__srv__CocoaXEnable_Response__Sequence
{
  cocoax_interfaces__srv__CocoaXEnable_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} cocoax_interfaces__srv__CocoaXEnable_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // COCOAX_INTERFACES__SRV__DETAIL__COCOA_X_ENABLE__STRUCT_H_
