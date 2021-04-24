// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from message_info:msg/GoalInfo.idl
// generated code does not contain a copyright notice
#include "message_info/msg/detail/goal_info__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `their`
// Member `our`
#include "geometry_msgs/msg/detail/pose2_d__functions.h"

bool
message_info__msg__GoalInfo__init(message_info__msg__GoalInfo * msg)
{
  if (!msg) {
    return false;
  }
  // their
  if (!geometry_msgs__msg__Pose2D__init(&msg->their)) {
    message_info__msg__GoalInfo__fini(msg);
    return false;
  }
  // our
  if (!geometry_msgs__msg__Pose2D__init(&msg->our)) {
    message_info__msg__GoalInfo__fini(msg);
    return false;
  }
  // field_width
  // field_length
  // goal_width
  // goal_depth
  return true;
}

void
message_info__msg__GoalInfo__fini(message_info__msg__GoalInfo * msg)
{
  if (!msg) {
    return;
  }
  // their
  geometry_msgs__msg__Pose2D__fini(&msg->their);
  // our
  geometry_msgs__msg__Pose2D__fini(&msg->our);
  // field_width
  // field_length
  // goal_width
  // goal_depth
}

message_info__msg__GoalInfo *
message_info__msg__GoalInfo__create()
{
  message_info__msg__GoalInfo * msg = (message_info__msg__GoalInfo *)malloc(sizeof(message_info__msg__GoalInfo));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(message_info__msg__GoalInfo));
  bool success = message_info__msg__GoalInfo__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
message_info__msg__GoalInfo__destroy(message_info__msg__GoalInfo * msg)
{
  if (msg) {
    message_info__msg__GoalInfo__fini(msg);
  }
  free(msg);
}


bool
message_info__msg__GoalInfo__Sequence__init(message_info__msg__GoalInfo__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  message_info__msg__GoalInfo * data = NULL;
  if (size) {
    data = (message_info__msg__GoalInfo *)calloc(size, sizeof(message_info__msg__GoalInfo));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = message_info__msg__GoalInfo__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        message_info__msg__GoalInfo__fini(&data[i - 1]);
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
message_info__msg__GoalInfo__Sequence__fini(message_info__msg__GoalInfo__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      message_info__msg__GoalInfo__fini(&array->data[i]);
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

message_info__msg__GoalInfo__Sequence *
message_info__msg__GoalInfo__Sequence__create(size_t size)
{
  message_info__msg__GoalInfo__Sequence * array = (message_info__msg__GoalInfo__Sequence *)malloc(sizeof(message_info__msg__GoalInfo__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = message_info__msg__GoalInfo__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
message_info__msg__GoalInfo__Sequence__destroy(message_info__msg__GoalInfo__Sequence * array)
{
  if (array) {
    message_info__msg__GoalInfo__Sequence__fini(array);
  }
  free(array);
}
