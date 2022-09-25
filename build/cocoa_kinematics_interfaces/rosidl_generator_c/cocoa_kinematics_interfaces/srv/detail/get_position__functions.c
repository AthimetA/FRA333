// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from cocoa_kinematics_interfaces:srv/GetPosition.idl
// generated code does not contain a copyright notice
#include "cocoa_kinematics_interfaces/srv/detail/get_position__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

bool
cocoa_kinematics_interfaces__srv__GetPosition_Request__init(cocoa_kinematics_interfaces__srv__GetPosition_Request * msg)
{
  if (!msg) {
    return false;
  }
  // structure_needs_at_least_one_member
  return true;
}

void
cocoa_kinematics_interfaces__srv__GetPosition_Request__fini(cocoa_kinematics_interfaces__srv__GetPosition_Request * msg)
{
  if (!msg) {
    return;
  }
  // structure_needs_at_least_one_member
}

cocoa_kinematics_interfaces__srv__GetPosition_Request *
cocoa_kinematics_interfaces__srv__GetPosition_Request__create()
{
  cocoa_kinematics_interfaces__srv__GetPosition_Request * msg = (cocoa_kinematics_interfaces__srv__GetPosition_Request *)malloc(sizeof(cocoa_kinematics_interfaces__srv__GetPosition_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(cocoa_kinematics_interfaces__srv__GetPosition_Request));
  bool success = cocoa_kinematics_interfaces__srv__GetPosition_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
cocoa_kinematics_interfaces__srv__GetPosition_Request__destroy(cocoa_kinematics_interfaces__srv__GetPosition_Request * msg)
{
  if (msg) {
    cocoa_kinematics_interfaces__srv__GetPosition_Request__fini(msg);
  }
  free(msg);
}


bool
cocoa_kinematics_interfaces__srv__GetPosition_Request__Sequence__init(cocoa_kinematics_interfaces__srv__GetPosition_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  cocoa_kinematics_interfaces__srv__GetPosition_Request * data = NULL;
  if (size) {
    data = (cocoa_kinematics_interfaces__srv__GetPosition_Request *)calloc(size, sizeof(cocoa_kinematics_interfaces__srv__GetPosition_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = cocoa_kinematics_interfaces__srv__GetPosition_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        cocoa_kinematics_interfaces__srv__GetPosition_Request__fini(&data[i - 1]);
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
cocoa_kinematics_interfaces__srv__GetPosition_Request__Sequence__fini(cocoa_kinematics_interfaces__srv__GetPosition_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      cocoa_kinematics_interfaces__srv__GetPosition_Request__fini(&array->data[i]);
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

cocoa_kinematics_interfaces__srv__GetPosition_Request__Sequence *
cocoa_kinematics_interfaces__srv__GetPosition_Request__Sequence__create(size_t size)
{
  cocoa_kinematics_interfaces__srv__GetPosition_Request__Sequence * array = (cocoa_kinematics_interfaces__srv__GetPosition_Request__Sequence *)malloc(sizeof(cocoa_kinematics_interfaces__srv__GetPosition_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = cocoa_kinematics_interfaces__srv__GetPosition_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
cocoa_kinematics_interfaces__srv__GetPosition_Request__Sequence__destroy(cocoa_kinematics_interfaces__srv__GetPosition_Request__Sequence * array)
{
  if (array) {
    cocoa_kinematics_interfaces__srv__GetPosition_Request__Sequence__fini(array);
  }
  free(array);
}


bool
cocoa_kinematics_interfaces__srv__GetPosition_Response__init(cocoa_kinematics_interfaces__srv__GetPosition_Response * msg)
{
  if (!msg) {
    return false;
  }
  // structure_needs_at_least_one_member
  return true;
}

void
cocoa_kinematics_interfaces__srv__GetPosition_Response__fini(cocoa_kinematics_interfaces__srv__GetPosition_Response * msg)
{
  if (!msg) {
    return;
  }
  // structure_needs_at_least_one_member
}

cocoa_kinematics_interfaces__srv__GetPosition_Response *
cocoa_kinematics_interfaces__srv__GetPosition_Response__create()
{
  cocoa_kinematics_interfaces__srv__GetPosition_Response * msg = (cocoa_kinematics_interfaces__srv__GetPosition_Response *)malloc(sizeof(cocoa_kinematics_interfaces__srv__GetPosition_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(cocoa_kinematics_interfaces__srv__GetPosition_Response));
  bool success = cocoa_kinematics_interfaces__srv__GetPosition_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
cocoa_kinematics_interfaces__srv__GetPosition_Response__destroy(cocoa_kinematics_interfaces__srv__GetPosition_Response * msg)
{
  if (msg) {
    cocoa_kinematics_interfaces__srv__GetPosition_Response__fini(msg);
  }
  free(msg);
}


bool
cocoa_kinematics_interfaces__srv__GetPosition_Response__Sequence__init(cocoa_kinematics_interfaces__srv__GetPosition_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  cocoa_kinematics_interfaces__srv__GetPosition_Response * data = NULL;
  if (size) {
    data = (cocoa_kinematics_interfaces__srv__GetPosition_Response *)calloc(size, sizeof(cocoa_kinematics_interfaces__srv__GetPosition_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = cocoa_kinematics_interfaces__srv__GetPosition_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        cocoa_kinematics_interfaces__srv__GetPosition_Response__fini(&data[i - 1]);
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
cocoa_kinematics_interfaces__srv__GetPosition_Response__Sequence__fini(cocoa_kinematics_interfaces__srv__GetPosition_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      cocoa_kinematics_interfaces__srv__GetPosition_Response__fini(&array->data[i]);
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

cocoa_kinematics_interfaces__srv__GetPosition_Response__Sequence *
cocoa_kinematics_interfaces__srv__GetPosition_Response__Sequence__create(size_t size)
{
  cocoa_kinematics_interfaces__srv__GetPosition_Response__Sequence * array = (cocoa_kinematics_interfaces__srv__GetPosition_Response__Sequence *)malloc(sizeof(cocoa_kinematics_interfaces__srv__GetPosition_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = cocoa_kinematics_interfaces__srv__GetPosition_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
cocoa_kinematics_interfaces__srv__GetPosition_Response__Sequence__destroy(cocoa_kinematics_interfaces__srv__GetPosition_Response__Sequence * array)
{
  if (array) {
    cocoa_kinematics_interfaces__srv__GetPosition_Response__Sequence__fini(array);
  }
  free(array);
}
