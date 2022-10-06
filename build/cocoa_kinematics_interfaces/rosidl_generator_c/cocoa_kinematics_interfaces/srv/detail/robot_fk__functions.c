// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from cocoa_kinematics_interfaces:srv/RobotFK.idl
// generated code does not contain a copyright notice
#include "cocoa_kinematics_interfaces/srv/detail/robot_fk__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `jointstate`
#include "sensor_msgs/msg/detail/joint_state__functions.h"

bool
cocoa_kinematics_interfaces__srv__RobotFK_Request__init(cocoa_kinematics_interfaces__srv__RobotFK_Request * msg)
{
  if (!msg) {
    return false;
  }
  // jointstate
  if (!sensor_msgs__msg__JointState__init(&msg->jointstate)) {
    cocoa_kinematics_interfaces__srv__RobotFK_Request__fini(msg);
    return false;
  }
  return true;
}

void
cocoa_kinematics_interfaces__srv__RobotFK_Request__fini(cocoa_kinematics_interfaces__srv__RobotFK_Request * msg)
{
  if (!msg) {
    return;
  }
  // jointstate
  sensor_msgs__msg__JointState__fini(&msg->jointstate);
}

bool
cocoa_kinematics_interfaces__srv__RobotFK_Request__are_equal(const cocoa_kinematics_interfaces__srv__RobotFK_Request * lhs, const cocoa_kinematics_interfaces__srv__RobotFK_Request * rhs)
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
cocoa_kinematics_interfaces__srv__RobotFK_Request__copy(
  const cocoa_kinematics_interfaces__srv__RobotFK_Request * input,
  cocoa_kinematics_interfaces__srv__RobotFK_Request * output)
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

cocoa_kinematics_interfaces__srv__RobotFK_Request *
cocoa_kinematics_interfaces__srv__RobotFK_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cocoa_kinematics_interfaces__srv__RobotFK_Request * msg = (cocoa_kinematics_interfaces__srv__RobotFK_Request *)allocator.allocate(sizeof(cocoa_kinematics_interfaces__srv__RobotFK_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(cocoa_kinematics_interfaces__srv__RobotFK_Request));
  bool success = cocoa_kinematics_interfaces__srv__RobotFK_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
cocoa_kinematics_interfaces__srv__RobotFK_Request__destroy(cocoa_kinematics_interfaces__srv__RobotFK_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    cocoa_kinematics_interfaces__srv__RobotFK_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
cocoa_kinematics_interfaces__srv__RobotFK_Request__Sequence__init(cocoa_kinematics_interfaces__srv__RobotFK_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cocoa_kinematics_interfaces__srv__RobotFK_Request * data = NULL;

  if (size) {
    data = (cocoa_kinematics_interfaces__srv__RobotFK_Request *)allocator.zero_allocate(size, sizeof(cocoa_kinematics_interfaces__srv__RobotFK_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = cocoa_kinematics_interfaces__srv__RobotFK_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        cocoa_kinematics_interfaces__srv__RobotFK_Request__fini(&data[i - 1]);
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
cocoa_kinematics_interfaces__srv__RobotFK_Request__Sequence__fini(cocoa_kinematics_interfaces__srv__RobotFK_Request__Sequence * array)
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
      cocoa_kinematics_interfaces__srv__RobotFK_Request__fini(&array->data[i]);
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

cocoa_kinematics_interfaces__srv__RobotFK_Request__Sequence *
cocoa_kinematics_interfaces__srv__RobotFK_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cocoa_kinematics_interfaces__srv__RobotFK_Request__Sequence * array = (cocoa_kinematics_interfaces__srv__RobotFK_Request__Sequence *)allocator.allocate(sizeof(cocoa_kinematics_interfaces__srv__RobotFK_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = cocoa_kinematics_interfaces__srv__RobotFK_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
cocoa_kinematics_interfaces__srv__RobotFK_Request__Sequence__destroy(cocoa_kinematics_interfaces__srv__RobotFK_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    cocoa_kinematics_interfaces__srv__RobotFK_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
cocoa_kinematics_interfaces__srv__RobotFK_Request__Sequence__are_equal(const cocoa_kinematics_interfaces__srv__RobotFK_Request__Sequence * lhs, const cocoa_kinematics_interfaces__srv__RobotFK_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!cocoa_kinematics_interfaces__srv__RobotFK_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
cocoa_kinematics_interfaces__srv__RobotFK_Request__Sequence__copy(
  const cocoa_kinematics_interfaces__srv__RobotFK_Request__Sequence * input,
  cocoa_kinematics_interfaces__srv__RobotFK_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(cocoa_kinematics_interfaces__srv__RobotFK_Request);
    cocoa_kinematics_interfaces__srv__RobotFK_Request * data =
      (cocoa_kinematics_interfaces__srv__RobotFK_Request *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!cocoa_kinematics_interfaces__srv__RobotFK_Request__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          cocoa_kinematics_interfaces__srv__RobotFK_Request__fini(&data[i]);
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
    if (!cocoa_kinematics_interfaces__srv__RobotFK_Request__copy(
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
cocoa_kinematics_interfaces__srv__RobotFK_Response__init(cocoa_kinematics_interfaces__srv__RobotFK_Response * msg)
{
  if (!msg) {
    return false;
  }
  // positionendeffector
  if (!geometry_msgs__msg__Point__init(&msg->positionendeffector)) {
    cocoa_kinematics_interfaces__srv__RobotFK_Response__fini(msg);
    return false;
  }
  return true;
}

void
cocoa_kinematics_interfaces__srv__RobotFK_Response__fini(cocoa_kinematics_interfaces__srv__RobotFK_Response * msg)
{
  if (!msg) {
    return;
  }
  // positionendeffector
  geometry_msgs__msg__Point__fini(&msg->positionendeffector);
}

bool
cocoa_kinematics_interfaces__srv__RobotFK_Response__are_equal(const cocoa_kinematics_interfaces__srv__RobotFK_Response * lhs, const cocoa_kinematics_interfaces__srv__RobotFK_Response * rhs)
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
cocoa_kinematics_interfaces__srv__RobotFK_Response__copy(
  const cocoa_kinematics_interfaces__srv__RobotFK_Response * input,
  cocoa_kinematics_interfaces__srv__RobotFK_Response * output)
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

cocoa_kinematics_interfaces__srv__RobotFK_Response *
cocoa_kinematics_interfaces__srv__RobotFK_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cocoa_kinematics_interfaces__srv__RobotFK_Response * msg = (cocoa_kinematics_interfaces__srv__RobotFK_Response *)allocator.allocate(sizeof(cocoa_kinematics_interfaces__srv__RobotFK_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(cocoa_kinematics_interfaces__srv__RobotFK_Response));
  bool success = cocoa_kinematics_interfaces__srv__RobotFK_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
cocoa_kinematics_interfaces__srv__RobotFK_Response__destroy(cocoa_kinematics_interfaces__srv__RobotFK_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    cocoa_kinematics_interfaces__srv__RobotFK_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
cocoa_kinematics_interfaces__srv__RobotFK_Response__Sequence__init(cocoa_kinematics_interfaces__srv__RobotFK_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cocoa_kinematics_interfaces__srv__RobotFK_Response * data = NULL;

  if (size) {
    data = (cocoa_kinematics_interfaces__srv__RobotFK_Response *)allocator.zero_allocate(size, sizeof(cocoa_kinematics_interfaces__srv__RobotFK_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = cocoa_kinematics_interfaces__srv__RobotFK_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        cocoa_kinematics_interfaces__srv__RobotFK_Response__fini(&data[i - 1]);
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
cocoa_kinematics_interfaces__srv__RobotFK_Response__Sequence__fini(cocoa_kinematics_interfaces__srv__RobotFK_Response__Sequence * array)
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
      cocoa_kinematics_interfaces__srv__RobotFK_Response__fini(&array->data[i]);
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

cocoa_kinematics_interfaces__srv__RobotFK_Response__Sequence *
cocoa_kinematics_interfaces__srv__RobotFK_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cocoa_kinematics_interfaces__srv__RobotFK_Response__Sequence * array = (cocoa_kinematics_interfaces__srv__RobotFK_Response__Sequence *)allocator.allocate(sizeof(cocoa_kinematics_interfaces__srv__RobotFK_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = cocoa_kinematics_interfaces__srv__RobotFK_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
cocoa_kinematics_interfaces__srv__RobotFK_Response__Sequence__destroy(cocoa_kinematics_interfaces__srv__RobotFK_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    cocoa_kinematics_interfaces__srv__RobotFK_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
cocoa_kinematics_interfaces__srv__RobotFK_Response__Sequence__are_equal(const cocoa_kinematics_interfaces__srv__RobotFK_Response__Sequence * lhs, const cocoa_kinematics_interfaces__srv__RobotFK_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!cocoa_kinematics_interfaces__srv__RobotFK_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
cocoa_kinematics_interfaces__srv__RobotFK_Response__Sequence__copy(
  const cocoa_kinematics_interfaces__srv__RobotFK_Response__Sequence * input,
  cocoa_kinematics_interfaces__srv__RobotFK_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(cocoa_kinematics_interfaces__srv__RobotFK_Response);
    cocoa_kinematics_interfaces__srv__RobotFK_Response * data =
      (cocoa_kinematics_interfaces__srv__RobotFK_Response *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!cocoa_kinematics_interfaces__srv__RobotFK_Response__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          cocoa_kinematics_interfaces__srv__RobotFK_Response__fini(&data[i]);
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
    if (!cocoa_kinematics_interfaces__srv__RobotFK_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
