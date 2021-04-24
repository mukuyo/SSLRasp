# generated from rosidl_generator_py/resource/_idl.py.em
# with input from message_info:msg/RefereeGameEvent.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_RefereeGameEvent(type):
    """Metaclass of message 'RefereeGameEvent'."""

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
                'message_info.msg.RefereeGameEvent')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__referee_game_event
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__referee_game_event
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__referee_game_event
            cls._TYPE_SUPPORT = module.type_support_msg__msg__referee_game_event
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__referee_game_event

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class RefereeGameEvent(metaclass=Metaclass_RefereeGameEvent):
    """Message class 'RefereeGameEvent'."""

    __slots__ = [
        '_game_event_type',
        '_originator_team',
        '_originator_bot_id',
        '_message',
    ]

    _fields_and_field_types = {
        'game_event_type': 'uint8',
        'originator_team': 'uint8',
        'originator_bot_id': 'uint32',
        'message': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.game_event_type = kwargs.get('game_event_type', int())
        self.originator_team = kwargs.get('originator_team', int())
        self.originator_bot_id = kwargs.get('originator_bot_id', int())
        self.message = kwargs.get('message', str())

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
        if self.game_event_type != other.game_event_type:
            return False
        if self.originator_team != other.originator_team:
            return False
        if self.originator_bot_id != other.originator_bot_id:
            return False
        if self.message != other.message:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def game_event_type(self):
        """Message field 'game_event_type'."""
        return self._game_event_type

    @game_event_type.setter
    def game_event_type(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'game_event_type' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'game_event_type' field must be an unsigned integer in [0, 255]"
        self._game_event_type = value

    @property
    def originator_team(self):
        """Message field 'originator_team'."""
        return self._originator_team

    @originator_team.setter
    def originator_team(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'originator_team' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'originator_team' field must be an unsigned integer in [0, 255]"
        self._originator_team = value

    @property
    def originator_bot_id(self):
        """Message field 'originator_bot_id'."""
        return self._originator_bot_id

    @originator_bot_id.setter
    def originator_bot_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'originator_bot_id' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'originator_bot_id' field must be an unsigned integer in [0, 4294967295]"
        self._originator_bot_id = value

    @property
    def message(self):
        """Message field 'message'."""
        return self._message

    @message.setter
    def message(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'message' field must be of type 'str'"
        self._message = value
