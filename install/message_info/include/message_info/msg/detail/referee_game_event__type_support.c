// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from message_info:msg/RefereeGameEvent.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "message_info/msg/detail/referee_game_event__rosidl_typesupport_introspection_c.h"
#include "message_info/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "message_info/msg/detail/referee_game_event__functions.h"
#include "message_info/msg/detail/referee_game_event__struct.h"


// Include directives for member types
// Member `message`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void RefereeGameEvent__rosidl_typesupport_introspection_c__RefereeGameEvent_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  message_info__msg__RefereeGameEvent__init(message_memory);
}

void RefereeGameEvent__rosidl_typesupport_introspection_c__RefereeGameEvent_fini_function(void * message_memory)
{
  message_info__msg__RefereeGameEvent__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember RefereeGameEvent__rosidl_typesupport_introspection_c__RefereeGameEvent_message_member_array[4] = {
  {
    "game_event_type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(message_info__msg__RefereeGameEvent, game_event_type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "originator_team",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(message_info__msg__RefereeGameEvent, originator_team),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "originator_bot_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(message_info__msg__RefereeGameEvent, originator_bot_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "message",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(message_info__msg__RefereeGameEvent, message),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers RefereeGameEvent__rosidl_typesupport_introspection_c__RefereeGameEvent_message_members = {
  "message_info__msg",  // message namespace
  "RefereeGameEvent",  // message name
  4,  // number of fields
  sizeof(message_info__msg__RefereeGameEvent),
  RefereeGameEvent__rosidl_typesupport_introspection_c__RefereeGameEvent_message_member_array,  // message members
  RefereeGameEvent__rosidl_typesupport_introspection_c__RefereeGameEvent_init_function,  // function to initialize message memory (memory has to be allocated)
  RefereeGameEvent__rosidl_typesupport_introspection_c__RefereeGameEvent_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t RefereeGameEvent__rosidl_typesupport_introspection_c__RefereeGameEvent_message_type_support_handle = {
  0,
  &RefereeGameEvent__rosidl_typesupport_introspection_c__RefereeGameEvent_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_message_info
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, message_info, msg, RefereeGameEvent)() {
  if (!RefereeGameEvent__rosidl_typesupport_introspection_c__RefereeGameEvent_message_type_support_handle.typesupport_identifier) {
    RefereeGameEvent__rosidl_typesupport_introspection_c__RefereeGameEvent_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &RefereeGameEvent__rosidl_typesupport_introspection_c__RefereeGameEvent_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
