// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from cocoa_kinematics_interfaces:srv/SolveIK.idl
// generated code does not contain a copyright notice
#include "cocoa_kinematics_interfaces/srv/detail/solve_ik__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// Include directives for member types
// Member `position`
#include "geometry_msgs/msg/detail/point__functions.h"

bool
cocoa_kinematics_interfaces__srv__SolveIK_Request__init(cocoa_kinematics_interfaces__srv__SolveIK_Request * msg)
{
  if (!msg) {
    return false;
  }
  // position
  if (!geometry_msgs__msg__Point__init(&msg->position)) {
    cocoa_kinematics_interfaces__srv__SolveIK_Request__fini(msg);
    return false;
  }
  // jointorientation
  // r
  msg->r[0] = 1l;
  msg->r[1] = 1l;
  return true;
}

void
cocoa_kinematics_interfaces__srv__SolveIK_Request__fini(cocoa_kinematics_interfaces__srv__SolveIK_Request * msg)
{
  if (!msg) {
    return;
  }
  // position
  geometry_msgs__msg__Point__fini(&msg->position);
  // jointorientation
  // r
}

cocoa_kinematics_interfaces__srv__SolveIK_Request *
cocoa_kinematics_interfaces__srv__SolveIK_Request__create()
{
  cocoa_kinematics_interfaces__srv__SolveIK_Request * msg = (cocoa_kinematics_interfaces__srv__SolveIK_Request *)malloc(sizeof(cocoa_kinematics_interfaces__srv__SolveIK_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(cocoa_kinematics_interfaces__srv__SolveIK_Request));
  bool success = cocoa_kinematics_interfaces__srv__SolveIK_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
cocoa_kinematics_interfaces__srv__SolveIK_Request__destroy(cocoa_kinematics_interfaces__srv__SolveIK_Request * msg)
{
  if (msg) {
    cocoa_kinematics_interfaces__srv__SolveIK_Request__fini(msg);
  }
  free(msg);
}


bool
cocoa_kinematics_interfaces__srv__SolveIK_Request__Sequence__init(cocoa_kinematics_interfaces__srv__SolveIK_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  cocoa_kinematics_interfaces__srv__SolveIK_Request * data = NULL;
  if (size) {
    data = (cocoa_kinematics_interfaces__srv__SolveIK_Request *)calloc(size, sizeof(cocoa_kinematics_interfaces__srv__SolveIK_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = cocoa_kinematics_interfaces__srv__SolveIK_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        cocoa_kinematics_interfaces__srv__SolveIK_Request__fini(&data[i - 1]);
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
cocoa_kinematics_interfaces__srv__SolveIK_Request__Sequence__fini(cocoa_kinematics_interfaces__srv__SolveIK_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      cocoa_kinematics_interfaces__srv__SolveIK_Request__fini(&array->data[i]);
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

cocoa_kinematics_interfaces__srv__SolveIK_Request__Sequence *
cocoa_kinematics_interfaces__srv__SolveIK_Request__Sequence__create(size_t size)
{
  cocoa_kinematics_interfaces__srv__SolveIK_Request__Sequence * array = (cocoa_kinematics_interfaces__srv__SolveIK_Request__Sequence *)malloc(sizeof(cocoa_kinematics_interfaces__srv__SolveIK_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = cocoa_kinematics_interfaces__srv__SolveIK_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
cocoa_kinematics_interfaces__srv__SolveIK_Request__Sequence__destroy(cocoa_kinematics_interfaces__srv__SolveIK_Request__Sequence * array)
{
  if (array) {
    cocoa_kinematics_interfaces__srv__SolveIK_Request__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `jointstate`
#include "sensor_msgs/msg/detail/joint_state__functions.h"

bool
cocoa_kinematics_interfaces__srv__SolveIK_Response__init(cocoa_kinematics_interfaces__srv__SolveIK_Response * msg)
{
  if (!msg) {
    return false;
  }
  // jointstate
  if (!sensor_msgs__msg__JointState__init(&msg->jointstate)) {
    cocoa_kinematics_interfaces__srv__SolveIK_Response__fini(msg);
    return false;
  }
  // flag
  return true;
}

void
cocoa_kinematics_interfaces__srv__SolveIK_Response__fini(cocoa_kinematics_interfaces__srv__SolveIK_Response * msg)
{
  if (!msg) {
    return;
  }
  // jointstate
  sensor_msgs__msg__JointState__fini(&msg->jointstate);
  // flag
}

cocoa_kinematics_interfaces__srv__SolveIK_Response *
cocoa_kinematics_interfaces__srv__SolveIK_Response__create()
{
  cocoa_kinematics_interfaces__srv__SolveIK_Response * msg = (cocoa_kinematics_interfaces__srv__SolveIK_Response *)malloc(sizeof(cocoa_kinematics_interfaces__srv__SolveIK_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(cocoa_kinematics_interfaces__srv__SolveIK_Response));
  bool success = cocoa_kinematics_interfaces__srv__SolveIK_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
cocoa_kinematics_interfaces__srv__SolveIK_Response__destroy(cocoa_kinematics_interfaces__srv__SolveIK_Response * msg)
{
  if (msg) {
    cocoa_kinematics_interfaces__srv__SolveIK_Response__fini(msg);
  }
  free(msg);
}


bool
cocoa_kinematics_interfaces__srv__SolveIK_Response__Sequence__init(cocoa_kinematics_interfaces__srv__SolveIK_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  cocoa_kinematics_interfaces__srv__SolveIK_Response * data = NULL;
  if (size) {
    data = (cocoa_kinematics_interfaces__srv__SolveIK_Response *)calloc(size, sizeof(cocoa_kinematics_interfaces__srv__SolveIK_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = cocoa_kinematics_interfaces__srv__SolveIK_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        cocoa_kinematics_interfaces__srv__SolveIK_Response__fini(&data[i - 1]);
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
cocoa_kinematics_interfaces__srv__SolveIK_Response__Sequence__fini(cocoa_kinematics_interfaces__srv__SolveIK_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      cocoa_kinematics_interfaces__srv__SolveIK_Response__fini(&array->data[i]);
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

cocoa_kinematics_interfaces__srv__SolveIK_Response__Sequence *
cocoa_kinematics_interfaces__srv__SolveIK_Response__Sequence__create(size_t size)
{
  cocoa_kinematics_interfaces__srv__SolveIK_Response__Sequence * array = (cocoa_kinematics_interfaces__srv__SolveIK_Response__Sequence *)malloc(sizeof(cocoa_kinematics_interfaces__srv__SolveIK_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = cocoa_kinematics_interfaces__srv__SolveIK_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
cocoa_kinematics_interfaces__srv__SolveIK_Response__Sequence__destroy(cocoa_kinematics_interfaces__srv__SolveIK_Response__Sequence * array)
{
  if (array) {
    cocoa_kinematics_interfaces__srv__SolveIK_Response__Sequence__fini(array);
  }
  free(array);
}
