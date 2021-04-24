// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from message_info:msg/Referee.idl
// generated code does not contain a copyright notice
#include "message_info/msg/detail/referee__rosidl_typesupport_fastrtps_cpp.hpp"
#include "message_info/msg/detail/referee__struct.hpp"

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
  const message_info::msg::RefereeTeamInfo &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  message_info::msg::RefereeTeamInfo &);
size_t get_serialized_size(
  const message_info::msg::RefereeTeamInfo &,
  size_t current_alignment);
size_t
max_serialized_size_RefereeTeamInfo(
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
  const message_info::msg::RefereeTeamInfo &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  message_info::msg::RefereeTeamInfo &);
size_t get_serialized_size(
  const message_info::msg::RefereeTeamInfo &,
  size_t current_alignment);
size_t
max_serialized_size_RefereeTeamInfo(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace message_info

namespace geometry_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const geometry_msgs::msg::Point &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  geometry_msgs::msg::Point &);
size_t get_serialized_size(
  const geometry_msgs::msg::Point &,
  size_t current_alignment);
size_t
max_serialized_size_Point(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace geometry_msgs

namespace message_info
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const message_info::msg::RefereeGameEvent &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  message_info::msg::RefereeGameEvent &);
size_t get_serialized_size(
  const message_info::msg::RefereeGameEvent &,
  size_t current_alignment);
size_t
max_serialized_size_RefereeGameEvent(
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
  const message_info::msg::Referee & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: stage
  cdr << ros_message.stage;
  // Member: play
  cdr << (ros_message.play ? true : false);
  // Member: info
  cdr << ros_message.info;
  // Member: command
  cdr << ros_message.command;
  // Member: command_counter
  cdr << ros_message.command_counter;
  // Member: yellow
  message_info::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.yellow,
    cdr);
  // Member: blue
  message_info::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.blue,
    cdr);
  // Member: designated_position
  geometry_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.designated_position,
    cdr);
  // Member: game_event
  message_info::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.game_event,
    cdr);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_message_info
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  message_info::msg::Referee & ros_message)
{
  // Member: stage
  cdr >> ros_message.stage;

  // Member: play
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.play = tmp ? true : false;
  }

  // Member: info
  cdr >> ros_message.info;

  // Member: command
  cdr >> ros_message.command;

  // Member: command_counter
  cdr >> ros_message.command_counter;

  // Member: yellow
  message_info::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.yellow);

  // Member: blue
  message_info::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.blue);

  // Member: designated_position
  geometry_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.designated_position);

  // Member: game_event
  message_info::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.game_event);

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_message_info
get_serialized_size(
  const message_info::msg::Referee & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: stage
  {
    size_t item_size = sizeof(ros_message.stage);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: play
  {
    size_t item_size = sizeof(ros_message.play);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: info
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.info.size() + 1);
  // Member: command
  {
    size_t item_size = sizeof(ros_message.command);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: command_counter
  {
    size_t item_size = sizeof(ros_message.command_counter);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: yellow

  current_alignment +=
    message_info::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.yellow, current_alignment);
  // Member: blue

  current_alignment +=
    message_info::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.blue, current_alignment);
  // Member: designated_position

  current_alignment +=
    geometry_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.designated_position, current_alignment);
  // Member: game_event

  current_alignment +=
    message_info::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.game_event, current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_message_info
max_serialized_size_Referee(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: stage
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: play
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: info
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: command
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: command_counter
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: yellow
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        message_info::msg::typesupport_fastrtps_cpp::max_serialized_size_RefereeTeamInfo(
        full_bounded, current_alignment);
    }
  }

  // Member: blue
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        message_info::msg::typesupport_fastrtps_cpp::max_serialized_size_RefereeTeamInfo(
        full_bounded, current_alignment);
    }
  }

  // Member: designated_position
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        geometry_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Point(
        full_bounded, current_alignment);
    }
  }

  // Member: game_event
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        message_info::msg::typesupport_fastrtps_cpp::max_serialized_size_RefereeGameEvent(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static bool _Referee__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const message_info::msg::Referee *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Referee__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<message_info::msg::Referee *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Referee__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const message_info::msg::Referee *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Referee__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_Referee(full_bounded, 0);
}

static message_type_support_callbacks_t _Referee__callbacks = {
  "message_info::msg",
  "Referee",
  _Referee__cdr_serialize,
  _Referee__cdr_deserialize,
  _Referee__get_serialized_size,
  _Referee__max_serialized_size
};

static rosidl_message_type_support_t _Referee__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Referee__callbacks,
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
get_message_type_support_handle<message_info::msg::Referee>()
{
  return &message_info::msg::typesupport_fastrtps_cpp::_Referee__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, message_info, msg, Referee)() {
  return &message_info::msg::typesupport_fastrtps_cpp::_Referee__handle;
}

#ifdef __cplusplus
}
#endif
