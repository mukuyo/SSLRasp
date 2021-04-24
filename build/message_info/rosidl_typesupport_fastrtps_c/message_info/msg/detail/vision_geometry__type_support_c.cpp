// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from message_info:msg/VisionGeometry.idl
// generated code does not contain a copyright notice
#include "message_info/msg/detail/vision_geometry__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "message_info/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "message_info/msg/detail/vision_geometry__struct.h"
#include "message_info/msg/detail/vision_geometry__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "geometry_msgs/msg/detail/pose2_d__functions.h"  // goal_minus, goal_minus_half, goal_plus, goal_plus_half
#include "message_info/msg/detail/field_circular_arc__functions.h"  // field_arcs
#include "message_info/msg/detail/field_line_segment__functions.h"  // field_lines

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_message_info
size_t get_serialized_size_geometry_msgs__msg__Pose2D(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_message_info
size_t max_serialized_size_geometry_msgs__msg__Pose2D(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_message_info
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Pose2D)();
size_t get_serialized_size_message_info__msg__FieldCircularArc(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_message_info__msg__FieldCircularArc(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, message_info, msg, FieldCircularArc)();
size_t get_serialized_size_message_info__msg__FieldLineSegment(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_message_info__msg__FieldLineSegment(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, message_info, msg, FieldLineSegment)();


using _VisionGeometry__ros_msg_type = message_info__msg__VisionGeometry;

static bool _VisionGeometry__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _VisionGeometry__ros_msg_type * ros_message = static_cast<const _VisionGeometry__ros_msg_type *>(untyped_ros_message);
  // Field name: field_length
  {
    cdr << ros_message->field_length;
  }

  // Field name: field_width
  {
    cdr << ros_message->field_width;
  }

  // Field name: goal_width
  {
    cdr << ros_message->goal_width;
  }

  // Field name: goal_depth
  {
    cdr << ros_message->goal_depth;
  }

  // Field name: field_arcs_radius
  {
    cdr << ros_message->field_arcs_radius;
  }

  // Field name: ball_speed
  {
    cdr << ros_message->ball_speed;
  }

  // Field name: ball_slope
  {
    cdr << ros_message->ball_slope;
  }

  // Field name: ball_intercept
  {
    cdr << ros_message->ball_intercept;
  }

  // Field name: robot_speed
  {
    cdr << ros_message->robot_speed;
  }

  // Field name: robot_angular_velocity
  {
    cdr << ros_message->robot_angular_velocity;
  }

  // Field name: boundary_width
  {
    cdr << ros_message->boundary_width;
  }

  // Field name: field_lines
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, message_info, msg, FieldLineSegment
      )()->data);
    size_t size = ros_message->field_lines.size;
    auto array_ptr = ros_message->field_lines.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: field_arcs
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, message_info, msg, FieldCircularArc
      )()->data);
    size_t size = ros_message->field_arcs.size;
    auto array_ptr = ros_message->field_arcs.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: goal_plus
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Pose2D
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->goal_plus, cdr))
    {
      return false;
    }
  }

  // Field name: goal_minus
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Pose2D
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->goal_minus, cdr))
    {
      return false;
    }
  }

  // Field name: goal_plus_half
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Pose2D
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->goal_plus_half, cdr))
    {
      return false;
    }
  }

  // Field name: goal_minus_half
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Pose2D
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->goal_minus_half, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _VisionGeometry__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _VisionGeometry__ros_msg_type * ros_message = static_cast<_VisionGeometry__ros_msg_type *>(untyped_ros_message);
  // Field name: field_length
  {
    cdr >> ros_message->field_length;
  }

  // Field name: field_width
  {
    cdr >> ros_message->field_width;
  }

  // Field name: goal_width
  {
    cdr >> ros_message->goal_width;
  }

  // Field name: goal_depth
  {
    cdr >> ros_message->goal_depth;
  }

  // Field name: field_arcs_radius
  {
    cdr >> ros_message->field_arcs_radius;
  }

  // Field name: ball_speed
  {
    cdr >> ros_message->ball_speed;
  }

  // Field name: ball_slope
  {
    cdr >> ros_message->ball_slope;
  }

  // Field name: ball_intercept
  {
    cdr >> ros_message->ball_intercept;
  }

  // Field name: robot_speed
  {
    cdr >> ros_message->robot_speed;
  }

  // Field name: robot_angular_velocity
  {
    cdr >> ros_message->robot_angular_velocity;
  }

  // Field name: boundary_width
  {
    cdr >> ros_message->boundary_width;
  }

  // Field name: field_lines
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, message_info, msg, FieldLineSegment
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->field_lines.data) {
      message_info__msg__FieldLineSegment__Sequence__fini(&ros_message->field_lines);
    }
    if (!message_info__msg__FieldLineSegment__Sequence__init(&ros_message->field_lines, size)) {
      return "failed to create array for field 'field_lines'";
    }
    auto array_ptr = ros_message->field_lines.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: field_arcs
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, message_info, msg, FieldCircularArc
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->field_arcs.data) {
      message_info__msg__FieldCircularArc__Sequence__fini(&ros_message->field_arcs);
    }
    if (!message_info__msg__FieldCircularArc__Sequence__init(&ros_message->field_arcs, size)) {
      return "failed to create array for field 'field_arcs'";
    }
    auto array_ptr = ros_message->field_arcs.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: goal_plus
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Pose2D
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->goal_plus))
    {
      return false;
    }
  }

  // Field name: goal_minus
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Pose2D
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->goal_minus))
    {
      return false;
    }
  }

  // Field name: goal_plus_half
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Pose2D
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->goal_plus_half))
    {
      return false;
    }
  }

  // Field name: goal_minus_half
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Pose2D
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->goal_minus_half))
    {
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_message_info
size_t get_serialized_size_message_info__msg__VisionGeometry(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _VisionGeometry__ros_msg_type * ros_message = static_cast<const _VisionGeometry__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name field_length
  {
    size_t item_size = sizeof(ros_message->field_length);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name field_width
  {
    size_t item_size = sizeof(ros_message->field_width);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name goal_width
  {
    size_t item_size = sizeof(ros_message->goal_width);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name goal_depth
  {
    size_t item_size = sizeof(ros_message->goal_depth);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name field_arcs_radius
  {
    size_t item_size = sizeof(ros_message->field_arcs_radius);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ball_speed
  {
    size_t item_size = sizeof(ros_message->ball_speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ball_slope
  {
    size_t item_size = sizeof(ros_message->ball_slope);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ball_intercept
  {
    size_t item_size = sizeof(ros_message->ball_intercept);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name robot_speed
  {
    size_t item_size = sizeof(ros_message->robot_speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name robot_angular_velocity
  {
    size_t item_size = sizeof(ros_message->robot_angular_velocity);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name boundary_width
  {
    size_t item_size = sizeof(ros_message->boundary_width);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name field_lines
  {
    size_t array_size = ros_message->field_lines.size;
    auto array_ptr = ros_message->field_lines.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_message_info__msg__FieldLineSegment(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name field_arcs
  {
    size_t array_size = ros_message->field_arcs.size;
    auto array_ptr = ros_message->field_arcs.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_message_info__msg__FieldCircularArc(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name goal_plus

  current_alignment += get_serialized_size_geometry_msgs__msg__Pose2D(
    &(ros_message->goal_plus), current_alignment);
  // field.name goal_minus

  current_alignment += get_serialized_size_geometry_msgs__msg__Pose2D(
    &(ros_message->goal_minus), current_alignment);
  // field.name goal_plus_half

  current_alignment += get_serialized_size_geometry_msgs__msg__Pose2D(
    &(ros_message->goal_plus_half), current_alignment);
  // field.name goal_minus_half

  current_alignment += get_serialized_size_geometry_msgs__msg__Pose2D(
    &(ros_message->goal_minus_half), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _VisionGeometry__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_message_info__msg__VisionGeometry(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_message_info
size_t max_serialized_size_message_info__msg__VisionGeometry(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: field_length
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: field_width
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: goal_width
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: goal_depth
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: field_arcs_radius
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: ball_speed
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: ball_slope
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: ball_intercept
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: robot_speed
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: robot_angular_velocity
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: boundary_width
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: field_lines
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_message_info__msg__FieldLineSegment(
        full_bounded, current_alignment);
    }
  }
  // member: field_arcs
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_message_info__msg__FieldCircularArc(
        full_bounded, current_alignment);
    }
  }
  // member: goal_plus
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_geometry_msgs__msg__Pose2D(
        full_bounded, current_alignment);
    }
  }
  // member: goal_minus
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_geometry_msgs__msg__Pose2D(
        full_bounded, current_alignment);
    }
  }
  // member: goal_plus_half
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_geometry_msgs__msg__Pose2D(
        full_bounded, current_alignment);
    }
  }
  // member: goal_minus_half
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_geometry_msgs__msg__Pose2D(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _VisionGeometry__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_message_info__msg__VisionGeometry(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_VisionGeometry = {
  "message_info::msg",
  "VisionGeometry",
  _VisionGeometry__cdr_serialize,
  _VisionGeometry__cdr_deserialize,
  _VisionGeometry__get_serialized_size,
  _VisionGeometry__max_serialized_size
};

static rosidl_message_type_support_t _VisionGeometry__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_VisionGeometry,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, message_info, msg, VisionGeometry)() {
  return &_VisionGeometry__type_support;
}

#if defined(__cplusplus)
}
#endif
