// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from my_first_package:srv/AthSum3.idl
// generated code does not contain a copyright notice

#ifndef MY_FIRST_PACKAGE__SRV__DETAIL__ATH_SUM3__STRUCT_H_
#define MY_FIRST_PACKAGE__SRV__DETAIL__ATH_SUM3__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in srv/AthSum3 in the package my_first_package.
typedef struct my_first_package__srv__AthSum3_Request
{
  int64_t a;
  int64_t b;
  int64_t c;
} my_first_package__srv__AthSum3_Request;

// Struct for a sequence of my_first_package__srv__AthSum3_Request.
typedef struct my_first_package__srv__AthSum3_Request__Sequence
{
  my_first_package__srv__AthSum3_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_first_package__srv__AthSum3_Request__Sequence;


// Constants defined in the message

// Struct defined in srv/AthSum3 in the package my_first_package.
typedef struct my_first_package__srv__AthSum3_Response
{
  int64_t sum;
} my_first_package__srv__AthSum3_Response;

// Struct for a sequence of my_first_package__srv__AthSum3_Response.
typedef struct my_first_package__srv__AthSum3_Response__Sequence
{
  my_first_package__srv__AthSum3_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_first_package__srv__AthSum3_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MY_FIRST_PACKAGE__SRV__DETAIL__ATH_SUM3__STRUCT_H_
