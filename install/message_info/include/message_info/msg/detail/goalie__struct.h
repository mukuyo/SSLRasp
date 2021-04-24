// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from message_info:msg/Goalie.idl
// generated code does not contain a copyright notice

#ifndef MESSAGE_INFO__MSG__DETAIL__GOALIE__STRUCT_H_
#define MESSAGE_INFO__MSG__DETAIL__GOALIE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'pose'
#include "geometry_msgs/msg/detail/pose2_d__struct.h"

// Struct defined in msg/Goalie in the package message_info.
typedef struct message_info__msg__Goalie
{
  geometry_msgs__msg__Pose2D pose;
} message_info__msg__Goalie;

// Struct for a sequence of message_info__msg__Goalie.
typedef struct message_info__msg__Goalie__Sequence
{
  message_info__msg__Goalie * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} message_info__msg__Goalie__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MESSAGE_INFO__MSG__DETAIL__GOALIE__STRUCT_H_
