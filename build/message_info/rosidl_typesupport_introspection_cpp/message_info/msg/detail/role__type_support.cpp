// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from message_info:msg/Role.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "message_info/msg/detail/role__struct.hpp"
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

void Role_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) message_info::msg::Role(_init);
}

void Role_fini_function(void * message_memory)
{
  auto typed_message = static_cast<message_info::msg::Role *>(message_memory);
  typed_message->~Role();
}

size_t size_function__Role__defense(const void * untyped_member)
{
  (void)untyped_member;
  return 10;
}

const void * get_const_function__Role__defense(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<int32_t, 10> *>(untyped_member);
  return &member[index];
}

void * get_function__Role__defense(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<int32_t, 10> *>(untyped_member);
  return &member[index];
}

size_t size_function__Role__offense(const void * untyped_member)
{
  (void)untyped_member;
  return 10;
}

const void * get_const_function__Role__offense(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<int32_t, 10> *>(untyped_member);
  return &member[index];
}

void * get_function__Role__offense(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<int32_t, 10> *>(untyped_member);
  return &member[index];
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Role_message_member_array[6] = {
  {
    "attacker",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(message_info::msg::Role, attacker),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "goalie",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(message_info::msg::Role, goalie),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "defense",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    10,  // array size
    false,  // is upper bound
    offsetof(message_info::msg::Role, defense),  // bytes offset in struct
    nullptr,  // default value
    size_function__Role__defense,  // size() function pointer
    get_const_function__Role__defense,  // get_const(index) function pointer
    get_function__Role__defense,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "offense",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    10,  // array size
    false,  // is upper bound
    offsetof(message_info::msg::Role, offense),  // bytes offset in struct
    nullptr,  // default value
    size_function__Role__offense,  // size() function pointer
    get_const_function__Role__offense,  // get_const(index) function pointer
    get_function__Role__offense,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "offense_count",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(message_info::msg::Role, offense_count),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "defense_count",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(message_info::msg::Role, defense_count),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Role_message_members = {
  "message_info::msg",  // message namespace
  "Role",  // message name
  6,  // number of fields
  sizeof(message_info::msg::Role),
  Role_message_member_array,  // message members
  Role_init_function,  // function to initialize message memory (memory has to be allocated)
  Role_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Role_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Role_message_members,
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
get_message_type_support_handle<message_info::msg::Role>()
{
  return &::message_info::msg::rosidl_typesupport_introspection_cpp::Role_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, message_info, msg, Role)() {
  return &::message_info::msg::rosidl_typesupport_introspection_cpp::Role_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
