// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from message_info:msg/BallInfo.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "message_info/msg/detail/ball_info__rosidl_typesupport_introspection_c.h"
#include "message_info/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "message_info/msg/detail/ball_info__functions.h"
#include "message_info/msg/detail/ball_info__struct.h"


// Include directives for member types
// Member `pose`
#include "geometry_msgs/msg/pose2_d.h"
// Member `pose`
#include "geometry_msgs/msg/detail/pose2_d__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void BallInfo__rosidl_typesupport_introspection_c__BallInfo_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  message_info__msg__BallInfo__init(message_memory);
}

void BallInfo__rosidl_typesupport_introspection_c__BallInfo_fini_function(void * message_memory)
{
  message_info__msg__BallInfo__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember BallInfo__rosidl_typesupport_introspection_c__BallInfo_message_member_array[1] = {
  {
    "pose",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(message_info__msg__BallInfo, pose),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers BallInfo__rosidl_typesupport_introspection_c__BallInfo_message_members = {
  "message_info__msg",  // message namespace
  "BallInfo",  // message name
  1,  // number of fields
  sizeof(message_info__msg__BallInfo),
  BallInfo__rosidl_typesupport_introspection_c__BallInfo_message_member_array,  // message members
  BallInfo__rosidl_typesupport_introspection_c__BallInfo_init_function,  // function to initialize message memory (memory has to be allocated)
  BallInfo__rosidl_typesupport_introspection_c__BallInfo_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t BallInfo__rosidl_typesupport_introspection_c__BallInfo_message_type_support_handle = {
  0,
  &BallInfo__rosidl_typesupport_introspection_c__BallInfo_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_message_info
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, message_info, msg, BallInfo)() {
  BallInfo__rosidl_typesupport_introspection_c__BallInfo_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Pose2D)();
  if (!BallInfo__rosidl_typesupport_introspection_c__BallInfo_message_type_support_handle.typesupport_identifier) {
    BallInfo__rosidl_typesupport_introspection_c__BallInfo_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &BallInfo__rosidl_typesupport_introspection_c__BallInfo_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
