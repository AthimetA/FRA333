# generated from rosidl_generator_py/resource/_idl.py.em
# with input from cocoax_interfaces:srv/CocoaXIK.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'r'
import numpy  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_CocoaXIK_Request(type):
    """Metaclass of message 'CocoaXIK_Request'."""

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
                'cocoax_interfaces.srv.CocoaXIK_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__cocoa_xik__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__cocoa_xik__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__cocoa_xik__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__cocoa_xik__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__cocoa_xik__request

            from geometry_msgs.msg import Point
            if Point.__class__._TYPE_SUPPORT is None:
                Point.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'R__DEFAULT': numpy.array((1, 1, ), dtype=numpy.int32),
        }

    @property
    def R__DEFAULT(cls):
        """Return default value for message field 'r'."""
        return numpy.array((1, 1, ), dtype=numpy.int32)


class CocoaXIK_Request(metaclass=Metaclass_CocoaXIK_Request):
    """Message class 'CocoaXIK_Request'."""

    __slots__ = [
        '_position',
        '_r',
    ]

    _fields_and_field_types = {
        'position': 'geometry_msgs/Point',
        'r': 'int32[2]',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Point'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('int32'), 2),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from geometry_msgs.msg import Point
        self.position = kwargs.get('position', Point())
        self.r = kwargs.get(
            'r', CocoaXIK_Request.R__DEFAULT)

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
        if self.position != other.position:
            return False
        if all(self.r != other.r):
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def position(self):
        """Message field 'position'."""
        return self._position

    @position.setter
    def position(self, value):
        if __debug__:
            from geometry_msgs.msg import Point
            assert \
                isinstance(value, Point), \
                "The 'position' field must be a sub message of type 'Point'"
        self._position = value

    @property
    def r(self):
        """Message field 'r'."""
        return self._r

    @r.setter
    def r(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.int32, \
                "The 'r' numpy.ndarray() must have the dtype of 'numpy.int32'"
            assert value.size == 2, \
                "The 'r' numpy.ndarray() must have a size of 2"
            self._r = value
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
                 len(value) == 2 and
                 all(isinstance(v, int) for v in value) and
                 all(val >= -2147483648 and val < 2147483648 for val in value)), \
                "The 'r' field must be a set or sequence with length 2 and each value of type 'int' and each integer in [-2147483648, 2147483647]"
        self._r = numpy.array(value, dtype=numpy.int32)


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_CocoaXIK_Response(type):
    """Metaclass of message 'CocoaXIK_Response'."""

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
                'cocoax_interfaces.srv.CocoaXIK_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__cocoa_xik__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__cocoa_xik__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__cocoa_xik__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__cocoa_xik__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__cocoa_xik__response

            from sensor_msgs.msg import JointState
            if JointState.__class__._TYPE_SUPPORT is None:
                JointState.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class CocoaXIK_Response(metaclass=Metaclass_CocoaXIK_Response):
    """Message class 'CocoaXIK_Response'."""

    __slots__ = [
        '_jointstate',
        '_flag',
    ]

    _fields_and_field_types = {
        'jointstate': 'sensor_msgs/JointState',
        'flag': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['sensor_msgs', 'msg'], 'JointState'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from sensor_msgs.msg import JointState
        self.jointstate = kwargs.get('jointstate', JointState())
        self.flag = kwargs.get('flag', bool())

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
        if self.jointstate != other.jointstate:
            return False
        if self.flag != other.flag:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def jointstate(self):
        """Message field 'jointstate'."""
        return self._jointstate

    @jointstate.setter
    def jointstate(self, value):
        if __debug__:
            from sensor_msgs.msg import JointState
            assert \
                isinstance(value, JointState), \
                "The 'jointstate' field must be a sub message of type 'JointState'"
        self._jointstate = value

    @property
    def flag(self):
        """Message field 'flag'."""
        return self._flag

    @flag.setter
    def flag(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'flag' field must be of type 'bool'"
        self._flag = value


class Metaclass_CocoaXIK(type):
    """Metaclass of service 'CocoaXIK'."""

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
                'cocoax_interfaces.srv.CocoaXIK')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__cocoa_xik

            from cocoax_interfaces.srv import _cocoa_xik
            if _cocoa_xik.Metaclass_CocoaXIK_Request._TYPE_SUPPORT is None:
                _cocoa_xik.Metaclass_CocoaXIK_Request.__import_type_support__()
            if _cocoa_xik.Metaclass_CocoaXIK_Response._TYPE_SUPPORT is None:
                _cocoa_xik.Metaclass_CocoaXIK_Response.__import_type_support__()


class CocoaXIK(metaclass=Metaclass_CocoaXIK):
    from cocoax_interfaces.srv._cocoa_xik import CocoaXIK_Request as Request
    from cocoax_interfaces.srv._cocoa_xik import CocoaXIK_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
