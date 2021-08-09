// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from message_info:msg/Referee.idl
// generated code does not contain a copyright notice

#ifndef MESSAGE_INFO__MSG__DETAIL__REFEREE__STRUCT_H_
#define MESSAGE_INFO__MSG__DETAIL__REFEREE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "rosidl_runtime_c/string.h"
// Member 'yellow'
// Member 'blue'
#include "message_info/msg/detail/referee_team_info__struct.h"
// Member 'designated_position'
#include "geometry_msgs/msg/detail/point__struct.h"
// Member 'game_event'
#include "message_info/msg/detail/referee_game_event__struct.h"

// Struct defined in msg/Referee in the package message_info.
typedef struct message_info__msg__Referee
{
  uint8_t stage;
  bool play;
  rosidl_runtime_c__String info;
  uint8_t command;
  uint32_t command_counter;
  message_info__msg__RefereeTeamInfo yellow;
  message_info__msg__RefereeTeamInfo blue;
  geometry_msgs__msg__Point designated_position;
  message_info__msg__RefereeGameEvent game_event;
} message_info__msg__Referee;

// Struct for a sequence of message_info__msg__Referee.
typedef struct message_info__msg__Referee__Sequence
{
  message_info__msg__Referee * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} message_info__msg__Referee__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MESSAGE_INFO__MSG__DETAIL__REFEREE__STRUCT_H_
