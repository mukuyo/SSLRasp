# generated from rosidl_generator_py/resource/_idl.py.em
# with input from message_info:msg/Info.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Info(type):
    """Metaclass of message 'Info'."""

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
                'message_info.msg.Info')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__info
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__info
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__info
            cls._TYPE_SUPPORT = module.type_support_msg__msg__info
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__info

            from message_info.msg import DetectionFrame
            if DetectionFrame.__class__._TYPE_SUPPORT is None:
                DetectionFrame.__class__.__import_type_support__()

            from message_info.msg import Role
            if Role.__class__._TYPE_SUPPORT is None:
                Role.__class__.__import_type_support__()

            from message_info.msg import VisionGeometry
            if VisionGeometry.__class__._TYPE_SUPPORT is None:
                VisionGeometry.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Info(metaclass=Metaclass_Info):
    """Message class 'Info'."""

    __slots__ = [
        '_name',
        '_frame',
        '_geometry',
        '_role',
    ]

    _fields_and_field_types = {
        'name': 'sequence<string>',
        'frame': 'message_info/DetectionFrame',
        'geometry': 'message_info/VisionGeometry',
        'role': 'message_info/Role',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['message_info', 'msg'], 'DetectionFrame'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['message_info', 'msg'], 'VisionGeometry'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['message_info', 'msg'], 'Role'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.name = kwargs.get('name', [])
        from message_info.msg import DetectionFrame
        self.frame = kwargs.get('frame', DetectionFrame())
        from message_info.msg import VisionGeometry
        self.geometry = kwargs.get('geometry', VisionGeometry())
        from message_info.msg import Role
        self.role = kwargs.get('role', Role())

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
        if self.name != other.name:
            return False
        if self.frame != other.frame:
            return False
        if self.geometry != other.geometry:
            return False
        if self.role != other.role:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def name(self):
        """Message field 'name'."""
        return self._name

    @name.setter
    def name(self, value):
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
                 all(isinstance(v, str) for v in value) and
                 True), \
                "The 'name' field must be a set or sequence and each value of type 'str'"
        self._name = value

    @property
    def frame(self):
        """Message field 'frame'."""
        return self._frame

    @frame.setter
    def frame(self, value):
        if __debug__:
            from message_info.msg import DetectionFrame
            assert \
                isinstance(value, DetectionFrame), \
                "The 'frame' field must be a sub message of type 'DetectionFrame'"
        self._frame = value

    @property
    def geometry(self):
        """Message field 'geometry'."""
        return self._geometry

    @geometry.setter
    def geometry(self, value):
        if __debug__:
            from message_info.msg import VisionGeometry
            assert \
                isinstance(value, VisionGeometry), \
                "The 'geometry' field must be a sub message of type 'VisionGeometry'"
        self._geometry = value

    @property
    def role(self):
        """Message field 'role'."""
        return self._role

    @role.setter
    def role(self, value):
        if __debug__:
            from message_info.msg import Role
            assert \
                isinstance(value, Role), \
                "The 'role' field must be a sub message of type 'Role'"
        self._role = value
