// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from message_info:msg/VisionGeometry.idl
// generated code does not contain a copyright notice

#ifndef MESSAGE_INFO__MSG__DETAIL__VISION_GEOMETRY__STRUCT_H_
#define MESSAGE_INFO__MSG__DETAIL__VISION_GEOMETRY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'field_lines'
#include "message_info/msg/detail/field_line_segment__struct.h"
// Member 'field_arcs'
#include "message_info/msg/detail/field_circular_arc__struct.h"
// Member 'goal_plus'
// Member 'goal_minus'
// Member 'goal_plus_half'
// Member 'goal_minus_half'
#include "geometry_msgs/msg/detail/pose2_d__struct.h"

// Struct defined in msg/VisionGeometry in the package message_info.
typedef struct message_info__msg__VisionGeometry
{
  double field_length;
  double field_width;
  double goal_width;
  double goal_depth;
  double field_arcs_radius;
  double ball_speed;
  double ball_slope;
  double ball_intercept;
  double robot_speed;
  double robot_angular_velocity;
  int32_t boundary_width;
  message_info__msg__FieldLineSegment__Sequence field_lines;
  message_info__msg__FieldCircularArc__Sequence field_arcs;
  geometry_msgs__msg__Pose2D goal_plus;
  geometry_msgs__msg__Pose2D goal_minus;
  geometry_msgs__msg__Pose2D goal_plus_half;
  geometry_msgs__msg__Pose2D goal_minus_half;
} message_info__msg__VisionGeometry;

// Struct for a sequence of message_info__msg__VisionGeometry.
typedef struct message_info__msg__VisionGeometry__Sequence
{
  message_info__msg__VisionGeometry * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} message_info__msg__VisionGeometry__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MESSAGE_INFO__MSG__DETAIL__VISION_GEOMETRY__STRUCT_H_
