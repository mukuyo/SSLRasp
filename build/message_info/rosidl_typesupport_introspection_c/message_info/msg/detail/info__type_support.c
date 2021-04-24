// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from message_info:msg/Info.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "message_info/msg/detail/info__rosidl_typesupport_introspection_c.h"
#include "message_info/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "message_info/msg/detail/info__functions.h"
#include "message_info/msg/detail/info__struct.h"


// Include directives for member types
// Member `name`
#include "rosidl_runtime_c/string_functions.h"
// Member `frame`
#include "message_info/msg/detection_frame.h"
// Member `frame`
#include "message_info/msg/detail/detection_frame__rosidl_typesupport_introspection_c.h"
// Member `geometry`
#include "message_info/msg/vision_geometry.h"
// Member `geometry`
#include "message_info/msg/detail/vision_geometry__rosidl_typesupport_introspection_c.h"
// Member `role`
#include "message_info/msg/role.h"
// Member `role`
#include "message_info/msg/detail/role__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Info__rosidl_typesupport_introspection_c__Info_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  message_info__msg__Info__init(message_memory);
}

void Info__rosidl_typesupport_introspection_c__Info_fini_function(void * message_memory)
{
  message_info__msg__Info__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Info__rosidl_typesupport_introspection_c__Info_message_member_array[4] = {
  {
    "name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(message_info__msg__Info, name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "frame",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(message_info__msg__Info, frame),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "geometry",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(message_info__msg__Info, geometry),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "role",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(message_info__msg__Info, role),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Info__rosidl_typesupport_introspection_c__Info_message_members = {
  "message_info__msg",  // message namespace
  "Info",  // message name
  4,  // number of fields
  sizeof(message_info__msg__Info),
  Info__rosidl_typesupport_introspection_c__Info_message_member_array,  // message members
  Info__rosidl_typesupport_introspection_c__Info_init_function,  // function to initialize message memory (memory has to be allocated)
  Info__rosidl_typesupport_introspection_c__Info_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Info__rosidl_typesupport_introspection_c__Info_message_type_support_handle = {
  0,
  &Info__rosidl_typesupport_introspection_c__Info_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_message_info
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, message_info, msg, Info)() {
  Info__rosidl_typesupport_introspection_c__Info_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, message_info, msg, DetectionFrame)();
  Info__rosidl_typesupport_introspection_c__Info_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, message_info, msg, VisionGeometry)();
  Info__rosidl_typesupport_introspection_c__Info_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, message_info, msg, Role)();
  if (!Info__rosidl_typesupport_introspection_c__Info_message_type_support_handle.typesupport_identifier) {
    Info__rosidl_typesupport_introspection_c__Info_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Info__rosidl_typesupport_introspection_c__Info_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
