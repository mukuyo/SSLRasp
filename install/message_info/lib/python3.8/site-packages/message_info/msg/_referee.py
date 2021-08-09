# generated from rosidl_generator_py/resource/_idl.py.em
# with input from message_info:msg/Referee.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Referee(type):
    """Metaclass of message 'Referee'."""

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
                'message_info.msg.Referee')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__referee
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__referee
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__referee
            cls._TYPE_SUPPORT = module.type_support_msg__msg__referee
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__referee

            from geometry_msgs.msg import Point
            if Point.__class__._TYPE_SUPPORT is None:
                Point.__class__.__import_type_support__()

            from message_info.msg import RefereeGameEvent
            if RefereeGameEvent.__class__._TYPE_SUPPORT is None:
                RefereeGameEvent.__class__.__import_type_support__()

            from message_info.msg import RefereeTeamInfo
            if RefereeTeamInfo.__class__._TYPE_SUPPORT is None:
                RefereeTeamInfo.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Referee(metaclass=Metaclass_Referee):
    """Message class 'Referee'."""

    __slots__ = [
        '_stage',
        '_play',
        '_info',
        '_command',
        '_command_counter',
        '_yellow',
        '_blue',
        '_designated_position',
        '_game_event',
    ]

    _fields_and_field_types = {
        'stage': 'uint8',
        'play': 'boolean',
        'info': 'string',
        'command': 'uint8',
        'command_counter': 'uint32',
        'yellow': 'message_info/RefereeTeamInfo',
        'blue': 'message_info/RefereeTeamInfo',
        'designated_position': 'geometry_msgs/Point',
        'game_event': 'message_info/RefereeGameEvent',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['message_info', 'msg'], 'RefereeTeamInfo'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['message_info', 'msg'], 'RefereeTeamInfo'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Point'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['message_info', 'msg'], 'RefereeGameEvent'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.stage = kwargs.get('stage', int())
        self.play = kwargs.get('play', bool())
        self.info = kwargs.get('info', str())
        self.command = kwargs.get('command', int())
        self.command_counter = kwargs.get('command_counter', int())
        from message_info.msg import RefereeTeamInfo
        self.yellow = kwargs.get('yellow', RefereeTeamInfo())
        from message_info.msg import RefereeTeamInfo
        self.blue = kwargs.get('blue', RefereeTeamInfo())
        from geometry_msgs.msg import Point
        self.designated_position = kwargs.get('designated_position', Point())
        from message_info.msg import RefereeGameEvent
        self.game_event = kwargs.get('game_event', RefereeGameEvent())

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
        if self.stage != other.stage:
            return False
        if self.play != other.play:
            return False
        if self.info != other.info:
            return False
        if self.command != other.command:
            return False
        if self.command_counter != other.command_counter:
            return False
        if self.yellow != other.yellow:
            return False
        if self.blue != other.blue:
            return False
        if self.designated_position != other.designated_position:
            return False
        if self.game_event != other.game_event:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def stage(self):
        """Message field 'stage'."""
        return self._stage

    @stage.setter
    def stage(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'stage' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'stage' field must be an unsigned integer in [0, 255]"
        self._stage = value

    @property
    def play(self):
        """Message field 'play'."""
        return self._play

    @play.setter
    def play(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'play' field must be of type 'bool'"
        self._play = value

    @property
    def info(self):
        """Message field 'info'."""
        return self._info

    @info.setter
    def info(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'info' field must be of type 'str'"
        self._info = value

    @property
    def command(self):
        """Message field 'command'."""
        return self._command

    @command.setter
    def command(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'command' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'command' field must be an unsigned integer in [0, 255]"
        self._command = value

    @property
    def command_counter(self):
        """Message field 'command_counter'."""
        return self._command_counter

    @command_counter.setter
    def command_counter(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'command_counter' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'command_counter' field must be an unsigned integer in [0, 4294967295]"
        self._command_counter = value

    @property
    def yellow(self):
        """Message field 'yellow'."""
        return self._yellow

    @yellow.setter
    def yellow(self, value):
        if __debug__:
            from message_info.msg import RefereeTeamInfo
            assert \
                isinstance(value, RefereeTeamInfo), \
                "The 'yellow' field must be a sub message of type 'RefereeTeamInfo'"
        self._yellow = value

    @property
    def blue(self):
        """Message field 'blue'."""
        return self._blue

    @blue.setter
    def blue(self, value):
        if __debug__:
            from message_info.msg import RefereeTeamInfo
            assert \
                isinstance(value, RefereeTeamInfo), \
                "The 'blue' field must be a sub message of type 'RefereeTeamInfo'"
        self._blue = value

    @property
    def designated_position(self):
        """Message field 'designated_position'."""
        return self._designated_position

    @designated_position.setter
    def designated_position(self, value):
        if __debug__:
            from geometry_msgs.msg import Point
            assert \
                isinstance(value, Point), \
                "The 'designated_position' field must be a sub message of type 'Point'"
        self._designated_position = value

    @property
    def game_event(self):
        """Message field 'game_event'."""
        return self._game_event

    @game_event.setter
    def game_event(self, value):
        if __debug__:
            from message_info.msg import RefereeGameEvent
            assert \
                isinstance(value, RefereeGameEvent), \
                "The 'game_event' field must be a sub message of type 'RefereeGameEvent'"
        self._game_event = value
