// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from message_info:msg/VisionGeometry.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "message_info/msg/detail/vision_geometry__rosidl_typesupport_introspection_c.h"
#include "message_info/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "message_info/msg/detail/vision_geometry__functions.h"
#include "message_info/msg/detail/vision_geometry__struct.h"


// Include directives for member types
// Member `field_lines`
#include "message_info/msg/field_line_segment.h"
// Member `field_lines`
#include "message_info/msg/detail/field_line_segment__rosidl_typesupport_introspection_c.h"
// Member `field_arcs`
#include "message_info/msg/field_circular_arc.h"
// Member `field_arcs`
#include "message_info/msg/detail/field_circular_arc__rosidl_typesupport_introspection_c.h"
// Member `goal_plus`
// Member `goal_minus`
// Member `goal_plus_half`
// Member `goal_minus_half`
#include "geometry_msgs/msg/pose2_d.h"
// Member `goal_plus`
// Member `goal_minus`
// Member `goal_plus_half`
// Member `goal_minus_half`
#include "geometry_msgs/msg/detail/pose2_d__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void VisionGeometry__rosidl_typesupport_introspection_c__VisionGeometry_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  message_info__msg__VisionGeometry__init(message_memory);
}

void VisionGeometry__rosidl_typesupport_introspection_c__VisionGeometry_fini_function(void * message_memory)
{
  message_info__msg__VisionGeometry__fini(message_memory);
}

size_t VisionGeometry__rosidl_typesupport_introspection_c__size_function__FieldLineSegment__field_lines(
  const void * untyped_member)
{
  const message_info__msg__FieldLineSegment__Sequence * member =
    (const message_info__msg__FieldLineSegment__Sequence *)(untyped_member);
  return member->size;
}

const void * VisionGeometry__rosidl_typesupport_introspection_c__get_const_function__FieldLineSegment__field_lines(
  const void * untyped_member, size_t index)
{
  const message_info__msg__FieldLineSegment__Sequence * member =
    (const message_info__msg__FieldLineSegment__Sequence *)(untyped_member);
  return &member->data[index];
}

void * VisionGeometry__rosidl_typesupport_introspection_c__get_function__FieldLineSegment__field_lines(
  void * untyped_member, size_t index)
{
  message_info__msg__FieldLineSegment__Sequence * member =
    (message_info__msg__FieldLineSegment__Sequence *)(untyped_member);
  return &member->data[index];
}

bool VisionGeometry__rosidl_typesupport_introspection_c__resize_function__FieldLineSegment__field_lines(
  void * untyped_member, size_t size)
{
  message_info__msg__FieldLineSegment__Sequence * member =
    (message_info__msg__FieldLineSegment__Sequence *)(untyped_member);
  message_info__msg__FieldLineSegment__Sequence__fini(member);
  return message_info__msg__FieldLineSegment__Sequence__init(member, size);
}

size_t VisionGeometry__rosidl_typesupport_introspection_c__size_function__FieldCircularArc__field_arcs(
  const void * untyped_member)
{
  const message_info__msg__FieldCircularArc__Sequence * member =
    (const message_info__msg__FieldCircularArc__Sequence *)(untyped_member);
  return member->size;
}

const void * VisionGeometry__rosidl_typesupport_introspection_c__get_const_function__FieldCircularArc__field_arcs(
  const void * untyped_member, size_t index)
{
  const message_info__msg__FieldCircularArc__Sequence * member =
    (const message_info__msg__FieldCircularArc__Sequence *)(untyped_member);
  return &member->data[index];
}

void * VisionGeometry__rosidl_typesupport_introspection_c__get_function__FieldCircularArc__field_arcs(
  void * untyped_member, size_t index)
{
  message_info__msg__FieldCircularArc__Sequence * member =
    (message_info__msg__FieldCircularArc__Sequence *)(untyped_member);
  return &member->data[index];
}

bool VisionGeometry__rosidl_typesupport_introspection_c__resize_function__FieldCircularArc__field_arcs(
  void * untyped_member, size_t size)
{
  message_info__msg__FieldCircularArc__Sequence * member =
    (message_info__msg__FieldCircularArc__Sequence *)(untyped_member);
  message_info__msg__FieldCircularArc__Sequence__fini(member);
  return message_info__msg__FieldCircularArc__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember VisionGeometry__rosidl_typesupport_introspection_c__VisionGeometry_message_member_array[17] = {
  {
    "field_length",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(message_info__msg__VisionGeometry, field_length),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "field_width",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(message_info__msg__VisionGeometry, field_width),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "goal_width",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(message_info__msg__VisionGeometry, goal_width),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "goal_depth",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(message_info__msg__VisionGeometry, goal_depth),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "field_arcs_radius",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(message_info__msg__VisionGeometry, field_arcs_radius),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "ball_speed",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(message_info__msg__VisionGeometry, ball_speed),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "ball_slope",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(message_info__msg__VisionGeometry, ball_slope),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "ball_intercept",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(message_info__msg__VisionGeometry, ball_intercept),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "robot_speed",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(message_info__msg__VisionGeometry, robot_speed),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "robot_angular_velocity",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(message_info__msg__VisionGeometry, robot_angular_velocity),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "boundary_width",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(message_info__msg__VisionGeometry, boundary_width),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "field_lines",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(message_info__msg__VisionGeometry, field_lines),  // bytes offset in struct
    NULL,  // default value
    VisionGeometry__rosidl_typesupport_introspection_c__size_function__FieldLineSegment__field_lines,  // size() function pointer
    VisionGeometry__rosidl_typesupport_introspection_c__get_const_function__FieldLineSegment__field_lines,  // get_const(index) function pointer
    VisionGeometry__rosidl_typesupport_introspection_c__get_function__FieldLineSegment__field_lines,  // get(index) function pointer
    VisionGeometry__rosidl_typesupport_introspection_c__resize_function__FieldLineSegment__field_lines  // resize(index) function pointer
  },
  {
    "field_arcs",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(message_info__msg__VisionGeometry, field_arcs),  // bytes offset in struct
    NULL,  // default value
    VisionGeometry__rosidl_typesupport_introspection_c__size_function__FieldCircularArc__field_arcs,  // size() function pointer
    VisionGeometry__rosidl_typesupport_introspection_c__get_const_function__FieldCircularArc__field_arcs,  // get_const(index) function pointer
    VisionGeometry__rosidl_typesupport_introspection_c__get_function__FieldCircularArc__field_arcs,  // get(index) function pointer
    VisionGeometry__rosidl_typesupport_introspection_c__resize_function__FieldCircularArc__field_arcs  // resize(index) function pointer
  },
  {
    "goal_plus",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(message_info__msg__VisionGeometry, goal_plus),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "goal_minus",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(message_info__msg__VisionGeometry, goal_minus),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "goal_plus_half",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(message_info__msg__VisionGeometry, goal_plus_half),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "goal_minus_half",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(message_info__msg__VisionGeometry, goal_minus_half),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers VisionGeometry__rosidl_typesupport_introspection_c__VisionGeometry_message_members = {
  "message_info__msg",  // message namespace
  "VisionGeometry",  // message name
  17,  // number of fields
  sizeof(message_info__msg__VisionGeometry),
  VisionGeometry__rosidl_typesupport_introspection_c__VisionGeometry_message_member_array,  // message members
  VisionGeometry__rosidl_typesupport_introspection_c__VisionGeometry_init_function,  // function to initialize message memory (memory has to be allocated)
  VisionGeometry__rosidl_typesupport_introspection_c__VisionGeometry_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t VisionGeometry__rosidl_typesupport_introspection_c__VisionGeometry_message_type_support_handle = {
  0,
  &VisionGeometry__rosidl_typesupport_introspection_c__VisionGeometry_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_message_info
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, message_info, msg, VisionGeometry)() {
  VisionGeometry__rosidl_typesupport_introspection_c__VisionGeometry_message_member_array[11].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, message_info, msg, FieldLineSegment)();
  VisionGeometry__rosidl_typesupport_introspection_c__VisionGeometry_message_member_array[12].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, message_info, msg, FieldCircularArc)();
  VisionGeometry__rosidl_typesupport_introspection_c__VisionGeometry_message_member_array[13].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Pose2D)();
  VisionGeometry__rosidl_typesupport_introspection_c__VisionGeometry_message_member_array[14].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Pose2D)();
  VisionGeometry__rosidl_typesupport_introspection_c__VisionGeometry_message_member_array[15].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Pose2D)();
  VisionGeometry__rosidl_typesupport_introspection_c__VisionGeometry_message_member_array[16].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Pose2D)();
  if (!VisionGeometry__rosidl_typesupport_introspection_c__VisionGeometry_message_type_support_handle.typesupport_identifier) {
    VisionGeometry__rosidl_typesupport_introspection_c__VisionGeometry_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &VisionGeometry__rosidl_typesupport_introspection_c__VisionGeometry_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
