// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from message_info:msg/VisionDetections.idl
// generated code does not contain a copyright notice

#ifndef MESSAGE_INFO__MSG__DETAIL__VISION_DETECTIONS__STRUCT_H_
#define MESSAGE_INFO__MSG__DETAIL__VISION_DETECTIONS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'frames'
#include "message_info/msg/detail/detection_frame__struct.h"

// Struct defined in msg/VisionDetections in the package message_info.
typedef struct message_info__msg__VisionDetections
{
  std_msgs__msg__Header header;
  message_info__msg__DetectionFrame__Sequence frames;
  int64_t test;
} message_info__msg__VisionDetections;

// Struct for a sequence of message_info__msg__VisionDetections.
typedef struct message_info__msg__VisionDetections__Sequence
{
  message_info__msg__VisionDetections * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} message_info__msg__VisionDetections__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MESSAGE_INFO__MSG__DETAIL__VISION_DETECTIONS__STRUCT_H_
