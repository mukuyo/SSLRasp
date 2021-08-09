// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from message_info:msg/VisionDetections.idl
// generated code does not contain a copyright notice

#ifndef MESSAGE_INFO__MSG__DETAIL__VISION_DETECTIONS__TRAITS_HPP_
#define MESSAGE_INFO__MSG__DETAIL__VISION_DETECTIONS__TRAITS_HPP_

#include "message_info/msg/detail/vision_detections__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<message_info::msg::VisionDetections>()
{
  return "message_info::msg::VisionDetections";
}

template<>
inline const char * name<message_info::msg::VisionDetections>()
{
  return "message_info/msg/VisionDetections";
}

template<>
struct has_fixed_size<message_info::msg::VisionDetections>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<message_info::msg::VisionDetections>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<message_info::msg::VisionDetections>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MESSAGE_INFO__MSG__DETAIL__VISION_DETECTIONS__TRAITS_HPP_
