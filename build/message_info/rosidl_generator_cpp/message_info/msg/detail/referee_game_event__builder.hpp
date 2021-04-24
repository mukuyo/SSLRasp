// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from message_info:msg/RefereeGameEvent.idl
// generated code does not contain a copyright notice

#ifndef MESSAGE_INFO__MSG__DETAIL__REFEREE_GAME_EVENT__BUILDER_HPP_
#define MESSAGE_INFO__MSG__DETAIL__REFEREE_GAME_EVENT__BUILDER_HPP_

#include "message_info/msg/detail/referee_game_event__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace message_info
{

namespace msg
{

namespace builder
{

class Init_RefereeGameEvent_message
{
public:
  explicit Init_RefereeGameEvent_message(::message_info::msg::RefereeGameEvent & msg)
  : msg_(msg)
  {}
  ::message_info::msg::RefereeGameEvent message(::message_info::msg::RefereeGameEvent::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::message_info::msg::RefereeGameEvent msg_;
};

class Init_RefereeGameEvent_originator_bot_id
{
public:
  explicit Init_RefereeGameEvent_originator_bot_id(::message_info::msg::RefereeGameEvent & msg)
  : msg_(msg)
  {}
  Init_RefereeGameEvent_message originator_bot_id(::message_info::msg::RefereeGameEvent::_originator_bot_id_type arg)
  {
    msg_.originator_bot_id = std::move(arg);
    return Init_RefereeGameEvent_message(msg_);
  }

private:
  ::message_info::msg::RefereeGameEvent msg_;
};

class Init_RefereeGameEvent_originator_team
{
public:
  explicit Init_RefereeGameEvent_originator_team(::message_info::msg::RefereeGameEvent & msg)
  : msg_(msg)
  {}
  Init_RefereeGameEvent_originator_bot_id originator_team(::message_info::msg::RefereeGameEvent::_originator_team_type arg)
  {
    msg_.originator_team = std::move(arg);
    return Init_RefereeGameEvent_originator_bot_id(msg_);
  }

private:
  ::message_info::msg::RefereeGameEvent msg_;
};

class Init_RefereeGameEvent_game_event_type
{
public:
  Init_RefereeGameEvent_game_event_type()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RefereeGameEvent_originator_team game_event_type(::message_info::msg::RefereeGameEvent::_game_event_type_type arg)
  {
    msg_.game_event_type = std::move(arg);
    return Init_RefereeGameEvent_originator_team(msg_);
  }

private:
  ::message_info::msg::RefereeGameEvent msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::message_info::msg::RefereeGameEvent>()
{
  return message_info::msg::builder::Init_RefereeGameEvent_game_event_type();
}

}  // namespace message_info

#endif  // MESSAGE_INFO__MSG__DETAIL__REFEREE_GAME_EVENT__BUILDER_HPP_
