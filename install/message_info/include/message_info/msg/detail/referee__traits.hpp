// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from message_info:msg/Referee.idl
// generated code does not contain a copyright notice

#ifndef MESSAGE_INFO__MSG__DETAIL__REFEREE__TRAITS_HPP_
#define MESSAGE_INFO__MSG__DETAIL__REFEREE__TRAITS_HPP_

#include "message_info/msg/detail/referee__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'yellow'
// Member 'blue'
#include "message_info/msg/detail/referee_team_info__traits.hpp"
// Member 'designated_position'
#include "geometry_msgs/msg/detail/point__traits.hpp"
// Member 'game_event'
#include "message_info/msg/detail/referee_game_event__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<message_info::msg::Referee>()
{
  return "message_info::msg::Referee";
}

template<>
inline const char * name<message_info::msg::Referee>()
{
  return "message_info/msg/Referee";
}

template<>
struct has_fixed_size<message_info::msg::Referee>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<message_info::msg::Referee>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<message_info::msg::Referee>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MESSAGE_INFO__MSG__DETAIL__REFEREE__TRAITS_HPP_
