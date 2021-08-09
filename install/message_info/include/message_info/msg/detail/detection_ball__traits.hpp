// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from message_info:msg/DetectionBall.idl
// generated code does not contain a copyright notice

#ifndef MESSAGE_INFO__MSG__DETAIL__DETECTION_BALL__TRAITS_HPP_
#define MESSAGE_INFO__MSG__DETAIL__DETECTION_BALL__TRAITS_HPP_

#include "message_info/msg/detail/detection_ball__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'pose'
#include "geometry_msgs/msg/detail/pose2_d__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<message_info::msg::DetectionBall>()
{
  return "message_info::msg::DetectionBall";
}

template<>
inline const char * name<message_info::msg::DetectionBall>()
{
  return "message_info/msg/DetectionBall";
}

template<>
struct has_fixed_size<message_info::msg::DetectionBall>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Pose2D>::value> {};

template<>
struct has_bounded_size<message_info::msg::DetectionBall>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Pose2D>::value> {};

template<>
struct is_message<message_info::msg::DetectionBall>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MESSAGE_INFO__MSG__DETAIL__DETECTION_BALL__TRAITS_HPP_
