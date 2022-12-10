# generated from rosidl_generator_py/resource/_idl.py.em
# with input from cocoax_interfaces:srv/CocoaXGenerator.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'position_initial'
# Member 'position_final'
import numpy  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_CocoaXGenerator_Request(type):
    """Metaclass of message 'CocoaXGenerator_Request'."""

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
            module = import_type_support('cocoax_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'cocoax_interfaces.srv.CocoaXGenerator_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__cocoa_x_generator__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__cocoa_x_generator__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__cocoa_x_generator__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__cocoa_x_generator__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__cocoa_x_generator__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class CocoaXGenerator_Request(metaclass=Metaclass_CocoaXGenerator_Request):
    """Message class 'CocoaXGenerator_Request'."""

    __slots__ = [
        '_position_initial',
        '_position_final',
        '_duration',
    ]

    _fields_and_field_types = {
        'position_initial': 'double[3]',
        'position_final': 'double[3]',
        'duration': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('double'), 3),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('double'), 3),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        if 'position_initial' not in kwargs:
            self.position_initial = numpy.zeros(3, dtype=numpy.float64)
        else:
            self.position_initial = numpy.array(kwargs.get('position_initial'), dtype=numpy.float64)
            assert self.position_initial.shape == (3, )
        if 'position_final' not in kwargs:
            self.position_final = numpy.zeros(3, dtype=numpy.float64)
        else:
            self.position_final = numpy.array(kwargs.get('position_final'), dtype=numpy.float64)
            assert self.position_final.shape == (3, )
        self.duration = kwargs.get('duration', float())

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
        if all(self.position_initial != other.position_initial):
            return False
        if all(self.position_final != other.position_final):
            return False
        if self.duration != other.duration:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def position_initial(self):
        """Message field 'position_initial'."""
        return self._position_initial

    @position_initial.setter
    def position_initial(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float64, \
                "The 'position_initial' numpy.ndarray() must have the dtype of 'numpy.float64'"
            assert value.size == 3, \
                "The 'position_initial' numpy.ndarray() must have a size of 3"
            self._position_initial = value
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
                "The 'position_initial' field must be a set or sequence with length 3 and each value of type 'float'"
        self._position_initial = numpy.array(value, dtype=numpy.float64)

    @property
    def position_final(self):
        """Message field 'position_final'."""
        return self._position_final

    @position_final.setter
    def position_final(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float64, \
                "The 'position_final' numpy.ndarray() must have the dtype of 'numpy.float64'"
            assert value.size == 3, \
                "The 'position_final' numpy.ndarray() must have a size of 3"
            self._position_final = value
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
                "The 'position_final' field must be a set or sequence with length 3 and each value of type 'float'"
        self._position_final = numpy.array(value, dtype=numpy.float64)

    @property
    def duration(self):
        """Message field 'duration'."""
        return self._duration

    @duration.setter
    def duration(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'duration' field must be of type 'float'"
        self._duration = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_CocoaXGenerator_Response(type):
    """Metaclass of message 'CocoaXGenerator_Response'."""

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
            module = import_type_support('cocoax_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'cocoax_interfaces.srv.CocoaXGenerator_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__cocoa_x_generator__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__cocoa_x_generator__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__cocoa_x_generator__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__cocoa_x_generator__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__cocoa_x_generator__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class CocoaXGenerator_Response(metaclass=Metaclass_CocoaXGenerator_Response):
    """Message class 'CocoaXGenerator_Response'."""

    __slots__ = [
    ]

    _fields_and_field_types = {
    }

    SLOT_TYPES = (
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))

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
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)


class Metaclass_CocoaXGenerator(type):
    """Metaclass of service 'CocoaXGenerator'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('cocoax_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'cocoax_interfaces.srv.CocoaXGenerator')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__cocoa_x_generator

            from cocoax_interfaces.srv import _cocoa_x_generator
            if _cocoa_x_generator.Metaclass_CocoaXGenerator_Request._TYPE_SUPPORT is None:
                _cocoa_x_generator.Metaclass_CocoaXGenerator_Request.__import_type_support__()
            if _cocoa_x_generator.Metaclass_CocoaXGenerator_Response._TYPE_SUPPORT is None:
                _cocoa_x_generator.Metaclass_CocoaXGenerator_Response.__import_type_support__()


class CocoaXGenerator(metaclass=Metaclass_CocoaXGenerator):
    from cocoax_interfaces.srv._cocoa_x_generator import CocoaXGenerator_Request as Request
    from cocoax_interfaces.srv._cocoa_x_generator import CocoaXGenerator_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
