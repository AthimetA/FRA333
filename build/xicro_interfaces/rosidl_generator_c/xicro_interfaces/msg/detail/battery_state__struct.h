// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from xicro_interfaces:msg/BatteryState.idl
// generated code does not contain a copyright notice

#ifndef XICRO_INTERFACES__MSG__DETAIL__BATTERY_STATE__STRUCT_H_
#define XICRO_INTERFACES__MSG__DETAIL__BATTERY_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'POWER_SUPPLY_STATUS_UNKNOWN'.
enum
{
  xicro_interfaces__msg__BatteryState__POWER_SUPPLY_STATUS_UNKNOWN = 0
};

/// Constant 'POWER_SUPPLY_STATUS_CHARGING'.
enum
{
  xicro_interfaces__msg__BatteryState__POWER_SUPPLY_STATUS_CHARGING = 1
};

/// Constant 'POWER_SUPPLY_STATUS_DISCHARGING'.
enum
{
  xicro_interfaces__msg__BatteryState__POWER_SUPPLY_STATUS_DISCHARGING = 2
};

/// Constant 'POWER_SUPPLY_STATUS_NOT_CHARGING'.
enum
{
  xicro_interfaces__msg__BatteryState__POWER_SUPPLY_STATUS_NOT_CHARGING = 3
};

/// Constant 'POWER_SUPPLY_STATUS_FULL'.
enum
{
  xicro_interfaces__msg__BatteryState__POWER_SUPPLY_STATUS_FULL = 4
};

/// Constant 'POWER_SUPPLY_HEALTH_UNKNOWN'.
enum
{
  xicro_interfaces__msg__BatteryState__POWER_SUPPLY_HEALTH_UNKNOWN = 0
};

/// Constant 'POWER_SUPPLY_HEALTH_GOOD'.
enum
{
  xicro_interfaces__msg__BatteryState__POWER_SUPPLY_HEALTH_GOOD = 1
};

/// Constant 'POWER_SUPPLY_HEALTH_OVERHEAT'.
enum
{
  xicro_interfaces__msg__BatteryState__POWER_SUPPLY_HEALTH_OVERHEAT = 2
};

/// Constant 'POWER_SUPPLY_HEALTH_DEAD'.
enum
{
  xicro_interfaces__msg__BatteryState__POWER_SUPPLY_HEALTH_DEAD = 3
};

/// Constant 'POWER_SUPPLY_HEALTH_OVERVOLTAGE'.
enum
{
  xicro_interfaces__msg__BatteryState__POWER_SUPPLY_HEALTH_OVERVOLTAGE = 4
};

/// Constant 'POWER_SUPPLY_HEALTH_UNSPEC_FAILURE'.
enum
{
  xicro_interfaces__msg__BatteryState__POWER_SUPPLY_HEALTH_UNSPEC_FAILURE = 5
};

/// Constant 'POWER_SUPPLY_HEALTH_COLD'.
enum
{
  xicro_interfaces__msg__BatteryState__POWER_SUPPLY_HEALTH_COLD = 6
};

/// Constant 'POWER_SUPPLY_HEALTH_WATCHDOG_TIMER_EXPIRE'.
enum
{
  xicro_interfaces__msg__BatteryState__POWER_SUPPLY_HEALTH_WATCHDOG_TIMER_EXPIRE = 7
};

/// Constant 'POWER_SUPPLY_HEALTH_SAFETY_TIMER_EXPIRE'.
enum
{
  xicro_interfaces__msg__BatteryState__POWER_SUPPLY_HEALTH_SAFETY_TIMER_EXPIRE = 8
};

/// Constant 'POWER_SUPPLY_TECHNOLOGY_UNKNOWN'.
enum
{
  xicro_interfaces__msg__BatteryState__POWER_SUPPLY_TECHNOLOGY_UNKNOWN = 0
};

/// Constant 'POWER_SUPPLY_TECHNOLOGY_NIMH'.
enum
{
  xicro_interfaces__msg__BatteryState__POWER_SUPPLY_TECHNOLOGY_NIMH = 1
};

/// Constant 'POWER_SUPPLY_TECHNOLOGY_LION'.
enum
{
  xicro_interfaces__msg__BatteryState__POWER_SUPPLY_TECHNOLOGY_LION = 2
};

/// Constant 'POWER_SUPPLY_TECHNOLOGY_LIPO'.
enum
{
  xicro_interfaces__msg__BatteryState__POWER_SUPPLY_TECHNOLOGY_LIPO = 3
};

/// Constant 'POWER_SUPPLY_TECHNOLOGY_LIFE'.
enum
{
  xicro_interfaces__msg__BatteryState__POWER_SUPPLY_TECHNOLOGY_LIFE = 4
};

/// Constant 'POWER_SUPPLY_TECHNOLOGY_NICD'.
enum
{
  xicro_interfaces__msg__BatteryState__POWER_SUPPLY_TECHNOLOGY_NICD = 5
};

/// Constant 'POWER_SUPPLY_TECHNOLOGY_LIMN'.
enum
{
  xicro_interfaces__msg__BatteryState__POWER_SUPPLY_TECHNOLOGY_LIMN = 6
};

// Include directives for member types
// Member 'location'
// Member 'serial_number'
#include "rosidl_runtime_c/string.h"

// Struct defined in msg/BatteryState in the package xicro_interfaces.
typedef struct xicro_interfaces__msg__BatteryState
{
  float voltage;
  float temperature;
  float current;
  float charge;
  float capacity;
  float design_capacity;
  float percentage;
  uint8_t power_supply_status;
  uint8_t power_supply_health;
  uint8_t power_supply_technology;
  bool present;
  float cell_voltage[4];
  float cell_temperature[4];
  rosidl_runtime_c__String location;
  rosidl_runtime_c__String serial_number;
} xicro_interfaces__msg__BatteryState;

// Struct for a sequence of xicro_interfaces__msg__BatteryState.
typedef struct xicro_interfaces__msg__BatteryState__Sequence
{
  xicro_interfaces__msg__BatteryState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} xicro_interfaces__msg__BatteryState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // XICRO_INTERFACES__MSG__DETAIL__BATTERY_STATE__STRUCT_H_
