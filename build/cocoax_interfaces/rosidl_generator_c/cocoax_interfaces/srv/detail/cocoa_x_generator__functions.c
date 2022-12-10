// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from cocoax_interfaces:srv/CocoaXGenerator.idl
// generated code does not contain a copyright notice
#include "cocoax_interfaces/srv/detail/cocoa_x_generator__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
cocoax_interfaces__srv__CocoaXGenerator_Request__init(cocoax_interfaces__srv__CocoaXGenerator_Request * msg)
{
  if (!msg) {
    return false;
  }
  // position_initial
  // position_final
  // duration
  return true;
}

void
cocoax_interfaces__srv__CocoaXGenerator_Request__fini(cocoax_interfaces__srv__CocoaXGenerator_Request * msg)
{
  if (!msg) {
    return;
  }
  // position_initial
  // position_final
  // duration
}

bool
cocoax_interfaces__srv__CocoaXGenerator_Request__are_equal(const cocoax_interfaces__srv__CocoaXGenerator_Request * lhs, const cocoax_interfaces__srv__CocoaXGenerator_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // position_initial
  for (size_t i = 0; i < 3; ++i) {
    if (lhs->position_initial[i] != rhs->position_initial[i]) {
      return false;
    }
  }
  // position_final
  for (size_t i = 0; i < 3; ++i) {
    if (lhs->position_final[i] != rhs->position_final[i]) {
      return false;
    }
  }
  // duration
  if (lhs->duration != rhs->duration) {
    return false;
  }
  return true;
}

bool
cocoax_interfaces__srv__CocoaXGenerator_Request__copy(
  const cocoax_interfaces__srv__CocoaXGenerator_Request * input,
  cocoax_interfaces__srv__CocoaXGenerator_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // position_initial
  for (size_t i = 0; i < 3; ++i) {
    output->position_initial[i] = input->position_initial[i];
  }
  // position_final
  for (size_t i = 0; i < 3; ++i) {
    output->position_final[i] = input->position_final[i];
  }
  // duration
  output->duration = input->duration;
  return true;
}

cocoax_interfaces__srv__CocoaXGenerator_Request *
cocoax_interfaces__srv__CocoaXGenerator_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cocoax_interfaces__srv__CocoaXGenerator_Request * msg = (cocoax_interfaces__srv__CocoaXGenerator_Request *)allocator.allocate(sizeof(cocoax_interfaces__srv__CocoaXGenerator_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(cocoax_interfaces__srv__CocoaXGenerator_Request));
  bool success = cocoax_interfaces__srv__CocoaXGenerator_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
cocoax_interfaces__srv__CocoaXGenerator_Request__destroy(cocoax_interfaces__srv__CocoaXGenerator_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    cocoax_interfaces__srv__CocoaXGenerator_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
cocoax_interfaces__srv__CocoaXGenerator_Request__Sequence__init(cocoax_interfaces__srv__CocoaXGenerator_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cocoax_interfaces__srv__CocoaXGenerator_Request * data = NULL;

  if (size) {
    data = (cocoax_interfaces__srv__CocoaXGenerator_Request *)allocator.zero_allocate(size, sizeof(cocoax_interfaces__srv__CocoaXGenerator_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = cocoax_interfaces__srv__CocoaXGenerator_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        cocoax_interfaces__srv__CocoaXGenerator_Request__fini(&data[i - 1]);
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
cocoax_interfaces__srv__CocoaXGenerator_Request__Sequence__fini(cocoax_interfaces__srv__CocoaXGenerator_Request__Sequence * array)
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
      cocoax_interfaces__srv__CocoaXGenerator_Request__fini(&array->data[i]);
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

cocoax_interfaces__srv__CocoaXGenerator_Request__Sequence *
cocoax_interfaces__srv__CocoaXGenerator_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cocoax_interfaces__srv__CocoaXGenerator_Request__Sequence * array = (cocoax_interfaces__srv__CocoaXGenerator_Request__Sequence *)allocator.allocate(sizeof(cocoax_interfaces__srv__CocoaXGenerator_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = cocoax_interfaces__srv__CocoaXGenerator_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
cocoax_interfaces__srv__CocoaXGenerator_Request__Sequence__destroy(cocoax_interfaces__srv__CocoaXGenerator_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    cocoax_interfaces__srv__CocoaXGenerator_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
cocoax_interfaces__srv__CocoaXGenerator_Request__Sequence__are_equal(const cocoax_interfaces__srv__CocoaXGenerator_Request__Sequence * lhs, const cocoax_interfaces__srv__CocoaXGenerator_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!cocoax_interfaces__srv__CocoaXGenerator_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
cocoax_interfaces__srv__CocoaXGenerator_Request__Sequence__copy(
  const cocoax_interfaces__srv__CocoaXGenerator_Request__Sequence * input,
  cocoax_interfaces__srv__CocoaXGenerator_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(cocoax_interfaces__srv__CocoaXGenerator_Request);
    cocoax_interfaces__srv__CocoaXGenerator_Request * data =
      (cocoax_interfaces__srv__CocoaXGenerator_Request *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!cocoax_interfaces__srv__CocoaXGenerator_Request__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          cocoax_interfaces__srv__CocoaXGenerator_Request__fini(&data[i]);
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
    if (!cocoax_interfaces__srv__CocoaXGenerator_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
cocoax_interfaces__srv__CocoaXGenerator_Response__init(cocoax_interfaces__srv__CocoaXGenerator_Response * msg)
{
  if (!msg) {
    return false;
  }
  // structure_needs_at_least_one_member
  return true;
}

void
cocoax_interfaces__srv__CocoaXGenerator_Response__fini(cocoax_interfaces__srv__CocoaXGenerator_Response * msg)
{
  if (!msg) {
    return;
  }
  // structure_needs_at_least_one_member
}

bool
cocoax_interfaces__srv__CocoaXGenerator_Response__are_equal(const cocoax_interfaces__srv__CocoaXGenerator_Response * lhs, const cocoax_interfaces__srv__CocoaXGenerator_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // structure_needs_at_least_one_member
  if (lhs->structure_needs_at_least_one_member != rhs->structure_needs_at_least_one_member) {
    return false;
  }
  return true;
}

bool
cocoax_interfaces__srv__CocoaXGenerator_Response__copy(
  const cocoax_interfaces__srv__CocoaXGenerator_Response * input,
  cocoax_interfaces__srv__CocoaXGenerator_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // structure_needs_at_least_one_member
  output->structure_needs_at_least_one_member = input->structure_needs_at_least_one_member;
  return true;
}

cocoax_interfaces__srv__CocoaXGenerator_Response *
cocoax_interfaces__srv__CocoaXGenerator_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cocoax_interfaces__srv__CocoaXGenerator_Response * msg = (cocoax_interfaces__srv__CocoaXGenerator_Response *)allocator.allocate(sizeof(cocoax_interfaces__srv__CocoaXGenerator_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(cocoax_interfaces__srv__CocoaXGenerator_Response));
  bool success = cocoax_interfaces__srv__CocoaXGenerator_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
cocoax_interfaces__srv__CocoaXGenerator_Response__destroy(cocoax_interfaces__srv__CocoaXGenerator_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    cocoax_interfaces__srv__CocoaXGenerator_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
cocoax_interfaces__srv__CocoaXGenerator_Response__Sequence__init(cocoax_interfaces__srv__CocoaXGenerator_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cocoax_interfaces__srv__CocoaXGenerator_Response * data = NULL;

  if (size) {
    data = (cocoax_interfaces__srv__CocoaXGenerator_Response *)allocator.zero_allocate(size, sizeof(cocoax_interfaces__srv__CocoaXGenerator_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = cocoax_interfaces__srv__CocoaXGenerator_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        cocoax_interfaces__srv__CocoaXGenerator_Response__fini(&data[i - 1]);
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
cocoax_interfaces__srv__CocoaXGenerator_Response__Sequence__fini(cocoax_interfaces__srv__CocoaXGenerator_Response__Sequence * array)
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
      cocoax_interfaces__srv__CocoaXGenerator_Response__fini(&array->data[i]);
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

cocoax_interfaces__srv__CocoaXGenerator_Response__Sequence *
cocoax_interfaces__srv__CocoaXGenerator_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cocoax_interfaces__srv__CocoaXGenerator_Response__Sequence * array = (cocoax_interfaces__srv__CocoaXGenerator_Response__Sequence *)allocator.allocate(sizeof(cocoax_interfaces__srv__CocoaXGenerator_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = cocoax_interfaces__srv__CocoaXGenerator_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
cocoax_interfaces__srv__CocoaXGenerator_Response__Sequence__destroy(cocoax_interfaces__srv__CocoaXGenerator_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    cocoax_interfaces__srv__CocoaXGenerator_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
cocoax_interfaces__srv__CocoaXGenerator_Response__Sequence__are_equal(const cocoax_interfaces__srv__CocoaXGenerator_Response__Sequence * lhs, const cocoax_interfaces__srv__CocoaXGenerator_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!cocoax_interfaces__srv__CocoaXGenerator_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
cocoax_interfaces__srv__CocoaXGenerator_Response__Sequence__copy(
  const cocoax_interfaces__srv__CocoaXGenerator_Response__Sequence * input,
  cocoax_interfaces__srv__CocoaXGenerator_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(cocoax_interfaces__srv__CocoaXGenerator_Response);
    cocoax_interfaces__srv__CocoaXGenerator_Response * data =
      (cocoax_interfaces__srv__CocoaXGenerator_Response *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!cocoax_interfaces__srv__CocoaXGenerator_Response__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          cocoax_interfaces__srv__CocoaXGenerator_Response__fini(&data[i]);
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
    if (!cocoax_interfaces__srv__CocoaXGenerator_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
