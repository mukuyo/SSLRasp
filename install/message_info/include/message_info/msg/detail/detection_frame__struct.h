// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from message_info:msg/DetectionFrame.idl
// generated code does not contain a copyright notice

#ifndef MESSAGE_INFO__MSG__DETAIL__DETECTION_FRAME__STRUCT_H_
#define MESSAGE_INFO__MSG__DETAIL__DETECTION_FRAME__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'balls'
// Member 'ball'
#include "message_info/msg/detail/detection_ball__struct.h"
// Member 'robots_yellow'
// Member 'robots_blue'
// Member 'our_robots'
// Member 'their_robots'
#include "message_info/msg/detail/detection_robot__struct.h"

// Struct defined in msg/DetectionFrame in the package message_info.
typedef struct message_info__msg__DetectionFrame
{
  double t_capture;
  double t_sent;
  uint32_t camera_id;
  message_info__msg__DetectionBall__Sequence balls;
  message_info__msg__DetectionRobot__Sequence robots_yellow;
  message_info__msg__DetectionRobot__Sequence robots_blue;
  message_info__msg__DetectionRobot our_robots[16];
  message_info__msg__DetectionRobot their_robots[16];
  message_info__msg__DetectionBall ball;
} message_info__msg__DetectionFrame;

// Struct for a sequence of message_info__msg__DetectionFrame.
typedef struct message_info__msg__DetectionFrame__Sequence
{
  message_info__msg__DetectionFrame * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} message_info__msg__DetectionFrame__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MESSAGE_INFO__MSG__DETAIL__DETECTION_FRAME__STRUCT_H_
