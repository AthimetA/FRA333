// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from xicro_interfaces:msg/Imu.idl
// generated code does not contain a copyright notice
#include "xicro_interfaces/msg/detail/imu__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "xicro_interfaces/msg/detail/header__functions.h"
// Member `orientation`
#include "xicro_interfaces/msg/detail/quaternion__functions.h"
// Member `angular_velocity`
// Member `linear_acceleration`
#include "xicro_interfaces/msg/detail/vector3__functions.h"

bool
xicro_interfaces__msg__Imu__init(xicro_interfaces__msg__Imu * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!xicro_interfaces__msg__Header__init(&msg->header)) {
    xicro_interfaces__msg__Imu__fini(msg);
    return false;
  }
  // orientation
  if (!xicro_interfaces__msg__Quaternion__init(&msg->orientation)) {
    xicro_interfaces__msg__Imu__fini(msg);
    return false;
  }
  // orientation_covariance
  // angular_velocity
  if (!xicro_interfaces__msg__Vector3__init(&msg->angular_velocity)) {
    xicro_interfaces__msg__Imu__fini(msg);
    return false;
  }
  // angular_velocity_covariance
  // linear_acceleration
  if (!xicro_interfaces__msg__Vector3__init(&msg->linear_acceleration)) {
    xicro_interfaces__msg__Imu__fini(msg);
    return false;
  }
  // linear_acceleration_covariance
  return true;
}

void
xicro_interfaces__msg__Imu__fini(xicro_interfaces__msg__Imu * msg)
{
  if (!msg) {
    return;
  }
  // header
  xicro_interfaces__msg__Header__fini(&msg->header);
  // orientation
  xicro_interfaces__msg__Quaternion__fini(&msg->orientation);
  // orientation_covariance
  // angular_velocity
  xicro_interfaces__msg__Vector3__fini(&msg->angular_velocity);
  // angular_velocity_covariance
  // linear_acceleration
  xicro_interfaces__msg__Vector3__fini(&msg->linear_acceleration);
  // linear_acceleration_covariance
}

bool
xicro_interfaces__msg__Imu__are_equal(const xicro_interfaces__msg__Imu * lhs, const xicro_interfaces__msg__Imu * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!xicro_interfaces__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // orientation
  if (!xicro_interfaces__msg__Quaternion__are_equal(
      &(lhs->orientation), &(rhs->orientation)))
  {
    return false;
  }
  // orientation_covariance
  for (size_t i = 0; i < 9; ++i) {
    if (lhs->orientation_covariance[i] != rhs->orientation_covariance[i]) {
      return false;
    }
  }
  // angular_velocity
  if (!xicro_interfaces__msg__Vector3__are_equal(
      &(lhs->angular_velocity), &(rhs->angular_velocity)))
  {
    return false;
  }
  // angular_velocity_covariance
  for (size_t i = 0; i < 9; ++i) {
    if (lhs->angular_velocity_covariance[i] != rhs->angular_velocity_covariance[i]) {
      return false;
    }
  }
  // linear_acceleration
  if (!xicro_interfaces__msg__Vector3__are_equal(
      &(lhs->linear_acceleration), &(rhs->linear_acceleration)))
  {
    return false;
  }
  // linear_acceleration_covariance
  for (size_t i = 0; i < 9; ++i) {
    if (lhs->linear_acceleration_covariance[i] != rhs->linear_acceleration_covariance[i]) {
      return false;
    }
  }
  return true;
}

bool
xicro_interfaces__msg__Imu__copy(
  const xicro_interfaces__msg__Imu * input,
  xicro_interfaces__msg__Imu * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!xicro_interfaces__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // orientation
  if (!xicro_interfaces__msg__Quaternion__copy(
      &(input->orientation), &(output->orientation)))
  {
    return false;
  }
  // orientation_covariance
  for (size_t i = 0; i < 9; ++i) {
    output->orientation_covariance[i] = input->orientation_covariance[i];
  }
  // angular_velocity
  if (!xicro_interfaces__msg__Vector3__copy(
      &(input->angular_velocity), &(output->angular_velocity)))
  {
    return false;
  }
  // angular_velocity_covariance
  for (size_t i = 0; i < 9; ++i) {
    output->angular_velocity_covariance[i] = input->angular_velocity_covariance[i];
  }
  // linear_acceleration
  if (!xicro_interfaces__msg__Vector3__copy(
      &(input->linear_acceleration), &(output->linear_acceleration)))
  {
    return false;
  }
  // linear_acceleration_covariance
  for (size_t i = 0; i < 9; ++i) {
    output->linear_acceleration_covariance[i] = input->linear_acceleration_covariance[i];
  }
  return true;
}

xicro_interfaces__msg__Imu *
xicro_interfaces__msg__Imu__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  xicro_interfaces__msg__Imu * msg = (xicro_interfaces__msg__Imu *)allocator.allocate(sizeof(xicro_interfaces__msg__Imu), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(xicro_interfaces__msg__Imu));
  bool success = xicro_interfaces__msg__Imu__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
xicro_interfaces__msg__Imu__destroy(xicro_interfaces__msg__Imu * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    xicro_interfaces__msg__Imu__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
xicro_interfaces__msg__Imu__Sequence__init(xicro_interfaces__msg__Imu__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  xicro_interfaces__msg__Imu * data = NULL;

  if (size) {
    data = (xicro_interfaces__msg__Imu *)allocator.zero_allocate(size, sizeof(xicro_interfaces__msg__Imu), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = xicro_interfaces__msg__Imu__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        xicro_interfaces__msg__Imu__fini(&data[i - 1]);
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
xicro_interfaces__msg__Imu__Sequence__fini(xicro_interfaces__msg__Imu__Sequence * array)
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
      xicro_interfaces__msg__Imu__fini(&array->data[i]);
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

xicro_interfaces__msg__Imu__Sequence *
xicro_interfaces__msg__Imu__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  xicro_interfaces__msg__Imu__Sequence * array = (xicro_interfaces__msg__Imu__Sequence *)allocator.allocate(sizeof(xicro_interfaces__msg__Imu__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = xicro_interfaces__msg__Imu__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
xicro_interfaces__msg__Imu__Sequence__destroy(xicro_interfaces__msg__Imu__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    xicro_interfaces__msg__Imu__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
xicro_interfaces__msg__Imu__Sequence__are_equal(const xicro_interfaces__msg__Imu__Sequence * lhs, const xicro_interfaces__msg__Imu__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!xicro_interfaces__msg__Imu__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
xicro_interfaces__msg__Imu__Sequence__copy(
  const xicro_interfaces__msg__Imu__Sequence * input,
  xicro_interfaces__msg__Imu__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(xicro_interfaces__msg__Imu);
    xicro_interfaces__msg__Imu * data =
      (xicro_interfaces__msg__Imu *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!xicro_interfaces__msg__Imu__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          xicro_interfaces__msg__Imu__fini(&data[i]);
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
    if (!xicro_interfaces__msg__Imu__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
