// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from message_info:msg/Info.idl
// generated code does not contain a copyright notice

#ifndef MESSAGE_INFO__MSG__DETAIL__INFO__TRAITS_HPP_
#define MESSAGE_INFO__MSG__DETAIL__INFO__TRAITS_HPP_

#include "message_info/msg/detail/info__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'frame'
#include "message_info/msg/detail/detection_frame__traits.hpp"
// Member 'geometry'
#include "message_info/msg/detail/vision_geometry__traits.hpp"
// Member 'role'
#include "message_info/msg/detail/role__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<message_info::msg::Info>()
{
  return "message_info::msg::Info";
}

template<>
inline const char * name<message_info::msg::Info>()
{
  return "message_info/msg/Info";
}

template<>
struct has_fixed_size<message_info::msg::Info>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<message_info::msg::Info>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<message_info::msg::Info>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MESSAGE_INFO__MSG__DETAIL__INFO__TRAITS_HPP_
