// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from message_info:msg/RefereeTeamInfo.idl
// generated code does not contain a copyright notice
#include "message_info/msg/detail/referee_team_info__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `name`
#include "rosidl_runtime_c/string_functions.h"
// Member `yellow_card_times`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
message_info__msg__RefereeTeamInfo__init(message_info__msg__RefereeTeamInfo * msg)
{
  if (!msg) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__init(&msg->name)) {
    message_info__msg__RefereeTeamInfo__fini(msg);
    return false;
  }
  // score
  // red_cards
  // yellow_card_times
  if (!rosidl_runtime_c__uint32__Sequence__init(&msg->yellow_card_times, 0)) {
    message_info__msg__RefereeTeamInfo__fini(msg);
    return false;
  }
  // yellow_cards
  // timeouts
  // timeout_time
  // goalie
  return true;
}

void
message_info__msg__RefereeTeamInfo__fini(message_info__msg__RefereeTeamInfo * msg)
{
  if (!msg) {
    return;
  }
  // name
  rosidl_runtime_c__String__fini(&msg->name);
  // score
  // red_cards
  // yellow_card_times
  rosidl_runtime_c__uint32__Sequence__fini(&msg->yellow_card_times);
  // yellow_cards
  // timeouts
  // timeout_time
  // goalie
}

message_info__msg__RefereeTeamInfo *
message_info__msg__RefereeTeamInfo__create()
{
  message_info__msg__RefereeTeamInfo * msg = (message_info__msg__RefereeTeamInfo *)malloc(sizeof(message_info__msg__RefereeTeamInfo));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(message_info__msg__RefereeTeamInfo));
  bool success = message_info__msg__RefereeTeamInfo__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
message_info__msg__RefereeTeamInfo__destroy(message_info__msg__RefereeTeamInfo * msg)
{
  if (msg) {
    message_info__msg__RefereeTeamInfo__fini(msg);
  }
  free(msg);
}


bool
message_info__msg__RefereeTeamInfo__Sequence__init(message_info__msg__RefereeTeamInfo__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  message_info__msg__RefereeTeamInfo * data = NULL;
  if (size) {
    data = (message_info__msg__RefereeTeamInfo *)calloc(size, sizeof(message_info__msg__RefereeTeamInfo));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = message_info__msg__RefereeTeamInfo__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        message_info__msg__RefereeTeamInfo__fini(&data[i - 1]);
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
message_info__msg__RefereeTeamInfo__Sequence__fini(message_info__msg__RefereeTeamInfo__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      message_info__msg__RefereeTeamInfo__fini(&array->data[i]);
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

message_info__msg__RefereeTeamInfo__Sequence *
message_info__msg__RefereeTeamInfo__Sequence__create(size_t size)
{
  message_info__msg__RefereeTeamInfo__Sequence * array = (message_info__msg__RefereeTeamInfo__Sequence *)malloc(sizeof(message_info__msg__RefereeTeamInfo__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = message_info__msg__RefereeTeamInfo__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
message_info__msg__RefereeTeamInfo__Sequence__destroy(message_info__msg__RefereeTeamInfo__Sequence * array)
{
  if (array) {
    message_info__msg__RefereeTeamInfo__Sequence__fini(array);
  }
  free(array);
}
