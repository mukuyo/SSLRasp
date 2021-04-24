// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from message_info:msg/VisionDetections.idl
// generated code does not contain a copyright notice
#include "message_info/msg/detail/vision_detections__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `frames`
#include "message_info/msg/detail/detection_frame__functions.h"

bool
message_info__msg__VisionDetections__init(message_info__msg__VisionDetections * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    message_info__msg__VisionDetections__fini(msg);
    return false;
  }
  // frames
  if (!message_info__msg__DetectionFrame__Sequence__init(&msg->frames, 0)) {
    message_info__msg__VisionDetections__fini(msg);
    return false;
  }
  // test
  return true;
}

void
message_info__msg__VisionDetections__fini(message_info__msg__VisionDetections * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // frames
  message_info__msg__DetectionFrame__Sequence__fini(&msg->frames);
  // test
}

message_info__msg__VisionDetections *
message_info__msg__VisionDetections__create()
{
  message_info__msg__VisionDetections * msg = (message_info__msg__VisionDetections *)malloc(sizeof(message_info__msg__VisionDetections));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(message_info__msg__VisionDetections));
  bool success = message_info__msg__VisionDetections__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
message_info__msg__VisionDetections__destroy(message_info__msg__VisionDetections * msg)
{
  if (msg) {
    message_info__msg__VisionDetections__fini(msg);
  }
  free(msg);
}


bool
message_info__msg__VisionDetections__Sequence__init(message_info__msg__VisionDetections__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  message_info__msg__VisionDetections * data = NULL;
  if (size) {
    data = (message_info__msg__VisionDetections *)calloc(size, sizeof(message_info__msg__VisionDetections));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = message_info__msg__VisionDetections__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        message_info__msg__VisionDetections__fini(&data[i - 1]);
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
message_info__msg__VisionDetections__Sequence__fini(message_info__msg__VisionDetections__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      message_info__msg__VisionDetections__fini(&array->data[i]);
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

message_info__msg__VisionDetections__Sequence *
message_info__msg__VisionDetections__Sequence__create(size_t size)
{
  message_info__msg__VisionDetections__Sequence * array = (message_info__msg__VisionDetections__Sequence *)malloc(sizeof(message_info__msg__VisionDetections__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = message_info__msg__VisionDetections__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
message_info__msg__VisionDetections__Sequence__destroy(message_info__msg__VisionDetections__Sequence * array)
{
  if (array) {
    message_info__msg__VisionDetections__Sequence__fini(array);
  }
  free(array);
}
