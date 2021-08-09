// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from message_info:msg/Attacker.idl
// generated code does not contain a copyright notice

#ifndef MESSAGE_INFO__MSG__DETAIL__ATTACKER__TRAITS_HPP_
#define MESSAGE_INFO__MSG__DETAIL__ATTACKER__TRAITS_HPP_

#include "message_info/msg/detail/attacker__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'pose'
// Member 'set_position'
#include "geometry_msgs/msg/detail/pose2_d__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<message_info::msg::Attacker>()
{
  return "message_info::msg::Attacker";
}

template<>
inline const char * name<message_info::msg::Attacker>()
{
  return "message_info/msg/Attacker";
}

template<>
struct has_fixed_size<message_info::msg::Attacker>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Pose2D>::value> {};

template<>
struct has_bounded_size<message_info::msg::Attacker>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Pose2D>::value> {};

template<>
struct is_message<message_info::msg::Attacker>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MESSAGE_INFO__MSG__DETAIL__ATTACKER__TRAITS_HPP_
