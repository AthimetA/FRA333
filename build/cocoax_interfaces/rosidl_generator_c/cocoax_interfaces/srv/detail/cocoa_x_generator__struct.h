// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from cocoax_interfaces:srv/CocoaXGenerator.idl
// generated code does not contain a copyright notice

#ifndef COCOAX_INTERFACES__SRV__DETAIL__COCOA_X_GENERATOR__STRUCT_H_
#define COCOAX_INTERFACES__SRV__DETAIL__COCOA_X_GENERATOR__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in srv/CocoaXGenerator in the package cocoax_interfaces.
typedef struct cocoax_interfaces__srv__CocoaXGenerator_Request
{
  double position_initial[3];
  double position_final[3];
  double duration;
} cocoax_interfaces__srv__CocoaXGenerator_Request;

// Struct for a sequence of cocoax_interfaces__srv__CocoaXGenerator_Request.
typedef struct cocoax_interfaces__srv__CocoaXGenerator_Request__Sequence
{
  cocoax_interfaces__srv__CocoaXGenerator_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} cocoax_interfaces__srv__CocoaXGenerator_Request__Sequence;


// Constants defined in the message

// Struct defined in srv/CocoaXGenerator in the package cocoax_interfaces.
typedef struct cocoax_interfaces__srv__CocoaXGenerator_Response
{
  uint8_t structure_needs_at_least_one_member;
} cocoax_interfaces__srv__CocoaXGenerator_Response;

// Struct for a sequence of cocoax_interfaces__srv__CocoaXGenerator_Response.
typedef struct cocoax_interfaces__srv__CocoaXGenerator_Response__Sequence
{
  cocoax_interfaces__srv__CocoaXGenerator_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} cocoax_interfaces__srv__CocoaXGenerator_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // COCOAX_INTERFACES__SRV__DETAIL__COCOA_X_GENERATOR__STRUCT_H_
