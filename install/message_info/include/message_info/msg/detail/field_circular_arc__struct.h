// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from message_info:msg/FieldCircularArc.idl
// generated code does not contain a copyright notice

#ifndef MESSAGE_INFO__MSG__DETAIL__FIELD_CIRCULAR_ARC__STRUCT_H_
#define MESSAGE_INFO__MSG__DETAIL__FIELD_CIRCULAR_ARC__STRUCT_H_

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

// Struct defined in msg/FieldCircularArc in the package message_info.
typedef struct message_info__msg__FieldCircularArc
{
  rosidl_runtime_c__String name;
  double center_x;
  double center_y;
  double radius;
  double a1;
  double a2;
  double thickness;
} message_info__msg__FieldCircularArc;

// Struct for a sequence of message_info__msg__FieldCircularArc.
typedef struct message_info__msg__FieldCircularArc__Sequence
{
  message_info__msg__FieldCircularArc * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} message_info__msg__FieldCircularArc__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MESSAGE_INFO__MSG__DETAIL__FIELD_CIRCULAR_ARC__STRUCT_H_
