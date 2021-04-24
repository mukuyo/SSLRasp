// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from message_info:msg/DetectionRobot.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "message_info/msg/detail/detection_robot__rosidl_typesupport_introspection_c.h"
#include "message_info/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "message_info/msg/detail/detection_robot__functions.h"
#include "message_info/msg/detail/detection_robot__struct.h"


// Include directives for member types
// Member `pose`
#include "geometry_msgs/msg/pose2_d.h"
// Member `pose`
#include "geometry_msgs/msg/detail/pose2_d__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void DetectionRobot__rosidl_typesupport_introspection_c__DetectionRobot_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  message_info__msg__DetectionRobot__init(message_memory);
}

void DetectionRobot__rosidl_typesupport_introspection_c__DetectionRobot_fini_function(void * message_memory)
{
  message_info__msg__DetectionRobot__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember DetectionRobot__rosidl_typesupport_introspection_c__DetectionRobot_message_member_array[4] = {
  {
    "pose",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(message_info__msg__DetectionRobot, pose),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "robot_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(message_info__msg__DetectionRobot, robot_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "is_yellow",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(message_info__msg__DetectionRobot, is_yellow),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "empty",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(message_info__msg__DetectionRobot, empty),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers DetectionRobot__rosidl_typesupport_introspection_c__DetectionRobot_message_members = {
  "message_info__msg",  // message namespace
  "DetectionRobot",  // message name
  4,  // number of fields
  sizeof(message_info__msg__DetectionRobot),
  DetectionRobot__rosidl_typesupport_introspection_c__DetectionRobot_message_member_array,  // message members
  DetectionRobot__rosidl_typesupport_introspection_c__DetectionRobot_init_function,  // function to initialize message memory (memory has to be allocated)
  DetectionRobot__rosidl_typesupport_introspection_c__DetectionRobot_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t DetectionRobot__rosidl_typesupport_introspection_c__DetectionRobot_message_type_support_handle = {
  0,
  &DetectionRobot__rosidl_typesupport_introspection_c__DetectionRobot_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_message_info
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, message_info, msg, DetectionRobot)() {
  DetectionRobot__rosidl_typesupport_introspection_c__DetectionRobot_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Pose2D)();
  if (!DetectionRobot__rosidl_typesupport_introspection_c__DetectionRobot_message_type_support_handle.typesupport_identifier) {
    DetectionRobot__rosidl_typesupport_introspection_c__DetectionRobot_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &DetectionRobot__rosidl_typesupport_introspection_c__DetectionRobot_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
