// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from message_info:msg/Role.idl
// generated code does not contain a copyright notice

#ifndef MESSAGE_INFO__MSG__DETAIL__ROLE__STRUCT_H_
#define MESSAGE_INFO__MSG__DETAIL__ROLE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/Role in the package message_info.
typedef struct message_info__msg__Role
{
  int32_t attacker;
  int32_t goalie;
  int32_t defense[10];
  int32_t offense[10];
  int32_t offense_count;
  int32_t defense_count;
} message_info__msg__Role;

// Struct for a sequence of message_info__msg__Role.
typedef struct message_info__msg__Role__Sequence
{
  message_info__msg__Role * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} message_info__msg__Role__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MESSAGE_INFO__MSG__DETAIL__ROLE__STRUCT_H_
