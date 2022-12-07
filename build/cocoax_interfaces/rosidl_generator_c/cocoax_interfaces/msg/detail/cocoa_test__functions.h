// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from cocoax_interfaces:msg/CocoaTest.idl
// generated code does not contain a copyright notice

#ifndef COCOAX_INTERFACES__MSG__DETAIL__COCOA_TEST__FUNCTIONS_H_
#define COCOAX_INTERFACES__MSG__DETAIL__COCOA_TEST__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "cocoax_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "cocoax_interfaces/msg/detail/cocoa_test__struct.h"

/// Initialize msg/CocoaTest message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * cocoax_interfaces__msg__CocoaTest
 * )) before or use
 * cocoax_interfaces__msg__CocoaTest__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_cocoax_interfaces
bool
cocoax_interfaces__msg__CocoaTest__init(cocoax_interfaces__msg__CocoaTest * msg);

/// Finalize msg/CocoaTest message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cocoax_interfaces
void
cocoax_interfaces__msg__CocoaTest__fini(cocoax_interfaces__msg__CocoaTest * msg);

/// Create msg/CocoaTest message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * cocoax_interfaces__msg__CocoaTest__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_cocoax_interfaces
cocoax_interfaces__msg__CocoaTest *
cocoax_interfaces__msg__CocoaTest__create();

/// Destroy msg/CocoaTest message.
/**
 * It calls
 * cocoax_interfaces__msg__CocoaTest__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cocoax_interfaces
void
cocoax_interfaces__msg__CocoaTest__destroy(cocoax_interfaces__msg__CocoaTest * msg);

/// Check for msg/CocoaTest message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_cocoax_interfaces
bool
cocoax_interfaces__msg__CocoaTest__are_equal(const cocoax_interfaces__msg__CocoaTest * lhs, const cocoax_interfaces__msg__CocoaTest * rhs);

/// Copy a msg/CocoaTest message.
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
ROSIDL_GENERATOR_C_PUBLIC_cocoax_interfaces
bool
cocoax_interfaces__msg__CocoaTest__copy(
  const cocoax_interfaces__msg__CocoaTest * input,
  cocoax_interfaces__msg__CocoaTest * output);

/// Initialize array of msg/CocoaTest messages.
/**
 * It allocates the memory for the number of elements and calls
 * cocoax_interfaces__msg__CocoaTest__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_cocoax_interfaces
bool
cocoax_interfaces__msg__CocoaTest__Sequence__init(cocoax_interfaces__msg__CocoaTest__Sequence * array, size_t size);

/// Finalize array of msg/CocoaTest messages.
/**
 * It calls
 * cocoax_interfaces__msg__CocoaTest__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cocoax_interfaces
void
cocoax_interfaces__msg__CocoaTest__Sequence__fini(cocoax_interfaces__msg__CocoaTest__Sequence * array);

/// Create array of msg/CocoaTest messages.
/**
 * It allocates the memory for the array and calls
 * cocoax_interfaces__msg__CocoaTest__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_cocoax_interfaces
cocoax_interfaces__msg__CocoaTest__Sequence *
cocoax_interfaces__msg__CocoaTest__Sequence__create(size_t size);

/// Destroy array of msg/CocoaTest messages.
/**
 * It calls
 * cocoax_interfaces__msg__CocoaTest__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cocoax_interfaces
void
cocoax_interfaces__msg__CocoaTest__Sequence__destroy(cocoax_interfaces__msg__CocoaTest__Sequence * array);

/// Check for msg/CocoaTest message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_cocoax_interfaces
bool
cocoax_interfaces__msg__CocoaTest__Sequence__are_equal(const cocoax_interfaces__msg__CocoaTest__Sequence * lhs, const cocoax_interfaces__msg__CocoaTest__Sequence * rhs);

/// Copy an array of msg/CocoaTest messages.
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
ROSIDL_GENERATOR_C_PUBLIC_cocoax_interfaces
bool
cocoax_interfaces__msg__CocoaTest__Sequence__copy(
  const cocoax_interfaces__msg__CocoaTest__Sequence * input,
  cocoax_interfaces__msg__CocoaTest__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // COCOAX_INTERFACES__MSG__DETAIL__COCOA_TEST__FUNCTIONS_H_
