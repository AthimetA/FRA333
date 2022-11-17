// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from xicro_interfaces:msg/BatteryState.idl
// generated code does not contain a copyright notice

#ifndef XICRO_INTERFACES__MSG__DETAIL__BATTERY_STATE__BUILDER_HPP_
#define XICRO_INTERFACES__MSG__DETAIL__BATTERY_STATE__BUILDER_HPP_

#include "xicro_interfaces/msg/detail/battery_state__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace xicro_interfaces
{

namespace msg
{

namespace builder
{

class Init_BatteryState_serial_number
{
public:
  explicit Init_BatteryState_serial_number(::xicro_interfaces::msg::BatteryState & msg)
  : msg_(msg)
  {}
  ::xicro_interfaces::msg::BatteryState serial_number(::xicro_interfaces::msg::BatteryState::_serial_number_type arg)
  {
    msg_.serial_number = std::move(arg);
    return std::move(msg_);
  }

private:
  ::xicro_interfaces::msg::BatteryState msg_;
};

class Init_BatteryState_location
{
public:
  explicit Init_BatteryState_location(::xicro_interfaces::msg::BatteryState & msg)
  : msg_(msg)
  {}
  Init_BatteryState_serial_number location(::xicro_interfaces::msg::BatteryState::_location_type arg)
  {
    msg_.location = std::move(arg);
    return Init_BatteryState_serial_number(msg_);
  }

private:
  ::xicro_interfaces::msg::BatteryState msg_;
};

class Init_BatteryState_cell_temperature
{
public:
  explicit Init_BatteryState_cell_temperature(::xicro_interfaces::msg::BatteryState & msg)
  : msg_(msg)
  {}
  Init_BatteryState_location cell_temperature(::xicro_interfaces::msg::BatteryState::_cell_temperature_type arg)
  {
    msg_.cell_temperature = std::move(arg);
    return Init_BatteryState_location(msg_);
  }

private:
  ::xicro_interfaces::msg::BatteryState msg_;
};

class Init_BatteryState_cell_voltage
{
public:
  explicit Init_BatteryState_cell_voltage(::xicro_interfaces::msg::BatteryState & msg)
  : msg_(msg)
  {}
  Init_BatteryState_cell_temperature cell_voltage(::xicro_interfaces::msg::BatteryState::_cell_voltage_type arg)
  {
    msg_.cell_voltage = std::move(arg);
    return Init_BatteryState_cell_temperature(msg_);
  }

private:
  ::xicro_interfaces::msg::BatteryState msg_;
};

class Init_BatteryState_present
{
public:
  explicit Init_BatteryState_present(::xicro_interfaces::msg::BatteryState & msg)
  : msg_(msg)
  {}
  Init_BatteryState_cell_voltage present(::xicro_interfaces::msg::BatteryState::_present_type arg)
  {
    msg_.present = std::move(arg);
    return Init_BatteryState_cell_voltage(msg_);
  }

private:
  ::xicro_interfaces::msg::BatteryState msg_;
};

class Init_BatteryState_power_supply_technology
{
public:
  explicit Init_BatteryState_power_supply_technology(::xicro_interfaces::msg::BatteryState & msg)
  : msg_(msg)
  {}
  Init_BatteryState_present power_supply_technology(::xicro_interfaces::msg::BatteryState::_power_supply_technology_type arg)
  {
    msg_.power_supply_technology = std::move(arg);
    return Init_BatteryState_present(msg_);
  }

private:
  ::xicro_interfaces::msg::BatteryState msg_;
};

class Init_BatteryState_power_supply_health
{
public:
  explicit Init_BatteryState_power_supply_health(::xicro_interfaces::msg::BatteryState & msg)
  : msg_(msg)
  {}
  Init_BatteryState_power_supply_technology power_supply_health(::xicro_interfaces::msg::BatteryState::_power_supply_health_type arg)
  {
    msg_.power_supply_health = std::move(arg);
    return Init_BatteryState_power_supply_technology(msg_);
  }

private:
  ::xicro_interfaces::msg::BatteryState msg_;
};

class Init_BatteryState_power_supply_status
{
public:
  explicit Init_BatteryState_power_supply_status(::xicro_interfaces::msg::BatteryState & msg)
  : msg_(msg)
  {}
  Init_BatteryState_power_supply_health power_supply_status(::xicro_interfaces::msg::BatteryState::_power_supply_status_type arg)
  {
    msg_.power_supply_status = std::move(arg);
    return Init_BatteryState_power_supply_health(msg_);
  }

private:
  ::xicro_interfaces::msg::BatteryState msg_;
};

class Init_BatteryState_percentage
{
public:
  explicit Init_BatteryState_percentage(::xicro_interfaces::msg::BatteryState & msg)
  : msg_(msg)
  {}
  Init_BatteryState_power_supply_status percentage(::xicro_interfaces::msg::BatteryState::_percentage_type arg)
  {
    msg_.percentage = std::move(arg);
    return Init_BatteryState_power_supply_status(msg_);
  }

private:
  ::xicro_interfaces::msg::BatteryState msg_;
};

class Init_BatteryState_design_capacity
{
public:
  explicit Init_BatteryState_design_capacity(::xicro_interfaces::msg::BatteryState & msg)
  : msg_(msg)
  {}
  Init_BatteryState_percentage design_capacity(::xicro_interfaces::msg::BatteryState::_design_capacity_type arg)
  {
    msg_.design_capacity = std::move(arg);
    return Init_BatteryState_percentage(msg_);
  }

private:
  ::xicro_interfaces::msg::BatteryState msg_;
};

class Init_BatteryState_capacity
{
public:
  explicit Init_BatteryState_capacity(::xicro_interfaces::msg::BatteryState & msg)
  : msg_(msg)
  {}
  Init_BatteryState_design_capacity capacity(::xicro_interfaces::msg::BatteryState::_capacity_type arg)
  {
    msg_.capacity = std::move(arg);
    return Init_BatteryState_design_capacity(msg_);
  }

private:
  ::xicro_interfaces::msg::BatteryState msg_;
};

class Init_BatteryState_charge
{
public:
  explicit Init_BatteryState_charge(::xicro_interfaces::msg::BatteryState & msg)
  : msg_(msg)
  {}
  Init_BatteryState_capacity charge(::xicro_interfaces::msg::BatteryState::_charge_type arg)
  {
    msg_.charge = std::move(arg);
    return Init_BatteryState_capacity(msg_);
  }

private:
  ::xicro_interfaces::msg::BatteryState msg_;
};

class Init_BatteryState_current
{
public:
  explicit Init_BatteryState_current(::xicro_interfaces::msg::BatteryState & msg)
  : msg_(msg)
  {}
  Init_BatteryState_charge current(::xicro_interfaces::msg::BatteryState::_current_type arg)
  {
    msg_.current = std::move(arg);
    return Init_BatteryState_charge(msg_);
  }

private:
  ::xicro_interfaces::msg::BatteryState msg_;
};

class Init_BatteryState_temperature
{
public:
  explicit Init_BatteryState_temperature(::xicro_interfaces::msg::BatteryState & msg)
  : msg_(msg)
  {}
  Init_BatteryState_current temperature(::xicro_interfaces::msg::BatteryState::_temperature_type arg)
  {
    msg_.temperature = std::move(arg);
    return Init_BatteryState_current(msg_);
  }

private:
  ::xicro_interfaces::msg::BatteryState msg_;
};

class Init_BatteryState_voltage
{
public:
  Init_BatteryState_voltage()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BatteryState_temperature voltage(::xicro_interfaces::msg::BatteryState::_voltage_type arg)
  {
    msg_.voltage = std::move(arg);
    return Init_BatteryState_temperature(msg_);
  }

private:
  ::xicro_interfaces::msg::BatteryState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::xicro_interfaces::msg::BatteryState>()
{
  return xicro_interfaces::msg::builder::Init_BatteryState_voltage();
}

}  // namespace xicro_interfaces

#endif  // XICRO_INTERFACES__MSG__DETAIL__BATTERY_STATE__BUILDER_HPP_
