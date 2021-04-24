// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from message_info:msg/Role.idl
// generated code does not contain a copyright notice
#include "message_info/msg/detail/role__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "message_info/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "message_info/msg/detail/role__struct.h"
#include "message_info/msg/detail/role__functions.h"
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


// forward declare type support functions


using _Role__ros_msg_type = message_info__msg__Role;

static bool _Role__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Role__ros_msg_type * ros_message = static_cast<const _Role__ros_msg_type *>(untyped_ros_message);
  // Field name: attacker
  {
    cdr << ros_message->attacker;
  }

  // Field name: goalie
  {
    cdr << ros_message->goalie;
  }

  // Field name: defense
  {
    size_t size = 10;
    auto array_ptr = ros_message->defense;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: offense
  {
    size_t size = 10;
    auto array_ptr = ros_message->offense;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: offense_count
  {
    cdr << ros_message->offense_count;
  }

  // Field name: defense_count
  {
    cdr << ros_message->defense_count;
  }

  return true;
}

static bool _Role__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Role__ros_msg_type * ros_message = static_cast<_Role__ros_msg_type *>(untyped_ros_message);
  // Field name: attacker
  {
    cdr >> ros_message->attacker;
  }

  // Field name: goalie
  {
    cdr >> ros_message->goalie;
  }

  // Field name: defense
  {
    size_t size = 10;
    auto array_ptr = ros_message->defense;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: offense
  {
    size_t size = 10;
    auto array_ptr = ros_message->offense;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: offense_count
  {
    cdr >> ros_message->offense_count;
  }

  // Field name: defense_count
  {
    cdr >> ros_message->defense_count;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_message_info
size_t get_serialized_size_message_info__msg__Role(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Role__ros_msg_type * ros_message = static_cast<const _Role__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name attacker
  {
    size_t item_size = sizeof(ros_message->attacker);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name goalie
  {
    size_t item_size = sizeof(ros_message->goalie);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name defense
  {
    size_t array_size = 10;
    auto array_ptr = ros_message->defense;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name offense
  {
    size_t array_size = 10;
    auto array_ptr = ros_message->offense;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name offense_count
  {
    size_t item_size = sizeof(ros_message->offense_count);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name defense_count
  {
    size_t item_size = sizeof(ros_message->defense_count);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _Role__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_message_info__msg__Role(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_message_info
size_t max_serialized_size_message_info__msg__Role(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: attacker
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: goalie
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: defense
  {
    size_t array_size = 10;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: offense
  {
    size_t array_size = 10;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: offense_count
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: defense_count
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _Role__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_message_info__msg__Role(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_Role = {
  "message_info::msg",
  "Role",
  _Role__cdr_serialize,
  _Role__cdr_deserialize,
  _Role__get_serialized_size,
  _Role__max_serialized_size
};

static rosidl_message_type_support_t _Role__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Role,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, message_info, msg, Role)() {
  return &_Role__type_support;
}

#if defined(__cplusplus)
}
#endif
