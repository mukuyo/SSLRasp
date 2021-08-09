// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from message_info:msg/Attacker.idl
// generated code does not contain a copyright notice

#ifndef MESSAGE_INFO__MSG__DETAIL__ATTACKER__BUILDER_HPP_
#define MESSAGE_INFO__MSG__DETAIL__ATTACKER__BUILDER_HPP_

#include "message_info/msg/detail/attacker__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace message_info
{

namespace msg
{

namespace builder
{

class Init_Attacker_set_position
{
public:
  explicit Init_Attacker_set_position(::message_info::msg::Attacker & msg)
  : msg_(msg)
  {}
  ::message_info::msg::Attacker set_position(::message_info::msg::Attacker::_set_position_type arg)
  {
    msg_.set_position = std::move(arg);
    return std::move(msg_);
  }

private:
  ::message_info::msg::Attacker msg_;
};

class Init_Attacker_pose
{
public:
  Init_Attacker_pose()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Attacker_set_position pose(::message_info::msg::Attacker::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return Init_Attacker_set_position(msg_);
  }

private:
  ::message_info::msg::Attacker msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::message_info::msg::Attacker>()
{
  return message_info::msg::builder::Init_Attacker_pose();
}

}  // namespace message_info

#endif  // MESSAGE_INFO__MSG__DETAIL__ATTACKER__BUILDER_HPP_
