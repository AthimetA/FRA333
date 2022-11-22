// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from cocoav_interfaces:msg/CocoaIMU.idl
// generated code does not contain a copyright notice
#include "cocoav_interfaces/msg/detail/cocoa_imu__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
cocoav_interfaces__msg__CocoaIMU__init(cocoav_interfaces__msg__CocoaIMU * msg)
{
  if (!msg) {
    return false;
  }
  // angular_velocity
  // linear_acceleration
  return true;
}

void
cocoav_interfaces__msg__CocoaIMU__fini(cocoav_interfaces__msg__CocoaIMU * msg)
{
  if (!msg) {
    return;
  }
  // angular_velocity
  // linear_acceleration
}

bool
cocoav_interfaces__msg__CocoaIMU__are_equal(const cocoav_interfaces__msg__CocoaIMU * lhs, const cocoav_interfaces__msg__CocoaIMU * rhs)
{
  if (!lhs || !rhs) {
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
cocoav_interfaces__msg__CocoaIMU__copy(
  const cocoav_interfaces__msg__CocoaIMU * input,
  cocoav_interfaces__msg__CocoaIMU * output)
{
  if (!input || !output) {
    return false;
  }
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

cocoav_interfaces__msg__CocoaIMU *
cocoav_interfaces__msg__CocoaIMU__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cocoav_interfaces__msg__CocoaIMU * msg = (cocoav_interfaces__msg__CocoaIMU *)allocator.allocate(sizeof(cocoav_interfaces__msg__CocoaIMU), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(cocoav_interfaces__msg__CocoaIMU));
  bool success = cocoav_interfaces__msg__CocoaIMU__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
cocoav_interfaces__msg__CocoaIMU__destroy(cocoav_interfaces__msg__CocoaIMU * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    cocoav_interfaces__msg__CocoaIMU__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
cocoav_interfaces__msg__CocoaIMU__Sequence__init(cocoav_interfaces__msg__CocoaIMU__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cocoav_interfaces__msg__CocoaIMU * data = NULL;

  if (size) {
    data = (cocoav_interfaces__msg__CocoaIMU *)allocator.zero_allocate(size, sizeof(cocoav_interfaces__msg__CocoaIMU), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = cocoav_interfaces__msg__CocoaIMU__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        cocoav_interfaces__msg__CocoaIMU__fini(&data[i - 1]);
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
cocoav_interfaces__msg__CocoaIMU__Sequence__fini(cocoav_interfaces__msg__CocoaIMU__Sequence * array)
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
      cocoav_interfaces__msg__CocoaIMU__fini(&array->data[i]);
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

cocoav_interfaces__msg__CocoaIMU__Sequence *
cocoav_interfaces__msg__CocoaIMU__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cocoav_interfaces__msg__CocoaIMU__Sequence * array = (cocoav_interfaces__msg__CocoaIMU__Sequence *)allocator.allocate(sizeof(cocoav_interfaces__msg__CocoaIMU__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = cocoav_interfaces__msg__CocoaIMU__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
cocoav_interfaces__msg__CocoaIMU__Sequence__destroy(cocoav_interfaces__msg__CocoaIMU__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    cocoav_interfaces__msg__CocoaIMU__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
cocoav_interfaces__msg__CocoaIMU__Sequence__are_equal(const cocoav_interfaces__msg__CocoaIMU__Sequence * lhs, const cocoav_interfaces__msg__CocoaIMU__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!cocoav_interfaces__msg__CocoaIMU__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
cocoav_interfaces__msg__CocoaIMU__Sequence__copy(
  const cocoav_interfaces__msg__CocoaIMU__Sequence * input,
  cocoav_interfaces__msg__CocoaIMU__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(cocoav_interfaces__msg__CocoaIMU);
    cocoav_interfaces__msg__CocoaIMU * data =
      (cocoav_interfaces__msg__CocoaIMU *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!cocoav_interfaces__msg__CocoaIMU__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          cocoav_interfaces__msg__CocoaIMU__fini(&data[i]);
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
    if (!cocoav_interfaces__msg__CocoaIMU__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
