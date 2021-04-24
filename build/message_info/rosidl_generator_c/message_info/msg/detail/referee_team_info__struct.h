// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from message_info:msg/RefereeTeamInfo.idl
// generated code does not contain a copyright notice

#ifndef MESSAGE_INFO__MSG__DETAIL__REFEREE_TEAM_INFO__STRUCT_H_
#define MESSAGE_INFO__MSG__DETAIL__REFEREE_TEAM_INFO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'name'
#include "rosidl_runtime_c/string.h"
// Member 'yellow_card_times'
#include "rosidl_runtime_c/primitives_sequence.h"

// Struct defined in msg/RefereeTeamInfo in the package message_info.
typedef struct message_info__msg__RefereeTeamInfo
{
  rosidl_runtime_c__String name;
  uint32_t score;
  uint32_t red_cards;
  rosidl_runtime_c__uint32__Sequence yellow_card_times;
  uint32_t yellow_cards;
  uint32_t timeouts;
  uint32_t timeout_time;
  uint32_t goalie;
} message_info__msg__RefereeTeamInfo;

// Struct for a sequence of message_info__msg__RefereeTeamInfo.
typedef struct message_info__msg__RefereeTeamInfo__Sequence
{
  message_info__msg__RefereeTeamInfo * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} message_info__msg__RefereeTeamInfo__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MESSAGE_INFO__MSG__DETAIL__REFEREE_TEAM_INFO__STRUCT_H_
