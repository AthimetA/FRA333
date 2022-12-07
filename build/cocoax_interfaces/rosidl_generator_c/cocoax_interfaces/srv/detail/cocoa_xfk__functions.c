// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from cocoax_interfaces:srv/CocoaXFK.idl
// generated code does not contain a copyright notice
#include "cocoax_interfaces/srv/detail/cocoa_xfk__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `jointstate`
#include "sensor_msgs/msg/detail/joint_state__functions.h"

bool
cocoax_interfaces__srv__CocoaXFK_Request__init(cocoax_interfaces__srv__CocoaXFK_Request * msg)
{
  if (!msg) {
    return false;
  }
  // jointstate
  if (!sensor_msgs__msg__JointState__init(&msg->jointstate)) {
    cocoax_interfaces__srv__CocoaXFK_Request__fini(msg);
    return false;
  }
  return true;
}

void
cocoax_interfaces__srv__CocoaXFK_Request__fini(cocoax_interfaces__srv__CocoaXFK_Request * msg)
{
  if (!msg) {
    return;
  }
  // jointstate
  sensor_msgs__msg__JointState__fini(&msg->jointstate);
}

bool
cocoax_interfaces__srv__CocoaXFK_Request__are_equal(const cocoax_interfaces__srv__CocoaXFK_Request * lhs, const cocoax_interfaces__srv__CocoaXFK_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // jointstate
  if (!sensor_msgs__msg__JointState__are_equal(
      &(lhs->jointstate), &(rhs->jointstate)))
  {
    return false;
  }
  return true;
}

bool
cocoax_interfaces__srv__CocoaXFK_Request__copy(
  const cocoax_interfaces__srv__CocoaXFK_Request * input,
  cocoax_interfaces__srv__CocoaXFK_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // jointstate
  if (!sensor_msgs__msg__JointState__copy(
      &(input->jointstate), &(output->jointstate)))
  {
    return false;
  }
  return true;
}

cocoax_interfaces__srv__CocoaXFK_Request *
cocoax_interfaces__srv__CocoaXFK_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cocoax_interfaces__srv__CocoaXFK_Request * msg = (cocoax_interfaces__srv__CocoaXFK_Request *)allocator.allocate(sizeof(cocoax_interfaces__srv__CocoaXFK_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(cocoax_interfaces__srv__CocoaXFK_Request));
  bool success = cocoax_interfaces__srv__CocoaXFK_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
cocoax_interfaces__srv__CocoaXFK_Request__destroy(cocoax_interfaces__srv__CocoaXFK_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    cocoax_interfaces__srv__CocoaXFK_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
cocoax_interfaces__srv__CocoaXFK_Request__Sequence__init(cocoax_interfaces__srv__CocoaXFK_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cocoax_interfaces__srv__CocoaXFK_Request * data = NULL;

  if (size) {
    data = (cocoax_interfaces__srv__CocoaXFK_Request *)allocator.zero_allocate(size, sizeof(cocoax_interfaces__srv__CocoaXFK_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = cocoax_interfaces__srv__CocoaXFK_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        cocoax_interfaces__srv__CocoaXFK_Request__fini(&data[i - 1]);
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
cocoax_interfaces__srv__CocoaXFK_Request__Sequence__fini(cocoax_interfaces__srv__CocoaXFK_Request__Sequence * array)
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
      cocoax_interfaces__srv__CocoaXFK_Request__fini(&array->data[i]);
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

cocoax_interfaces__srv__CocoaXFK_Request__Sequence *
cocoax_interfaces__srv__CocoaXFK_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cocoax_interfaces__srv__CocoaXFK_Request__Sequence * array = (cocoax_interfaces__srv__CocoaXFK_Request__Sequence *)allocator.allocate(sizeof(cocoax_interfaces__srv__CocoaXFK_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = cocoax_interfaces__srv__CocoaXFK_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
cocoax_interfaces__srv__CocoaXFK_Request__Sequence__destroy(cocoax_interfaces__srv__CocoaXFK_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    cocoax_interfaces__srv__CocoaXFK_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
cocoax_interfaces__srv__CocoaXFK_Request__Sequence__are_equal(const cocoax_interfaces__srv__CocoaXFK_Request__Sequence * lhs, const cocoax_interfaces__srv__CocoaXFK_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!cocoax_interfaces__srv__CocoaXFK_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
cocoax_interfaces__srv__CocoaXFK_Request__Sequence__copy(
  const cocoax_interfaces__srv__CocoaXFK_Request__Sequence * input,
  cocoax_interfaces__srv__CocoaXFK_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(cocoax_interfaces__srv__CocoaXFK_Request);
    cocoax_interfaces__srv__CocoaXFK_Request * data =
      (cocoax_interfaces__srv__CocoaXFK_Request *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!cocoax_interfaces__srv__CocoaXFK_Request__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          cocoax_interfaces__srv__CocoaXFK_Request__fini(&data[i]);
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
    if (!cocoax_interfaces__srv__CocoaXFK_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `positionendeffector`
#include "geometry_msgs/msg/detail/point__functions.h"

bool
cocoax_interfaces__srv__CocoaXFK_Response__init(cocoax_interfaces__srv__CocoaXFK_Response * msg)
{
  if (!msg) {
    return false;
  }
  // positionendeffector
  if (!geometry_msgs__msg__Point__init(&msg->positionendeffector)) {
    cocoax_interfaces__srv__CocoaXFK_Response__fini(msg);
    return false;
  }
  return true;
}

void
cocoax_interfaces__srv__CocoaXFK_Response__fini(cocoax_interfaces__srv__CocoaXFK_Response * msg)
{
  if (!msg) {
    return;
  }
  // positionendeffector
  geometry_msgs__msg__Point__fini(&msg->positionendeffector);
}

bool
cocoax_interfaces__srv__CocoaXFK_Response__are_equal(const cocoax_interfaces__srv__CocoaXFK_Response * lhs, const cocoax_interfaces__srv__CocoaXFK_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // positionendeffector
  if (!geometry_msgs__msg__Point__are_equal(
      &(lhs->positionendeffector), &(rhs->positionendeffector)))
  {
    return false;
  }
  return true;
}

bool
cocoax_interfaces__srv__CocoaXFK_Response__copy(
  const cocoax_interfaces__srv__CocoaXFK_Response * input,
  cocoax_interfaces__srv__CocoaXFK_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // positionendeffector
  if (!geometry_msgs__msg__Point__copy(
      &(input->positionendeffector), &(output->positionendeffector)))
  {
    return false;
  }
  return true;
}

cocoax_interfaces__srv__CocoaXFK_Response *
cocoax_interfaces__srv__CocoaXFK_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cocoax_interfaces__srv__CocoaXFK_Response * msg = (cocoax_interfaces__srv__CocoaXFK_Response *)allocator.allocate(sizeof(cocoax_interfaces__srv__CocoaXFK_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(cocoax_interfaces__srv__CocoaXFK_Response));
  bool success = cocoax_interfaces__srv__CocoaXFK_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
cocoax_interfaces__srv__CocoaXFK_Response__destroy(cocoax_interfaces__srv__CocoaXFK_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    cocoax_interfaces__srv__CocoaXFK_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
cocoax_interfaces__srv__CocoaXFK_Response__Sequence__init(cocoax_interfaces__srv__CocoaXFK_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cocoax_interfaces__srv__CocoaXFK_Response * data = NULL;

  if (size) {
    data = (cocoax_interfaces__srv__CocoaXFK_Response *)allocator.zero_allocate(size, sizeof(cocoax_interfaces__srv__CocoaXFK_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = cocoax_interfaces__srv__CocoaXFK_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        cocoax_interfaces__srv__CocoaXFK_Response__fini(&data[i - 1]);
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
cocoax_interfaces__srv__CocoaXFK_Response__Sequence__fini(cocoax_interfaces__srv__CocoaXFK_Response__Sequence * array)
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
      cocoax_interfaces__srv__CocoaXFK_Response__fini(&array->data[i]);
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

cocoax_interfaces__srv__CocoaXFK_Response__Sequence *
cocoax_interfaces__srv__CocoaXFK_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cocoax_interfaces__srv__CocoaXFK_Response__Sequence * array = (cocoax_interfaces__srv__CocoaXFK_Response__Sequence *)allocator.allocate(sizeof(cocoax_interfaces__srv__CocoaXFK_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = cocoax_interfaces__srv__CocoaXFK_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
cocoax_interfaces__srv__CocoaXFK_Response__Sequence__destroy(cocoax_interfaces__srv__CocoaXFK_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    cocoax_interfaces__srv__CocoaXFK_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
cocoax_interfaces__srv__CocoaXFK_Response__Sequence__are_equal(const cocoax_interfaces__srv__CocoaXFK_Response__Sequence * lhs, const cocoax_interfaces__srv__CocoaXFK_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!cocoax_interfaces__srv__CocoaXFK_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
cocoax_interfaces__srv__CocoaXFK_Response__Sequence__copy(
  const cocoax_interfaces__srv__CocoaXFK_Response__Sequence * input,
  cocoax_interfaces__srv__CocoaXFK_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(cocoax_interfaces__srv__CocoaXFK_Response);
    cocoax_interfaces__srv__CocoaXFK_Response * data =
      (cocoax_interfaces__srv__CocoaXFK_Response *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!cocoax_interfaces__srv__CocoaXFK_Response__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          cocoax_interfaces__srv__CocoaXFK_Response__fini(&data[i]);
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
    if (!cocoax_interfaces__srv__CocoaXFK_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
