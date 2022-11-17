# generated from rosidl_generator_py/resource/_idl.py.em
# with input from xicro_interfaces:msg/Twist.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'linear'
# Member 'angular'
import numpy  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Twist(type):
    """Metaclass of message 'Twist'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
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
                'xicro_interfaces.msg.Twist')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__twist
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__twist
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__twist
            cls._TYPE_SUPPORT = module.type_support_msg__msg__twist
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__twist

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Twist(metaclass=Metaclass_Twist):
    """Message class 'Twist'."""

    __slots__ = [
        '_linear',
        '_angular',
    ]

    _fields_and_field_types = {
        'linear': 'float[3]',
        'angular': 'float[3]',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 3),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 3),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        if 'linear' not in kwargs:
            self.linear = numpy.zeros(3, dtype=numpy.float32)
        else:
            self.linear = numpy.array(kwargs.get('linear'), dtype=numpy.float32)
            assert self.linear.shape == (3, )
        if 'angular' not in kwargs:
            self.angular = numpy.zeros(3, dtype=numpy.float32)
        else:
            self.angular = numpy.array(kwargs.get('angular'), dtype=numpy.float32)
            assert self.angular.shape == (3, )

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
        if all(self.linear != other.linear):
            return False
        if all(self.angular != other.angular):
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def linear(self):
        """Message field 'linear'."""
        return self._linear

    @linear.setter
    def linear(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'linear' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 3, \
                "The 'linear' numpy.ndarray() must have a size of 3"
            self._linear = value
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
                 len(value) == 3 and
                 all(isinstance(v, float) for v in value) and
                 True), \
                "The 'linear' field must be a set or sequence with length 3 and each value of type 'float'"
        self._linear = numpy.array(value, dtype=numpy.float32)

    @property
    def angular(self):
        """Message field 'angular'."""
        return self._angular

    @angular.setter
    def angular(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'angular' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 3, \
                "The 'angular' numpy.ndarray() must have a size of 3"
            self._angular = value
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
                 len(value) == 3 and
                 all(isinstance(v, float) for v in value) and
                 True), \
                "The 'angular' field must be a set or sequence with length 3 and each value of type 'float'"
        self._angular = numpy.array(value, dtype=numpy.float32)
