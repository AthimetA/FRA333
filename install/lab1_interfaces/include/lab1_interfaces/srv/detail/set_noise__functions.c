// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from lab1_interfaces:srv/SetNoise.idl
// generated code does not contain a copyright notice
#include "lab1_interfaces/srv/detail/set_noise__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// Include directives for member types
// Member `mean`
// Member `variance`
#include "std_msgs/msg/detail/float64__functions.h"

bool
lab1_interfaces__srv__SetNoise_Request__init(lab1_interfaces__srv__SetNoise_Request * msg)
{
  if (!msg) {
    return false;
  }
  // mean
  if (!std_msgs__msg__Float64__init(&msg->mean)) {
    lab1_interfaces__srv__SetNoise_Request__fini(msg);
    return false;
  }
  // variance
  if (!std_msgs__msg__Float64__init(&msg->variance)) {
    lab1_interfaces__srv__SetNoise_Request__fini(msg);
    return false;
  }
  return true;
}

void
lab1_interfaces__srv__SetNoise_Request__fini(lab1_interfaces__srv__SetNoise_Request * msg)
{
  if (!msg) {
    return;
  }
  // mean
  std_msgs__msg__Float64__fini(&msg->mean);
  // variance
  std_msgs__msg__Float64__fini(&msg->variance);
}

lab1_interfaces__srv__SetNoise_Request *
lab1_interfaces__srv__SetNoise_Request__create()
{
  lab1_interfaces__srv__SetNoise_Request * msg = (lab1_interfaces__srv__SetNoise_Request *)malloc(sizeof(lab1_interfaces__srv__SetNoise_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(lab1_interfaces__srv__SetNoise_Request));
  bool success = lab1_interfaces__srv__SetNoise_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
lab1_interfaces__srv__SetNoise_Request__destroy(lab1_interfaces__srv__SetNoise_Request * msg)
{
  if (msg) {
    lab1_interfaces__srv__SetNoise_Request__fini(msg);
  }
  free(msg);
}


bool
lab1_interfaces__srv__SetNoise_Request__Sequence__init(lab1_interfaces__srv__SetNoise_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  lab1_interfaces__srv__SetNoise_Request * data = NULL;
  if (size) {
    data = (lab1_interfaces__srv__SetNoise_Request *)calloc(size, sizeof(lab1_interfaces__srv__SetNoise_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = lab1_interfaces__srv__SetNoise_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        lab1_interfaces__srv__SetNoise_Request__fini(&data[i - 1]);
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
lab1_interfaces__srv__SetNoise_Request__Sequence__fini(lab1_interfaces__srv__SetNoise_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      lab1_interfaces__srv__SetNoise_Request__fini(&array->data[i]);
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

lab1_interfaces__srv__SetNoise_Request__Sequence *
lab1_interfaces__srv__SetNoise_Request__Sequence__create(size_t size)
{
  lab1_interfaces__srv__SetNoise_Request__Sequence * array = (lab1_interfaces__srv__SetNoise_Request__Sequence *)malloc(sizeof(lab1_interfaces__srv__SetNoise_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = lab1_interfaces__srv__SetNoise_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
lab1_interfaces__srv__SetNoise_Request__Sequence__destroy(lab1_interfaces__srv__SetNoise_Request__Sequence * array)
{
  if (array) {
    lab1_interfaces__srv__SetNoise_Request__Sequence__fini(array);
  }
  free(array);
}


bool
lab1_interfaces__srv__SetNoise_Response__init(lab1_interfaces__srv__SetNoise_Response * msg)
{
  if (!msg) {
    return false;
  }
  // structure_needs_at_least_one_member
  return true;
}

void
lab1_interfaces__srv__SetNoise_Response__fini(lab1_interfaces__srv__SetNoise_Response * msg)
{
  if (!msg) {
    return;
  }
  // structure_needs_at_least_one_member
}

lab1_interfaces__srv__SetNoise_Response *
lab1_interfaces__srv__SetNoise_Response__create()
{
  lab1_interfaces__srv__SetNoise_Response * msg = (lab1_interfaces__srv__SetNoise_Response *)malloc(sizeof(lab1_interfaces__srv__SetNoise_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(lab1_interfaces__srv__SetNoise_Response));
  bool success = lab1_interfaces__srv__SetNoise_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
lab1_interfaces__srv__SetNoise_Response__destroy(lab1_interfaces__srv__SetNoise_Response * msg)
{
  if (msg) {
    lab1_interfaces__srv__SetNoise_Response__fini(msg);
  }
  free(msg);
}


bool
lab1_interfaces__srv__SetNoise_Response__Sequence__init(lab1_interfaces__srv__SetNoise_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  lab1_interfaces__srv__SetNoise_Response * data = NULL;
  if (size) {
    data = (lab1_interfaces__srv__SetNoise_Response *)calloc(size, sizeof(lab1_interfaces__srv__SetNoise_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = lab1_interfaces__srv__SetNoise_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        lab1_interfaces__srv__SetNoise_Response__fini(&data[i - 1]);
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
lab1_interfaces__srv__SetNoise_Response__Sequence__fini(lab1_interfaces__srv__SetNoise_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      lab1_interfaces__srv__SetNoise_Response__fini(&array->data[i]);
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

lab1_interfaces__srv__SetNoise_Response__Sequence *
lab1_interfaces__srv__SetNoise_Response__Sequence__create(size_t size)
{
  lab1_interfaces__srv__SetNoise_Response__Sequence * array = (lab1_interfaces__srv__SetNoise_Response__Sequence *)malloc(sizeof(lab1_interfaces__srv__SetNoise_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = lab1_interfaces__srv__SetNoise_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
lab1_interfaces__srv__SetNoise_Response__Sequence__destroy(lab1_interfaces__srv__SetNoise_Response__Sequence * array)
{
  if (array) {
    lab1_interfaces__srv__SetNoise_Response__Sequence__fini(array);
  }
  free(array);
}
