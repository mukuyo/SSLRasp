# generated from rosidl_generator_py/resource/_idl.py.em
# with input from message_info:msg/Role.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'defense'
# Member 'offense'
import numpy  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Role(type):
    """Metaclass of message 'Role'."""

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
                'message_info.msg.Role')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__role
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__role
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__role
            cls._TYPE_SUPPORT = module.type_support_msg__msg__role
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__role

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Role(metaclass=Metaclass_Role):
    """Message class 'Role'."""

    __slots__ = [
        '_attacker',
        '_goalie',
        '_defense',
        '_offense',
        '_offense_count',
        '_defense_count',
    ]

    _fields_and_field_types = {
        'attacker': 'int32',
        'goalie': 'int32',
        'defense': 'int32[10]',
        'offense': 'int32[10]',
        'offense_count': 'int32',
        'defense_count': 'int32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('int32'), 10),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('int32'), 10),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.attacker = kwargs.get('attacker', int())
        self.goalie = kwargs.get('goalie', int())
        if 'defense' not in kwargs:
            self.defense = numpy.zeros(10, dtype=numpy.int32)
        else:
            self.defense = numpy.array(kwargs.get('defense'), dtype=numpy.int32)
            assert self.defense.shape == (10, )
        if 'offense' not in kwargs:
            self.offense = numpy.zeros(10, dtype=numpy.int32)
        else:
            self.offense = numpy.array(kwargs.get('offense'), dtype=numpy.int32)
            assert self.offense.shape == (10, )
        self.offense_count = kwargs.get('offense_count', int())
        self.defense_count = kwargs.get('defense_count', int())

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
        if self.attacker != other.attacker:
            return False
        if self.goalie != other.goalie:
            return False
        if all(self.defense != other.defense):
            return False
        if all(self.offense != other.offense):
            return False
        if self.offense_count != other.offense_count:
            return False
        if self.defense_count != other.defense_count:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def attacker(self):
        """Message field 'attacker'."""
        return self._attacker

    @attacker.setter
    def attacker(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'attacker' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'attacker' field must be an integer in [-2147483648, 2147483647]"
        self._attacker = value

    @property
    def goalie(self):
        """Message field 'goalie'."""
        return self._goalie

    @goalie.setter
    def goalie(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'goalie' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'goalie' field must be an integer in [-2147483648, 2147483647]"
        self._goalie = value

    @property
    def defense(self):
        """Message field 'defense'."""
        return self._defense

    @defense.setter
    def defense(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.int32, \
                "The 'defense' numpy.ndarray() must have the dtype of 'numpy.int32'"
            assert value.size == 10, \
                "The 'defense' numpy.ndarray() must have a size of 10"
            self._defense = value
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
                 len(value) == 10 and
                 all(isinstance(v, int) for v in value) and
                 all(val >= -2147483648 and val < 2147483648 for val in value)), \
                "The 'defense' field must be a set or sequence with length 10 and each value of type 'int' and each integer in [-2147483648, 2147483647]"
        self._defense = numpy.array(value, dtype=numpy.int32)

    @property
    def offense(self):
        """Message field 'offense'."""
        return self._offense

    @offense.setter
    def offense(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.int32, \
                "The 'offense' numpy.ndarray() must have the dtype of 'numpy.int32'"
            assert value.size == 10, \
                "The 'offense' numpy.ndarray() must have a size of 10"
            self._offense = value
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
                 len(value) == 10 and
                 all(isinstance(v, int) for v in value) and
                 all(val >= -2147483648 and val < 2147483648 for val in value)), \
                "The 'offense' field must be a set or sequence with length 10 and each value of type 'int' and each integer in [-2147483648, 2147483647]"
        self._offense = numpy.array(value, dtype=numpy.int32)

    @property
    def offense_count(self):
        """Message field 'offense_count'."""
        return self._offense_count

    @offense_count.setter
    def offense_count(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'offense_count' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'offense_count' field must be an integer in [-2147483648, 2147483647]"
        self._offense_count = value

    @property
    def defense_count(self):
        """Message field 'defense_count'."""
        return self._defense_count

    @defense_count.setter
    def defense_count(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'defense_count' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'defense_count' field must be an integer in [-2147483648, 2147483647]"
        self._defense_count = value
