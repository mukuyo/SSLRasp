// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from message_info:msg/VisionDetections.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "message_info/msg/detail/vision_detections__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace message_info
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void VisionDetections_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) message_info::msg::VisionDetections(_init);
}

void VisionDetections_fini_function(void * message_memory)
{
  auto typed_message = static_cast<message_info::msg::VisionDetections *>(message_memory);
  typed_message->~VisionDetections();
}

size_t size_function__VisionDetections__frames(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<message_info::msg::DetectionFrame> *>(untyped_member);
  return member->size();
}

const void * get_const_function__VisionDetections__frames(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<message_info::msg::DetectionFrame> *>(untyped_member);
  return &member[index];
}

void * get_function__VisionDetections__frames(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<message_info::msg::DetectionFrame> *>(untyped_member);
  return &member[index];
}

void resize_function__VisionDetections__frames(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<message_info::msg::DetectionFrame> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember VisionDetections_message_member_array[3] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(message_info::msg::VisionDetections, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "frames",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<message_info::msg::DetectionFrame>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(message_info::msg::VisionDetections, frames),  // bytes offset in struct
    nullptr,  // default value
    size_function__VisionDetections__frames,  // size() function pointer
    get_const_function__VisionDetections__frames,  // get_const(index) function pointer
    get_function__VisionDetections__frames,  // get(index) function pointer
    resize_function__VisionDetections__frames  // resize(index) function pointer
  },
  {
    "test",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(message_info::msg::VisionDetections, test),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers VisionDetections_message_members = {
  "message_info::msg",  // message namespace
  "VisionDetections",  // message name
  3,  // number of fields
  sizeof(message_info::msg::VisionDetections),
  VisionDetections_message_member_array,  // message members
  VisionDetections_init_function,  // function to initialize message memory (memory has to be allocated)
  VisionDetections_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t VisionDetections_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &VisionDetections_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace message_info


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<message_info::msg::VisionDetections>()
{
  return &::message_info::msg::rosidl_typesupport_introspection_cpp::VisionDetections_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, message_info, msg, VisionDetections)() {
  return &::message_info::msg::rosidl_typesupport_introspection_cpp::VisionDetections_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
