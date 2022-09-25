// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from cocoa_kinematics_interfaces:srv/SolveIK.idl
// generated code does not contain a copyright notice

#ifndef COCOA_KINEMATICS_INTERFACES__SRV__DETAIL__SOLVE_IK__FUNCTIONS_H_
#define COCOA_KINEMATICS_INTERFACES__SRV__DETAIL__SOLVE_IK__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "cocoa_kinematics_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "cocoa_kinematics_interfaces/srv/detail/solve_ik__struct.h"

/// Initialize srv/SolveIK message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * cocoa_kinematics_interfaces__srv__SolveIK_Request
 * )) before or use
 * cocoa_kinematics_interfaces__srv__SolveIK_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_cocoa_kinematics_interfaces
bool
cocoa_kinematics_interfaces__srv__SolveIK_Request__init(cocoa_kinematics_interfaces__srv__SolveIK_Request * msg);

/// Finalize srv/SolveIK message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cocoa_kinematics_interfaces
void
cocoa_kinematics_interfaces__srv__SolveIK_Request__fini(cocoa_kinematics_interfaces__srv__SolveIK_Request * msg);

/// Create srv/SolveIK message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * cocoa_kinematics_interfaces__srv__SolveIK_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_cocoa_kinematics_interfaces
cocoa_kinematics_interfaces__srv__SolveIK_Request *
cocoa_kinematics_interfaces__srv__SolveIK_Request__create();

/// Destroy srv/SolveIK message.
/**
 * It calls
 * cocoa_kinematics_interfaces__srv__SolveIK_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cocoa_kinematics_interfaces
void
cocoa_kinematics_interfaces__srv__SolveIK_Request__destroy(cocoa_kinematics_interfaces__srv__SolveIK_Request * msg);


/// Initialize array of srv/SolveIK messages.
/**
 * It allocates the memory for the number of elements and calls
 * cocoa_kinematics_interfaces__srv__SolveIK_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_cocoa_kinematics_interfaces
bool
cocoa_kinematics_interfaces__srv__SolveIK_Request__Sequence__init(cocoa_kinematics_interfaces__srv__SolveIK_Request__Sequence * array, size_t size);

/// Finalize array of srv/SolveIK messages.
/**
 * It calls
 * cocoa_kinematics_interfaces__srv__SolveIK_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cocoa_kinematics_interfaces
void
cocoa_kinematics_interfaces__srv__SolveIK_Request__Sequence__fini(cocoa_kinematics_interfaces__srv__SolveIK_Request__Sequence * array);

/// Create array of srv/SolveIK messages.
/**
 * It allocates the memory for the array and calls
 * cocoa_kinematics_interfaces__srv__SolveIK_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_cocoa_kinematics_interfaces
cocoa_kinematics_interfaces__srv__SolveIK_Request__Sequence *
cocoa_kinematics_interfaces__srv__SolveIK_Request__Sequence__create(size_t size);

/// Destroy array of srv/SolveIK messages.
/**
 * It calls
 * cocoa_kinematics_interfaces__srv__SolveIK_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cocoa_kinematics_interfaces
void
cocoa_kinematics_interfaces__srv__SolveIK_Request__Sequence__destroy(cocoa_kinematics_interfaces__srv__SolveIK_Request__Sequence * array);

/// Initialize srv/SolveIK message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * cocoa_kinematics_interfaces__srv__SolveIK_Response
 * )) before or use
 * cocoa_kinematics_interfaces__srv__SolveIK_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_cocoa_kinematics_interfaces
bool
cocoa_kinematics_interfaces__srv__SolveIK_Response__init(cocoa_kinematics_interfaces__srv__SolveIK_Response * msg);

/// Finalize srv/SolveIK message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cocoa_kinematics_interfaces
void
cocoa_kinematics_interfaces__srv__SolveIK_Response__fini(cocoa_kinematics_interfaces__srv__SolveIK_Response * msg);

/// Create srv/SolveIK message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * cocoa_kinematics_interfaces__srv__SolveIK_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_cocoa_kinematics_interfaces
cocoa_kinematics_interfaces__srv__SolveIK_Response *
cocoa_kinematics_interfaces__srv__SolveIK_Response__create();

/// Destroy srv/SolveIK message.
/**
 * It calls
 * cocoa_kinematics_interfaces__srv__SolveIK_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cocoa_kinematics_interfaces
void
cocoa_kinematics_interfaces__srv__SolveIK_Response__destroy(cocoa_kinematics_interfaces__srv__SolveIK_Response * msg);


/// Initialize array of srv/SolveIK messages.
/**
 * It allocates the memory for the number of elements and calls
 * cocoa_kinematics_interfaces__srv__SolveIK_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_cocoa_kinematics_interfaces
bool
cocoa_kinematics_interfaces__srv__SolveIK_Response__Sequence__init(cocoa_kinematics_interfaces__srv__SolveIK_Response__Sequence * array, size_t size);

/// Finalize array of srv/SolveIK messages.
/**
 * It calls
 * cocoa_kinematics_interfaces__srv__SolveIK_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cocoa_kinematics_interfaces
void
cocoa_kinematics_interfaces__srv__SolveIK_Response__Sequence__fini(cocoa_kinematics_interfaces__srv__SolveIK_Response__Sequence * array);

/// Create array of srv/SolveIK messages.
/**
 * It allocates the memory for the array and calls
 * cocoa_kinematics_interfaces__srv__SolveIK_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_cocoa_kinematics_interfaces
cocoa_kinematics_interfaces__srv__SolveIK_Response__Sequence *
cocoa_kinematics_interfaces__srv__SolveIK_Response__Sequence__create(size_t size);

/// Destroy array of srv/SolveIK messages.
/**
 * It calls
 * cocoa_kinematics_interfaces__srv__SolveIK_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cocoa_kinematics_interfaces
void
cocoa_kinematics_interfaces__srv__SolveIK_Response__Sequence__destroy(cocoa_kinematics_interfaces__srv__SolveIK_Response__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // COCOA_KINEMATICS_INTERFACES__SRV__DETAIL__SOLVE_IK__FUNCTIONS_H_
