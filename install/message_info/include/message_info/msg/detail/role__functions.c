// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from message_info:msg/Role.idl
// generated code does not contain a copyright notice
#include "message_info/msg/detail/role__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
message_info__msg__Role__init(message_info__msg__Role * msg)
{
  if (!msg) {
    return false;
  }
  // attacker
  // goalie
  // defense
  // offense
  // offense_count
  // defense_count
  return true;
}

void
message_info__msg__Role__fini(message_info__msg__Role * msg)
{
  if (!msg) {
    return;
  }
  // attacker
  // goalie
  // defense
  // offense
  // offense_count
  // defense_count
}

message_info__msg__Role *
message_info__msg__Role__create()
{
  message_info__msg__Role * msg = (message_info__msg__Role *)malloc(sizeof(message_info__msg__Role));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(message_info__msg__Role));
  bool success = message_info__msg__Role__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
message_info__msg__Role__destroy(message_info__msg__Role * msg)
{
  if (msg) {
    message_info__msg__Role__fini(msg);
  }
  free(msg);
}


bool
message_info__msg__Role__Sequence__init(message_info__msg__Role__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  message_info__msg__Role * data = NULL;
  if (size) {
    data = (message_info__msg__Role *)calloc(size, sizeof(message_info__msg__Role));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = message_info__msg__Role__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        message_info__msg__Role__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
message_info__msg__Role__Sequence__fini(message_info__msg__Role__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      message_info__msg__Role__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

message_info__msg__Role__Sequence *
message_info__msg__Role__Sequence__create(size_t size)
{
  message_info__msg__Role__Sequence * array = (message_info__msg__Role__Sequence *)malloc(sizeof(message_info__msg__Role__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = message_info__msg__Role__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
message_info__msg__Role__Sequence__destroy(message_info__msg__Role__Sequence * array)
{
  if (array) {
    message_info__msg__Role__Sequence__fini(array);
  }
  free(array);
}
