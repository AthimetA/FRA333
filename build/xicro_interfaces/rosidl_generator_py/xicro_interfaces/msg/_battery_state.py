# generated from rosidl_generator_py/resource/_idl.py.em
# with input from xicro_interfaces:msg/BatteryState.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'cell_voltage'
# Member 'cell_temperature'
import numpy  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_BatteryState(type):
    """Metaclass of message 'BatteryState'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'POWER_SUPPLY_STATUS_UNKNOWN': 0,
        'POWER_SUPPLY_STATUS_CHARGING': 1,
        'POWER_SUPPLY_STATUS_DISCHARGING': 2,
        'POWER_SUPPLY_STATUS_NOT_CHARGING': 3,
        'POWER_SUPPLY_STATUS_FULL': 4,
        'POWER_SUPPLY_HEALTH_UNKNOWN': 0,
        'POWER_SUPPLY_HEALTH_GOOD': 1,
        'POWER_SUPPLY_HEALTH_OVERHEAT': 2,
        'POWER_SUPPLY_HEALTH_DEAD': 3,
        'POWER_SUPPLY_HEALTH_OVERVOLTAGE': 4,
        'POWER_SUPPLY_HEALTH_UNSPEC_FAILURE': 5,
        'POWER_SUPPLY_HEALTH_COLD': 6,
        'POWER_SUPPLY_HEALTH_WATCHDOG_TIMER_EXPIRE': 7,
        'POWER_SUPPLY_HEALTH_SAFETY_TIMER_EXPIRE': 8,
        'POWER_SUPPLY_TECHNOLOGY_UNKNOWN': 0,
        'POWER_SUPPLY_TECHNOLOGY_NIMH': 1,
        'POWER_SUPPLY_TECHNOLOGY_LION': 2,
        'POWER_SUPPLY_TECHNOLOGY_LIPO': 3,
        'POWER_SUPPLY_TECHNOLOGY_LIFE': 4,
        'POWER_SUPPLY_TECHNOLOGY_NICD': 5,
        'POWER_SUPPLY_TECHNOLOGY_LIMN': 6,
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('xicro_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'xicro_interfaces.msg.BatteryState')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__battery_state
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__battery_state
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__battery_state
            cls._TYPE_SUPPORT = module.type_support_msg__msg__battery_state
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__battery_state

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'POWER_SUPPLY_STATUS_UNKNOWN': cls.__constants['POWER_SUPPLY_STATUS_UNKNOWN'],
            'POWER_SUPPLY_STATUS_CHARGING': cls.__constants['POWER_SUPPLY_STATUS_CHARGING'],
            'POWER_SUPPLY_STATUS_DISCHARGING': cls.__constants['POWER_SUPPLY_STATUS_DISCHARGING'],
            'POWER_SUPPLY_STATUS_NOT_CHARGING': cls.__constants['POWER_SUPPLY_STATUS_NOT_CHARGING'],
            'POWER_SUPPLY_STATUS_FULL': cls.__constants['POWER_SUPPLY_STATUS_FULL'],
            'POWER_SUPPLY_HEALTH_UNKNOWN': cls.__constants['POWER_SUPPLY_HEALTH_UNKNOWN'],
            'POWER_SUPPLY_HEALTH_GOOD': cls.__constants['POWER_SUPPLY_HEALTH_GOOD'],
            'POWER_SUPPLY_HEALTH_OVERHEAT': cls.__constants['POWER_SUPPLY_HEALTH_OVERHEAT'],
            'POWER_SUPPLY_HEALTH_DEAD': cls.__constants['POWER_SUPPLY_HEALTH_DEAD'],
            'POWER_SUPPLY_HEALTH_OVERVOLTAGE': cls.__constants['POWER_SUPPLY_HEALTH_OVERVOLTAGE'],
            'POWER_SUPPLY_HEALTH_UNSPEC_FAILURE': cls.__constants['POWER_SUPPLY_HEALTH_UNSPEC_FAILURE'],
            'POWER_SUPPLY_HEALTH_COLD': cls.__constants['POWER_SUPPLY_HEALTH_COLD'],
            'POWER_SUPPLY_HEALTH_WATCHDOG_TIMER_EXPIRE': cls.__constants['POWER_SUPPLY_HEALTH_WATCHDOG_TIMER_EXPIRE'],
            'POWER_SUPPLY_HEALTH_SAFETY_TIMER_EXPIRE': cls.__constants['POWER_SUPPLY_HEALTH_SAFETY_TIMER_EXPIRE'],
            'POWER_SUPPLY_TECHNOLOGY_UNKNOWN': cls.__constants['POWER_SUPPLY_TECHNOLOGY_UNKNOWN'],
            'POWER_SUPPLY_TECHNOLOGY_NIMH': cls.__constants['POWER_SUPPLY_TECHNOLOGY_NIMH'],
            'POWER_SUPPLY_TECHNOLOGY_LION': cls.__constants['POWER_SUPPLY_TECHNOLOGY_LION'],
            'POWER_SUPPLY_TECHNOLOGY_LIPO': cls.__constants['POWER_SUPPLY_TECHNOLOGY_LIPO'],
            'POWER_SUPPLY_TECHNOLOGY_LIFE': cls.__constants['POWER_SUPPLY_TECHNOLOGY_LIFE'],
            'POWER_SUPPLY_TECHNOLOGY_NICD': cls.__constants['POWER_SUPPLY_TECHNOLOGY_NICD'],
            'POWER_SUPPLY_TECHNOLOGY_LIMN': cls.__constants['POWER_SUPPLY_TECHNOLOGY_LIMN'],
        }

    @property
    def POWER_SUPPLY_STATUS_UNKNOWN(self):
        """Message constant 'POWER_SUPPLY_STATUS_UNKNOWN'."""
        return Metaclass_BatteryState.__constants['POWER_SUPPLY_STATUS_UNKNOWN']

    @property
    def POWER_SUPPLY_STATUS_CHARGING(self):
        """Message constant 'POWER_SUPPLY_STATUS_CHARGING'."""
        return Metaclass_BatteryState.__constants['POWER_SUPPLY_STATUS_CHARGING']

    @property
    def POWER_SUPPLY_STATUS_DISCHARGING(self):
        """Message constant 'POWER_SUPPLY_STATUS_DISCHARGING'."""
        return Metaclass_BatteryState.__constants['POWER_SUPPLY_STATUS_DISCHARGING']

    @property
    def POWER_SUPPLY_STATUS_NOT_CHARGING(self):
        """Message constant 'POWER_SUPPLY_STATUS_NOT_CHARGING'."""
        return Metaclass_BatteryState.__constants['POWER_SUPPLY_STATUS_NOT_CHARGING']

    @property
    def POWER_SUPPLY_STATUS_FULL(self):
        """Message constant 'POWER_SUPPLY_STATUS_FULL'."""
        return Metaclass_BatteryState.__constants['POWER_SUPPLY_STATUS_FULL']

    @property
    def POWER_SUPPLY_HEALTH_UNKNOWN(self):
        """Message constant 'POWER_SUPPLY_HEALTH_UNKNOWN'."""
        return Metaclass_BatteryState.__constants['POWER_SUPPLY_HEALTH_UNKNOWN']

    @property
    def POWER_SUPPLY_HEALTH_GOOD(self):
        """Message constant 'POWER_SUPPLY_HEALTH_GOOD'."""
        return Metaclass_BatteryState.__constants['POWER_SUPPLY_HEALTH_GOOD']

    @property
    def POWER_SUPPLY_HEALTH_OVERHEAT(self):
        """Message constant 'POWER_SUPPLY_HEALTH_OVERHEAT'."""
        return Metaclass_BatteryState.__constants['POWER_SUPPLY_HEALTH_OVERHEAT']

    @property
    def POWER_SUPPLY_HEALTH_DEAD(self):
        """Message constant 'POWER_SUPPLY_HEALTH_DEAD'."""
        return Metaclass_BatteryState.__constants['POWER_SUPPLY_HEALTH_DEAD']

    @property
    def POWER_SUPPLY_HEALTH_OVERVOLTAGE(self):
        """Message constant 'POWER_SUPPLY_HEALTH_OVERVOLTAGE'."""
        return Metaclass_BatteryState.__constants['POWER_SUPPLY_HEALTH_OVERVOLTAGE']

    @property
    def POWER_SUPPLY_HEALTH_UNSPEC_FAILURE(self):
        """Message constant 'POWER_SUPPLY_HEALTH_UNSPEC_FAILURE'."""
        return Metaclass_BatteryState.__constants['POWER_SUPPLY_HEALTH_UNSPEC_FAILURE']

    @property
    def POWER_SUPPLY_HEALTH_COLD(self):
        """Message constant 'POWER_SUPPLY_HEALTH_COLD'."""
        return Metaclass_BatteryState.__constants['POWER_SUPPLY_HEALTH_COLD']

    @property
    def POWER_SUPPLY_HEALTH_WATCHDOG_TIMER_EXPIRE(self):
        """Message constant 'POWER_SUPPLY_HEALTH_WATCHDOG_TIMER_EXPIRE'."""
        return Metaclass_BatteryState.__constants['POWER_SUPPLY_HEALTH_WATCHDOG_TIMER_EXPIRE']

    @property
    def POWER_SUPPLY_HEALTH_SAFETY_TIMER_EXPIRE(self):
        """Message constant 'POWER_SUPPLY_HEALTH_SAFETY_TIMER_EXPIRE'."""
        return Metaclass_BatteryState.__constants['POWER_SUPPLY_HEALTH_SAFETY_TIMER_EXPIRE']

    @property
    def POWER_SUPPLY_TECHNOLOGY_UNKNOWN(self):
        """Message constant 'POWER_SUPPLY_TECHNOLOGY_UNKNOWN'."""
        return Metaclass_BatteryState.__constants['POWER_SUPPLY_TECHNOLOGY_UNKNOWN']

    @property
    def POWER_SUPPLY_TECHNOLOGY_NIMH(self):
        """Message constant 'POWER_SUPPLY_TECHNOLOGY_NIMH'."""
        return Metaclass_BatteryState.__constants['POWER_SUPPLY_TECHNOLOGY_NIMH']

    @property
    def POWER_SUPPLY_TECHNOLOGY_LION(self):
        """Message constant 'POWER_SUPPLY_TECHNOLOGY_LION'."""
        return Metaclass_BatteryState.__constants['POWER_SUPPLY_TECHNOLOGY_LION']

    @property
    def POWER_SUPPLY_TECHNOLOGY_LIPO(self):
        """Message constant 'POWER_SUPPLY_TECHNOLOGY_LIPO'."""
        return Metaclass_BatteryState.__constants['POWER_SUPPLY_TECHNOLOGY_LIPO']

    @property
    def POWER_SUPPLY_TECHNOLOGY_LIFE(self):
        """Message constant 'POWER_SUPPLY_TECHNOLOGY_LIFE'."""
        return Metaclass_BatteryState.__constants['POWER_SUPPLY_TECHNOLOGY_LIFE']

    @property
    def POWER_SUPPLY_TECHNOLOGY_NICD(self):
        """Message constant 'POWER_SUPPLY_TECHNOLOGY_NICD'."""
        return Metaclass_BatteryState.__constants['POWER_SUPPLY_TECHNOLOGY_NICD']

    @property
    def POWER_SUPPLY_TECHNOLOGY_LIMN(self):
        """Message constant 'POWER_SUPPLY_TECHNOLOGY_LIMN'."""
        return Metaclass_BatteryState.__constants['POWER_SUPPLY_TECHNOLOGY_LIMN']


class BatteryState(metaclass=Metaclass_BatteryState):
    """
    Message class 'BatteryState'.

    Constants:
      POWER_SUPPLY_STATUS_UNKNOWN
      POWER_SUPPLY_STATUS_CHARGING
      POWER_SUPPLY_STATUS_DISCHARGING
      POWER_SUPPLY_STATUS_NOT_CHARGING
      POWER_SUPPLY_STATUS_FULL
      POWER_SUPPLY_HEALTH_UNKNOWN
      POWER_SUPPLY_HEALTH_GOOD
      POWER_SUPPLY_HEALTH_OVERHEAT
      POWER_SUPPLY_HEALTH_DEAD
      POWER_SUPPLY_HEALTH_OVERVOLTAGE
      POWER_SUPPLY_HEALTH_UNSPEC_FAILURE
      POWER_SUPPLY_HEALTH_COLD
      POWER_SUPPLY_HEALTH_WATCHDOG_TIMER_EXPIRE
      POWER_SUPPLY_HEALTH_SAFETY_TIMER_EXPIRE
      POWER_SUPPLY_TECHNOLOGY_UNKNOWN
      POWER_SUPPLY_TECHNOLOGY_NIMH
      POWER_SUPPLY_TECHNOLOGY_LION
      POWER_SUPPLY_TECHNOLOGY_LIPO
      POWER_SUPPLY_TECHNOLOGY_LIFE
      POWER_SUPPLY_TECHNOLOGY_NICD
      POWER_SUPPLY_TECHNOLOGY_LIMN
    """

    __slots__ = [
        '_voltage',
        '_temperature',
        '_current',
        '_charge',
        '_capacity',
        '_design_capacity',
        '_percentage',
        '_power_supply_status',
        '_power_supply_health',
        '_power_supply_technology',
        '_present',
        '_cell_voltage',
        '_cell_temperature',
        '_location',
        '_serial_number',
    ]

    _fields_and_field_types = {
        'voltage': 'float',
        'temperature': 'float',
        'current': 'float',
        'charge': 'float',
        'capacity': 'float',
        'design_capacity': 'float',
        'percentage': 'float',
        'power_supply_status': 'uint8',
        'power_supply_health': 'uint8',
        'power_supply_technology': 'uint8',
        'present': 'boolean',
        'cell_voltage': 'float[4]',
        'cell_temperature': 'float[4]',
        'location': 'string',
        'serial_number': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 4),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 4),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.voltage = kwargs.get('voltage', float())
        self.temperature = kwargs.get('temperature', float())
        self.current = kwargs.get('current', float())
        self.charge = kwargs.get('charge', float())
        self.capacity = kwargs.get('capacity', float())
        self.design_capacity = kwargs.get('design_capacity', float())
        self.percentage = kwargs.get('percentage', float())
        self.power_supply_status = kwargs.get('power_supply_status', int())
        self.power_supply_health = kwargs.get('power_supply_health', int())
        self.power_supply_technology = kwargs.get('power_supply_technology', int())
        self.present = kwargs.get('present', bool())
        if 'cell_voltage' not in kwargs:
            self.cell_voltage = numpy.zeros(4, dtype=numpy.float32)
        else:
            self.cell_voltage = numpy.array(kwargs.get('cell_voltage'), dtype=numpy.float32)
            assert self.cell_voltage.shape == (4, )
        if 'cell_temperature' not in kwargs:
            self.cell_temperature = numpy.zeros(4, dtype=numpy.float32)
        else:
            self.cell_temperature = numpy.array(kwargs.get('cell_temperature'), dtype=numpy.float32)
            assert self.cell_temperature.shape == (4, )
        self.location = kwargs.get('location', str())
        self.serial_number = kwargs.get('serial_number', str())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.voltage != other.voltage:
            return False
        if self.temperature != other.temperature:
            return False
        if self.current != other.current:
            return False
        if self.charge != other.charge:
            return False
        if self.capacity != other.capacity:
            return False
        if self.design_capacity != other.design_capacity:
            return False
        if self.percentage != other.percentage:
            return False
        if self.power_supply_status != other.power_supply_status:
            return False
        if self.power_supply_health != other.power_supply_health:
            return False
        if self.power_supply_technology != other.power_supply_technology:
            return False
        if self.present != other.present:
            return False
        if all(self.cell_voltage != other.cell_voltage):
            return False
        if all(self.cell_temperature != other.cell_temperature):
            return False
        if self.location != other.location:
            return False
        if self.serial_number != other.serial_number:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def voltage(self):
        """Message field 'voltage'."""
        return self._voltage

    @voltage.setter
    def voltage(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'voltage' field must be of type 'float'"
        self._voltage = value

    @property
    def temperature(self):
        """Message field 'temperature'."""
        return self._temperature

    @temperature.setter
    def temperature(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'temperature' field must be of type 'float'"
        self._temperature = value

    @property
    def current(self):
        """Message field 'current'."""
        return self._current

    @current.setter
    def current(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'current' field must be of type 'float'"
        self._current = value

    @property
    def charge(self):
        """Message field 'charge'."""
        return self._charge

    @charge.setter
    def charge(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'charge' field must be of type 'float'"
        self._charge = value

    @property
    def capacity(self):
        """Message field 'capacity'."""
        return self._capacity

    @capacity.setter
    def capacity(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'capacity' field must be of type 'float'"
        self._capacity = value

    @property
    def design_capacity(self):
        """Message field 'design_capacity'."""
        return self._design_capacity

    @design_capacity.setter
    def design_capacity(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'design_capacity' field must be of type 'float'"
        self._design_capacity = value

    @property
    def percentage(self):
        """Message field 'percentage'."""
        return self._percentage

    @percentage.setter
    def percentage(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'percentage' field must be of type 'float'"
        self._percentage = value

    @property
    def power_supply_status(self):
        """Message field 'power_supply_status'."""
        return self._power_supply_status

    @power_supply_status.setter
    def power_supply_status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'power_supply_status' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'power_supply_status' field must be an unsigned integer in [0, 255]"
        self._power_supply_status = value

    @property
    def power_supply_health(self):
        """Message field 'power_supply_health'."""
        return self._power_supply_health

    @power_supply_health.setter
    def power_supply_health(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'power_supply_health' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'power_supply_health' field must be an unsigned integer in [0, 255]"
        self._power_supply_health = value

    @property
    def power_supply_technology(self):
        """Message field 'power_supply_technology'."""
        return self._power_supply_technology

    @power_supply_technology.setter
    def power_supply_technology(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'power_supply_technology' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'power_supply_technology' field must be an unsigned integer in [0, 255]"
        self._power_supply_technology = value

    @property
    def present(self):
        """Message field 'present'."""
        return self._present

    @present.setter
    def present(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'present' field must be of type 'bool'"
        self._present = value

    @property
    def cell_voltage(self):
        """Message field 'cell_voltage'."""
        return self._cell_voltage

    @cell_voltage.setter
    def cell_voltage(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'cell_voltage' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 4, \
                "The 'cell_voltage' numpy.ndarray() must have a size of 4"
            self._cell_voltage = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) == 4 and
                 all(isinstance(v, float) for v in value) and
                 True), \
                "The 'cell_voltage' field must be a set or sequence with length 4 and each value of type 'float'"
        self._cell_voltage = numpy.array(value, dtype=numpy.float32)

    @property
    def cell_temperature(self):
        """Message field 'cell_temperature'."""
        return self._cell_temperature

    @cell_temperature.setter
    def cell_temperature(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'cell_temperature' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 4, \
                "The 'cell_temperature' numpy.ndarray() must have a size of 4"
            self._cell_temperature = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) == 4 and
                 all(isinstance(v, float) for v in value) and
                 True), \
                "The 'cell_temperature' field must be a set or sequence with length 4 and each value of type 'float'"
        self._cell_temperature = numpy.array(value, dtype=numpy.float32)

    @property
    def location(self):
        """Message field 'location'."""
        return self._location

    @location.setter
    def location(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'location' field must be of type 'str'"
        self._location = value

    @property
    def serial_number(self):
        """Message field 'serial_number'."""
        return self._serial_number

    @serial_number.setter
    def serial_number(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'serial_number' field must be of type 'str'"
        self._serial_number = value
