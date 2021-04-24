# generated from rosidl_generator_py/resource/_idl.py.em
# with input from message_info:msg/FieldCircularArc.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_FieldCircularArc(type):
    """Metaclass of message 'FieldCircularArc'."""

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
                'message_info.msg.FieldCircularArc')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__field_circular_arc
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__field_circular_arc
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__field_circular_arc
            cls._TYPE_SUPPORT = module.type_support_msg__msg__field_circular_arc
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__field_circular_arc

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class FieldCircularArc(metaclass=Metaclass_FieldCircularArc):
    """Message class 'FieldCircularArc'."""

    __slots__ = [
        '_name',
        '_center_x',
        '_center_y',
        '_radius',
        '_a1',
        '_a2',
        '_thickness',
    ]

    _fields_and_field_types = {
        'name': 'string',
        'center_x': 'double',
        'center_y': 'double',
        'radius': 'double',
        'a1': 'double',
        'a2': 'double',
        'thickness': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
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
        self.center_x = kwargs.get('center_x', float())
        self.center_y = kwargs.get('center_y', float())
        self.radius = kwargs.get('radius', float())
        self.a1 = kwargs.get('a1', float())
        self.a2 = kwargs.get('a2', float())
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
        if self.center_x != other.center_x:
            return False
        if self.center_y != other.center_y:
            return False
        if self.radius != other.radius:
            return False
        if self.a1 != other.a1:
            return False
        if self.a2 != other.a2:
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
    def center_x(self):
        """Message field 'center_x'."""
        return self._center_x

    @center_x.setter
    def center_x(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'center_x' field must be of type 'float'"
        self._center_x = value

    @property
    def center_y(self):
        """Message field 'center_y'."""
        return self._center_y

    @center_y.setter
    def center_y(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'center_y' field must be of type 'float'"
        self._center_y = value

    @property
    def radius(self):
        """Message field 'radius'."""
        return self._radius

    @radius.setter
    def radius(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'radius' field must be of type 'float'"
        self._radius = value

    @property
    def a1(self):
        """Message field 'a1'."""
        return self._a1

    @a1.setter
    def a1(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'a1' field must be of type 'float'"
        self._a1 = value

    @property
    def a2(self):
        """Message field 'a2'."""
        return self._a2

    @a2.setter
    def a2(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'a2' field must be of type 'float'"
        self._a2 = value

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
