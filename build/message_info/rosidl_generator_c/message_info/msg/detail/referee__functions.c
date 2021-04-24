// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from message_info:msg/Referee.idl
// generated code does not contain a copyright notice
#include "message_info/msg/detail/referee__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `info`
#include "rosidl_runtime_c/string_functions.h"
// Member `yellow`
// Member `blue`
#include "message_info/msg/detail/referee_team_info__functions.h"
// Member `designated_position`
#include "geometry_msgs/msg/detail/point__functions.h"
// Member `game_event`
#include "message_info/msg/detail/referee_game_event__functions.h"

bool
message_info__msg__Referee__init(message_info__msg__Referee * msg)
{
  if (!msg) {
    return false;
  }
  // stage
  // play
  // info
  if (!rosidl_runtime_c__String__init(&msg->info)) {
    message_info__msg__Referee__fini(msg);
    return false;
  }
  // command
  // command_counter
  // yellow
  if (!message_info__msg__RefereeTeamInfo__init(&msg->yellow)) {
    message_info__msg__Referee__fini(msg);
    return false;
  }
  // blue
  if (!message_info__msg__RefereeTeamInfo__init(&msg->blue)) {
    message_info__msg__Referee__fini(msg);
    return false;
  }
  // designated_position
  if (!geometry_msgs__msg__Point__init(&msg->designated_position)) {
    message_info__msg__Referee__fini(msg);
    return false;
  }
  // game_event
  if (!message_info__msg__RefereeGameEvent__init(&msg->game_event)) {
    message_info__msg__Referee__fini(msg);
    return false;
  }
  return true;
}

void
message_info__msg__Referee__fini(message_info__msg__Referee * msg)
{
  if (!msg) {
    return;
  }
  // stage
  // play
  // info
  rosidl_runtime_c__String__fini(&msg->info);
  // command
  // command_counter
  // yellow
  message_info__msg__RefereeTeamInfo__fini(&msg->yellow);
  // blue
  message_info__msg__RefereeTeamInfo__fini(&msg->blue);
  // designated_position
  geometry_msgs__msg__Point__fini(&msg->designated_position);
  // game_event
  message_info__msg__RefereeGameEvent__fini(&msg->game_event);
}

message_info__msg__Referee *
message_info__msg__Referee__create()
{
  message_info__msg__Referee * msg = (message_info__msg__Referee *)malloc(sizeof(message_info__msg__Referee));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(message_info__msg__Referee));
  bool success = message_info__msg__Referee__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
message_info__msg__Referee__destroy(message_info__msg__Referee * msg)
{
  if (msg) {
    message_info__msg__Referee__fini(msg);
  }
  free(msg);
}


bool
message_info__msg__Referee__Sequence__init(message_info__msg__Referee__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  message_info__msg__Referee * data = NULL;
  if (size) {
    data = (message_info__msg__Referee *)calloc(size, sizeof(message_info__msg__Referee));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = message_info__msg__Referee__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        message_info__msg__Referee__fini(&data[i - 1]);
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
message_info__msg__Referee__Sequence__fini(message_info__msg__Referee__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      message_info__msg__Referee__fini(&array->data[i]);
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

message_info__msg__Referee__Sequence *
message_info__msg__Referee__Sequence__create(size_t size)
{
  message_info__msg__Referee__Sequence * array = (message_info__msg__Referee__Sequence *)malloc(sizeof(message_info__msg__Referee__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = message_info__msg__Referee__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
message_info__msg__Referee__Sequence__destroy(message_info__msg__Referee__Sequence * array)
{
  if (array) {
    message_info__msg__Referee__Sequence__fini(array);
  }
  free(array);
}
