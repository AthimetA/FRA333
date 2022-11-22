// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from cocoav_interfaces:msg/CocoaVIMU.idl
// generated code does not contain a copyright notice

#ifndef COCOAV_INTERFACES__MSG__DETAIL__COCOA_VIMU__FUNCTIONS_H_
#define COCOAV_INTERFACES__MSG__DETAIL__COCOA_VIMU__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "cocoav_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "cocoav_interfaces/msg/detail/cocoa_vimu__struct.h"

/// Initialize msg/CocoaVIMU message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * cocoav_interfaces__msg__CocoaVIMU
 * )) before or use
 * cocoav_interfaces__msg__CocoaVIMU__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_cocoav_interfaces
bool
cocoav_interfaces__msg__CocoaVIMU__init(cocoav_interfaces__msg__CocoaVIMU * msg);

/// Finalize msg/CocoaVIMU message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cocoav_interfaces
void
cocoav_interfaces__msg__CocoaVIMU__fini(cocoav_interfaces__msg__CocoaVIMU * msg);

/// Create msg/CocoaVIMU message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * cocoav_interfaces__msg__CocoaVIMU__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_cocoav_interfaces
cocoav_interfaces__msg__CocoaVIMU *
cocoav_interfaces__msg__CocoaVIMU__create();

/// Destroy msg/CocoaVIMU message.
/**
 * It calls
 * cocoav_interfaces__msg__CocoaVIMU__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cocoav_interfaces
void
cocoav_interfaces__msg__CocoaVIMU__destroy(cocoav_interfaces__msg__CocoaVIMU * msg);

/// Check for msg/CocoaVIMU message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_cocoav_interfaces
bool
cocoav_interfaces__msg__CocoaVIMU__are_equal(const cocoav_interfaces__msg__CocoaVIMU * lhs, const cocoav_interfaces__msg__CocoaVIMU * rhs);

/// Copy a msg/CocoaVIMU message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_cocoav_interfaces
bool
cocoav_interfaces__msg__CocoaVIMU__copy(
  const cocoav_interfaces__msg__CocoaVIMU * input,
  cocoav_interfaces__msg__CocoaVIMU * output);

/// Initialize array of msg/CocoaVIMU messages.
/**
 * It allocates the memory for the number of elements and calls
 * cocoav_interfaces__msg__CocoaVIMU__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_cocoav_interfaces
bool
cocoav_interfaces__msg__CocoaVIMU__Sequence__init(cocoav_interfaces__msg__CocoaVIMU__Sequence * array, size_t size);

/// Finalize array of msg/CocoaVIMU messages.
/**
 * It calls
 * cocoav_interfaces__msg__CocoaVIMU__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cocoav_interfaces
void
cocoav_interfaces__msg__CocoaVIMU__Sequence__fini(cocoav_interfaces__msg__CocoaVIMU__Sequence * array);

/// Create array of msg/CocoaVIMU messages.
/**
 * It allocates the memory for the array and calls
 * cocoav_interfaces__msg__CocoaVIMU__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_cocoav_interfaces
cocoav_interfaces__msg__CocoaVIMU__Sequence *
cocoav_interfaces__msg__CocoaVIMU__Sequence__create(size_t size);

/// Destroy array of msg/CocoaVIMU messages.
/**
 * It calls
 * cocoav_interfaces__msg__CocoaVIMU__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cocoav_interfaces
void
cocoav_interfaces__msg__CocoaVIMU__Sequence__destroy(cocoav_interfaces__msg__CocoaVIMU__Sequence * array);

/// Check for msg/CocoaVIMU message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_cocoav_interfaces
bool
cocoav_interfaces__msg__CocoaVIMU__Sequence__are_equal(const cocoav_interfaces__msg__CocoaVIMU__Sequence * lhs, const cocoav_interfaces__msg__CocoaVIMU__Sequence * rhs);

/// Copy an array of msg/CocoaVIMU messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_cocoav_interfaces
bool
cocoav_interfaces__msg__CocoaVIMU__Sequence__copy(
  const cocoav_interfaces__msg__CocoaVIMU__Sequence * input,
  cocoav_interfaces__msg__CocoaVIMU__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // COCOAV_INTERFACES__MSG__DETAIL__COCOA_VIMU__FUNCTIONS_H_
