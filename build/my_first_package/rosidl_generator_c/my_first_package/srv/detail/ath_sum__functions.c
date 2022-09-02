// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from my_first_package:srv/AthSum.idl
// generated code does not contain a copyright notice
#include "my_first_package/srv/detail/ath_sum__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

bool
my_first_package__srv__AthSum_Request__init(my_first_package__srv__AthSum_Request * msg)
{
  if (!msg) {
    return false;
  }
  // a
  // b
  return true;
}

void
my_first_package__srv__AthSum_Request__fini(my_first_package__srv__AthSum_Request * msg)
{
  if (!msg) {
    return;
  }
  // a
  // b
}

my_first_package__srv__AthSum_Request *
my_first_package__srv__AthSum_Request__create()
{
  my_first_package__srv__AthSum_Request * msg = (my_first_package__srv__AthSum_Request *)malloc(sizeof(my_first_package__srv__AthSum_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(my_first_package__srv__AthSum_Request));
  bool success = my_first_package__srv__AthSum_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
my_first_package__srv__AthSum_Request__destroy(my_first_package__srv__AthSum_Request * msg)
{
  if (msg) {
    my_first_package__srv__AthSum_Request__fini(msg);
  }
  free(msg);
}


bool
my_first_package__srv__AthSum_Request__Sequence__init(my_first_package__srv__AthSum_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  my_first_package__srv__AthSum_Request * data = NULL;
  if (size) {
    data = (my_first_package__srv__AthSum_Request *)calloc(size, sizeof(my_first_package__srv__AthSum_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = my_first_package__srv__AthSum_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        my_first_package__srv__AthSum_Request__fini(&data[i - 1]);
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
my_first_package__srv__AthSum_Request__Sequence__fini(my_first_package__srv__AthSum_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      my_first_package__srv__AthSum_Request__fini(&array->data[i]);
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

my_first_package__srv__AthSum_Request__Sequence *
my_first_package__srv__AthSum_Request__Sequence__create(size_t size)
{
  my_first_package__srv__AthSum_Request__Sequence * array = (my_first_package__srv__AthSum_Request__Sequence *)malloc(sizeof(my_first_package__srv__AthSum_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = my_first_package__srv__AthSum_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
my_first_package__srv__AthSum_Request__Sequence__destroy(my_first_package__srv__AthSum_Request__Sequence * array)
{
  if (array) {
    my_first_package__srv__AthSum_Request__Sequence__fini(array);
  }
  free(array);
}


bool
my_first_package__srv__AthSum_Response__init(my_first_package__srv__AthSum_Response * msg)
{
  if (!msg) {
    return false;
  }
  // sum
  return true;
}

void
my_first_package__srv__AthSum_Response__fini(my_first_package__srv__AthSum_Response * msg)
{
  if (!msg) {
    return;
  }
  // sum
}

my_first_package__srv__AthSum_Response *
my_first_package__srv__AthSum_Response__create()
{
  my_first_package__srv__AthSum_Response * msg = (my_first_package__srv__AthSum_Response *)malloc(sizeof(my_first_package__srv__AthSum_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(my_first_package__srv__AthSum_Response));
  bool success = my_first_package__srv__AthSum_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
my_first_package__srv__AthSum_Response__destroy(my_first_package__srv__AthSum_Response * msg)
{
  if (msg) {
    my_first_package__srv__AthSum_Response__fini(msg);
  }
  free(msg);
}


bool
my_first_package__srv__AthSum_Response__Sequence__init(my_first_package__srv__AthSum_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  my_first_package__srv__AthSum_Response * data = NULL;
  if (size) {
    data = (my_first_package__srv__AthSum_Response *)calloc(size, sizeof(my_first_package__srv__AthSum_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = my_first_package__srv__AthSum_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        my_first_package__srv__AthSum_Response__fini(&data[i - 1]);
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
my_first_package__srv__AthSum_Response__Sequence__fini(my_first_package__srv__AthSum_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      my_first_package__srv__AthSum_Response__fini(&array->data[i]);
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

my_first_package__srv__AthSum_Response__Sequence *
my_first_package__srv__AthSum_Response__Sequence__create(size_t size)
{
  my_first_package__srv__AthSum_Response__Sequence * array = (my_first_package__srv__AthSum_Response__Sequence *)malloc(sizeof(my_first_package__srv__AthSum_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = my_first_package__srv__AthSum_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
my_first_package__srv__AthSum_Response__Sequence__destroy(my_first_package__srv__AthSum_Response__Sequence * array)
{
  if (array) {
    my_first_package__srv__AthSum_Response__Sequence__fini(array);
  }
  free(array);
}
