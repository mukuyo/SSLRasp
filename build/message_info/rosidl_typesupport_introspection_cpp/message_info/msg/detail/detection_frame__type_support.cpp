// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from message_info:msg/DetectionFrame.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "message_info/msg/detail/detection_frame__struct.hpp"
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

void DetectionFrame_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) message_info::msg::DetectionFrame(_init);
}

void DetectionFrame_fini_function(void * message_memory)
{
  auto typed_message = static_cast<message_info::msg::DetectionFrame *>(message_memory);
  typed_message->~DetectionFrame();
}

size_t size_function__DetectionFrame__balls(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<message_info::msg::DetectionBall> *>(untyped_member);
  return member->size();
}

const void * get_const_function__DetectionFrame__balls(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<message_info::msg::DetectionBall> *>(untyped_member);
  return &member[index];
}

void * get_function__DetectionFrame__balls(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<message_info::msg::DetectionBall> *>(untyped_member);
  return &member[index];
}

void resize_function__DetectionFrame__balls(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<message_info::msg::DetectionBall> *>(untyped_member);
  member->resize(size);
}

size_t size_function__DetectionFrame__robots_yellow(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<message_info::msg::DetectionRobot> *>(untyped_member);
  return member->size();
}

const void * get_const_function__DetectionFrame__robots_yellow(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<message_info::msg::DetectionRobot> *>(untyped_member);
  return &member[index];
}

void * get_function__DetectionFrame__robots_yellow(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<message_info::msg::DetectionRobot> *>(untyped_member);
  return &member[index];
}

void resize_function__DetectionFrame__robots_yellow(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<message_info::msg::DetectionRobot> *>(untyped_member);
  member->resize(size);
}

size_t size_function__DetectionFrame__robots_blue(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<message_info::msg::DetectionRobot> *>(untyped_member);
  return member->size();
}

const void * get_const_function__DetectionFrame__robots_blue(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<message_info::msg::DetectionRobot> *>(untyped_member);
  return &member[index];
}

void * get_function__DetectionFrame__robots_blue(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<message_info::msg::DetectionRobot> *>(untyped_member);
  return &member[index];
}

void resize_function__DetectionFrame__robots_blue(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<message_info::msg::DetectionRobot> *>(untyped_member);
  member->resize(size);
}

size_t size_function__DetectionFrame__our_robots(const void * untyped_member)
{
  (void)untyped_member;
  return 16;
}

const void * get_const_function__DetectionFrame__our_robots(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<message_info::msg::DetectionRobot, 16> *>(untyped_member);
  return &member[index];
}

void * get_function__DetectionFrame__our_robots(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<message_info::msg::DetectionRobot, 16> *>(untyped_member);
  return &member[index];
}

size_t size_function__DetectionFrame__their_robots(const void * untyped_member)
{
  (void)untyped_member;
  return 16;
}

const void * get_const_function__DetectionFrame__their_robots(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<message_info::msg::DetectionRobot, 16> *>(untyped_member);
  return &member[index];
}

void * get_function__DetectionFrame__their_robots(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<message_info::msg::DetectionRobot, 16> *>(untyped_member);
  return &member[index];
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember DetectionFrame_message_member_array[9] = {
  {
    "t_capture",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(message_info::msg::DetectionFrame, t_capture),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "t_sent",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(message_info::msg::DetectionFrame, t_sent),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "camera_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(message_info::msg::DetectionFrame, camera_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "balls",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<message_info::msg::DetectionBall>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(message_info::msg::DetectionFrame, balls),  // bytes offset in struct
    nullptr,  // default value
    size_function__DetectionFrame__balls,  // size() function pointer
    get_const_function__DetectionFrame__balls,  // get_const(index) function pointer
    get_function__DetectionFrame__balls,  // get(index) function pointer
    resize_function__DetectionFrame__balls  // resize(index) function pointer
  },
  {
    "robots_yellow",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<message_info::msg::DetectionRobot>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(message_info::msg::DetectionFrame, robots_yellow),  // bytes offset in struct
    nullptr,  // default value
    size_function__DetectionFrame__robots_yellow,  // size() function pointer
    get_const_function__DetectionFrame__robots_yellow,  // get_const(index) function pointer
    get_function__DetectionFrame__robots_yellow,  // get(index) function pointer
    resize_function__DetectionFrame__robots_yellow  // resize(index) function pointer
  },
  {
    "robots_blue",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<message_info::msg::DetectionRobot>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(message_info::msg::DetectionFrame, robots_blue),  // bytes offset in struct
    nullptr,  // default value
    size_function__DetectionFrame__robots_blue,  // size() function pointer
    get_const_function__DetectionFrame__robots_blue,  // get_const(index) function pointer
    get_function__DetectionFrame__robots_blue,  // get(index) function pointer
    resize_function__DetectionFrame__robots_blue  // resize(index) function pointer
  },
  {
    "our_robots",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<message_info::msg::DetectionRobot>(),  // members of sub message
    true,  // is array
    16,  // array size
    false,  // is upper bound
    offsetof(message_info::msg::DetectionFrame, our_robots),  // bytes offset in struct
    nullptr,  // default value
    size_function__DetectionFrame__our_robots,  // size() function pointer
    get_const_function__DetectionFrame__our_robots,  // get_const(index) function pointer
    get_function__DetectionFrame__our_robots,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "their_robots",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<message_info::msg::DetectionRobot>(),  // members of sub message
    true,  // is array
    16,  // array size
    false,  // is upper bound
    offsetof(message_info::msg::DetectionFrame, their_robots),  // bytes offset in struct
    nullptr,  // default value
    size_function__DetectionFrame__their_robots,  // size() function pointer
    get_const_function__DetectionFrame__their_robots,  // get_const(index) function pointer
    get_function__DetectionFrame__their_robots,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "ball",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<message_info::msg::DetectionBall>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(message_info::msg::DetectionFrame, ball),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers DetectionFrame_message_members = {
  "message_info::msg",  // message namespace
  "DetectionFrame",  // message name
  9,  // number of fields
  sizeof(message_info::msg::DetectionFrame),
  DetectionFrame_message_member_array,  // message members
  DetectionFrame_init_function,  // function to initialize message memory (memory has to be allocated)
  DetectionFrame_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t DetectionFrame_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &DetectionFrame_message_members,
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
get_message_type_support_handle<message_info::msg::DetectionFrame>()
{
  return &::message_info::msg::rosidl_typesupport_introspection_cpp::DetectionFrame_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, message_info, msg, DetectionFrame)() {
  return &::message_info::msg::rosidl_typesupport_introspection_cpp::DetectionFrame_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
