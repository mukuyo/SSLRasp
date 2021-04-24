// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from message_info:msg/Info.idl
// generated code does not contain a copyright notice
#include "message_info/msg/detail/info__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `name`
#include "rosidl_runtime_c/string_functions.h"
// Member `frame`
#include "message_info/msg/detail/detection_frame__functions.h"
// Member `geometry`
#include "message_info/msg/detail/vision_geometry__functions.h"
// Member `role`
#include "message_info/msg/detail/role__functions.h"

bool
message_info__msg__Info__init(message_info__msg__Info * msg)
{
  if (!msg) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__Sequence__init(&msg->name, 0)) {
    message_info__msg__Info__fini(msg);
    return false;
  }
  // frame
  if (!message_info__msg__DetectionFrame__init(&msg->frame)) {
    message_info__msg__Info__fini(msg);
    return false;
  }
  // geometry
  if (!message_info__msg__VisionGeometry__init(&msg->geometry)) {
    message_info__msg__Info__fini(msg);
    return false;
  }
  // role
  if (!message_info__msg__Role__init(&msg->role)) {
    message_info__msg__Info__fini(msg);
    return false;
  }
  return true;
}

void
message_info__msg__Info__fini(message_info__msg__Info * msg)
{
  if (!msg) {
    return;
  }
  // name
  rosidl_runtime_c__String__Sequence__fini(&msg->name);
  // frame
  message_info__msg__DetectionFrame__fini(&msg->frame);
  // geometry
  message_info__msg__VisionGeometry__fini(&msg->geometry);
  // role
  message_info__msg__Role__fini(&msg->role);
}

message_info__msg__Info *
message_info__msg__Info__create()
{
  message_info__msg__Info * msg = (message_info__msg__Info *)malloc(sizeof(message_info__msg__Info));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(message_info__msg__Info));
  bool success = message_info__msg__Info__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
message_info__msg__Info__destroy(message_info__msg__Info * msg)
{
  if (msg) {
    message_info__msg__Info__fini(msg);
  }
  free(msg);
}


bool
message_info__msg__Info__Sequence__init(message_info__msg__Info__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  message_info__msg__Info * data = NULL;
  if (size) {
    data = (message_info__msg__Info *)calloc(size, sizeof(message_info__msg__Info));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = message_info__msg__Info__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        message_info__msg__Info__fini(&data[i - 1]);
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
message_info__msg__Info__Sequence__fini(message_info__msg__Info__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      message_info__msg__Info__fini(&array->data[i]);
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

message_info__msg__Info__Sequence *
message_info__msg__Info__Sequence__create(size_t size)
{
  message_info__msg__Info__Sequence * array = (message_info__msg__Info__Sequence *)malloc(sizeof(message_info__msg__Info__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = message_info__msg__Info__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
message_info__msg__Info__Sequence__destroy(message_info__msg__Info__Sequence * array)
{
  if (array) {
    message_info__msg__Info__Sequence__fini(array);
  }
  free(array);
}
