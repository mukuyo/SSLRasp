// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from message_info:msg/BallInfo.idl
// generated code does not contain a copyright notice
#include "message_info/msg/detail/ball_info__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `pose`
#include "geometry_msgs/msg/detail/pose2_d__functions.h"

bool
message_info__msg__BallInfo__init(message_info__msg__BallInfo * msg)
{
  if (!msg) {
    return false;
  }
  // pose
  if (!geometry_msgs__msg__Pose2D__init(&msg->pose)) {
    message_info__msg__BallInfo__fini(msg);
    return false;
  }
  return true;
}

void
message_info__msg__BallInfo__fini(message_info__msg__BallInfo * msg)
{
  if (!msg) {
    return;
  }
  // pose
  geometry_msgs__msg__Pose2D__fini(&msg->pose);
}

message_info__msg__BallInfo *
message_info__msg__BallInfo__create()
{
  message_info__msg__BallInfo * msg = (message_info__msg__BallInfo *)malloc(sizeof(message_info__msg__BallInfo));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(message_info__msg__BallInfo));
  bool success = message_info__msg__BallInfo__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
message_info__msg__BallInfo__destroy(message_info__msg__BallInfo * msg)
{
  if (msg) {
    message_info__msg__BallInfo__fini(msg);
  }
  free(msg);
}


bool
message_info__msg__BallInfo__Sequence__init(message_info__msg__BallInfo__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  message_info__msg__BallInfo * data = NULL;
  if (size) {
    data = (message_info__msg__BallInfo *)calloc(size, sizeof(message_info__msg__BallInfo));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = message_info__msg__BallInfo__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        message_info__msg__BallInfo__fini(&data[i - 1]);
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
message_info__msg__BallInfo__Sequence__fini(message_info__msg__BallInfo__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      message_info__msg__BallInfo__fini(&array->data[i]);
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

message_info__msg__BallInfo__Sequence *
message_info__msg__BallInfo__Sequence__create(size_t size)
{
  message_info__msg__BallInfo__Sequence * array = (message_info__msg__BallInfo__Sequence *)malloc(sizeof(message_info__msg__BallInfo__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = message_info__msg__BallInfo__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
message_info__msg__BallInfo__Sequence__destroy(message_info__msg__BallInfo__Sequence * array)
{
  if (array) {
    message_info__msg__BallInfo__Sequence__fini(array);
  }
  free(array);
}
