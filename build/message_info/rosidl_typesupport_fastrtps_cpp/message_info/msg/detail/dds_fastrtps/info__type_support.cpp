// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from message_info:msg/Info.idl
// generated code does not contain a copyright notice
#include "message_info/msg/detail/info__rosidl_typesupport_fastrtps_cpp.hpp"
#include "message_info/msg/detail/info__struct.hpp"

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
  const message_info::msg::DetectionFrame &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  message_info::msg::DetectionFrame &);
size_t get_serialized_size(
  const message_info::msg::DetectionFrame &,
  size_t current_alignment);
size_t
max_serialized_size_DetectionFrame(
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
  const message_info::msg::VisionGeometry &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  message_info::msg::VisionGeometry &);
size_t get_serialized_size(
  const message_info::msg::VisionGeometry &,
  size_t current_alignment);
size_t
max_serialized_size_VisionGeometry(
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
  const message_info::msg::Role &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  message_info::msg::Role &);
size_t get_serialized_size(
  const message_info::msg::Role &,
  size_t current_alignment);
size_t
max_serialized_size_Role(
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
  const message_info::msg::Info & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: name
  {
    cdr << ros_message.name;
  }
  // Member: frame
  message_info::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.frame,
    cdr);
  // Member: geometry
  message_info::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.geometry,
    cdr);
  // Member: role
  message_info::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.role,
    cdr);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_message_info
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  message_info::msg::Info & ros_message)
{
  // Member: name
  {
    cdr >> ros_message.name;
  }

  // Member: frame
  message_info::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.frame);

  // Member: geometry
  message_info::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.geometry);

  // Member: role
  message_info::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.role);

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_message_info
get_serialized_size(
  const message_info::msg::Info & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: name
  {
    size_t array_size = ros_message.name.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (ros_message.name[index].size() + 1);
    }
  }
  // Member: frame

  current_alignment +=
    message_info::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.frame, current_alignment);
  // Member: geometry

  current_alignment +=
    message_info::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.geometry, current_alignment);
  // Member: role

  current_alignment +=
    message_info::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.role, current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_message_info
max_serialized_size_Info(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: name
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: frame
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        message_info::msg::typesupport_fastrtps_cpp::max_serialized_size_DetectionFrame(
        full_bounded, current_alignment);
    }
  }

  // Member: geometry
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        message_info::msg::typesupport_fastrtps_cpp::max_serialized_size_VisionGeometry(
        full_bounded, current_alignment);
    }
  }

  // Member: role
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        message_info::msg::typesupport_fastrtps_cpp::max_serialized_size_Role(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static bool _Info__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const message_info::msg::Info *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Info__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<message_info::msg::Info *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Info__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const message_info::msg::Info *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Info__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_Info(full_bounded, 0);
}

static message_type_support_callbacks_t _Info__callbacks = {
  "message_info::msg",
  "Info",
  _Info__cdr_serialize,
  _Info__cdr_deserialize,
  _Info__get_serialized_size,
  _Info__max_serialized_size
};

static rosidl_message_type_support_t _Info__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Info__callbacks,
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
get_message_type_support_handle<message_info::msg::Info>()
{
  return &message_info::msg::typesupport_fastrtps_cpp::_Info__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, message_info, msg, Info)() {
  return &message_info::msg::typesupport_fastrtps_cpp::_Info__handle;
}

#ifdef __cplusplus
}
#endif
