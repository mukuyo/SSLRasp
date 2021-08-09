// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from message_info:msg/Info.idl
// generated code does not contain a copyright notice

#ifndef MESSAGE_INFO__MSG__DETAIL__INFO__STRUCT_H_
#define MESSAGE_INFO__MSG__DETAIL__INFO__STRUCT_H_

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
// Member 'frame'
#include "message_info/msg/detail/detection_frame__struct.h"
// Member 'geometry'
#include "message_info/msg/detail/vision_geometry__struct.h"
// Member 'role'
#include "message_info/msg/detail/role__struct.h"

// Struct defined in msg/Info in the package message_info.
typedef struct message_info__msg__Info
{
  rosidl_runtime_c__String__Sequence name;
  message_info__msg__DetectionFrame frame;
  message_info__msg__VisionGeometry geometry;
  message_info__msg__Role role;
} message_info__msg__Info;

// Struct for a sequence of message_info__msg__Info.
typedef struct message_info__msg__Info__Sequence
{
  message_info__msg__Info * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} message_info__msg__Info__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MESSAGE_INFO__MSG__DETAIL__INFO__STRUCT_H_
