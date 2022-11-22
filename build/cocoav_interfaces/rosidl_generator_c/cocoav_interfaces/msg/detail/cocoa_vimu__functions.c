// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from cocoav_interfaces:msg/CocoaVIMU.idl
// generated code does not contain a copyright notice
#include "cocoav_interfaces/msg/detail/cocoa_vimu__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
cocoav_interfaces__msg__CocoaVIMU__init(cocoav_interfaces__msg__CocoaVIMU * msg)
{
  if (!msg) {
    return false;
  }
  // time_ms
  // angular_velocity
  // linear_acceleration
  return true;
}

void
cocoav_interfaces__msg__CocoaVIMU__fini(cocoav_interfaces__msg__CocoaVIMU * msg)
{
  if (!msg) {
    return;
  }
  // time_ms
  // angular_velocity
  // linear_acceleration
}

bool
cocoav_interfaces__msg__CocoaVIMU__are_equal(const cocoav_interfaces__msg__CocoaVIMU * lhs, const cocoav_interfaces__msg__CocoaVIMU * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // time_ms
  if (lhs->time_ms != rhs->time_ms) {
    return false;
  }
  // angular_velocity
  for (size_t i = 0; i < 3; ++i) {
    if (lhs->angular_velocity[i] != rhs->angular_velocity[i]) {
      return false;
    }
  }
  // linear_acceleration
  for (size_t i = 0; i < 3; ++i) {
    if (lhs->linear_acceleration[i] != rhs->linear_acceleration[i]) {
      return false;
    }
  }
  return true;
}

bool
cocoav_interfaces__msg__CocoaVIMU__copy(
  const cocoav_interfaces__msg__CocoaVIMU * input,
  cocoav_interfaces__msg__CocoaVIMU * output)
{
  if (!input || !output) {
    return false;
  }
  // time_ms
  output->time_ms = input->time_ms;
  // angular_velocity
  for (size_t i = 0; i < 3; ++i) {
    output->angular_velocity[i] = input->angular_velocity[i];
  }
  // linear_acceleration
  for (size_t i = 0; i < 3; ++i) {
    output->linear_acceleration[i] = input->linear_acceleration[i];
  }
  return true;
}

cocoav_interfaces__msg__CocoaVIMU *
cocoav_interfaces__msg__CocoaVIMU__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cocoav_interfaces__msg__CocoaVIMU * msg = (cocoav_interfaces__msg__CocoaVIMU *)allocator.allocate(sizeof(cocoav_interfaces__msg__CocoaVIMU), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(cocoav_interfaces__msg__CocoaVIMU));
  bool success = cocoav_interfaces__msg__CocoaVIMU__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
cocoav_interfaces__msg__CocoaVIMU__destroy(cocoav_interfaces__msg__CocoaVIMU * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    cocoav_interfaces__msg__CocoaVIMU__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
cocoav_interfaces__msg__CocoaVIMU__Sequence__init(cocoav_interfaces__msg__CocoaVIMU__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cocoav_interfaces__msg__CocoaVIMU * data = NULL;

  if (size) {
    data = (cocoav_interfaces__msg__CocoaVIMU *)allocator.zero_allocate(size, sizeof(cocoav_interfaces__msg__CocoaVIMU), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = cocoav_interfaces__msg__CocoaVIMU__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        cocoav_interfaces__msg__CocoaVIMU__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
cocoav_interfaces__msg__CocoaVIMU__Sequence__fini(cocoav_interfaces__msg__CocoaVIMU__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      cocoav_interfaces__msg__CocoaVIMU__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

cocoav_interfaces__msg__CocoaVIMU__Sequence *
cocoav_interfaces__msg__CocoaVIMU__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cocoav_interfaces__msg__CocoaVIMU__Sequence * array = (cocoav_interfaces__msg__CocoaVIMU__Sequence *)allocator.allocate(sizeof(cocoav_interfaces__msg__CocoaVIMU__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = cocoav_interfaces__msg__CocoaVIMU__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
cocoav_interfaces__msg__CocoaVIMU__Sequence__destroy(cocoav_interfaces__msg__CocoaVIMU__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    cocoav_interfaces__msg__CocoaVIMU__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
cocoav_interfaces__msg__CocoaVIMU__Sequence__are_equal(const cocoav_interfaces__msg__CocoaVIMU__Sequence * lhs, const cocoav_interfaces__msg__CocoaVIMU__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!cocoav_interfaces__msg__CocoaVIMU__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
cocoav_interfaces__msg__CocoaVIMU__Sequence__copy(
  const cocoav_interfaces__msg__CocoaVIMU__Sequence * input,
  cocoav_interfaces__msg__CocoaVIMU__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(cocoav_interfaces__msg__CocoaVIMU);
    cocoav_interfaces__msg__CocoaVIMU * data =
      (cocoav_interfaces__msg__CocoaVIMU *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!cocoav_interfaces__msg__CocoaVIMU__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          cocoav_interfaces__msg__CocoaVIMU__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!cocoav_interfaces__msg__CocoaVIMU__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
