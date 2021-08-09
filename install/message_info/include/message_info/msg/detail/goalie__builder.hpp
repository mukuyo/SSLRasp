// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from message_info:msg/Goalie.idl
// generated code does not contain a copyright notice

#ifndef MESSAGE_INFO__MSG__DETAIL__GOALIE__BUILDER_HPP_
#define MESSAGE_INFO__MSG__DETAIL__GOALIE__BUILDER_HPP_

#include "message_info/msg/detail/goalie__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace message_info
{

namespace msg
{

namespace builder
{

class Init_Goalie_pose
{
public:
  Init_Goalie_pose()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::message_info::msg::Goalie pose(::message_info::msg::Goalie::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return std::move(msg_);
  }

private:
  ::message_info::msg::Goalie msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::message_info::msg::Goalie>()
{
  return message_info::msg::builder::Init_Goalie_pose();
}

}  // namespace message_info

#endif  // MESSAGE_INFO__MSG__DETAIL__GOALIE__BUILDER_HPP_
