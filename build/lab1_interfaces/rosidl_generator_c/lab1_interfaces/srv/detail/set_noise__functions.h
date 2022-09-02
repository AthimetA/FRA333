// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from lab1_interfaces:srv/SetNoise.idl
// generated code does not contain a copyright notice

#ifndef LAB1_INTERFACES__SRV__DETAIL__SET_NOISE__FUNCTIONS_H_
#define LAB1_INTERFACES__SRV__DETAIL__SET_NOISE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "lab1_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "lab1_interfaces/srv/detail/set_noise__struct.h"

/// Initialize srv/SetNoise message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * lab1_interfaces__srv__SetNoise_Request
 * )) before or use
 * lab1_interfaces__srv__SetNoise_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_lab1_interfaces
bool
lab1_interfaces__srv__SetNoise_Request__init(lab1_interfaces__srv__SetNoise_Request * msg);

/// Finalize srv/SetNoise message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_lab1_interfaces
void
lab1_interfaces__srv__SetNoise_Request__fini(lab1_interfaces__srv__SetNoise_Request * msg);

/// Create srv/SetNoise message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * lab1_interfaces__srv__SetNoise_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_lab1_interfaces
lab1_interfaces__srv__SetNoise_Request *
lab1_interfaces__srv__SetNoise_Request__create();

/// Destroy srv/SetNoise message.
/**
 * It calls
 * lab1_interfaces__srv__SetNoise_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_lab1_interfaces
void
lab1_interfaces__srv__SetNoise_Request__destroy(lab1_interfaces__srv__SetNoise_Request * msg);


/// Initialize array of srv/SetNoise messages.
/**
 * It allocates the memory for the number of elements and calls
 * lab1_interfaces__srv__SetNoise_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_lab1_interfaces
bool
lab1_interfaces__srv__SetNoise_Request__Sequence__init(lab1_interfaces__srv__SetNoise_Request__Sequence * array, size_t size);

/// Finalize array of srv/SetNoise messages.
/**
 * It calls
 * lab1_interfaces__srv__SetNoise_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_lab1_interfaces
void
lab1_interfaces__srv__SetNoise_Request__Sequence__fini(lab1_interfaces__srv__SetNoise_Request__Sequence * array);

/// Create array of srv/SetNoise messages.
/**
 * It allocates the memory for the array and calls
 * lab1_interfaces__srv__SetNoise_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_lab1_interfaces
lab1_interfaces__srv__SetNoise_Request__Sequence *
lab1_interfaces__srv__SetNoise_Request__Sequence__create(size_t size);

/// Destroy array of srv/SetNoise messages.
/**
 * It calls
 * lab1_interfaces__srv__SetNoise_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_lab1_interfaces
void
lab1_interfaces__srv__SetNoise_Request__Sequence__destroy(lab1_interfaces__srv__SetNoise_Request__Sequence * array);

/// Initialize srv/SetNoise message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * lab1_interfaces__srv__SetNoise_Response
 * )) before or use
 * lab1_interfaces__srv__SetNoise_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_lab1_interfaces
bool
lab1_interfaces__srv__SetNoise_Response__init(lab1_interfaces__srv__SetNoise_Response * msg);

/// Finalize srv/SetNoise message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_lab1_interfaces
void
lab1_interfaces__srv__SetNoise_Response__fini(lab1_interfaces__srv__SetNoise_Response * msg);

/// Create srv/SetNoise message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * lab1_interfaces__srv__SetNoise_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_lab1_interfaces
lab1_interfaces__srv__SetNoise_Response *
lab1_interfaces__srv__SetNoise_Response__create();

/// Destroy srv/SetNoise message.
/**
 * It calls
 * lab1_interfaces__srv__SetNoise_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_lab1_interfaces
void
lab1_interfaces__srv__SetNoise_Response__destroy(lab1_interfaces__srv__SetNoise_Response * msg);


/// Initialize array of srv/SetNoise messages.
/**
 * It allocates the memory for the number of elements and calls
 * lab1_interfaces__srv__SetNoise_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_lab1_interfaces
bool
lab1_interfaces__srv__SetNoise_Response__Sequence__init(lab1_interfaces__srv__SetNoise_Response__Sequence * array, size_t size);

/// Finalize array of srv/SetNoise messages.
/**
 * It calls
 * lab1_interfaces__srv__SetNoise_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_lab1_interfaces
void
lab1_interfaces__srv__SetNoise_Response__Sequence__fini(lab1_interfaces__srv__SetNoise_Response__Sequence * array);

/// Create array of srv/SetNoise messages.
/**
 * It allocates the memory for the array and calls
 * lab1_interfaces__srv__SetNoise_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_lab1_interfaces
lab1_interfaces__srv__SetNoise_Response__Sequence *
lab1_interfaces__srv__SetNoise_Response__Sequence__create(size_t size);

/// Destroy array of srv/SetNoise messages.
/**
 * It calls
 * lab1_interfaces__srv__SetNoise_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_lab1_interfaces
void
lab1_interfaces__srv__SetNoise_Response__Sequence__destroy(lab1_interfaces__srv__SetNoise_Response__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // LAB1_INTERFACES__SRV__DETAIL__SET_NOISE__FUNCTIONS_H_
