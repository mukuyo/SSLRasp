// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from message_info:msg/DetectionFrame.idl
// generated code does not contain a copyright notice

#ifndef MESSAGE_INFO__MSG__DETAIL__DETECTION_FRAME__TRAITS_HPP_
#define MESSAGE_INFO__MSG__DETAIL__DETECTION_FRAME__TRAITS_HPP_

#include "message_info/msg/detail/detection_frame__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'our_robots'
// Member 'their_robots'
#include "message_info/msg/detail/detection_robot__traits.hpp"
// Member 'ball'
#include "message_info/msg/detail/detection_ball__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<message_info::msg::DetectionFrame>()
{
  return "message_info::msg::DetectionFrame";
}

template<>
inline const char * name<message_info::msg::DetectionFrame>()
{
  return "message_info/msg/DetectionFrame";
}

template<>
struct has_fixed_size<message_info::msg::DetectionFrame>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<message_info::msg::DetectionFrame>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<message_info::msg::DetectionFrame>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MESSAGE_INFO__MSG__DETAIL__DETECTION_FRAME__TRAITS_HPP_
