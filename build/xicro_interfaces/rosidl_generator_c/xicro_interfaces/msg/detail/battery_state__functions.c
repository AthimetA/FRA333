// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from xicro_interfaces:msg/BatteryState.idl
// generated code does not contain a copyright notice
#include "xicro_interfaces/msg/detail/battery_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `location`
// Member `serial_number`
#include "rosidl_runtime_c/string_functions.h"

bool
xicro_interfaces__msg__BatteryState__init(xicro_interfaces__msg__BatteryState * msg)
{
  if (!msg) {
    return false;
  }
  // voltage
  // temperature
  // current
  // charge
  // capacity
  // design_capacity
  // percentage
  // power_supply_status
  // power_supply_health
  // power_supply_technology
  // present
  // cell_voltage
  // cell_temperature
  // location
  if (!rosidl_runtime_c__String__init(&msg->location)) {
    xicro_interfaces__msg__BatteryState__fini(msg);
    return false;
  }
  // serial_number
  if (!rosidl_runtime_c__String__init(&msg->serial_number)) {
    xicro_interfaces__msg__BatteryState__fini(msg);
    return false;
  }
  return true;
}

void
xicro_interfaces__msg__BatteryState__fini(xicro_interfaces__msg__BatteryState * msg)
{
  if (!msg) {
    return;
  }
  // voltage
  // temperature
  // current
  // charge
  // capacity
  // design_capacity
  // percentage
  // power_supply_status
  // power_supply_health
  // power_supply_technology
  // present
  // cell_voltage
  // cell_temperature
  // location
  rosidl_runtime_c__String__fini(&msg->location);
  // serial_number
  rosidl_runtime_c__String__fini(&msg->serial_number);
}

bool
xicro_interfaces__msg__BatteryState__are_equal(const xicro_interfaces__msg__BatteryState * lhs, const xicro_interfaces__msg__BatteryState * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // voltage
  if (lhs->voltage != rhs->voltage) {
    return false;
  }
  // temperature
  if (lhs->temperature != rhs->temperature) {
    return false;
  }
  // current
  if (lhs->current != rhs->current) {
    return false;
  }
  // charge
  if (lhs->charge != rhs->charge) {
    return false;
  }
  // capacity
  if (lhs->capacity != rhs->capacity) {
    return false;
  }
  // design_capacity
  if (lhs->design_capacity != rhs->design_capacity) {
    return false;
  }
  // percentage
  if (lhs->percentage != rhs->percentage) {
    return false;
  }
  // power_supply_status
  if (lhs->power_supply_status != rhs->power_supply_status) {
    return false;
  }
  // power_supply_health
  if (lhs->power_supply_health != rhs->power_supply_health) {
    return false;
  }
  // power_supply_technology
  if (lhs->power_supply_technology != rhs->power_supply_technology) {
    return false;
  }
  // present
  if (lhs->present != rhs->present) {
    return false;
  }
  // cell_voltage
  for (size_t i = 0; i < 4; ++i) {
    if (lhs->cell_voltage[i] != rhs->cell_voltage[i]) {
      return false;
    }
  }
  // cell_temperature
  for (size_t i = 0; i < 4; ++i) {
    if (lhs->cell_temperature[i] != rhs->cell_temperature[i]) {
      return false;
    }
  }
  // location
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->location), &(rhs->location)))
  {
    return false;
  }
  // serial_number
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->serial_number), &(rhs->serial_number)))
  {
    return false;
  }
  return true;
}

bool
xicro_interfaces__msg__BatteryState__copy(
  const xicro_interfaces__msg__BatteryState * input,
  xicro_interfaces__msg__BatteryState * output)
{
  if (!input || !output) {
    return false;
  }
  // voltage
  output->voltage = input->voltage;
  // temperature
  output->temperature = input->temperature;
  // current
  output->current = input->current;
  // charge
  output->charge = input->charge;
  // capacity
  output->capacity = input->capacity;
  // design_capacity
  output->design_capacity = input->design_capacity;
  // percentage
  output->percentage = input->percentage;
  // power_supply_status
  output->power_supply_status = input->power_supply_status;
  // power_supply_health
  output->power_supply_health = input->power_supply_health;
  // power_supply_technology
  output->power_supply_technology = input->power_supply_technology;
  // present
  output->present = input->present;
  // cell_voltage
  for (size_t i = 0; i < 4; ++i) {
    output->cell_voltage[i] = input->cell_voltage[i];
  }
  // cell_temperature
  for (size_t i = 0; i < 4; ++i) {
    output->cell_temperature[i] = input->cell_temperature[i];
  }
  // location
  if (!rosidl_runtime_c__String__copy(
      &(input->location), &(output->location)))
  {
    return false;
  }
  // serial_number
  if (!rosidl_runtime_c__String__copy(
      &(input->serial_number), &(output->serial_number)))
  {
    return false;
  }
  return true;
}

xicro_interfaces__msg__BatteryState *
xicro_interfaces__msg__BatteryState__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  xicro_interfaces__msg__BatteryState * msg = (xicro_interfaces__msg__BatteryState *)allocator.allocate(sizeof(xicro_interfaces__msg__BatteryState), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(xicro_interfaces__msg__BatteryState));
  bool success = xicro_interfaces__msg__BatteryState__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
xicro_interfaces__msg__BatteryState__destroy(xicro_interfaces__msg__BatteryState * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    xicro_interfaces__msg__BatteryState__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
xicro_interfaces__msg__BatteryState__Sequence__init(xicro_interfaces__msg__BatteryState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  xicro_interfaces__msg__BatteryState * data = NULL;

  if (size) {
    data = (xicro_interfaces__msg__BatteryState *)allocator.zero_allocate(size, sizeof(xicro_interfaces__msg__BatteryState), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = xicro_interfaces__msg__BatteryState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        xicro_interfaces__msg__BatteryState__fini(&data[i - 1]);
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
xicro_interfaces__msg__BatteryState__Sequence__fini(xicro_interfaces__msg__BatteryState__Sequence * array)
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
      xicro_interfaces__msg__BatteryState__fini(&array->data[i]);
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

xicro_interfaces__msg__BatteryState__Sequence *
xicro_interfaces__msg__BatteryState__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  xicro_interfaces__msg__BatteryState__Sequence * array = (xicro_interfaces__msg__BatteryState__Sequence *)allocator.allocate(sizeof(xicro_interfaces__msg__BatteryState__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = xicro_interfaces__msg__BatteryState__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
xicro_interfaces__msg__BatteryState__Sequence__destroy(xicro_interfaces__msg__BatteryState__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    xicro_interfaces__msg__BatteryState__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
xicro_interfaces__msg__BatteryState__Sequence__are_equal(const xicro_interfaces__msg__BatteryState__Sequence * lhs, const xicro_interfaces__msg__BatteryState__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!xicro_interfaces__msg__BatteryState__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
xicro_interfaces__msg__BatteryState__Sequence__copy(
  const xicro_interfaces__msg__BatteryState__Sequence * input,
  xicro_interfaces__msg__BatteryState__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(xicro_interfaces__msg__BatteryState);
    xicro_interfaces__msg__BatteryState * data =
      (xicro_interfaces__msg__BatteryState *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!xicro_interfaces__msg__BatteryState__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          xicro_interfaces__msg__BatteryState__fini(&data[i]);
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
    if (!xicro_interfaces__msg__BatteryState__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
