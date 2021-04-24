// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from message_info:msg/DetectionFrame.idl
// generated code does not contain a copyright notice
#include "message_info/msg/detail/detection_frame__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `balls`
// Member `ball`
#include "message_info/msg/detail/detection_ball__functions.h"
// Member `robots_yellow`
// Member `robots_blue`
// Member `our_robots`
// Member `their_robots`
#include "message_info/msg/detail/detection_robot__functions.h"

bool
message_info__msg__DetectionFrame__init(message_info__msg__DetectionFrame * msg)
{
  if (!msg) {
    return false;
  }
  // t_capture
  // t_sent
  // camera_id
  // balls
  if (!message_info__msg__DetectionBall__Sequence__init(&msg->balls, 0)) {
    message_info__msg__DetectionFrame__fini(msg);
    return false;
  }
  // robots_yellow
  if (!message_info__msg__DetectionRobot__Sequence__init(&msg->robots_yellow, 0)) {
    message_info__msg__DetectionFrame__fini(msg);
    return false;
  }
  // robots_blue
  if (!message_info__msg__DetectionRobot__Sequence__init(&msg->robots_blue, 0)) {
    message_info__msg__DetectionFrame__fini(msg);
    return false;
  }
  // our_robots
  for (size_t i = 0; i < 16; ++i) {
    if (!message_info__msg__DetectionRobot__init(&msg->our_robots[i])) {
      message_info__msg__DetectionFrame__fini(msg);
      return false;
    }
  }
  // their_robots
  for (size_t i = 0; i < 16; ++i) {
    if (!message_info__msg__DetectionRobot__init(&msg->their_robots[i])) {
      message_info__msg__DetectionFrame__fini(msg);
      return false;
    }
  }
  // ball
  if (!message_info__msg__DetectionBall__init(&msg->ball)) {
    message_info__msg__DetectionFrame__fini(msg);
    return false;
  }
  return true;
}

void
message_info__msg__DetectionFrame__fini(message_info__msg__DetectionFrame * msg)
{
  if (!msg) {
    return;
  }
  // t_capture
  // t_sent
  // camera_id
  // balls
  message_info__msg__DetectionBall__Sequence__fini(&msg->balls);
  // robots_yellow
  message_info__msg__DetectionRobot__Sequence__fini(&msg->robots_yellow);
  // robots_blue
  message_info__msg__DetectionRobot__Sequence__fini(&msg->robots_blue);
  // our_robots
  for (size_t i = 0; i < 16; ++i) {
    message_info__msg__DetectionRobot__fini(&msg->our_robots[i]);
  }
  // their_robots
  for (size_t i = 0; i < 16; ++i) {
    message_info__msg__DetectionRobot__fini(&msg->their_robots[i]);
  }
  // ball
  message_info__msg__DetectionBall__fini(&msg->ball);
}

message_info__msg__DetectionFrame *
message_info__msg__DetectionFrame__create()
{
  message_info__msg__DetectionFrame * msg = (message_info__msg__DetectionFrame *)malloc(sizeof(message_info__msg__DetectionFrame));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(message_info__msg__DetectionFrame));
  bool success = message_info__msg__DetectionFrame__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
message_info__msg__DetectionFrame__destroy(message_info__msg__DetectionFrame * msg)
{
  if (msg) {
    message_info__msg__DetectionFrame__fini(msg);
  }
  free(msg);
}


bool
message_info__msg__DetectionFrame__Sequence__init(message_info__msg__DetectionFrame__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  message_info__msg__DetectionFrame * data = NULL;
  if (size) {
    data = (message_info__msg__DetectionFrame *)calloc(size, sizeof(message_info__msg__DetectionFrame));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = message_info__msg__DetectionFrame__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        message_info__msg__DetectionFrame__fini(&data[i - 1]);
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
message_info__msg__DetectionFrame__Sequence__fini(message_info__msg__DetectionFrame__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      message_info__msg__DetectionFrame__fini(&array->data[i]);
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

message_info__msg__DetectionFrame__Sequence *
message_info__msg__DetectionFrame__Sequence__create(size_t size)
{
  message_info__msg__DetectionFrame__Sequence * array = (message_info__msg__DetectionFrame__Sequence *)malloc(sizeof(message_info__msg__DetectionFrame__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = message_info__msg__DetectionFrame__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
message_info__msg__DetectionFrame__Sequence__destroy(message_info__msg__DetectionFrame__Sequence * array)
{
  if (array) {
    message_info__msg__DetectionFrame__Sequence__fini(array);
  }
  free(array);
}
