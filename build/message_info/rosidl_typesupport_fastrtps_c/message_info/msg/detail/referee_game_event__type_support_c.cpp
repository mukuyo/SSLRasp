// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from message_info:msg/RefereeGameEvent.idl
// generated code does not contain a copyright notice
#include "message_info/msg/detail/referee_game_event__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "message_info/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "message_info/msg/detail/referee_game_event__struct.h"
#include "message_info/msg/detail/referee_game_event__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/string.h"  // message
#include "rosidl_runtime_c/string_functions.h"  // message

// forward declare type support functions


using _RefereeGameEvent__ros_msg_type = message_info__msg__RefereeGameEvent;

static bool _RefereeGameEvent__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _RefereeGameEvent__ros_msg_type * ros_message = static_cast<const _RefereeGameEvent__ros_msg_type *>(untyped_ros_message);
  // Field name: game_event_type
  {
    cdr << ros_message->game_event_type;
  }

  // Field name: originator_team
  {
    cdr << ros_message->originator_team;
  }

  // Field name: originator_bot_id
  {
    cdr << ros_message->originator_bot_id;
  }

  // Field name: message
  {
    const rosidl_runtime_c__String * str = &ros_message->message;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  return true;
}

static bool _RefereeGameEvent__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _RefereeGameEvent__ros_msg_type * ros_message = static_cast<_RefereeGameEvent__ros_msg_type *>(untyped_ros_message);
  // Field name: game_event_type
  {
    cdr >> ros_message->game_event_type;
  }

  // Field name: originator_team
  {
    cdr >> ros_message->originator_team;
  }

  // Field name: originator_bot_id
  {
    cdr >> ros_message->originator_bot_id;
  }

  // Field name: message
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->message.data) {
      rosidl_runtime_c__String__init(&ros_message->message);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->message,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'message'\n");
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_message_info
size_t get_serialized_size_message_info__msg__RefereeGameEvent(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _RefereeGameEvent__ros_msg_type * ros_message = static_cast<const _RefereeGameEvent__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name game_event_type
  {
    size_t item_size = sizeof(ros_message->game_event_type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name originator_team
  {
    size_t item_size = sizeof(ros_message->originator_team);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name originator_bot_id
  {
    size_t item_size = sizeof(ros_message->originator_bot_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name message
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->message.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _RefereeGameEvent__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_message_info__msg__RefereeGameEvent(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_message_info
size_t max_serialized_size_message_info__msg__RefereeGameEvent(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: game_event_type
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: originator_team
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: originator_bot_id
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: message
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _RefereeGameEvent__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_message_info__msg__RefereeGameEvent(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_RefereeGameEvent = {
  "message_info::msg",
  "RefereeGameEvent",
  _RefereeGameEvent__cdr_serialize,
  _RefereeGameEvent__cdr_deserialize,
  _RefereeGameEvent__get_serialized_size,
  _RefereeGameEvent__max_serialized_size
};

static rosidl_message_type_support_t _RefereeGameEvent__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_RefereeGameEvent,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, message_info, msg, RefereeGameEvent)() {
  return &_RefereeGameEvent__type_support;
}

#if defined(__cplusplus)
}
#endif
