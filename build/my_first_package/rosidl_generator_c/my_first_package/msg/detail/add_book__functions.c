// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from my_first_package:msg/AddBook.idl
// generated code does not contain a copyright notice
#include "my_first_package/msg/detail/add_book__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `first_name`
// Member `last_name`
// Member `address`
#include "rosidl_runtime_c/string_functions.h"

bool
my_first_package__msg__AddBook__init(my_first_package__msg__AddBook * msg)
{
  if (!msg) {
    return false;
  }
  // first_name
  if (!rosidl_runtime_c__String__init(&msg->first_name)) {
    my_first_package__msg__AddBook__fini(msg);
    return false;
  }
  // last_name
  if (!rosidl_runtime_c__String__init(&msg->last_name)) {
    my_first_package__msg__AddBook__fini(msg);
    return false;
  }
  // gender
  // age
  // address
  if (!rosidl_runtime_c__String__init(&msg->address)) {
    my_first_package__msg__AddBook__fini(msg);
    return false;
  }
  return true;
}

void
my_first_package__msg__AddBook__fini(my_first_package__msg__AddBook * msg)
{
  if (!msg) {
    return;
  }
  // first_name
  rosidl_runtime_c__String__fini(&msg->first_name);
  // last_name
  rosidl_runtime_c__String__fini(&msg->last_name);
  // gender
  // age
  // address
  rosidl_runtime_c__String__fini(&msg->address);
}

my_first_package__msg__AddBook *
my_first_package__msg__AddBook__create()
{
  my_first_package__msg__AddBook * msg = (my_first_package__msg__AddBook *)malloc(sizeof(my_first_package__msg__AddBook));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(my_first_package__msg__AddBook));
  bool success = my_first_package__msg__AddBook__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
my_first_package__msg__AddBook__destroy(my_first_package__msg__AddBook * msg)
{
  if (msg) {
    my_first_package__msg__AddBook__fini(msg);
  }
  free(msg);
}


bool
my_first_package__msg__AddBook__Sequence__init(my_first_package__msg__AddBook__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  my_first_package__msg__AddBook * data = NULL;
  if (size) {
    data = (my_first_package__msg__AddBook *)calloc(size, sizeof(my_first_package__msg__AddBook));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = my_first_package__msg__AddBook__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        my_first_package__msg__AddBook__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
my_first_package__msg__AddBook__Sequence__fini(my_first_package__msg__AddBook__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      my_first_package__msg__AddBook__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

my_first_package__msg__AddBook__Sequence *
my_first_package__msg__AddBook__Sequence__create(size_t size)
{
  my_first_package__msg__AddBook__Sequence * array = (my_first_package__msg__AddBook__Sequence *)malloc(sizeof(my_first_package__msg__AddBook__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = my_first_package__msg__AddBook__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
my_first_package__msg__AddBook__Sequence__destroy(my_first_package__msg__AddBook__Sequence * array)
{
  if (array) {
    my_first_package__msg__AddBook__Sequence__fini(array);
  }
  free(array);
}
