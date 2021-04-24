// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from message_info:msg/RefereeGameEvent.idl
// generated code does not contain a copyright notice
#include "message_info/msg/detail/referee_game_event__rosidl_typesupport_fastrtps_cpp.hpp"
#include "message_info/msg/detail/referee_game_event__struct.hpp"

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

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_message_info
cdr_serialize(
  const message_info::msg::RefereeGameEvent & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: game_event_type
  cdr << ros_message.game_event_type;
  // Member: originator_team
  cdr << ros_message.originator_team;
  // Member: originator_bot_id
  cdr << ros_message.originator_bot_id;
  // Member: message
  cdr << ros_message.message;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_message_info
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  message_info::msg::RefereeGameEvent & ros_message)
{
  // Member: game_event_type
  cdr >> ros_message.game_event_type;

  // Member: originator_team
  cdr >> ros_message.originator_team;

  // Member: originator_bot_id
  cdr >> ros_message.originator_bot_id;

  // Member: message
  cdr >> ros_message.message;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_message_info
get_serialized_size(
  const message_info::msg::RefereeGameEvent & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: game_event_type
  {
    size_t item_size = sizeof(ros_message.game_event_type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: originator_team
  {
    size_t item_size = sizeof(ros_message.originator_team);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: originator_bot_id
  {
    size_t item_size = sizeof(ros_message.originator_bot_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: message
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.message.size() + 1);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_message_info
max_serialized_size_RefereeGameEvent(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: game_event_type
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: originator_team
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: originator_bot_id
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: message
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  return current_alignment - initial_alignment;
}

static bool _RefereeGameEvent__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const message_info::msg::RefereeGameEvent *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _RefereeGameEvent__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<message_info::msg::RefereeGameEvent *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _RefereeGameEvent__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const message_info::msg::RefereeGameEvent *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _RefereeGameEvent__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_RefereeGameEvent(full_bounded, 0);
}

static message_type_support_callbacks_t _RefereeGameEvent__callbacks = {
  "message_info::msg",
  "RefereeGameEvent",
  _RefereeGameEvent__cdr_serialize,
  _RefereeGameEvent__cdr_deserialize,
  _RefereeGameEvent__get_serialized_size,
  _RefereeGameEvent__max_serialized_size
};

static rosidl_message_type_support_t _RefereeGameEvent__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_RefereeGameEvent__callbacks,
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
get_message_type_support_handle<message_info::msg::RefereeGameEvent>()
{
  return &message_info::msg::typesupport_fastrtps_cpp::_RefereeGameEvent__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, message_info, msg, RefereeGameEvent)() {
  return &message_info::msg::typesupport_fastrtps_cpp::_RefereeGameEvent__handle;
}

#ifdef __cplusplus
}
#endif
