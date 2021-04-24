// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from message_info:msg/VisionDetections.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "message_info/msg/detail/vision_detections__rosidl_typesupport_introspection_c.h"
#include "message_info/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "message_info/msg/detail/vision_detections__functions.h"
#include "message_info/msg/detail/vision_detections__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `frames`
#include "message_info/msg/detection_frame.h"
// Member `frames`
#include "message_info/msg/detail/detection_frame__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void VisionDetections__rosidl_typesupport_introspection_c__VisionDetections_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  message_info__msg__VisionDetections__init(message_memory);
}

void VisionDetections__rosidl_typesupport_introspection_c__VisionDetections_fini_function(void * message_memory)
{
  message_info__msg__VisionDetections__fini(message_memory);
}

size_t VisionDetections__rosidl_typesupport_introspection_c__size_function__DetectionFrame__frames(
  const void * untyped_member)
{
  const message_info__msg__DetectionFrame__Sequence * member =
    (const message_info__msg__DetectionFrame__Sequence *)(untyped_member);
  return member->size;
}

const void * VisionDetections__rosidl_typesupport_introspection_c__get_const_function__DetectionFrame__frames(
  const void * untyped_member, size_t index)
{
  const message_info__msg__DetectionFrame__Sequence * member =
    (const message_info__msg__DetectionFrame__Sequence *)(untyped_member);
  return &member->data[index];
}

void * VisionDetections__rosidl_typesupport_introspection_c__get_function__DetectionFrame__frames(
  void * untyped_member, size_t index)
{
  message_info__msg__DetectionFrame__Sequence * member =
    (message_info__msg__DetectionFrame__Sequence *)(untyped_member);
  return &member->data[index];
}

bool VisionDetections__rosidl_typesupport_introspection_c__resize_function__DetectionFrame__frames(
  void * untyped_member, size_t size)
{
  message_info__msg__DetectionFrame__Sequence * member =
    (message_info__msg__DetectionFrame__Sequence *)(untyped_member);
  message_info__msg__DetectionFrame__Sequence__fini(member);
  return message_info__msg__DetectionFrame__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember VisionDetections__rosidl_typesupport_introspection_c__VisionDetections_message_member_array[3] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(message_info__msg__VisionDetections, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "frames",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(message_info__msg__VisionDetections, frames),  // bytes offset in struct
    NULL,  // default value
    VisionDetections__rosidl_typesupport_introspection_c__size_function__DetectionFrame__frames,  // size() function pointer
    VisionDetections__rosidl_typesupport_introspection_c__get_const_function__DetectionFrame__frames,  // get_const(index) function pointer
    VisionDetections__rosidl_typesupport_introspection_c__get_function__DetectionFrame__frames,  // get(index) function pointer
    VisionDetections__rosidl_typesupport_introspection_c__resize_function__DetectionFrame__frames  // resize(index) function pointer
  },
  {
    "test",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(message_info__msg__VisionDetections, test),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers VisionDetections__rosidl_typesupport_introspection_c__VisionDetections_message_members = {
  "message_info__msg",  // message namespace
  "VisionDetections",  // message name
  3,  // number of fields
  sizeof(message_info__msg__VisionDetections),
  VisionDetections__rosidl_typesupport_introspection_c__VisionDetections_message_member_array,  // message members
  VisionDetections__rosidl_typesupport_introspection_c__VisionDetections_init_function,  // function to initialize message memory (memory has to be allocated)
  VisionDetections__rosidl_typesupport_introspection_c__VisionDetections_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t VisionDetections__rosidl_typesupport_introspection_c__VisionDetections_message_type_support_handle = {
  0,
  &VisionDetections__rosidl_typesupport_introspection_c__VisionDetections_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_message_info
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, message_info, msg, VisionDetections)() {
  VisionDetections__rosidl_typesupport_introspection_c__VisionDetections_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  VisionDetections__rosidl_typesupport_introspection_c__VisionDetections_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, message_info, msg, DetectionFrame)();
  if (!VisionDetections__rosidl_typesupport_introspection_c__VisionDetections_message_type_support_handle.typesupport_identifier) {
    VisionDetections__rosidl_typesupport_introspection_c__VisionDetections_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &VisionDetections__rosidl_typesupport_introspection_c__VisionDetections_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
