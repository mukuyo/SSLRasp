// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from message_info:msg/Referee.idl
// generated code does not contain a copyright notice
#include "message_info/msg/detail/referee__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "message_info/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "message_info/msg/detail/referee__struct.h"
#include "message_info/msg/detail/referee__functions.h"
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

#include "geometry_msgs/msg/detail/point__functions.h"  // designated_position
#include "message_info/msg/detail/referee_game_event__functions.h"  // game_event
#include "message_info/msg/detail/referee_team_info__functions.h"  // blue, yellow
#include "rosidl_runtime_c/string.h"  // info
#include "rosidl_runtime_c/string_functions.h"  // info

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_message_info
size_t get_serialized_size_geometry_msgs__msg__Point(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_message_info
size_t max_serialized_size_geometry_msgs__msg__Point(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_message_info
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Point)();
size_t get_serialized_size_message_info__msg__RefereeGameEvent(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_message_info__msg__RefereeGameEvent(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, message_info, msg, RefereeGameEvent)();
size_t get_serialized_size_message_info__msg__RefereeTeamInfo(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_message_info__msg__RefereeTeamInfo(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, message_info, msg, RefereeTeamInfo)();


using _Referee__ros_msg_type = message_info__msg__Referee;

static bool _Referee__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Referee__ros_msg_type * ros_message = static_cast<const _Referee__ros_msg_type *>(untyped_ros_message);
  // Field name: stage
  {
    cdr << ros_message->stage;
  }

  // Field name: play
  {
    cdr << (ros_message->play ? true : false);
  }

  // Field name: info
  {
    const rosidl_runtime_c__String * str = &ros_message->info;
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

  // Field name: command
  {
    cdr << ros_message->command;
  }

  // Field name: command_counter
  {
    cdr << ros_message->command_counter;
  }

  // Field name: yellow
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, message_info, msg, RefereeTeamInfo
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->yellow, cdr))
    {
      return false;
    }
  }

  // Field name: blue
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, message_info, msg, RefereeTeamInfo
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->blue, cdr))
    {
      return false;
    }
  }

  // Field name: designated_position
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Point
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->designated_position, cdr))
    {
      return false;
    }
  }

  // Field name: game_event
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, message_info, msg, RefereeGameEvent
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->game_event, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _Referee__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Referee__ros_msg_type * ros_message = static_cast<_Referee__ros_msg_type *>(untyped_ros_message);
  // Field name: stage
  {
    cdr >> ros_message->stage;
  }

  // Field name: play
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->play = tmp ? true : false;
  }

  // Field name: info
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->info.data) {
      rosidl_runtime_c__String__init(&ros_message->info);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->info,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'info'\n");
      return false;
    }
  }

  // Field name: command
  {
    cdr >> ros_message->command;
  }

  // Field name: command_counter
  {
    cdr >> ros_message->command_counter;
  }

  // Field name: yellow
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, message_info, msg, RefereeTeamInfo
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->yellow))
    {
      return false;
    }
  }

  // Field name: blue
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, message_info, msg, RefereeTeamInfo
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->blue))
    {
      return false;
    }
  }

  // Field name: designated_position
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Point
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->designated_position))
    {
      return false;
    }
  }

  // Field name: game_event
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, message_info, msg, RefereeGameEvent
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->game_event))
    {
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_message_info
size_t get_serialized_size_message_info__msg__Referee(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Referee__ros_msg_type * ros_message = static_cast<const _Referee__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name stage
  {
    size_t item_size = sizeof(ros_message->stage);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name play
  {
    size_t item_size = sizeof(ros_message->play);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name info
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->info.size + 1);
  // field.name command
  {
    size_t item_size = sizeof(ros_message->command);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name command_counter
  {
    size_t item_size = sizeof(ros_message->command_counter);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name yellow

  current_alignment += get_serialized_size_message_info__msg__RefereeTeamInfo(
    &(ros_message->yellow), current_alignment);
  // field.name blue

  current_alignment += get_serialized_size_message_info__msg__RefereeTeamInfo(
    &(ros_message->blue), current_alignment);
  // field.name designated_position

  current_alignment += get_serialized_size_geometry_msgs__msg__Point(
    &(ros_message->designated_position), current_alignment);
  // field.name game_event

  current_alignment += get_serialized_size_message_info__msg__RefereeGameEvent(
    &(ros_message->game_event), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _Referee__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_message_info__msg__Referee(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_message_info
size_t max_serialized_size_message_info__msg__Referee(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: stage
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: play
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: info
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: command
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: command_counter
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: yellow
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_message_info__msg__RefereeTeamInfo(
        full_bounded, current_alignment);
    }
  }
  // member: blue
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_message_info__msg__RefereeTeamInfo(
        full_bounded, current_alignment);
    }
  }
  // member: designated_position
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_geometry_msgs__msg__Point(
        full_bounded, current_alignment);
    }
  }
  // member: game_event
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_message_info__msg__RefereeGameEvent(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _Referee__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_message_info__msg__Referee(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_Referee = {
  "message_info::msg",
  "Referee",
  _Referee__cdr_serialize,
  _Referee__cdr_deserialize,
  _Referee__get_serialized_size,
  _Referee__max_serialized_size
};

static rosidl_message_type_support_t _Referee__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Referee,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, message_info, msg, Referee)() {
  return &_Referee__type_support;
}

#if defined(__cplusplus)
}
#endif
