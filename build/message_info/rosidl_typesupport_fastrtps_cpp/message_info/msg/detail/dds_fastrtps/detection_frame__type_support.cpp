// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from message_info:msg/DetectionFrame.idl
// generated code does not contain a copyright notice
#include "message_info/msg/detail/detection_frame__rosidl_typesupport_fastrtps_cpp.hpp"
#include "message_info/msg/detail/detection_frame__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace message_info
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const message_info::msg::DetectionBall &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  message_info::msg::DetectionBall &);
size_t get_serialized_size(
  const message_info::msg::DetectionBall &,
  size_t current_alignment);
size_t
max_serialized_size_DetectionBall(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace message_info

namespace message_info
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const message_info::msg::DetectionRobot &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  message_info::msg::DetectionRobot &);
size_t get_serialized_size(
  const message_info::msg::DetectionRobot &,
  size_t current_alignment);
size_t
max_serialized_size_DetectionRobot(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace message_info

namespace message_info
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const message_info::msg::DetectionRobot &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  message_info::msg::DetectionRobot &);
size_t get_serialized_size(
  const message_info::msg::DetectionRobot &,
  size_t current_alignment);
size_t
max_serialized_size_DetectionRobot(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace message_info

namespace message_info
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const message_info::msg::DetectionRobot &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  message_info::msg::DetectionRobot &);
size_t get_serialized_size(
  const message_info::msg::DetectionRobot &,
  size_t current_alignment);
size_t
max_serialized_size_DetectionRobot(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace message_info

namespace message_info
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const message_info::msg::DetectionRobot &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  message_info::msg::DetectionRobot &);
size_t get_serialized_size(
  const message_info::msg::DetectionRobot &,
  size_t current_alignment);
size_t
max_serialized_size_DetectionRobot(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace message_info

namespace message_info
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const message_info::msg::DetectionBall &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  message_info::msg::DetectionBall &);
size_t get_serialized_size(
  const message_info::msg::DetectionBall &,
  size_t current_alignment);
size_t
max_serialized_size_DetectionBall(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace message_info


namespace message_info
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_message_info
cdr_serialize(
  const message_info::msg::DetectionFrame & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: t_capture
  cdr << ros_message.t_capture;
  // Member: t_sent
  cdr << ros_message.t_sent;
  // Member: camera_id
  cdr << ros_message.camera_id;
  // Member: balls
  {
    size_t size = ros_message.balls.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      message_info::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.balls[i],
        cdr);
    }
  }
  // Member: robots_yellow
  {
    size_t size = ros_message.robots_yellow.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      message_info::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.robots_yellow[i],
        cdr);
    }
  }
  // Member: robots_blue
  {
    size_t size = ros_message.robots_blue.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      message_info::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.robots_blue[i],
        cdr);
    }
  }
  // Member: our_robots
  {
    for (size_t i = 0; i < 16; i++) {
      message_info::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.our_robots[i],
        cdr);
    }
  }
  // Member: their_robots
  {
    for (size_t i = 0; i < 16; i++) {
      message_info::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.their_robots[i],
        cdr);
    }
  }
  // Member: ball
  message_info::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.ball,
    cdr);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_message_info
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  message_info::msg::DetectionFrame & ros_message)
{
  // Member: t_capture
  cdr >> ros_message.t_capture;

  // Member: t_sent
  cdr >> ros_message.t_sent;

  // Member: camera_id
  cdr >> ros_message.camera_id;

  // Member: balls
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.balls.resize(size);
    for (size_t i = 0; i < size; i++) {
      message_info::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.balls[i]);
    }
  }

  // Member: robots_yellow
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.robots_yellow.resize(size);
    for (size_t i = 0; i < size; i++) {
      message_info::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.robots_yellow[i]);
    }
  }

  // Member: robots_blue
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.robots_blue.resize(size);
    for (size_t i = 0; i < size; i++) {
      message_info::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.robots_blue[i]);
    }
  }

  // Member: our_robots
  {
    for (size_t i = 0; i < 16; i++) {
      message_info::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr,
        ros_message.our_robots[i]);
    }
  }

  // Member: their_robots
  {
    for (size_t i = 0; i < 16; i++) {
      message_info::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr,
        ros_message.their_robots[i]);
    }
  }

  // Member: ball
  message_info::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.ball);

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_message_info
get_serialized_size(
  const message_info::msg::DetectionFrame & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: t_capture
  {
    size_t item_size = sizeof(ros_message.t_capture);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: t_sent
  {
    size_t item_size = sizeof(ros_message.t_sent);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: camera_id
  {
    size_t item_size = sizeof(ros_message.camera_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: balls
  {
    size_t array_size = ros_message.balls.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        message_info::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.balls[index], current_alignment);
    }
  }
  // Member: robots_yellow
  {
    size_t array_size = ros_message.robots_yellow.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        message_info::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.robots_yellow[index], current_alignment);
    }
  }
  // Member: robots_blue
  {
    size_t array_size = ros_message.robots_blue.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        message_info::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.robots_blue[index], current_alignment);
    }
  }
  // Member: our_robots
  {
    size_t array_size = 16;

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        message_info::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.our_robots[index], current_alignment);
    }
  }
  // Member: their_robots
  {
    size_t array_size = 16;

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        message_info::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.their_robots[index], current_alignment);
    }
  }
  // Member: ball

  current_alignment +=
    message_info::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.ball, current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_message_info
max_serialized_size_DetectionFrame(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: t_capture
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: t_sent
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: camera_id
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: balls
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        message_info::msg::typesupport_fastrtps_cpp::max_serialized_size_DetectionBall(
        full_bounded, current_alignment);
    }
  }

  // Member: robots_yellow
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        message_info::msg::typesupport_fastrtps_cpp::max_serialized_size_DetectionRobot(
        full_bounded, current_alignment);
    }
  }

  // Member: robots_blue
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        message_info::msg::typesupport_fastrtps_cpp::max_serialized_size_DetectionRobot(
        full_bounded, current_alignment);
    }
  }

  // Member: our_robots
  {
    size_t array_size = 16;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        message_info::msg::typesupport_fastrtps_cpp::max_serialized_size_DetectionRobot(
        full_bounded, current_alignment);
    }
  }

  // Member: their_robots
  {
    size_t array_size = 16;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        message_info::msg::typesupport_fastrtps_cpp::max_serialized_size_DetectionRobot(
        full_bounded, current_alignment);
    }
  }

  // Member: ball
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        message_info::msg::typesupport_fastrtps_cpp::max_serialized_size_DetectionBall(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static bool _DetectionFrame__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const message_info::msg::DetectionFrame *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _DetectionFrame__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<message_info::msg::DetectionFrame *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _DetectionFrame__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const message_info::msg::DetectionFrame *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _DetectionFrame__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_DetectionFrame(full_bounded, 0);
}

static message_type_support_callbacks_t _DetectionFrame__callbacks = {
  "message_info::msg",
  "DetectionFrame",
  _DetectionFrame__cdr_serialize,
  _DetectionFrame__cdr_deserialize,
  _DetectionFrame__get_serialized_size,
  _DetectionFrame__max_serialized_size
};

static rosidl_message_type_support_t _DetectionFrame__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_DetectionFrame__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace message_info

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_message_info
const rosidl_message_type_support_t *
get_message_type_support_handle<message_info::msg::DetectionFrame>()
{
  return &message_info::msg::typesupport_fastrtps_cpp::_DetectionFrame__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, message_info, msg, DetectionFrame)() {
  return &message_info::msg::typesupport_fastrtps_cpp::_DetectionFrame__handle;
}

#ifdef __cplusplus
}
#endif
