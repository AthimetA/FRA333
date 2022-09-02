// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from my_first_package:msg/Sphere.idl
// generated code does not contain a copyright notice

#ifndef MY_FIRST_PACKAGE__MSG__DETAIL__SPHERE__FUNCTIONS_H_
#define MY_FIRST_PACKAGE__MSG__DETAIL__SPHERE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "my_first_package/msg/rosidl_generator_c__visibility_control.h"

#include "my_first_package/msg/detail/sphere__struct.h"

/// Initialize msg/Sphere message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * my_first_package__msg__Sphere
 * )) before or use
 * my_first_package__msg__Sphere__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_my_first_package
bool
my_first_package__msg__Sphere__init(my_first_package__msg__Sphere * msg);

/// Finalize msg/Sphere message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_first_package
void
my_first_package__msg__Sphere__fini(my_first_package__msg__Sphere * msg);

/// Create msg/Sphere message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * my_first_package__msg__Sphere__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_my_first_package
my_first_package__msg__Sphere *
my_first_package__msg__Sphere__create();

/// Destroy msg/Sphere message.
/**
 * It calls
 * my_first_package__msg__Sphere__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_first_package
void
my_first_package__msg__Sphere__destroy(my_first_package__msg__Sphere * msg);


/// Initialize array of msg/Sphere messages.
/**
 * It allocates the memory for the number of elements and calls
 * my_first_package__msg__Sphere__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_first_package
bool
my_first_package__msg__Sphere__Sequence__init(my_first_package__msg__Sphere__Sequence * array, size_t size);

/// Finalize array of msg/Sphere messages.
/**
 * It calls
 * my_first_package__msg__Sphere__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_first_package
void
my_first_package__msg__Sphere__Sequence__fini(my_first_package__msg__Sphere__Sequence * array);

/// Create array of msg/Sphere messages.
/**
 * It allocates the memory for the array and calls
 * my_first_package__msg__Sphere__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_my_first_package
my_first_package__msg__Sphere__Sequence *
my_first_package__msg__Sphere__Sequence__create(size_t size);

/// Destroy array of msg/Sphere messages.
/**
 * It calls
 * my_first_package__msg__Sphere__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_first_package
void
my_first_package__msg__Sphere__Sequence__destroy(my_first_package__msg__Sphere__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // MY_FIRST_PACKAGE__MSG__DETAIL__SPHERE__FUNCTIONS_H_
