// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from message_info:msg/GoalInfo.idl
// generated code does not contain a copyright notice

#ifndef MESSAGE_INFO__MSG__DETAIL__GOAL_INFO__BUILDER_HPP_
#define MESSAGE_INFO__MSG__DETAIL__GOAL_INFO__BUILDER_HPP_

#include "message_info/msg/detail/goal_info__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace message_info
{

namespace msg
{

namespace builder
{

class Init_GoalInfo_goal_depth
{
public:
  explicit Init_GoalInfo_goal_depth(::message_info::msg::GoalInfo & msg)
  : msg_(msg)
  {}
  ::message_info::msg::GoalInfo goal_depth(::message_info::msg::GoalInfo::_goal_depth_type arg)
  {
    msg_.goal_depth = std::move(arg);
    return std::move(msg_);
  }

private:
  ::message_info::msg::GoalInfo msg_;
};

class Init_GoalInfo_goal_width
{
public:
  explicit Init_GoalInfo_goal_width(::message_info::msg::GoalInfo & msg)
  : msg_(msg)
  {}
  Init_GoalInfo_goal_depth goal_width(::message_info::msg::GoalInfo::_goal_width_type arg)
  {
    msg_.goal_width = std::move(arg);
    return Init_GoalInfo_goal_depth(msg_);
  }

private:
  ::message_info::msg::GoalInfo msg_;
};

class Init_GoalInfo_field_length
{
public:
  explicit Init_GoalInfo_field_length(::message_info::msg::GoalInfo & msg)
  : msg_(msg)
  {}
  Init_GoalInfo_goal_width field_length(::message_info::msg::GoalInfo::_field_length_type arg)
  {
    msg_.field_length = std::move(arg);
    return Init_GoalInfo_goal_width(msg_);
  }

private:
  ::message_info::msg::GoalInfo msg_;
};

class Init_GoalInfo_field_width
{
public:
  explicit Init_GoalInfo_field_width(::message_info::msg::GoalInfo & msg)
  : msg_(msg)
  {}
  Init_GoalInfo_field_length field_width(::message_info::msg::GoalInfo::_field_width_type arg)
  {
    msg_.field_width = std::move(arg);
    return Init_GoalInfo_field_length(msg_);
  }

private:
  ::message_info::msg::GoalInfo msg_;
};

class Init_GoalInfo_our
{
public:
  explicit Init_GoalInfo_our(::message_info::msg::GoalInfo & msg)
  : msg_(msg)
  {}
  Init_GoalInfo_field_width our(::message_info::msg::GoalInfo::_our_type arg)
  {
    msg_.our = std::move(arg);
    return Init_GoalInfo_field_width(msg_);
  }

private:
  ::message_info::msg::GoalInfo msg_;
};

class Init_GoalInfo_their
{
public:
  Init_GoalInfo_their()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GoalInfo_our their(::message_info::msg::GoalInfo::_their_type arg)
  {
    msg_.their = std::move(arg);
    return Init_GoalInfo_our(msg_);
  }

private:
  ::message_info::msg::GoalInfo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::message_info::msg::GoalInfo>()
{
  return message_info::msg::builder::Init_GoalInfo_their();
}

}  // namespace message_info

#endif  // MESSAGE_INFO__MSG__DETAIL__GOAL_INFO__BUILDER_HPP_
