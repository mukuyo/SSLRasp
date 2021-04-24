// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from message_info:msg/FieldLineSegment.idl
// generated code does not contain a copyright notice
#include "message_info/msg/detail/field_line_segment__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `name`
#include "rosidl_runtime_c/string_functions.h"

bool
message_info__msg__FieldLineSegment__init(message_info__msg__FieldLineSegment * msg)
{
  if (!msg) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__init(&msg->name)) {
    message_info__msg__FieldLineSegment__fini(msg);
    return false;
  }
  // p1_x
  // p1_y
  // p2_x
  // p2_y
  // thickness
  return true;
}

void
message_info__msg__FieldLineSegment__fini(message_info__msg__FieldLineSegment * msg)
{
  if (!msg) {
    return;
  }
  // name
  rosidl_runtime_c__String__fini(&msg->name);
  // p1_x
  // p1_y
  // p2_x
  // p2_y
  // thickness
}

message_info__msg__FieldLineSegment *
message_info__msg__FieldLineSegment__create()
{
  message_info__msg__FieldLineSegment * msg = (message_info__msg__FieldLineSegment *)malloc(sizeof(message_info__msg__FieldLineSegment));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(message_info__msg__FieldLineSegment));
  bool success = message_info__msg__FieldLineSegment__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
message_info__msg__FieldLineSegment__destroy(message_info__msg__FieldLineSegment * msg)
{
  if (msg) {
    message_info__msg__FieldLineSegment__fini(msg);
  }
  free(msg);
}


bool
message_info__msg__FieldLineSegment__Sequence__init(message_info__msg__FieldLineSegment__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  message_info__msg__FieldLineSegment * data = NULL;
  if (size) {
    data = (message_info__msg__FieldLineSegment *)calloc(size, sizeof(message_info__msg__FieldLineSegment));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = message_info__msg__FieldLineSegment__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        message_info__msg__FieldLineSegment__fini(&data[i - 1]);
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
message_info__msg__FieldLineSegment__Sequence__fini(message_info__msg__FieldLineSegment__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      message_info__msg__FieldLineSegment__fini(&array->data[i]);
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

message_info__msg__FieldLineSegment__Sequence *
message_info__msg__FieldLineSegment__Sequence__create(size_t size)
{
  message_info__msg__FieldLineSegment__Sequence * array = (message_info__msg__FieldLineSegment__Sequence *)malloc(sizeof(message_info__msg__FieldLineSegment__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = message_info__msg__FieldLineSegment__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
message_info__msg__FieldLineSegment__Sequence__destroy(message_info__msg__FieldLineSegment__Sequence * array)
{
  if (array) {
    message_info__msg__FieldLineSegment__Sequence__fini(array);
  }
  free(array);
}
