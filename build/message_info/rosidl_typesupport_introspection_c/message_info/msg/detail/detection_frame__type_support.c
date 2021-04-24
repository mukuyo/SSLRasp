// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from message_info:msg/DetectionFrame.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "message_info/msg/detail/detection_frame__rosidl_typesupport_introspection_c.h"
#include "message_info/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "message_info/msg/detail/detection_frame__functions.h"
#include "message_info/msg/detail/detection_frame__struct.h"


// Include directives for member types
// Member `balls`
// Member `ball`
#include "message_info/msg/detection_ball.h"
// Member `balls`
// Member `ball`
#include "message_info/msg/detail/detection_ball__rosidl_typesupport_introspection_c.h"
// Member `robots_yellow`
// Member `robots_blue`
// Member `our_robots`
// Member `their_robots`
#include "message_info/msg/detection_robot.h"
// Member `robots_yellow`
// Member `robots_blue`
// Member `our_robots`
// Member `their_robots`
#include "message_info/msg/detail/detection_robot__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void DetectionFrame__rosidl_typesupport_introspection_c__DetectionFrame_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  message_info__msg__DetectionFrame__init(message_memory);
}

void DetectionFrame__rosidl_typesupport_introspection_c__DetectionFrame_fini_function(void * message_memory)
{
  message_info__msg__DetectionFrame__fini(message_memory);
}

size_t DetectionFrame__rosidl_typesupport_introspection_c__size_function__DetectionBall__balls(
  const void * untyped_member)
{
  const message_info__msg__DetectionBall__Sequence * member =
    (const message_info__msg__DetectionBall__Sequence *)(untyped_member);
  return member->size;
}

const void * DetectionFrame__rosidl_typesupport_introspection_c__get_const_function__DetectionBall__balls(
  const void * untyped_member, size_t index)
{
  const message_info__msg__DetectionBall__Sequence * member =
    (const message_info__msg__DetectionBall__Sequence *)(untyped_member);
  return &member->data[index];
}

void * DetectionFrame__rosidl_typesupport_introspection_c__get_function__DetectionBall__balls(
  void * untyped_member, size_t index)
{
  message_info__msg__DetectionBall__Sequence * member =
    (message_info__msg__DetectionBall__Sequence *)(untyped_member);
  return &member->data[index];
}

bool DetectionFrame__rosidl_typesupport_introspection_c__resize_function__DetectionBall__balls(
  void * untyped_member, size_t size)
{
  message_info__msg__DetectionBall__Sequence * member =
    (message_info__msg__DetectionBall__Sequence *)(untyped_member);
  message_info__msg__DetectionBall__Sequence__fini(member);
  return message_info__msg__DetectionBall__Sequence__init(member, size);
}

size_t DetectionFrame__rosidl_typesupport_introspection_c__size_function__DetectionRobot__robots_yellow(
  const void * untyped_member)
{
  const message_info__msg__DetectionRobot__Sequence * member =
    (const message_info__msg__DetectionRobot__Sequence *)(untyped_member);
  return member->size;
}

const void * DetectionFrame__rosidl_typesupport_introspection_c__get_const_function__DetectionRobot__robots_yellow(
  const void * untyped_member, size_t index)
{
  const message_info__msg__DetectionRobot__Sequence * member =
    (const message_info__msg__DetectionRobot__Sequence *)(untyped_member);
  return &member->data[index];
}

void * DetectionFrame__rosidl_typesupport_introspection_c__get_function__DetectionRobot__robots_yellow(
  void * untyped_member, size_t index)
{
  message_info__msg__DetectionRobot__Sequence * member =
    (message_info__msg__DetectionRobot__Sequence *)(untyped_member);
  return &member->data[index];
}

bool DetectionFrame__rosidl_typesupport_introspection_c__resize_function__DetectionRobot__robots_yellow(
  void * untyped_member, size_t size)
{
  message_info__msg__DetectionRobot__Sequence * member =
    (message_info__msg__DetectionRobot__Sequence *)(untyped_member);
  message_info__msg__DetectionRobot__Sequence__fini(member);
  return message_info__msg__DetectionRobot__Sequence__init(member, size);
}

size_t DetectionFrame__rosidl_typesupport_introspection_c__size_function__DetectionRobot__robots_blue(
  const void * untyped_member)
{
  const message_info__msg__DetectionRobot__Sequence * member =
    (const message_info__msg__DetectionRobot__Sequence *)(untyped_member);
  return member->size;
}

const void * DetectionFrame__rosidl_typesupport_introspection_c__get_const_function__DetectionRobot__robots_blue(
  const void * untyped_member, size_t index)
{
  const message_info__msg__DetectionRobot__Sequence * member =
    (const message_info__msg__DetectionRobot__Sequence *)(untyped_member);
  return &member->data[index];
}

void * DetectionFrame__rosidl_typesupport_introspection_c__get_function__DetectionRobot__robots_blue(
  void * untyped_member, size_t index)
{
  message_info__msg__DetectionRobot__Sequence * member =
    (message_info__msg__DetectionRobot__Sequence *)(untyped_member);
  return &member->data[index];
}

bool DetectionFrame__rosidl_typesupport_introspection_c__resize_function__DetectionRobot__robots_blue(
  void * untyped_member, size_t size)
{
  message_info__msg__DetectionRobot__Sequence * member =
    (message_info__msg__DetectionRobot__Sequence *)(untyped_member);
  message_info__msg__DetectionRobot__Sequence__fini(member);
  return message_info__msg__DetectionRobot__Sequence__init(member, size);
}

size_t DetectionFrame__rosidl_typesupport_introspection_c__size_function__DetectionRobot__our_robots(
  const void * untyped_member)
{
  (void)untyped_member;
  return 16;
}

const void * DetectionFrame__rosidl_typesupport_introspection_c__get_const_function__DetectionRobot__our_robots(
  const void * untyped_member, size_t index)
{
  const message_info__msg__DetectionRobot ** member =
    (const message_info__msg__DetectionRobot **)(untyped_member);
  return &(*member)[index];
}

void * DetectionFrame__rosidl_typesupport_introspection_c__get_function__DetectionRobot__our_robots(
  void * untyped_member, size_t index)
{
  message_info__msg__DetectionRobot ** member =
    (message_info__msg__DetectionRobot **)(untyped_member);
  return &(*member)[index];
}

size_t DetectionFrame__rosidl_typesupport_introspection_c__size_function__DetectionRobot__their_robots(
  const void * untyped_member)
{
  (void)untyped_member;
  return 16;
}

const void * DetectionFrame__rosidl_typesupport_introspection_c__get_const_function__DetectionRobot__their_robots(
  const void * untyped_member, size_t index)
{
  const message_info__msg__DetectionRobot ** member =
    (const message_info__msg__DetectionRobot **)(untyped_member);
  return &(*member)[index];
}

void * DetectionFrame__rosidl_typesupport_introspection_c__get_function__DetectionRobot__their_robots(
  void * untyped_member, size_t index)
{
  message_info__msg__DetectionRobot ** member =
    (message_info__msg__DetectionRobot **)(untyped_member);
  return &(*member)[index];
}

static rosidl_typesupport_introspection_c__MessageMember DetectionFrame__rosidl_typesupport_introspection_c__DetectionFrame_message_member_array[9] = {
  {
    "t_capture",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(message_info__msg__DetectionFrame, t_capture),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "t_sent",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(message_info__msg__DetectionFrame, t_sent),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "camera_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(message_info__msg__DetectionFrame, camera_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "balls",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(message_info__msg__DetectionFrame, balls),  // bytes offset in struct
    NULL,  // default value
    DetectionFrame__rosidl_typesupport_introspection_c__size_function__DetectionBall__balls,  // size() function pointer
    DetectionFrame__rosidl_typesupport_introspection_c__get_const_function__DetectionBall__balls,  // get_const(index) function pointer
    DetectionFrame__rosidl_typesupport_introspection_c__get_function__DetectionBall__balls,  // get(index) function pointer
    DetectionFrame__rosidl_typesupport_introspection_c__resize_function__DetectionBall__balls  // resize(index) function pointer
  },
  {
    "robots_yellow",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(message_info__msg__DetectionFrame, robots_yellow),  // bytes offset in struct
    NULL,  // default value
    DetectionFrame__rosidl_typesupport_introspection_c__size_function__DetectionRobot__robots_yellow,  // size() function pointer
    DetectionFrame__rosidl_typesupport_introspection_c__get_const_function__DetectionRobot__robots_yellow,  // get_const(index) function pointer
    DetectionFrame__rosidl_typesupport_introspection_c__get_function__DetectionRobot__robots_yellow,  // get(index) function pointer
    DetectionFrame__rosidl_typesupport_introspection_c__resize_function__DetectionRobot__robots_yellow  // resize(index) function pointer
  },
  {
    "robots_blue",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(message_info__msg__DetectionFrame, robots_blue),  // bytes offset in struct
    NULL,  // default value
    DetectionFrame__rosidl_typesupport_introspection_c__size_function__DetectionRobot__robots_blue,  // size() function pointer
    DetectionFrame__rosidl_typesupport_introspection_c__get_const_function__DetectionRobot__robots_blue,  // get_const(index) function pointer
    DetectionFrame__rosidl_typesupport_introspection_c__get_function__DetectionRobot__robots_blue,  // get(index) function pointer
    DetectionFrame__rosidl_typesupport_introspection_c__resize_function__DetectionRobot__robots_blue  // resize(index) function pointer
  },
  {
    "our_robots",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    16,  // array size
    false,  // is upper bound
    offsetof(message_info__msg__DetectionFrame, our_robots),  // bytes offset in struct
    NULL,  // default value
    DetectionFrame__rosidl_typesupport_introspection_c__size_function__DetectionRobot__our_robots,  // size() function pointer
    DetectionFrame__rosidl_typesupport_introspection_c__get_const_function__DetectionRobot__our_robots,  // get_const(index) function pointer
    DetectionFrame__rosidl_typesupport_introspection_c__get_function__DetectionRobot__our_robots,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "their_robots",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    16,  // array size
    false,  // is upper bound
    offsetof(message_info__msg__DetectionFrame, their_robots),  // bytes offset in struct
    NULL,  // default value
    DetectionFrame__rosidl_typesupport_introspection_c__size_function__DetectionRobot__their_robots,  // size() function pointer
    DetectionFrame__rosidl_typesupport_introspection_c__get_const_function__DetectionRobot__their_robots,  // get_const(index) function pointer
    DetectionFrame__rosidl_typesupport_introspection_c__get_function__DetectionRobot__their_robots,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "ball",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(message_info__msg__DetectionFrame, ball),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers DetectionFrame__rosidl_typesupport_introspection_c__DetectionFrame_message_members = {
  "message_info__msg",  // message namespace
  "DetectionFrame",  // message name
  9,  // number of fields
  sizeof(message_info__msg__DetectionFrame),
  DetectionFrame__rosidl_typesupport_introspection_c__DetectionFrame_message_member_array,  // message members
  DetectionFrame__rosidl_typesupport_introspection_c__DetectionFrame_init_function,  // function to initialize message memory (memory has to be allocated)
  DetectionFrame__rosidl_typesupport_introspection_c__DetectionFrame_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t DetectionFrame__rosidl_typesupport_introspection_c__DetectionFrame_message_type_support_handle = {
  0,
  &DetectionFrame__rosidl_typesupport_introspection_c__DetectionFrame_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_message_info
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, message_info, msg, DetectionFrame)() {
  DetectionFrame__rosidl_typesupport_introspection_c__DetectionFrame_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, message_info, msg, DetectionBall)();
  DetectionFrame__rosidl_typesupport_introspection_c__DetectionFrame_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, message_info, msg, DetectionRobot)();
  DetectionFrame__rosidl_typesupport_introspection_c__DetectionFrame_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, message_info, msg, DetectionRobot)();
  DetectionFrame__rosidl_typesupport_introspection_c__DetectionFrame_message_member_array[6].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, message_info, msg, DetectionRobot)();
  DetectionFrame__rosidl_typesupport_introspection_c__DetectionFrame_message_member_array[7].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, message_info, msg, DetectionRobot)();
  DetectionFrame__rosidl_typesupport_introspection_c__DetectionFrame_message_member_array[8].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, message_info, msg, DetectionBall)();
  if (!DetectionFrame__rosidl_typesupport_introspection_c__DetectionFrame_message_type_support_handle.typesupport_identifier) {
    DetectionFrame__rosidl_typesupport_introspection_c__DetectionFrame_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &DetectionFrame__rosidl_typesupport_introspection_c__DetectionFrame_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
