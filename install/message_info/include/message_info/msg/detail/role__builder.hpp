// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from message_info:msg/Role.idl
// generated code does not contain a copyright notice

#ifndef MESSAGE_INFO__MSG__DETAIL__ROLE__BUILDER_HPP_
#define MESSAGE_INFO__MSG__DETAIL__ROLE__BUILDER_HPP_

#include "message_info/msg/detail/role__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace message_info
{

namespace msg
{

namespace builder
{

class Init_Role_defense_count
{
public:
  explicit Init_Role_defense_count(::message_info::msg::Role & msg)
  : msg_(msg)
  {}
  ::message_info::msg::Role defense_count(::message_info::msg::Role::_defense_count_type arg)
  {
    msg_.defense_count = std::move(arg);
    return std::move(msg_);
  }

private:
  ::message_info::msg::Role msg_;
};

class Init_Role_offense_count
{
public:
  explicit Init_Role_offense_count(::message_info::msg::Role & msg)
  : msg_(msg)
  {}
  Init_Role_defense_count offense_count(::message_info::msg::Role::_offense_count_type arg)
  {
    msg_.offense_count = std::move(arg);
    return Init_Role_defense_count(msg_);
  }

private:
  ::message_info::msg::Role msg_;
};

class Init_Role_offense
{
public:
  explicit Init_Role_offense(::message_info::msg::Role & msg)
  : msg_(msg)
  {}
  Init_Role_offense_count offense(::message_info::msg::Role::_offense_type arg)
  {
    msg_.offense = std::move(arg);
    return Init_Role_offense_count(msg_);
  }

private:
  ::message_info::msg::Role msg_;
};

class Init_Role_defense
{
public:
  explicit Init_Role_defense(::message_info::msg::Role & msg)
  : msg_(msg)
  {}
  Init_Role_offense defense(::message_info::msg::Role::_defense_type arg)
  {
    msg_.defense = std::move(arg);
    return Init_Role_offense(msg_);
  }

private:
  ::message_info::msg::Role msg_;
};

class Init_Role_goalie
{
public:
  explicit Init_Role_goalie(::message_info::msg::Role & msg)
  : msg_(msg)
  {}
  Init_Role_defense goalie(::message_info::msg::Role::_goalie_type arg)
  {
    msg_.goalie = std::move(arg);
    return Init_Role_defense(msg_);
  }

private:
  ::message_info::msg::Role msg_;
};

class Init_Role_attacker
{
public:
  Init_Role_attacker()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Role_goalie attacker(::message_info::msg::Role::_attacker_type arg)
  {
    msg_.attacker = std::move(arg);
    return Init_Role_goalie(msg_);
  }

private:
  ::message_info::msg::Role msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::message_info::msg::Role>()
{
  return message_info::msg::builder::Init_Role_attacker();
}

}  // namespace message_info

#endif  // MESSAGE_INFO__MSG__DETAIL__ROLE__BUILDER_HPP_
