# generated from rosidl_generator_py/resource/_idl.py.em
# with input from message_info:msg/RefereeTeamInfo.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'yellow_card_times'
import array  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_RefereeTeamInfo(type):
    """Metaclass of message 'RefereeTeamInfo'."""

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
                'message_info.msg.RefereeTeamInfo')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__referee_team_info
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__referee_team_info
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__referee_team_info
            cls._TYPE_SUPPORT = module.type_support_msg__msg__referee_team_info
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__referee_team_info

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class RefereeTeamInfo(metaclass=Metaclass_RefereeTeamInfo):
    """Message class 'RefereeTeamInfo'."""

    __slots__ = [
        '_name',
        '_score',
        '_red_cards',
        '_yellow_card_times',
        '_yellow_cards',
        '_timeouts',
        '_timeout_time',
        '_goalie',
    ]

    _fields_and_field_types = {
        'name': 'string',
        'score': 'uint32',
        'red_cards': 'uint32',
        'yellow_card_times': 'sequence<uint32>',
        'yellow_cards': 'uint32',
        'timeouts': 'uint32',
        'timeout_time': 'uint32',
        'goalie': 'uint32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint32')),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.name = kwargs.get('name', str())
        self.score = kwargs.get('score', int())
        self.red_cards = kwargs.get('red_cards', int())
        self.yellow_card_times = array.array('I', kwargs.get('yellow_card_times', []))
        self.yellow_cards = kwargs.get('yellow_cards', int())
        self.timeouts = kwargs.get('timeouts', int())
        self.timeout_time = kwargs.get('timeout_time', int())
        self.goalie = kwargs.get('goalie', int())

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
        if self.score != other.score:
            return False
        if self.red_cards != other.red_cards:
            return False
        if self.yellow_card_times != other.yellow_card_times:
            return False
        if self.yellow_cards != other.yellow_cards:
            return False
        if self.timeouts != other.timeouts:
            return False
        if self.timeout_time != other.timeout_time:
            return False
        if self.goalie != other.goalie:
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
    def score(self):
        """Message field 'score'."""
        return self._score

    @score.setter
    def score(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'score' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'score' field must be an unsigned integer in [0, 4294967295]"
        self._score = value

    @property
    def red_cards(self):
        """Message field 'red_cards'."""
        return self._red_cards

    @red_cards.setter
    def red_cards(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'red_cards' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'red_cards' field must be an unsigned integer in [0, 4294967295]"
        self._red_cards = value

    @property
    def yellow_card_times(self):
        """Message field 'yellow_card_times'."""
        return self._yellow_card_times

    @yellow_card_times.setter
    def yellow_card_times(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'I', \
                "The 'yellow_card_times' array.array() must have the type code of 'I'"
            self._yellow_card_times = value
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
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 4294967296 for val in value)), \
                "The 'yellow_card_times' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 4294967295]"
        self._yellow_card_times = array.array('I', value)

    @property
    def yellow_cards(self):
        """Message field 'yellow_cards'."""
        return self._yellow_cards

    @yellow_cards.setter
    def yellow_cards(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'yellow_cards' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'yellow_cards' field must be an unsigned integer in [0, 4294967295]"
        self._yellow_cards = value

    @property
    def timeouts(self):
        """Message field 'timeouts'."""
        return self._timeouts

    @timeouts.setter
    def timeouts(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'timeouts' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'timeouts' field must be an unsigned integer in [0, 4294967295]"
        self._timeouts = value

    @property
    def timeout_time(self):
        """Message field 'timeout_time'."""
        return self._timeout_time

    @timeout_time.setter
    def timeout_time(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'timeout_time' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'timeout_time' field must be an unsigned integer in [0, 4294967295]"
        self._timeout_time = value

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
            assert value >= 0 and value < 4294967296, \
                "The 'goalie' field must be an unsigned integer in [0, 4294967295]"
        self._goalie = value
