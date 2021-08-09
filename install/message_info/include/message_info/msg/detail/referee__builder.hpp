// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from message_info:msg/Referee.idl
// generated code does not contain a copyright notice

#ifndef MESSAGE_INFO__MSG__DETAIL__REFEREE__BUILDER_HPP_
#define MESSAGE_INFO__MSG__DETAIL__REFEREE__BUILDER_HPP_

#include "message_info/msg/detail/referee__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace message_info
{

namespace msg
{

namespace builder
{

class Init_Referee_game_event
{
public:
  explicit Init_Referee_game_event(::message_info::msg::Referee & msg)
  : msg_(msg)
  {}
  ::message_info::msg::Referee game_event(::message_info::msg::Referee::_game_event_type arg)
  {
    msg_.game_event = std::move(arg);
    return std::move(msg_);
  }

private:
  ::message_info::msg::Referee msg_;
};

class Init_Referee_designated_position
{
public:
  explicit Init_Referee_designated_position(::message_info::msg::Referee & msg)
  : msg_(msg)
  {}
  Init_Referee_game_event designated_position(::message_info::msg::Referee::_designated_position_type arg)
  {
    msg_.designated_position = std::move(arg);
    return Init_Referee_game_event(msg_);
  }

private:
  ::message_info::msg::Referee msg_;
};

class Init_Referee_blue
{
public:
  explicit Init_Referee_blue(::message_info::msg::Referee & msg)
  : msg_(msg)
  {}
  Init_Referee_designated_position blue(::message_info::msg::Referee::_blue_type arg)
  {
    msg_.blue = std::move(arg);
    return Init_Referee_designated_position(msg_);
  }

private:
  ::message_info::msg::Referee msg_;
};

class Init_Referee_yellow
{
public:
  explicit Init_Referee_yellow(::message_info::msg::Referee & msg)
  : msg_(msg)
  {}
  Init_Referee_blue yellow(::message_info::msg::Referee::_yellow_type arg)
  {
    msg_.yellow = std::move(arg);
    return Init_Referee_blue(msg_);
  }

private:
  ::message_info::msg::Referee msg_;
};

class Init_Referee_command_counter
{
public:
  explicit Init_Referee_command_counter(::message_info::msg::Referee & msg)
  : msg_(msg)
  {}
  Init_Referee_yellow command_counter(::message_info::msg::Referee::_command_counter_type arg)
  {
    msg_.command_counter = std::move(arg);
    return Init_Referee_yellow(msg_);
  }

private:
  ::message_info::msg::Referee msg_;
};

class Init_Referee_command
{
public:
  explicit Init_Referee_command(::message_info::msg::Referee & msg)
  : msg_(msg)
  {}
  Init_Referee_command_counter command(::message_info::msg::Referee::_command_type arg)
  {
    msg_.command = std::move(arg);
    return Init_Referee_command_counter(msg_);
  }

private:
  ::message_info::msg::Referee msg_;
};

class Init_Referee_info
{
public:
  explicit Init_Referee_info(::message_info::msg::Referee & msg)
  : msg_(msg)
  {}
  Init_Referee_command info(::message_info::msg::Referee::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_Referee_command(msg_);
  }

private:
  ::message_info::msg::Referee msg_;
};

class Init_Referee_play
{
public:
  explicit Init_Referee_play(::message_info::msg::Referee & msg)
  : msg_(msg)
  {}
  Init_Referee_info play(::message_info::msg::Referee::_play_type arg)
  {
    msg_.play = std::move(arg);
    return Init_Referee_info(msg_);
  }

private:
  ::message_info::msg::Referee msg_;
};

class Init_Referee_stage
{
public:
  Init_Referee_stage()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Referee_play stage(::message_info::msg::Referee::_stage_type arg)
  {
    msg_.stage = std::move(arg);
    return Init_Referee_play(msg_);
  }

private:
  ::message_info::msg::Referee msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::message_info::msg::Referee>()
{
  return message_info::msg::builder::Init_Referee_stage();
}

}  // namespace message_info

#endif  // MESSAGE_INFO__MSG__DETAIL__REFEREE__BUILDER_HPP_
