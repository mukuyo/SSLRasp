// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from message_info:msg/RefereeGameEvent.idl
// generated code does not contain a copyright notice

#ifndef MESSAGE_INFO__MSG__DETAIL__REFEREE_GAME_EVENT__STRUCT_H_
#define MESSAGE_INFO__MSG__DETAIL__REFEREE_GAME_EVENT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'message'
#include "rosidl_runtime_c/string.h"

// Struct defined in msg/RefereeGameEvent in the package message_info.
typedef struct message_info__msg__RefereeGameEvent
{
  uint8_t game_event_type;
  uint8_t originator_team;
  uint32_t originator_bot_id;
  rosidl_runtime_c__String message;
} message_info__msg__RefereeGameEvent;

// Struct for a sequence of message_info__msg__RefereeGameEvent.
typedef struct message_info__msg__RefereeGameEvent__Sequence
{
  message_info__msg__RefereeGameEvent * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} message_info__msg__RefereeGameEvent__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MESSAGE_INFO__MSG__DETAIL__REFEREE_GAME_EVENT__STRUCT_H_
