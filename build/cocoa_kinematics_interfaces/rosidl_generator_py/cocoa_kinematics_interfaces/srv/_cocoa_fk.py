# generated from rosidl_generator_py/resource/_idl.py.em
# with input from cocoa_kinematics_interfaces:srv/CocoaFK.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_CocoaFK_Request(type):
    """Metaclass of message 'CocoaFK_Request'."""

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
            module = import_type_support('cocoa_kinematics_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'cocoa_kinematics_interfaces.srv.CocoaFK_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__cocoa_fk__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__cocoa_fk__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__cocoa_fk__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__cocoa_fk__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__cocoa_fk__request

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


class CocoaFK_Request(metaclass=Metaclass_CocoaFK_Request):
    """Message class 'CocoaFK_Request'."""

    __slots__ = [
        '_jointstate',
    ]

    _fields_and_field_types = {
        'jointstate': 'sensor_msgs/JointState',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['sensor_msgs', 'msg'], 'JointState'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from sensor_msgs.msg import JointState
        self.jointstate = kwargs.get('jointstate', JointState())

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


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_CocoaFK_Response(type):
    """Metaclass of message 'CocoaFK_Response'."""

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
            module = import_type_support('cocoa_kinematics_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'cocoa_kinematics_interfaces.srv.CocoaFK_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__cocoa_fk__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__cocoa_fk__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__cocoa_fk__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__cocoa_fk__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__cocoa_fk__response

            from geometry_msgs.msg import Point
            if Point.__class__._TYPE_SUPPORT is None:
                Point.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class CocoaFK_Response(metaclass=Metaclass_CocoaFK_Response):
    """Message class 'CocoaFK_Response'."""

    __slots__ = [
        '_positionendeffector',
    ]

    _fields_and_field_types = {
        'positionendeffector': 'geometry_msgs/Point',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Point'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from geometry_msgs.msg import Point
        self.positionendeffector = kwargs.get('positionendeffector', Point())

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
        if self.positionendeffector != other.positionendeffector:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def positionendeffector(self):
        """Message field 'positionendeffector'."""
        return self._positionendeffector

    @positionendeffector.setter
    def positionendeffector(self, value):
        if __debug__:
            from geometry_msgs.msg import Point
            assert \
                isinstance(value, Point), \
                "The 'positionendeffector' field must be a sub message of type 'Point'"
        self._positionendeffector = value


class Metaclass_CocoaFK(type):
    """Metaclass of service 'CocoaFK'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('cocoa_kinematics_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'cocoa_kinematics_interfaces.srv.CocoaFK')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__cocoa_fk

            from cocoa_kinematics_interfaces.srv import _cocoa_fk
            if _cocoa_fk.Metaclass_CocoaFK_Request._TYPE_SUPPORT is None:
                _cocoa_fk.Metaclass_CocoaFK_Request.__import_type_support__()
            if _cocoa_fk.Metaclass_CocoaFK_Response._TYPE_SUPPORT is None:
                _cocoa_fk.Metaclass_CocoaFK_Response.__import_type_support__()


class CocoaFK(metaclass=Metaclass_CocoaFK):
    from cocoa_kinematics_interfaces.srv._cocoa_fk import CocoaFK_Request as Request
    from cocoa_kinematics_interfaces.srv._cocoa_fk import CocoaFK_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
