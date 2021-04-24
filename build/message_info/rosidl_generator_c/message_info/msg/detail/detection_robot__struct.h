// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from message_info:msg/DetectionRobot.idl
// generated code does not contain a copyright notice

#ifndef MESSAGE_INFO__MSG__DETAIL__DETECTION_ROBOT__STRUCT_H_
#define MESSAGE_INFO__MSG__DETAIL__DETECTION_ROBOT__STRUCT_H_

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

// Struct defined in msg/DetectionRobot in the package message_info.
typedef struct message_info__msg__DetectionRobot
{
  geometry_msgs__msg__Pose2D pose;
  uint8_t robot_id;
  bool is_yellow;
  bool empty;
} message_info__msg__DetectionRobot;

// Struct for a sequence of message_info__msg__DetectionRobot.
typedef struct message_info__msg__DetectionRobot__Sequence
{
  message_info__msg__DetectionRobot * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} message_info__msg__DetectionRobot__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MESSAGE_INFO__MSG__DETAIL__DETECTION_ROBOT__STRUCT_H_
