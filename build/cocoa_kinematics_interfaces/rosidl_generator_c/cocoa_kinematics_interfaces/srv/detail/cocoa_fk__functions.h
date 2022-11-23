// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from cocoa_kinematics_interfaces:srv/CocoaFK.idl
// generated code does not contain a copyright notice

#ifndef COCOA_KINEMATICS_INTERFACES__SRV__DETAIL__COCOA_FK__FUNCTIONS_H_
#define COCOA_KINEMATICS_INTERFACES__SRV__DETAIL__COCOA_FK__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "cocoa_kinematics_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "cocoa_kinematics_interfaces/srv/detail/cocoa_fk__struct.h"

/// Initialize srv/CocoaFK message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * cocoa_kinematics_interfaces__srv__CocoaFK_Request
 * )) before or use
 * cocoa_kinematics_interfaces__srv__CocoaFK_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_cocoa_kinematics_interfaces
bool
cocoa_kinematics_interfaces__srv__CocoaFK_Request__init(cocoa_kinematics_interfaces__srv__CocoaFK_Request * msg);

/// Finalize srv/CocoaFK message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cocoa_kinematics_interfaces
void
cocoa_kinematics_interfaces__srv__CocoaFK_Request__fini(cocoa_kinematics_interfaces__srv__CocoaFK_Request * msg);

/// Create srv/CocoaFK message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * cocoa_kinematics_interfaces__srv__CocoaFK_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_cocoa_kinematics_interfaces
cocoa_kinematics_interfaces__srv__CocoaFK_Request *
cocoa_kinematics_interfaces__srv__CocoaFK_Request__create();

/// Destroy srv/CocoaFK message.
/**
 * It calls
 * cocoa_kinematics_interfaces__srv__CocoaFK_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cocoa_kinematics_interfaces
void
cocoa_kinematics_interfaces__srv__CocoaFK_Request__destroy(cocoa_kinematics_interfaces__srv__CocoaFK_Request * msg);

/// Check for srv/CocoaFK message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_cocoa_kinematics_interfaces
bool
cocoa_kinematics_interfaces__srv__CocoaFK_Request__are_equal(const cocoa_kinematics_interfaces__srv__CocoaFK_Request * lhs, const cocoa_kinematics_interfaces__srv__CocoaFK_Request * rhs);

/// Copy a srv/CocoaFK message.
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
ROSIDL_GENERATOR_C_PUBLIC_cocoa_kinematics_interfaces
bool
cocoa_kinematics_interfaces__srv__CocoaFK_Request__copy(
  const cocoa_kinematics_interfaces__srv__CocoaFK_Request * input,
  cocoa_kinematics_interfaces__srv__CocoaFK_Request * output);

/// Initialize array of srv/CocoaFK messages.
/**
 * It allocates the memory for the number of elements and calls
 * cocoa_kinematics_interfaces__srv__CocoaFK_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_cocoa_kinematics_interfaces
bool
cocoa_kinematics_interfaces__srv__CocoaFK_Request__Sequence__init(cocoa_kinematics_interfaces__srv__CocoaFK_Request__Sequence * array, size_t size);

/// Finalize array of srv/CocoaFK messages.
/**
 * It calls
 * cocoa_kinematics_interfaces__srv__CocoaFK_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cocoa_kinematics_interfaces
void
cocoa_kinematics_interfaces__srv__CocoaFK_Request__Sequence__fini(cocoa_kinematics_interfaces__srv__CocoaFK_Request__Sequence * array);

/// Create array of srv/CocoaFK messages.
/**
 * It allocates the memory for the array and calls
 * cocoa_kinematics_interfaces__srv__CocoaFK_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_cocoa_kinematics_interfaces
cocoa_kinematics_interfaces__srv__CocoaFK_Request__Sequence *
cocoa_kinematics_interfaces__srv__CocoaFK_Request__Sequence__create(size_t size);

/// Destroy array of srv/CocoaFK messages.
/**
 * It calls
 * cocoa_kinematics_interfaces__srv__CocoaFK_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cocoa_kinematics_interfaces
void
cocoa_kinematics_interfaces__srv__CocoaFK_Request__Sequence__destroy(cocoa_kinematics_interfaces__srv__CocoaFK_Request__Sequence * array);

/// Check for srv/CocoaFK message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_cocoa_kinematics_interfaces
bool
cocoa_kinematics_interfaces__srv__CocoaFK_Request__Sequence__are_equal(const cocoa_kinematics_interfaces__srv__CocoaFK_Request__Sequence * lhs, const cocoa_kinematics_interfaces__srv__CocoaFK_Request__Sequence * rhs);

/// Copy an array of srv/CocoaFK messages.
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
ROSIDL_GENERATOR_C_PUBLIC_cocoa_kinematics_interfaces
bool
cocoa_kinematics_interfaces__srv__CocoaFK_Request__Sequence__copy(
  const cocoa_kinematics_interfaces__srv__CocoaFK_Request__Sequence * input,
  cocoa_kinematics_interfaces__srv__CocoaFK_Request__Sequence * output);

/// Initialize srv/CocoaFK message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * cocoa_kinematics_interfaces__srv__CocoaFK_Response
 * )) before or use
 * cocoa_kinematics_interfaces__srv__CocoaFK_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_cocoa_kinematics_interfaces
bool
cocoa_kinematics_interfaces__srv__CocoaFK_Response__init(cocoa_kinematics_interfaces__srv__CocoaFK_Response * msg);

/// Finalize srv/CocoaFK message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cocoa_kinematics_interfaces
void
cocoa_kinematics_interfaces__srv__CocoaFK_Response__fini(cocoa_kinematics_interfaces__srv__CocoaFK_Response * msg);

/// Create srv/CocoaFK message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * cocoa_kinematics_interfaces__srv__CocoaFK_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_cocoa_kinematics_interfaces
cocoa_kinematics_interfaces__srv__CocoaFK_Response *
cocoa_kinematics_interfaces__srv__CocoaFK_Response__create();

/// Destroy srv/CocoaFK message.
/**
 * It calls
 * cocoa_kinematics_interfaces__srv__CocoaFK_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cocoa_kinematics_interfaces
void
cocoa_kinematics_interfaces__srv__CocoaFK_Response__destroy(cocoa_kinematics_interfaces__srv__CocoaFK_Response * msg);

/// Check for srv/CocoaFK message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_cocoa_kinematics_interfaces
bool
cocoa_kinematics_interfaces__srv__CocoaFK_Response__are_equal(const cocoa_kinematics_interfaces__srv__CocoaFK_Response * lhs, const cocoa_kinematics_interfaces__srv__CocoaFK_Response * rhs);

/// Copy a srv/CocoaFK message.
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
ROSIDL_GENERATOR_C_PUBLIC_cocoa_kinematics_interfaces
bool
cocoa_kinematics_interfaces__srv__CocoaFK_Response__copy(
  const cocoa_kinematics_interfaces__srv__CocoaFK_Response * input,
  cocoa_kinematics_interfaces__srv__CocoaFK_Response * output);

/// Initialize array of srv/CocoaFK messages.
/**
 * It allocates the memory for the number of elements and calls
 * cocoa_kinematics_interfaces__srv__CocoaFK_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_cocoa_kinematics_interfaces
bool
cocoa_kinematics_interfaces__srv__CocoaFK_Response__Sequence__init(cocoa_kinematics_interfaces__srv__CocoaFK_Response__Sequence * array, size_t size);

/// Finalize array of srv/CocoaFK messages.
/**
 * It calls
 * cocoa_kinematics_interfaces__srv__CocoaFK_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cocoa_kinematics_interfaces
void
cocoa_kinematics_interfaces__srv__CocoaFK_Response__Sequence__fini(cocoa_kinematics_interfaces__srv__CocoaFK_Response__Sequence * array);

/// Create array of srv/CocoaFK messages.
/**
 * It allocates the memory for the array and calls
 * cocoa_kinematics_interfaces__srv__CocoaFK_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_cocoa_kinematics_interfaces
cocoa_kinematics_interfaces__srv__CocoaFK_Response__Sequence *
cocoa_kinematics_interfaces__srv__CocoaFK_Response__Sequence__create(size_t size);

/// Destroy array of srv/CocoaFK messages.
/**
 * It calls
 * cocoa_kinematics_interfaces__srv__CocoaFK_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cocoa_kinematics_interfaces
void
cocoa_kinematics_interfaces__srv__CocoaFK_Response__Sequence__destroy(cocoa_kinematics_interfaces__srv__CocoaFK_Response__Sequence * array);

/// Check for srv/CocoaFK message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_cocoa_kinematics_interfaces
bool
cocoa_kinematics_interfaces__srv__CocoaFK_Response__Sequence__are_equal(const cocoa_kinematics_interfaces__srv__CocoaFK_Response__Sequence * lhs, const cocoa_kinematics_interfaces__srv__CocoaFK_Response__Sequence * rhs);

/// Copy an array of srv/CocoaFK messages.
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
ROSIDL_GENERATOR_C_PUBLIC_cocoa_kinematics_interfaces
bool
cocoa_kinematics_interfaces__srv__CocoaFK_Response__Sequence__copy(
  const cocoa_kinematics_interfaces__srv__CocoaFK_Response__Sequence * input,
  cocoa_kinematics_interfaces__srv__CocoaFK_Response__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // COCOA_KINEMATICS_INTERFACES__SRV__DETAIL__COCOA_FK__FUNCTIONS_H_
