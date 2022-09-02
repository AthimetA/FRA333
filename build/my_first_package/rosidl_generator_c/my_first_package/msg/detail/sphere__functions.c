// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from my_first_package:msg/Sphere.idl
// generated code does not contain a copyright notice
#include "my_first_package/msg/detail/sphere__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `center`
#include "geometry_msgs/msg/detail/point__functions.h"

bool
my_first_package__msg__Sphere__init(my_first_package__msg__Sphere * msg)
{
  if (!msg) {
    return false;
  }
  // center
  if (!geometry_msgs__msg__Point__init(&msg->center)) {
    my_first_package__msg__Sphere__fini(msg);
    return false;
  }
  // radius
  return true;
}

void
my_first_package__msg__Sphere__fini(my_first_package__msg__Sphere * msg)
{
  if (!msg) {
    return;
  }
  // center
  geometry_msgs__msg__Point__fini(&msg->center);
  // radius
}

my_first_package__msg__Sphere *
my_first_package__msg__Sphere__create()
{
  my_first_package__msg__Sphere * msg = (my_first_package__msg__Sphere *)malloc(sizeof(my_first_package__msg__Sphere));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(my_first_package__msg__Sphere));
  bool success = my_first_package__msg__Sphere__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
my_first_package__msg__Sphere__destroy(my_first_package__msg__Sphere * msg)
{
  if (msg) {
    my_first_package__msg__Sphere__fini(msg);
  }
  free(msg);
}


bool
my_first_package__msg__Sphere__Sequence__init(my_first_package__msg__Sphere__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  my_first_package__msg__Sphere * data = NULL;
  if (size) {
    data = (my_first_package__msg__Sphere *)calloc(size, sizeof(my_first_package__msg__Sphere));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = my_first_package__msg__Sphere__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        my_first_package__msg__Sphere__fini(&data[i - 1]);
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
my_first_package__msg__Sphere__Sequence__fini(my_first_package__msg__Sphere__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      my_first_package__msg__Sphere__fini(&array->data[i]);
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

my_first_package__msg__Sphere__Sequence *
my_first_package__msg__Sphere__Sequence__create(size_t size)
{
  my_first_package__msg__Sphere__Sequence * array = (my_first_package__msg__Sphere__Sequence *)malloc(sizeof(my_first_package__msg__Sphere__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = my_first_package__msg__Sphere__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
my_first_package__msg__Sphere__Sequence__destroy(my_first_package__msg__Sphere__Sequence * array)
{
  if (array) {
    my_first_package__msg__Sphere__Sequence__fini(array);
  }
  free(array);
}
