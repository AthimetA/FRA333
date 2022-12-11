// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from cocoax_interfaces:msg/CocoaTestMonitor.idl
// generated code does not contain a copyright notice
#include "cocoax_interfaces/msg/detail/cocoa_test_monitor__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
cocoax_interfaces__msg__CocoaTestMonitor__init(cocoax_interfaces__msg__CocoaTestMonitor * msg)
{
  if (!msg) {
    return false;
  }
  // posx
  // posy
  // posz
  // velx
  // vely
  // velz
  return true;
}

void
cocoax_interfaces__msg__CocoaTestMonitor__fini(cocoax_interfaces__msg__CocoaTestMonitor * msg)
{
  if (!msg) {
    return;
  }
  // posx
  // posy
  // posz
  // velx
  // vely
  // velz
}

bool
cocoax_interfaces__msg__CocoaTestMonitor__are_equal(const cocoax_interfaces__msg__CocoaTestMonitor * lhs, const cocoax_interfaces__msg__CocoaTestMonitor * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // posx
  if (lhs->posx != rhs->posx) {
    return false;
  }
  // posy
  if (lhs->posy != rhs->posy) {
    return false;
  }
  // posz
  if (lhs->posz != rhs->posz) {
    return false;
  }
  // velx
  if (lhs->velx != rhs->velx) {
    return false;
  }
  // vely
  if (lhs->vely != rhs->vely) {
    return false;
  }
  // velz
  if (lhs->velz != rhs->velz) {
    return false;
  }
  return true;
}

bool
cocoax_interfaces__msg__CocoaTestMonitor__copy(
  const cocoax_interfaces__msg__CocoaTestMonitor * input,
  cocoax_interfaces__msg__CocoaTestMonitor * output)
{
  if (!input || !output) {
    return false;
  }
  // posx
  output->posx = input->posx;
  // posy
  output->posy = input->posy;
  // posz
  output->posz = input->posz;
  // velx
  output->velx = input->velx;
  // vely
  output->vely = input->vely;
  // velz
  output->velz = input->velz;
  return true;
}

cocoax_interfaces__msg__CocoaTestMonitor *
cocoax_interfaces__msg__CocoaTestMonitor__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cocoax_interfaces__msg__CocoaTestMonitor * msg = (cocoax_interfaces__msg__CocoaTestMonitor *)allocator.allocate(sizeof(cocoax_interfaces__msg__CocoaTestMonitor), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(cocoax_interfaces__msg__CocoaTestMonitor));
  bool success = cocoax_interfaces__msg__CocoaTestMonitor__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
cocoax_interfaces__msg__CocoaTestMonitor__destroy(cocoax_interfaces__msg__CocoaTestMonitor * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    cocoax_interfaces__msg__CocoaTestMonitor__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
cocoax_interfaces__msg__CocoaTestMonitor__Sequence__init(cocoax_interfaces__msg__CocoaTestMonitor__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cocoax_interfaces__msg__CocoaTestMonitor * data = NULL;

  if (size) {
    data = (cocoax_interfaces__msg__CocoaTestMonitor *)allocator.zero_allocate(size, sizeof(cocoax_interfaces__msg__CocoaTestMonitor), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = cocoax_interfaces__msg__CocoaTestMonitor__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        cocoax_interfaces__msg__CocoaTestMonitor__fini(&data[i - 1]);
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
cocoax_interfaces__msg__CocoaTestMonitor__Sequence__fini(cocoax_interfaces__msg__CocoaTestMonitor__Sequence * array)
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
      cocoax_interfaces__msg__CocoaTestMonitor__fini(&array->data[i]);
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

cocoax_interfaces__msg__CocoaTestMonitor__Sequence *
cocoax_interfaces__msg__CocoaTestMonitor__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cocoax_interfaces__msg__CocoaTestMonitor__Sequence * array = (cocoax_interfaces__msg__CocoaTestMonitor__Sequence *)allocator.allocate(sizeof(cocoax_interfaces__msg__CocoaTestMonitor__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = cocoax_interfaces__msg__CocoaTestMonitor__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
cocoax_interfaces__msg__CocoaTestMonitor__Sequence__destroy(cocoax_interfaces__msg__CocoaTestMonitor__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    cocoax_interfaces__msg__CocoaTestMonitor__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
cocoax_interfaces__msg__CocoaTestMonitor__Sequence__are_equal(const cocoax_interfaces__msg__CocoaTestMonitor__Sequence * lhs, const cocoax_interfaces__msg__CocoaTestMonitor__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!cocoax_interfaces__msg__CocoaTestMonitor__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
cocoax_interfaces__msg__CocoaTestMonitor__Sequence__copy(
  const cocoax_interfaces__msg__CocoaTestMonitor__Sequence * input,
  cocoax_interfaces__msg__CocoaTestMonitor__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(cocoax_interfaces__msg__CocoaTestMonitor);
    cocoax_interfaces__msg__CocoaTestMonitor * data =
      (cocoax_interfaces__msg__CocoaTestMonitor *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!cocoax_interfaces__msg__CocoaTestMonitor__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          cocoax_interfaces__msg__CocoaTestMonitor__fini(&data[i]);
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
    if (!cocoax_interfaces__msg__CocoaTestMonitor__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
