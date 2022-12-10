// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from cocoax_interfaces:srv/CocoaXGenerator.idl
// generated code does not contain a copyright notice

#ifndef COCOAX_INTERFACES__SRV__DETAIL__COCOA_X_GENERATOR__FUNCTIONS_H_
#define COCOAX_INTERFACES__SRV__DETAIL__COCOA_X_GENERATOR__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "cocoax_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "cocoax_interfaces/srv/detail/cocoa_x_generator__struct.h"

/// Initialize srv/CocoaXGenerator message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * cocoax_interfaces__srv__CocoaXGenerator_Request
 * )) before or use
 * cocoax_interfaces__srv__CocoaXGenerator_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_cocoax_interfaces
bool
cocoax_interfaces__srv__CocoaXGenerator_Request__init(cocoax_interfaces__srv__CocoaXGenerator_Request * msg);

/// Finalize srv/CocoaXGenerator message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cocoax_interfaces
void
cocoax_interfaces__srv__CocoaXGenerator_Request__fini(cocoax_interfaces__srv__CocoaXGenerator_Request * msg);

/// Create srv/CocoaXGenerator message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * cocoax_interfaces__srv__CocoaXGenerator_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_cocoax_interfaces
cocoax_interfaces__srv__CocoaXGenerator_Request *
cocoax_interfaces__srv__CocoaXGenerator_Request__create();

/// Destroy srv/CocoaXGenerator message.
/**
 * It calls
 * cocoax_interfaces__srv__CocoaXGenerator_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cocoax_interfaces
void
cocoax_interfaces__srv__CocoaXGenerator_Request__destroy(cocoax_interfaces__srv__CocoaXGenerator_Request * msg);

/// Check for srv/CocoaXGenerator message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_cocoax_interfaces
bool
cocoax_interfaces__srv__CocoaXGenerator_Request__are_equal(const cocoax_interfaces__srv__CocoaXGenerator_Request * lhs, const cocoax_interfaces__srv__CocoaXGenerator_Request * rhs);

/// Copy a srv/CocoaXGenerator message.
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
cocoax_interfaces__srv__CocoaXGenerator_Request__copy(
  const cocoax_interfaces__srv__CocoaXGenerator_Request * input,
  cocoax_interfaces__srv__CocoaXGenerator_Request * output);

/// Initialize array of srv/CocoaXGenerator messages.
/**
 * It allocates the memory for the number of elements and calls
 * cocoax_interfaces__srv__CocoaXGenerator_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_cocoax_interfaces
bool
cocoax_interfaces__srv__CocoaXGenerator_Request__Sequence__init(cocoax_interfaces__srv__CocoaXGenerator_Request__Sequence * array, size_t size);

/// Finalize array of srv/CocoaXGenerator messages.
/**
 * It calls
 * cocoax_interfaces__srv__CocoaXGenerator_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cocoax_interfaces
void
cocoax_interfaces__srv__CocoaXGenerator_Request__Sequence__fini(cocoax_interfaces__srv__CocoaXGenerator_Request__Sequence * array);

/// Create array of srv/CocoaXGenerator messages.
/**
 * It allocates the memory for the array and calls
 * cocoax_interfaces__srv__CocoaXGenerator_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_cocoax_interfaces
cocoax_interfaces__srv__CocoaXGenerator_Request__Sequence *
cocoax_interfaces__srv__CocoaXGenerator_Request__Sequence__create(size_t size);

/// Destroy array of srv/CocoaXGenerator messages.
/**
 * It calls
 * cocoax_interfaces__srv__CocoaXGenerator_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cocoax_interfaces
void
cocoax_interfaces__srv__CocoaXGenerator_Request__Sequence__destroy(cocoax_interfaces__srv__CocoaXGenerator_Request__Sequence * array);

/// Check for srv/CocoaXGenerator message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_cocoax_interfaces
bool
cocoax_interfaces__srv__CocoaXGenerator_Request__Sequence__are_equal(const cocoax_interfaces__srv__CocoaXGenerator_Request__Sequence * lhs, const cocoax_interfaces__srv__CocoaXGenerator_Request__Sequence * rhs);

/// Copy an array of srv/CocoaXGenerator messages.
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
cocoax_interfaces__srv__CocoaXGenerator_Request__Sequence__copy(
  const cocoax_interfaces__srv__CocoaXGenerator_Request__Sequence * input,
  cocoax_interfaces__srv__CocoaXGenerator_Request__Sequence * output);

/// Initialize srv/CocoaXGenerator message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * cocoax_interfaces__srv__CocoaXGenerator_Response
 * )) before or use
 * cocoax_interfaces__srv__CocoaXGenerator_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_cocoax_interfaces
bool
cocoax_interfaces__srv__CocoaXGenerator_Response__init(cocoax_interfaces__srv__CocoaXGenerator_Response * msg);

/// Finalize srv/CocoaXGenerator message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cocoax_interfaces
void
cocoax_interfaces__srv__CocoaXGenerator_Response__fini(cocoax_interfaces__srv__CocoaXGenerator_Response * msg);

/// Create srv/CocoaXGenerator message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * cocoax_interfaces__srv__CocoaXGenerator_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_cocoax_interfaces
cocoax_interfaces__srv__CocoaXGenerator_Response *
cocoax_interfaces__srv__CocoaXGenerator_Response__create();

/// Destroy srv/CocoaXGenerator message.
/**
 * It calls
 * cocoax_interfaces__srv__CocoaXGenerator_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cocoax_interfaces
void
cocoax_interfaces__srv__CocoaXGenerator_Response__destroy(cocoax_interfaces__srv__CocoaXGenerator_Response * msg);

/// Check for srv/CocoaXGenerator message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_cocoax_interfaces
bool
cocoax_interfaces__srv__CocoaXGenerator_Response__are_equal(const cocoax_interfaces__srv__CocoaXGenerator_Response * lhs, const cocoax_interfaces__srv__CocoaXGenerator_Response * rhs);

/// Copy a srv/CocoaXGenerator message.
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
cocoax_interfaces__srv__CocoaXGenerator_Response__copy(
  const cocoax_interfaces__srv__CocoaXGenerator_Response * input,
  cocoax_interfaces__srv__CocoaXGenerator_Response * output);

/// Initialize array of srv/CocoaXGenerator messages.
/**
 * It allocates the memory for the number of elements and calls
 * cocoax_interfaces__srv__CocoaXGenerator_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_cocoax_interfaces
bool
cocoax_interfaces__srv__CocoaXGenerator_Response__Sequence__init(cocoax_interfaces__srv__CocoaXGenerator_Response__Sequence * array, size_t size);

/// Finalize array of srv/CocoaXGenerator messages.
/**
 * It calls
 * cocoax_interfaces__srv__CocoaXGenerator_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cocoax_interfaces
void
cocoax_interfaces__srv__CocoaXGenerator_Response__Sequence__fini(cocoax_interfaces__srv__CocoaXGenerator_Response__Sequence * array);

/// Create array of srv/CocoaXGenerator messages.
/**
 * It allocates the memory for the array and calls
 * cocoax_interfaces__srv__CocoaXGenerator_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_cocoax_interfaces
cocoax_interfaces__srv__CocoaXGenerator_Response__Sequence *
cocoax_interfaces__srv__CocoaXGenerator_Response__Sequence__create(size_t size);

/// Destroy array of srv/CocoaXGenerator messages.
/**
 * It calls
 * cocoax_interfaces__srv__CocoaXGenerator_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cocoax_interfaces
void
cocoax_interfaces__srv__CocoaXGenerator_Response__Sequence__destroy(cocoax_interfaces__srv__CocoaXGenerator_Response__Sequence * array);

/// Check for srv/CocoaXGenerator message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_cocoax_interfaces
bool
cocoax_interfaces__srv__CocoaXGenerator_Response__Sequence__are_equal(const cocoax_interfaces__srv__CocoaXGenerator_Response__Sequence * lhs, const cocoax_interfaces__srv__CocoaXGenerator_Response__Sequence * rhs);

/// Copy an array of srv/CocoaXGenerator messages.
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
cocoax_interfaces__srv__CocoaXGenerator_Response__Sequence__copy(
  const cocoax_interfaces__srv__CocoaXGenerator_Response__Sequence * input,
  cocoax_interfaces__srv__CocoaXGenerator_Response__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // COCOAX_INTERFACES__SRV__DETAIL__COCOA_X_GENERATOR__FUNCTIONS_H_
