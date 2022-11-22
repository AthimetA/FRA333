// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from cocoav_interfaces:msg/CocoaTest.idl
// generated code does not contain a copyright notice
#include "cocoav_interfaces/msg/detail/cocoa_test__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `check`
#include "std_msgs/msg/detail/float64__functions.h"

bool
cocoav_interfaces__msg__CocoaTest__init(cocoav_interfaces__msg__CocoaTest * msg)
{
  if (!msg) {
    return false;
  }
  // check
  if (!std_msgs__msg__Float64__init(&msg->check)) {
    cocoav_interfaces__msg__CocoaTest__fini(msg);
    return false;
  }
  return true;
}

void
cocoav_interfaces__msg__CocoaTest__fini(cocoav_interfaces__msg__CocoaTest * msg)
{
  if (!msg) {
    return;
  }
  // check
  std_msgs__msg__Float64__fini(&msg->check);
}

bool
cocoav_interfaces__msg__CocoaTest__are_equal(const cocoav_interfaces__msg__CocoaTest * lhs, const cocoav_interfaces__msg__CocoaTest * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // check
  if (!std_msgs__msg__Float64__are_equal(
      &(lhs->check), &(rhs->check)))
  {
    return false;
  }
  return true;
}

bool
cocoav_interfaces__msg__CocoaTest__copy(
  const cocoav_interfaces__msg__CocoaTest * input,
  cocoav_interfaces__msg__CocoaTest * output)
{
  if (!input || !output) {
    return false;
  }
  // check
  if (!std_msgs__msg__Float64__copy(
      &(input->check), &(output->check)))
  {
    return false;
  }
  return true;
}

cocoav_interfaces__msg__CocoaTest *
cocoav_interfaces__msg__CocoaTest__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cocoav_interfaces__msg__CocoaTest * msg = (cocoav_interfaces__msg__CocoaTest *)allocator.allocate(sizeof(cocoav_interfaces__msg__CocoaTest), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(cocoav_interfaces__msg__CocoaTest));
  bool success = cocoav_interfaces__msg__CocoaTest__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
cocoav_interfaces__msg__CocoaTest__destroy(cocoav_interfaces__msg__CocoaTest * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    cocoav_interfaces__msg__CocoaTest__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
cocoav_interfaces__msg__CocoaTest__Sequence__init(cocoav_interfaces__msg__CocoaTest__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cocoav_interfaces__msg__CocoaTest * data = NULL;

  if (size) {
    data = (cocoav_interfaces__msg__CocoaTest *)allocator.zero_allocate(size, sizeof(cocoav_interfaces__msg__CocoaTest), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = cocoav_interfaces__msg__CocoaTest__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        cocoav_interfaces__msg__CocoaTest__fini(&data[i - 1]);
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
cocoav_interfaces__msg__CocoaTest__Sequence__fini(cocoav_interfaces__msg__CocoaTest__Sequence * array)
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
      cocoav_interfaces__msg__CocoaTest__fini(&array->data[i]);
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

cocoav_interfaces__msg__CocoaTest__Sequence *
cocoav_interfaces__msg__CocoaTest__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cocoav_interfaces__msg__CocoaTest__Sequence * array = (cocoav_interfaces__msg__CocoaTest__Sequence *)allocator.allocate(sizeof(cocoav_interfaces__msg__CocoaTest__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = cocoav_interfaces__msg__CocoaTest__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
cocoav_interfaces__msg__CocoaTest__Sequence__destroy(cocoav_interfaces__msg__CocoaTest__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    cocoav_interfaces__msg__CocoaTest__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
cocoav_interfaces__msg__CocoaTest__Sequence__are_equal(const cocoav_interfaces__msg__CocoaTest__Sequence * lhs, const cocoav_interfaces__msg__CocoaTest__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!cocoav_interfaces__msg__CocoaTest__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
cocoav_interfaces__msg__CocoaTest__Sequence__copy(
  const cocoav_interfaces__msg__CocoaTest__Sequence * input,
  cocoav_interfaces__msg__CocoaTest__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(cocoav_interfaces__msg__CocoaTest);
    cocoav_interfaces__msg__CocoaTest * data =
      (cocoav_interfaces__msg__CocoaTest *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!cocoav_interfaces__msg__CocoaTest__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          cocoav_interfaces__msg__CocoaTest__fini(&data[i]);
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
    if (!cocoav_interfaces__msg__CocoaTest__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
