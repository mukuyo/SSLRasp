// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from message_info:msg/RefereeTeamInfo.idl
// generated code does not contain a copyright notice

#ifndef MESSAGE_INFO__MSG__DETAIL__REFEREE_TEAM_INFO__BUILDER_HPP_
#define MESSAGE_INFO__MSG__DETAIL__REFEREE_TEAM_INFO__BUILDER_HPP_

#include "message_info/msg/detail/referee_team_info__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace message_info
{

namespace msg
{

namespace builder
{

class Init_RefereeTeamInfo_goalie
{
public:
  explicit Init_RefereeTeamInfo_goalie(::message_info::msg::RefereeTeamInfo & msg)
  : msg_(msg)
  {}
  ::message_info::msg::RefereeTeamInfo goalie(::message_info::msg::RefereeTeamInfo::_goalie_type arg)
  {
    msg_.goalie = std::move(arg);
    return std::move(msg_);
  }

private:
  ::message_info::msg::RefereeTeamInfo msg_;
};

class Init_RefereeTeamInfo_timeout_time
{
public:
  explicit Init_RefereeTeamInfo_timeout_time(::message_info::msg::RefereeTeamInfo & msg)
  : msg_(msg)
  {}
  Init_RefereeTeamInfo_goalie timeout_time(::message_info::msg::RefereeTeamInfo::_timeout_time_type arg)
  {
    msg_.timeout_time = std::move(arg);
    return Init_RefereeTeamInfo_goalie(msg_);
  }

private:
  ::message_info::msg::RefereeTeamInfo msg_;
};

class Init_RefereeTeamInfo_timeouts
{
public:
  explicit Init_RefereeTeamInfo_timeouts(::message_info::msg::RefereeTeamInfo & msg)
  : msg_(msg)
  {}
  Init_RefereeTeamInfo_timeout_time timeouts(::message_info::msg::RefereeTeamInfo::_timeouts_type arg)
  {
    msg_.timeouts = std::move(arg);
    return Init_RefereeTeamInfo_timeout_time(msg_);
  }

private:
  ::message_info::msg::RefereeTeamInfo msg_;
};

class Init_RefereeTeamInfo_yellow_cards
{
public:
  explicit Init_RefereeTeamInfo_yellow_cards(::message_info::msg::RefereeTeamInfo & msg)
  : msg_(msg)
  {}
  Init_RefereeTeamInfo_timeouts yellow_cards(::message_info::msg::RefereeTeamInfo::_yellow_cards_type arg)
  {
    msg_.yellow_cards = std::move(arg);
    return Init_RefereeTeamInfo_timeouts(msg_);
  }

private:
  ::message_info::msg::RefereeTeamInfo msg_;
};

class Init_RefereeTeamInfo_yellow_card_times
{
public:
  explicit Init_RefereeTeamInfo_yellow_card_times(::message_info::msg::RefereeTeamInfo & msg)
  : msg_(msg)
  {}
  Init_RefereeTeamInfo_yellow_cards yellow_card_times(::message_info::msg::RefereeTeamInfo::_yellow_card_times_type arg)
  {
    msg_.yellow_card_times = std::move(arg);
    return Init_RefereeTeamInfo_yellow_cards(msg_);
  }

private:
  ::message_info::msg::RefereeTeamInfo msg_;
};

class Init_RefereeTeamInfo_red_cards
{
public:
  explicit Init_RefereeTeamInfo_red_cards(::message_info::msg::RefereeTeamInfo & msg)
  : msg_(msg)
  {}
  Init_RefereeTeamInfo_yellow_card_times red_cards(::message_info::msg::RefereeTeamInfo::_red_cards_type arg)
  {
    msg_.red_cards = std::move(arg);
    return Init_RefereeTeamInfo_yellow_card_times(msg_);
  }

private:
  ::message_info::msg::RefereeTeamInfo msg_;
};

class Init_RefereeTeamInfo_score
{
public:
  explicit Init_RefereeTeamInfo_score(::message_info::msg::RefereeTeamInfo & msg)
  : msg_(msg)
  {}
  Init_RefereeTeamInfo_red_cards score(::message_info::msg::RefereeTeamInfo::_score_type arg)
  {
    msg_.score = std::move(arg);
    return Init_RefereeTeamInfo_red_cards(msg_);
  }

private:
  ::message_info::msg::RefereeTeamInfo msg_;
};

class Init_RefereeTeamInfo_name
{
public:
  Init_RefereeTeamInfo_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RefereeTeamInfo_score name(::message_info::msg::RefereeTeamInfo::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_RefereeTeamInfo_score(msg_);
  }

private:
  ::message_info::msg::RefereeTeamInfo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::message_info::msg::RefereeTeamInfo>()
{
  return message_info::msg::builder::Init_RefereeTeamInfo_name();
}

}  // namespace message_info

#endif  // MESSAGE_INFO__MSG__DETAIL__REFEREE_TEAM_INFO__BUILDER_HPP_
