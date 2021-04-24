// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from message_info:msg/FieldLineSegment.idl
// generated code does not contain a copyright notice

#ifndef MESSAGE_INFO__MSG__DETAIL__FIELD_LINE_SEGMENT__STRUCT_H_
#define MESSAGE_INFO__MSG__DETAIL__FIELD_LINE_SEGMENT__STRUCT_H_

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

// Struct defined in msg/FieldLineSegment in the package message_info.
typedef struct message_info__msg__FieldLineSegment
{
  rosidl_runtime_c__String name;
  double p1_x;
  double p1_y;
  double p2_x;
  double p2_y;
  double thickness;
} message_info__msg__FieldLineSegment;

// Struct for a sequence of message_info__msg__FieldLineSegment.
typedef struct message_info__msg__FieldLineSegment__Sequence
{
  message_info__msg__FieldLineSegment * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} message_info__msg__FieldLineSegment__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MESSAGE_INFO__MSG__DETAIL__FIELD_LINE_SEGMENT__STRUCT_H_
