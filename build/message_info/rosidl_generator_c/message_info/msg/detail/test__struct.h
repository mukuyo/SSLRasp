// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from message_info:msg/Test.idl
// generated code does not contain a copyright notice

#ifndef MESSAGE_INFO__MSG__DETAIL__TEST__STRUCT_H_
#define MESSAGE_INFO__MSG__DETAIL__TEST__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/Test in the package message_info.
typedef struct message_info__msg__Test
{
  int64_t a;
  int64_t b;
} message_info__msg__Test;

// Struct for a sequence of message_info__msg__Test.
typedef struct message_info__msg__Test__Sequence
{
  message_info__msg__Test * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} message_info__msg__Test__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MESSAGE_INFO__MSG__DETAIL__TEST__STRUCT_H_
