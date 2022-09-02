// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from my_first_package:msg/AddBook.idl
// generated code does not contain a copyright notice

#ifndef MY_FIRST_PACKAGE__MSG__DETAIL__ADD_BOOK__FUNCTIONS_H_
#define MY_FIRST_PACKAGE__MSG__DETAIL__ADD_BOOK__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "my_first_package/msg/rosidl_generator_c__visibility_control.h"

#include "my_first_package/msg/detail/add_book__struct.h"

/// Initialize msg/AddBook message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * my_first_package__msg__AddBook
 * )) before or use
 * my_first_package__msg__AddBook__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_my_first_package
bool
my_first_package__msg__AddBook__init(my_first_package__msg__AddBook * msg);

/// Finalize msg/AddBook message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_first_package
void
my_first_package__msg__AddBook__fini(my_first_package__msg__AddBook * msg);

/// Create msg/AddBook message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * my_first_package__msg__AddBook__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_my_first_package
my_first_package__msg__AddBook *
my_first_package__msg__AddBook__create();

/// Destroy msg/AddBook message.
/**
 * It calls
 * my_first_package__msg__AddBook__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_first_package
void
my_first_package__msg__AddBook__destroy(my_first_package__msg__AddBook * msg);


/// Initialize array of msg/AddBook messages.
/**
 * It allocates the memory for the number of elements and calls
 * my_first_package__msg__AddBook__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_first_package
bool
my_first_package__msg__AddBook__Sequence__init(my_first_package__msg__AddBook__Sequence * array, size_t size);

/// Finalize array of msg/AddBook messages.
/**
 * It calls
 * my_first_package__msg__AddBook__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_first_package
void
my_first_package__msg__AddBook__Sequence__fini(my_first_package__msg__AddBook__Sequence * array);

/// Create array of msg/AddBook messages.
/**
 * It allocates the memory for the array and calls
 * my_first_package__msg__AddBook__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_my_first_package
my_first_package__msg__AddBook__Sequence *
my_first_package__msg__AddBook__Sequence__create(size_t size);

/// Destroy array of msg/AddBook messages.
/**
 * It calls
 * my_first_package__msg__AddBook__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_first_package
void
my_first_package__msg__AddBook__Sequence__destroy(my_first_package__msg__AddBook__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // MY_FIRST_PACKAGE__MSG__DETAIL__ADD_BOOK__FUNCTIONS_H_
