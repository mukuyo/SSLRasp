# generated from rosidl_generator_py/resource/_idl.py.em
# with input from message_info:msg/GoalInfo.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_GoalInfo(type):
    """Metaclass of message 'GoalInfo'."""

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
            module = import_type_support('message_info')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'message_info.msg.GoalInfo')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__goal_info
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__goal_info
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__goal_info
            cls._TYPE_SUPPORT = module.type_support_msg__msg__goal_info
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__goal_info

            from geometry_msgs.msg import Pose2D
            if Pose2D.__class__._TYPE_SUPPORT is None:
                Pose2D.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GoalInfo(metaclass=Metaclass_GoalInfo):
    """Message class 'GoalInfo'."""

    __slots__ = [
        '_their',
        '_our',
        '_field_width',
        '_field_length',
        '_goal_width',
        '_goal_depth',
    ]

    _fields_and_field_types = {
        'their': 'geometry_msgs/Pose2D',
        'our': 'geometry_msgs/Pose2D',
        'field_width': 'int32',
        'field_length': 'int32',
        'goal_width': 'double',
        'goal_depth': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Pose2D'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Pose2D'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from geometry_msgs.msg import Pose2D
        self.their = kwargs.get('their', Pose2D())
        from geometry_msgs.msg import Pose2D
        self.our = kwargs.get('our', Pose2D())
        self.field_width = kwargs.get('field_width', int())
        self.field_length = kwargs.get('field_length', int())
        self.goal_width = kwargs.get('goal_width', float())
        self.goal_depth = kwargs.get('goal_depth', float())

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
        if self.their != other.their:
            return False
        if self.our != other.our:
            return False
        if self.field_width != other.field_width:
            return False
        if self.field_length != other.field_length:
            return False
        if self.goal_width != other.goal_width:
            return False
        if self.goal_depth != other.goal_depth:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def their(self):
        """Message field 'their'."""
        return self._their

    @their.setter
    def their(self, value):
        if __debug__:
            from geometry_msgs.msg import Pose2D
            assert \
                isinstance(value, Pose2D), \
                "The 'their' field must be a sub message of type 'Pose2D'"
        self._their = value

    @property
    def our(self):
        """Message field 'our'."""
        return self._our

    @our.setter
    def our(self, value):
        if __debug__:
            from geometry_msgs.msg import Pose2D
            assert \
                isinstance(value, Pose2D), \
                "The 'our' field must be a sub message of type 'Pose2D'"
        self._our = value

    @property
    def field_width(self):
        """Message field 'field_width'."""
        return self._field_width

    @field_width.setter
    def field_width(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'field_width' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'field_width' field must be an integer in [-2147483648, 2147483647]"
        self._field_width = value

    @property
    def field_length(self):
        """Message field 'field_length'."""
        return self._field_length

    @field_length.setter
    def field_length(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'field_length' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'field_length' field must be an integer in [-2147483648, 2147483647]"
        self._field_length = value

    @property
    def goal_width(self):
        """Message field 'goal_width'."""
        return self._goal_width

    @goal_width.setter
    def goal_width(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'goal_width' field must be of type 'float'"
        self._goal_width = value

    @property
    def goal_depth(self):
        """Message field 'goal_depth'."""
        return self._goal_depth

    @goal_depth.setter
    def goal_depth(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'goal_depth' field must be of type 'float'"
        self._goal_depth = value
