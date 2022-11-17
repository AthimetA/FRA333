// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from xicro_interfaces:msg/Int16.idl
// generated code does not contain a copyright notice
#include "xicro_interfaces/msg/detail/int16__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
xicro_interfaces__msg__Int16__init(xicro_interfaces__msg__Int16 * msg)
{
  if (!msg) {
    return false;
  }
  // data
  return true;
}

void
xicro_interfaces__msg__Int16__fini(xicro_interfaces__msg__Int16 * msg)
{
  if (!msg) {
    return;
  }
  // data
}

bool
xicro_interfaces__msg__Int16__are_equal(const xicro_interfaces__msg__Int16 * lhs, const xicro_interfaces__msg__Int16 * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // data
  if (lhs->data != rhs->data) {
    return false;
  }
  return true;
}

bool
xicro_interfaces__msg__Int16__copy(
  const xicro_interfaces__msg__Int16 * input,
  xicro_interfaces__msg__Int16 * output)
{
  if (!input || !output) {
    return false;
  }
  // data
  output->data = input->data;
  return true;
}

xicro_interfaces__msg__Int16 *
xicro_interfaces__msg__Int16__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  xicro_interfaces__msg__Int16 * msg = (xicro_interfaces__msg__Int16 *)allocator.allocate(sizeof(xicro_interfaces__msg__Int16), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(xicro_interfaces__msg__Int16));
  bool success = xicro_interfaces__msg__Int16__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
xicro_interfaces__msg__Int16__destroy(xicro_interfaces__msg__Int16 * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    xicro_interfaces__msg__Int16__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
xicro_interfaces__msg__Int16__Sequence__init(xicro_interfaces__msg__Int16__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  xicro_interfaces__msg__Int16 * data = NULL;

  if (size) {
    data = (xicro_interfaces__msg__Int16 *)allocator.zero_allocate(size, sizeof(xicro_interfaces__msg__Int16), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = xicro_interfaces__msg__Int16__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        xicro_interfaces__msg__Int16__fini(&data[i - 1]);
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
xicro_interfaces__msg__Int16__Sequence__fini(xicro_interfaces__msg__Int16__Sequence * array)
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
      xicro_interfaces__msg__Int16__fini(&array->data[i]);
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

xicro_interfaces__msg__Int16__Sequence *
xicro_interfaces__msg__Int16__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  xicro_interfaces__msg__Int16__Sequence * array = (xicro_interfaces__msg__Int16__Sequence *)allocator.allocate(sizeof(xicro_interfaces__msg__Int16__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = xicro_interfaces__msg__Int16__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
xicro_interfaces__msg__Int16__Sequence__destroy(xicro_interfaces__msg__Int16__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    xicro_interfaces__msg__Int16__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
xicro_interfaces__msg__Int16__Sequence__are_equal(const xicro_interfaces__msg__Int16__Sequence * lhs, const xicro_interfaces__msg__Int16__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!xicro_interfaces__msg__Int16__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
xicro_interfaces__msg__Int16__Sequence__copy(
  const xicro_interfaces__msg__Int16__Sequence * input,
  xicro_interfaces__msg__Int16__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(xicro_interfaces__msg__Int16);
    xicro_interfaces__msg__Int16 * data =
      (xicro_interfaces__msg__Int16 *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!xicro_interfaces__msg__Int16__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          xicro_interfaces__msg__Int16__fini(&data[i]);
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
    if (!xicro_interfaces__msg__Int16__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
