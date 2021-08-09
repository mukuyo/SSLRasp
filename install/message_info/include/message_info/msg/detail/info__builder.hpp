// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from message_info:msg/Info.idl
// generated code does not contain a copyright notice

#ifndef MESSAGE_INFO__MSG__DETAIL__INFO__BUILDER_HPP_
#define MESSAGE_INFO__MSG__DETAIL__INFO__BUILDER_HPP_

#include "message_info/msg/detail/info__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace message_info
{

namespace msg
{

namespace builder
{

class Init_Info_role
{
public:
  explicit Init_Info_role(::message_info::msg::Info & msg)
  : msg_(msg)
  {}
  ::message_info::msg::Info role(::message_info::msg::Info::_role_type arg)
  {
    msg_.role = std::move(arg);
    return std::move(msg_);
  }

private:
  ::message_info::msg::Info msg_;
};

class Init_Info_geometry
{
public:
  explicit Init_Info_geometry(::message_info::msg::Info & msg)
  : msg_(msg)
  {}
  Init_Info_role geometry(::message_info::msg::Info::_geometry_type arg)
  {
    msg_.geometry = std::move(arg);
    return Init_Info_role(msg_);
  }

private:
  ::message_info::msg::Info msg_;
};

class Init_Info_frame
{
public:
  explicit Init_Info_frame(::message_info::msg::Info & msg)
  : msg_(msg)
  {}
  Init_Info_geometry frame(::message_info::msg::Info::_frame_type arg)
  {
    msg_.frame = std::move(arg);
    return Init_Info_geometry(msg_);
  }

private:
  ::message_info::msg::Info msg_;
};

class Init_Info_name
{
public:
  Init_Info_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Info_frame name(::message_info::msg::Info::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_Info_frame(msg_);
  }

private:
  ::message_info::msg::Info msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::message_info::msg::Info>()
{
  return message_info::msg::builder::Init_Info_name();
}

}  // namespace message_info

#endif  // MESSAGE_INFO__MSG__DETAIL__INFO__BUILDER_HPP_
