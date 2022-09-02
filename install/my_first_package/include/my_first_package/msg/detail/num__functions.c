// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from my_first_package:msg/Num.idl
// generated code does not contain a copyright notice
#include "my_first_package/msg/detail/num__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
my_first_package__msg__Num__init(my_first_package__msg__Num * msg)
{
  if (!msg) {
    return false;
  }
  // num1
  // num2
  return true;
}

void
my_first_package__msg__Num__fini(my_first_package__msg__Num * msg)
{
  if (!msg) {
    return;
  }
  // num1
  // num2
}

my_first_package__msg__Num *
my_first_package__msg__Num__create()
{
  my_first_package__msg__Num * msg = (my_first_package__msg__Num *)malloc(sizeof(my_first_package__msg__Num));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(my_first_package__msg__Num));
  bool success = my_first_package__msg__Num__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
my_first_package__msg__Num__destroy(my_first_package__msg__Num * msg)
{
  if (msg) {
    my_first_package__msg__Num__fini(msg);
  }
  free(msg);
}


bool
my_first_package__msg__Num__Sequence__init(my_first_package__msg__Num__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  my_first_package__msg__Num * data = NULL;
  if (size) {
    data = (my_first_package__msg__Num *)calloc(size, sizeof(my_first_package__msg__Num));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = my_first_package__msg__Num__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        my_first_package__msg__Num__fini(&data[i - 1]);
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
my_first_package__msg__Num__Sequence__fini(my_first_package__msg__Num__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      my_first_package__msg__Num__fini(&array->data[i]);
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

my_first_package__msg__Num__Sequence *
my_first_package__msg__Num__Sequence__create(size_t size)
{
  my_first_package__msg__Num__Sequence * array = (my_first_package__msg__Num__Sequence *)malloc(sizeof(my_first_package__msg__Num__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = my_first_package__msg__Num__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
my_first_package__msg__Num__Sequence__destroy(my_first_package__msg__Num__Sequence * array)
{
  if (array) {
    my_first_package__msg__Num__Sequence__fini(array);
  }
  free(array);
}
