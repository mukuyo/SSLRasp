# generated from rosidl_generator_py/resource/_idl.py.em
# with input from message_info:msg/FieldLineSegment.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_FieldLineSegment(type):
    """Metaclass of message 'FieldLineSegment'."""

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
                'message_info.msg.FieldLineSegment')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__field_line_segment
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__field_line_segment
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__field_line_segment
            cls._TYPE_SUPPORT = module.type_support_msg__msg__field_line_segment
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__field_line_segment

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class FieldLineSegment(metaclass=Metaclass_FieldLineSegment):
    """Message class 'FieldLineSegment'."""

    __slots__ = [
        '_name',
        '_p1_x',
        '_p1_y',
        '_p2_x',
        '_p2_y',
        '_thickness',
    ]

    _fields_and_field_types = {
        'name': 'string',
        'p1_x': 'double',
        'p1_y': 'double',
        'p2_x': 'double',
        'p2_y': 'double',
        'thickness': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.name = kwargs.get('name', str())
        self.p1_x = kwargs.get('p1_x', float())
        self.p1_y = kwargs.get('p1_y', float())
        self.p2_x = kwargs.get('p2_x', float())
        self.p2_y = kwargs.get('p2_y', float())
        self.thickness = kwargs.get('thickness', float())

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
        if self.p1_x != other.p1_x:
            return False
        if self.p1_y != other.p1_y:
            return False
        if self.p2_x != other.p2_x:
            return False
        if self.p2_y != other.p2_y:
            return False
        if self.thickness != other.thickness:
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
            assert \
                isinstance(value, str), \
                "The 'name' field must be of type 'str'"
        self._name = value

    @property
    def p1_x(self):
        """Message field 'p1_x'."""
        return self._p1_x

    @p1_x.setter
    def p1_x(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'p1_x' field must be of type 'float'"
        self._p1_x = value

    @property
    def p1_y(self):
        """Message field 'p1_y'."""
        return self._p1_y

    @p1_y.setter
    def p1_y(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'p1_y' field must be of type 'float'"
        self._p1_y = value

    @property
    def p2_x(self):
        """Message field 'p2_x'."""
        return self._p2_x

    @p2_x.setter
    def p2_x(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'p2_x' field must be of type 'float'"
        self._p2_x = value

    @property
    def p2_y(self):
        """Message field 'p2_y'."""
        return self._p2_y

    @p2_y.setter
    def p2_y(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'p2_y' field must be of type 'float'"
        self._p2_y = value

    @property
    def thickness(self):
        """Message field 'thickness'."""
        return self._thickness

    @thickness.setter
    def thickness(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'thickness' field must be of type 'float'"
        self._thickness = value
