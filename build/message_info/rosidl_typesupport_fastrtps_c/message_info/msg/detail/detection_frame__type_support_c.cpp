// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from message_info:msg/DetectionFrame.idl
// generated code does not contain a copyright notice
#include "message_info/msg/detail/detection_frame__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "message_info/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "message_info/msg/detail/detection_frame__struct.h"
#include "message_info/msg/detail/detection_frame__functions.h"
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

#include "message_info/msg/detail/detection_ball__functions.h"  // ball, balls
#include "message_info/msg/detail/detection_robot__functions.h"  // our_robots, robots_blue, robots_yellow, their_robots

// forward declare type support functions
size_t get_serialized_size_message_info__msg__DetectionBall(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_message_info__msg__DetectionBall(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, message_info, msg, DetectionBall)();
size_t get_serialized_size_message_info__msg__DetectionRobot(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_message_info__msg__DetectionRobot(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, message_info, msg, DetectionRobot)();


using _DetectionFrame__ros_msg_type = message_info__msg__DetectionFrame;

static bool _DetectionFrame__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _DetectionFrame__ros_msg_type * ros_message = static_cast<const _DetectionFrame__ros_msg_type *>(untyped_ros_message);
  // Field name: t_capture
  {
    cdr << ros_message->t_capture;
  }

  // Field name: t_sent
  {
    cdr << ros_message->t_sent;
  }

  // Field name: camera_id
  {
    cdr << ros_message->camera_id;
  }

  // Field name: balls
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, message_info, msg, DetectionBall
      )()->data);
    size_t size = ros_message->balls.size;
    auto array_ptr = ros_message->balls.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: robots_yellow
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, message_info, msg, DetectionRobot
      )()->data);
    size_t size = ros_message->robots_yellow.size;
    auto array_ptr = ros_message->robots_yellow.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: robots_blue
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, message_info, msg, DetectionRobot
      )()->data);
    size_t size = ros_message->robots_blue.size;
    auto array_ptr = ros_message->robots_blue.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: our_robots
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, message_info, msg, DetectionRobot
      )()->data);
    size_t size = 16;
    auto array_ptr = ros_message->our_robots;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: their_robots
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, message_info, msg, DetectionRobot
      )()->data);
    size_t size = 16;
    auto array_ptr = ros_message->their_robots;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: ball
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, message_info, msg, DetectionBall
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->ball, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _DetectionFrame__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _DetectionFrame__ros_msg_type * ros_message = static_cast<_DetectionFrame__ros_msg_type *>(untyped_ros_message);
  // Field name: t_capture
  {
    cdr >> ros_message->t_capture;
  }

  // Field name: t_sent
  {
    cdr >> ros_message->t_sent;
  }

  // Field name: camera_id
  {
    cdr >> ros_message->camera_id;
  }

  // Field name: balls
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, message_info, msg, DetectionBall
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->balls.data) {
      message_info__msg__DetectionBall__Sequence__fini(&ros_message->balls);
    }
    if (!message_info__msg__DetectionBall__Sequence__init(&ros_message->balls, size)) {
      return "failed to create array for field 'balls'";
    }
    auto array_ptr = ros_message->balls.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: robots_yellow
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, message_info, msg, DetectionRobot
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->robots_yellow.data) {
      message_info__msg__DetectionRobot__Sequence__fini(&ros_message->robots_yellow);
    }
    if (!message_info__msg__DetectionRobot__Sequence__init(&ros_message->robots_yellow, size)) {
      return "failed to create array for field 'robots_yellow'";
    }
    auto array_ptr = ros_message->robots_yellow.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: robots_blue
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, message_info, msg, DetectionRobot
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->robots_blue.data) {
      message_info__msg__DetectionRobot__Sequence__fini(&ros_message->robots_blue);
    }
    if (!message_info__msg__DetectionRobot__Sequence__init(&ros_message->robots_blue, size)) {
      return "failed to create array for field 'robots_blue'";
    }
    auto array_ptr = ros_message->robots_blue.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: our_robots
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, message_info, msg, DetectionRobot
      )()->data);
    size_t size = 16;
    auto array_ptr = ros_message->our_robots;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: their_robots
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, message_info, msg, DetectionRobot
      )()->data);
    size_t size = 16;
    auto array_ptr = ros_message->their_robots;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: ball
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, message_info, msg, DetectionBall
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->ball))
    {
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_message_info
size_t get_serialized_size_message_info__msg__DetectionFrame(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _DetectionFrame__ros_msg_type * ros_message = static_cast<const _DetectionFrame__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name t_capture
  {
    size_t item_size = sizeof(ros_message->t_capture);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name t_sent
  {
    size_t item_size = sizeof(ros_message->t_sent);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name camera_id
  {
    size_t item_size = sizeof(ros_message->camera_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name balls
  {
    size_t array_size = ros_message->balls.size;
    auto array_ptr = ros_message->balls.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_message_info__msg__DetectionBall(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name robots_yellow
  {
    size_t array_size = ros_message->robots_yellow.size;
    auto array_ptr = ros_message->robots_yellow.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_message_info__msg__DetectionRobot(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name robots_blue
  {
    size_t array_size = ros_message->robots_blue.size;
    auto array_ptr = ros_message->robots_blue.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_message_info__msg__DetectionRobot(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name our_robots
  {
    size_t array_size = 16;
    auto array_ptr = ros_message->our_robots;

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_message_info__msg__DetectionRobot(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name their_robots
  {
    size_t array_size = 16;
    auto array_ptr = ros_message->their_robots;

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_message_info__msg__DetectionRobot(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name ball

  current_alignment += get_serialized_size_message_info__msg__DetectionBall(
    &(ros_message->ball), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _DetectionFrame__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_message_info__msg__DetectionFrame(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_message_info
size_t max_serialized_size_message_info__msg__DetectionFrame(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: t_capture
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: t_sent
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: camera_id
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: balls
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_message_info__msg__DetectionBall(
        full_bounded, current_alignment);
    }
  }
  // member: robots_yellow
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_message_info__msg__DetectionRobot(
        full_bounded, current_alignment);
    }
  }
  // member: robots_blue
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_message_info__msg__DetectionRobot(
        full_bounded, current_alignment);
    }
  }
  // member: our_robots
  {
    size_t array_size = 16;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_message_info__msg__DetectionRobot(
        full_bounded, current_alignment);
    }
  }
  // member: their_robots
  {
    size_t array_size = 16;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_message_info__msg__DetectionRobot(
        full_bounded, current_alignment);
    }
  }
  // member: ball
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_message_info__msg__DetectionBall(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _DetectionFrame__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_message_info__msg__DetectionFrame(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_DetectionFrame = {
  "message_info::msg",
  "DetectionFrame",
  _DetectionFrame__cdr_serialize,
  _DetectionFrame__cdr_deserialize,
  _DetectionFrame__get_serialized_size,
  _DetectionFrame__max_serialized_size
};

static rosidl_message_type_support_t _DetectionFrame__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_DetectionFrame,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, message_info, msg, DetectionFrame)() {
  return &_DetectionFrame__type_support;
}

#if defined(__cplusplus)
}
#endif
