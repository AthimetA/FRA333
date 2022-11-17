// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from xicro_interfaces:msg/BatteryState.idl
// generated code does not contain a copyright notice
#include "xicro_interfaces/msg/detail/battery_state__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "xicro_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "xicro_interfaces/msg/detail/battery_state__struct.h"
#include "xicro_interfaces/msg/detail/battery_state__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/string.h"  // location, serial_number
#include "rosidl_runtime_c/string_functions.h"  // location, serial_number

// forward declare type support functions


using _BatteryState__ros_msg_type = xicro_interfaces__msg__BatteryState;

static bool _BatteryState__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _BatteryState__ros_msg_type * ros_message = static_cast<const _BatteryState__ros_msg_type *>(untyped_ros_message);
  // Field name: voltage
  {
    cdr << ros_message->voltage;
  }

  // Field name: temperature
  {
    cdr << ros_message->temperature;
  }

  // Field name: current
  {
    cdr << ros_message->current;
  }

  // Field name: charge
  {
    cdr << ros_message->charge;
  }

  // Field name: capacity
  {
    cdr << ros_message->capacity;
  }

  // Field name: design_capacity
  {
    cdr << ros_message->design_capacity;
  }

  // Field name: percentage
  {
    cdr << ros_message->percentage;
  }

  // Field name: power_supply_status
  {
    cdr << ros_message->power_supply_status;
  }

  // Field name: power_supply_health
  {
    cdr << ros_message->power_supply_health;
  }

  // Field name: power_supply_technology
  {
    cdr << ros_message->power_supply_technology;
  }

  // Field name: present
  {
    cdr << (ros_message->present ? true : false);
  }

  // Field name: cell_voltage
  {
    size_t size = 4;
    auto array_ptr = ros_message->cell_voltage;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: cell_temperature
  {
    size_t size = 4;
    auto array_ptr = ros_message->cell_temperature;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: location
  {
    const rosidl_runtime_c__String * str = &ros_message->location;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: serial_number
  {
    const rosidl_runtime_c__String * str = &ros_message->serial_number;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  return true;
}

static bool _BatteryState__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _BatteryState__ros_msg_type * ros_message = static_cast<_BatteryState__ros_msg_type *>(untyped_ros_message);
  // Field name: voltage
  {
    cdr >> ros_message->voltage;
  }

  // Field name: temperature
  {
    cdr >> ros_message->temperature;
  }

  // Field name: current
  {
    cdr >> ros_message->current;
  }

  // Field name: charge
  {
    cdr >> ros_message->charge;
  }

  // Field name: capacity
  {
    cdr >> ros_message->capacity;
  }

  // Field name: design_capacity
  {
    cdr >> ros_message->design_capacity;
  }

  // Field name: percentage
  {
    cdr >> ros_message->percentage;
  }

  // Field name: power_supply_status
  {
    cdr >> ros_message->power_supply_status;
  }

  // Field name: power_supply_health
  {
    cdr >> ros_message->power_supply_health;
  }

  // Field name: power_supply_technology
  {
    cdr >> ros_message->power_supply_technology;
  }

  // Field name: present
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->present = tmp ? true : false;
  }

  // Field name: cell_voltage
  {
    size_t size = 4;
    auto array_ptr = ros_message->cell_voltage;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: cell_temperature
  {
    size_t size = 4;
    auto array_ptr = ros_message->cell_temperature;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: location
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->location.data) {
      rosidl_runtime_c__String__init(&ros_message->location);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->location,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'location'\n");
      return false;
    }
  }

  // Field name: serial_number
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->serial_number.data) {
      rosidl_runtime_c__String__init(&ros_message->serial_number);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->serial_number,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'serial_number'\n");
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_xicro_interfaces
size_t get_serialized_size_xicro_interfaces__msg__BatteryState(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _BatteryState__ros_msg_type * ros_message = static_cast<const _BatteryState__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name voltage
  {
    size_t item_size = sizeof(ros_message->voltage);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name temperature
  {
    size_t item_size = sizeof(ros_message->temperature);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name current
  {
    size_t item_size = sizeof(ros_message->current);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name charge
  {
    size_t item_size = sizeof(ros_message->charge);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name capacity
  {
    size_t item_size = sizeof(ros_message->capacity);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name design_capacity
  {
    size_t item_size = sizeof(ros_message->design_capacity);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name percentage
  {
    size_t item_size = sizeof(ros_message->percentage);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name power_supply_status
  {
    size_t item_size = sizeof(ros_message->power_supply_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name power_supply_health
  {
    size_t item_size = sizeof(ros_message->power_supply_health);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name power_supply_technology
  {
    size_t item_size = sizeof(ros_message->power_supply_technology);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name present
  {
    size_t item_size = sizeof(ros_message->present);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cell_voltage
  {
    size_t array_size = 4;
    auto array_ptr = ros_message->cell_voltage;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cell_temperature
  {
    size_t array_size = 4;
    auto array_ptr = ros_message->cell_temperature;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name location
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->location.size + 1);
  // field.name serial_number
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->serial_number.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _BatteryState__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_xicro_interfaces__msg__BatteryState(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_xicro_interfaces
size_t max_serialized_size_xicro_interfaces__msg__BatteryState(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: voltage
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: temperature
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: current
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: charge
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: capacity
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: design_capacity
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: percentage
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: power_supply_status
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: power_supply_health
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: power_supply_technology
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: present
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: cell_voltage
  {
    size_t array_size = 4;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: cell_temperature
  {
    size_t array_size = 4;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: location
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: serial_number
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _BatteryState__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_xicro_interfaces__msg__BatteryState(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_BatteryState = {
  "xicro_interfaces::msg",
  "BatteryState",
  _BatteryState__cdr_serialize,
  _BatteryState__cdr_deserialize,
  _BatteryState__get_serialized_size,
  _BatteryState__max_serialized_size
};

static rosidl_message_type_support_t _BatteryState__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_BatteryState,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, xicro_interfaces, msg, BatteryState)() {
  return &_BatteryState__type_support;
}

#if defined(__cplusplus)
}
#endif
