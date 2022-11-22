# generated from rosidl_generator_py/resource/_idl.py.em
# with input from cocoav_interfaces:srv/CocoaTest.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_CocoaTest_Request(type):
    """Metaclass of message 'CocoaTest_Request'."""

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
            module = import_type_support('cocoav_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'cocoav_interfaces.srv.CocoaTest_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__cocoa_test__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__cocoa_test__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__cocoa_test__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__cocoa_test__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__cocoa_test__request

            from std_msgs.msg import Float64
            if Float64.__class__._TYPE_SUPPORT is None:
                Float64.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class CocoaTest_Request(metaclass=Metaclass_CocoaTest_Request):
    """Message class 'CocoaTest_Request'."""

    __slots__ = [
        '_check',
    ]

    _fields_and_field_types = {
        'check': 'std_msgs/Float64',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Float64'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Float64
        self.check = kwargs.get('check', Float64())

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
        if self.check != other.check:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def check(self):
        """Message field 'check'."""
        return self._check

    @check.setter
    def check(self, value):
        if __debug__:
            from std_msgs.msg import Float64
            assert \
                isinstance(value, Float64), \
                "The 'check' field must be a sub message of type 'Float64'"
        self._check = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_CocoaTest_Response(type):
    """Metaclass of message 'CocoaTest_Response'."""

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
            module = import_type_support('cocoav_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'cocoav_interfaces.srv.CocoaTest_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__cocoa_test__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__cocoa_test__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__cocoa_test__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__cocoa_test__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__cocoa_test__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class CocoaTest_Response(metaclass=Metaclass_CocoaTest_Response):
    """Message class 'CocoaTest_Response'."""

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


class Metaclass_CocoaTest(type):
    """Metaclass of service 'CocoaTest'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('cocoav_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'cocoav_interfaces.srv.CocoaTest')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__cocoa_test

            from cocoav_interfaces.srv import _cocoa_test
            if _cocoa_test.Metaclass_CocoaTest_Request._TYPE_SUPPORT is None:
                _cocoa_test.Metaclass_CocoaTest_Request.__import_type_support__()
            if _cocoa_test.Metaclass_CocoaTest_Response._TYPE_SUPPORT is None:
                _cocoa_test.Metaclass_CocoaTest_Response.__import_type_support__()


class CocoaTest(metaclass=Metaclass_CocoaTest):
    from cocoav_interfaces.srv._cocoa_test import CocoaTest_Request as Request
    from cocoav_interfaces.srv._cocoa_test import CocoaTest_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
