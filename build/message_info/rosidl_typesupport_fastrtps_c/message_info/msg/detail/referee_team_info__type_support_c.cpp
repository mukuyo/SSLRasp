// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from message_info:msg/RefereeTeamInfo.idl
// generated code does not contain a copyright notice
#include "message_info/msg/detail/referee_team_info__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "message_info/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "message_info/msg/detail/referee_team_info__struct.h"
#include "message_info/msg/detail/referee_team_info__functions.h"
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

#include "rosidl_runtime_c/primitives_sequence.h"  // yellow_card_times
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // yellow_card_times
#include "rosidl_runtime_c/string.h"  // name
#include "rosidl_runtime_c/string_functions.h"  // name

// forward declare type support functions


using _RefereeTeamInfo__ros_msg_type = message_info__msg__RefereeTeamInfo;

static bool _RefereeTeamInfo__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _RefereeTeamInfo__ros_msg_type * ros_message = static_cast<const _RefereeTeamInfo__ros_msg_type *>(untyped_ros_message);
  // Field name: name
  {
    const rosidl_runtime_c__String * str = &ros_message->name;
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

  // Field name: score
  {
    cdr << ros_message->score;
  }

  // Field name: red_cards
  {
    cdr << ros_message->red_cards;
  }

  // Field name: yellow_card_times
  {
    size_t size = ros_message->yellow_card_times.size;
    auto array_ptr = ros_message->yellow_card_times.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: yellow_cards
  {
    cdr << ros_message->yellow_cards;
  }

  // Field name: timeouts
  {
    cdr << ros_message->timeouts;
  }

  // Field name: timeout_time
  {
    cdr << ros_message->timeout_time;
  }

  // Field name: goalie
  {
    cdr << ros_message->goalie;
  }

  return true;
}

static bool _RefereeTeamInfo__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _RefereeTeamInfo__ros_msg_type * ros_message = static_cast<_RefereeTeamInfo__ros_msg_type *>(untyped_ros_message);
  // Field name: name
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->name.data) {
      rosidl_runtime_c__String__init(&ros_message->name);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->name,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'name'\n");
      return false;
    }
  }

  // Field name: score
  {
    cdr >> ros_message->score;
  }

  // Field name: red_cards
  {
    cdr >> ros_message->red_cards;
  }

  // Field name: yellow_card_times
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->yellow_card_times.data) {
      rosidl_runtime_c__uint32__Sequence__fini(&ros_message->yellow_card_times);
    }
    if (!rosidl_runtime_c__uint32__Sequence__init(&ros_message->yellow_card_times, size)) {
      return "failed to create array for field 'yellow_card_times'";
    }
    auto array_ptr = ros_message->yellow_card_times.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: yellow_cards
  {
    cdr >> ros_message->yellow_cards;
  }

  // Field name: timeouts
  {
    cdr >> ros_message->timeouts;
  }

  // Field name: timeout_time
  {
    cdr >> ros_message->timeout_time;
  }

  // Field name: goalie
  {
    cdr >> ros_message->goalie;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_message_info
size_t get_serialized_size_message_info__msg__RefereeTeamInfo(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _RefereeTeamInfo__ros_msg_type * ros_message = static_cast<const _RefereeTeamInfo__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->name.size + 1);
  // field.name score
  {
    size_t item_size = sizeof(ros_message->score);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name red_cards
  {
    size_t item_size = sizeof(ros_message->red_cards);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name yellow_card_times
  {
    size_t array_size = ros_message->yellow_card_times.size;
    auto array_ptr = ros_message->yellow_card_times.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name yellow_cards
  {
    size_t item_size = sizeof(ros_message->yellow_cards);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name timeouts
  {
    size_t item_size = sizeof(ros_message->timeouts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name timeout_time
  {
    size_t item_size = sizeof(ros_message->timeout_time);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name goalie
  {
    size_t item_size = sizeof(ros_message->goalie);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _RefereeTeamInfo__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_message_info__msg__RefereeTeamInfo(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_message_info
size_t max_serialized_size_message_info__msg__RefereeTeamInfo(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: name
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: score
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: red_cards
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: yellow_card_times
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: yellow_cards
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: timeouts
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: timeout_time
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: goalie
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _RefereeTeamInfo__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_message_info__msg__RefereeTeamInfo(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_RefereeTeamInfo = {
  "message_info::msg",
  "RefereeTeamInfo",
  _RefereeTeamInfo__cdr_serialize,
  _RefereeTeamInfo__cdr_deserialize,
  _RefereeTeamInfo__get_serialized_size,
  _RefereeTeamInfo__max_serialized_size
};

static rosidl_message_type_support_t _RefereeTeamInfo__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_RefereeTeamInfo,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, message_info, msg, RefereeTeamInfo)() {
  return &_RefereeTeamInfo__type_support;
}

#if defined(__cplusplus)
}
#endif
