// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from message_info:msg/VisionGeometry.idl
// generated code does not contain a copyright notice
#include "message_info/msg/detail/vision_geometry__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `field_lines`
#include "message_info/msg/detail/field_line_segment__functions.h"
// Member `field_arcs`
#include "message_info/msg/detail/field_circular_arc__functions.h"
// Member `goal_plus`
// Member `goal_minus`
// Member `goal_plus_half`
// Member `goal_minus_half`
#include "geometry_msgs/msg/detail/pose2_d__functions.h"

bool
message_info__msg__VisionGeometry__init(message_info__msg__VisionGeometry * msg)
{
  if (!msg) {
    return false;
  }
  // field_length
  // field_width
  // goal_width
  // goal_depth
  // field_arcs_radius
  // ball_speed
  // ball_slope
  // ball_intercept
  // robot_speed
  // robot_angular_velocity
  // boundary_width
  // field_lines
  if (!message_info__msg__FieldLineSegment__Sequence__init(&msg->field_lines, 0)) {
    message_info__msg__VisionGeometry__fini(msg);
    return false;
  }
  // field_arcs
  if (!message_info__msg__FieldCircularArc__Sequence__init(&msg->field_arcs, 0)) {
    message_info__msg__VisionGeometry__fini(msg);
    return false;
  }
  // goal_plus
  if (!geometry_msgs__msg__Pose2D__init(&msg->goal_plus)) {
    message_info__msg__VisionGeometry__fini(msg);
    return false;
  }
  // goal_minus
  if (!geometry_msgs__msg__Pose2D__init(&msg->goal_minus)) {
    message_info__msg__VisionGeometry__fini(msg);
    return false;
  }
  // goal_plus_half
  if (!geometry_msgs__msg__Pose2D__init(&msg->goal_plus_half)) {
    message_info__msg__VisionGeometry__fini(msg);
    return false;
  }
  // goal_minus_half
  if (!geometry_msgs__msg__Pose2D__init(&msg->goal_minus_half)) {
    message_info__msg__VisionGeometry__fini(msg);
    return false;
  }
  return true;
}

void
message_info__msg__VisionGeometry__fini(message_info__msg__VisionGeometry * msg)
{
  if (!msg) {
    return;
  }
  // field_length
  // field_width
  // goal_width
  // goal_depth
  // field_arcs_radius
  // ball_speed
  // ball_slope
  // ball_intercept
  // robot_speed
  // robot_angular_velocity
  // boundary_width
  // field_lines
  message_info__msg__FieldLineSegment__Sequence__fini(&msg->field_lines);
  // field_arcs
  message_info__msg__FieldCircularArc__Sequence__fini(&msg->field_arcs);
  // goal_plus
  geometry_msgs__msg__Pose2D__fini(&msg->goal_plus);
  // goal_minus
  geometry_msgs__msg__Pose2D__fini(&msg->goal_minus);
  // goal_plus_half
  geometry_msgs__msg__Pose2D__fini(&msg->goal_plus_half);
  // goal_minus_half
  geometry_msgs__msg__Pose2D__fini(&msg->goal_minus_half);
}

message_info__msg__VisionGeometry *
message_info__msg__VisionGeometry__create()
{
  message_info__msg__VisionGeometry * msg = (message_info__msg__VisionGeometry *)malloc(sizeof(message_info__msg__VisionGeometry));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(message_info__msg__VisionGeometry));
  bool success = message_info__msg__VisionGeometry__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
message_info__msg__VisionGeometry__destroy(message_info__msg__VisionGeometry * msg)
{
  if (msg) {
    message_info__msg__VisionGeometry__fini(msg);
  }
  free(msg);
}


bool
message_info__msg__VisionGeometry__Sequence__init(message_info__msg__VisionGeometry__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  message_info__msg__VisionGeometry * data = NULL;
  if (size) {
    data = (message_info__msg__VisionGeometry *)calloc(size, sizeof(message_info__msg__VisionGeometry));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = message_info__msg__VisionGeometry__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        message_info__msg__VisionGeometry__fini(&data[i - 1]);
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
message_info__msg__VisionGeometry__Sequence__fini(message_info__msg__VisionGeometry__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      message_info__msg__VisionGeometry__fini(&array->data[i]);
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

message_info__msg__VisionGeometry__Sequence *
message_info__msg__VisionGeometry__Sequence__create(size_t size)
{
  message_info__msg__VisionGeometry__Sequence * array = (message_info__msg__VisionGeometry__Sequence *)malloc(sizeof(message_info__msg__VisionGeometry__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = message_info__msg__VisionGeometry__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
message_info__msg__VisionGeometry__Sequence__destroy(message_info__msg__VisionGeometry__Sequence * array)
{
  if (array) {
    message_info__msg__VisionGeometry__Sequence__fini(array);
  }
  free(array);
}
