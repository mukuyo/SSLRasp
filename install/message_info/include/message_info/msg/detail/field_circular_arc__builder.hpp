// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from message_info:msg/FieldCircularArc.idl
// generated code does not contain a copyright notice

#ifndef MESSAGE_INFO__MSG__DETAIL__FIELD_CIRCULAR_ARC__BUILDER_HPP_
#define MESSAGE_INFO__MSG__DETAIL__FIELD_CIRCULAR_ARC__BUILDER_HPP_

#include "message_info/msg/detail/field_circular_arc__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace message_info
{

namespace msg
{

namespace builder
{

class Init_FieldCircularArc_thickness
{
public:
  explicit Init_FieldCircularArc_thickness(::message_info::msg::FieldCircularArc & msg)
  : msg_(msg)
  {}
  ::message_info::msg::FieldCircularArc thickness(::message_info::msg::FieldCircularArc::_thickness_type arg)
  {
    msg_.thickness = std::move(arg);
    return std::move(msg_);
  }

private:
  ::message_info::msg::FieldCircularArc msg_;
};

class Init_FieldCircularArc_a2
{
public:
  explicit Init_FieldCircularArc_a2(::message_info::msg::FieldCircularArc & msg)
  : msg_(msg)
  {}
  Init_FieldCircularArc_thickness a2(::message_info::msg::FieldCircularArc::_a2_type arg)
  {
    msg_.a2 = std::move(arg);
    return Init_FieldCircularArc_thickness(msg_);
  }

private:
  ::message_info::msg::FieldCircularArc msg_;
};

class Init_FieldCircularArc_a1
{
public:
  explicit Init_FieldCircularArc_a1(::message_info::msg::FieldCircularArc & msg)
  : msg_(msg)
  {}
  Init_FieldCircularArc_a2 a1(::message_info::msg::FieldCircularArc::_a1_type arg)
  {
    msg_.a1 = std::move(arg);
    return Init_FieldCircularArc_a2(msg_);
  }

private:
  ::message_info::msg::FieldCircularArc msg_;
};

class Init_FieldCircularArc_radius
{
public:
  explicit Init_FieldCircularArc_radius(::message_info::msg::FieldCircularArc & msg)
  : msg_(msg)
  {}
  Init_FieldCircularArc_a1 radius(::message_info::msg::FieldCircularArc::_radius_type arg)
  {
    msg_.radius = std::move(arg);
    return Init_FieldCircularArc_a1(msg_);
  }

private:
  ::message_info::msg::FieldCircularArc msg_;
};

class Init_FieldCircularArc_center_y
{
public:
  explicit Init_FieldCircularArc_center_y(::message_info::msg::FieldCircularArc & msg)
  : msg_(msg)
  {}
  Init_FieldCircularArc_radius center_y(::message_info::msg::FieldCircularArc::_center_y_type arg)
  {
    msg_.center_y = std::move(arg);
    return Init_FieldCircularArc_radius(msg_);
  }

private:
  ::message_info::msg::FieldCircularArc msg_;
};

class Init_FieldCircularArc_center_x
{
public:
  explicit Init_FieldCircularArc_center_x(::message_info::msg::FieldCircularArc & msg)
  : msg_(msg)
  {}
  Init_FieldCircularArc_center_y center_x(::message_info::msg::FieldCircularArc::_center_x_type arg)
  {
    msg_.center_x = std::move(arg);
    return Init_FieldCircularArc_center_y(msg_);
  }

private:
  ::message_info::msg::FieldCircularArc msg_;
};

class Init_FieldCircularArc_name
{
public:
  Init_FieldCircularArc_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FieldCircularArc_center_x name(::message_info::msg::FieldCircularArc::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_FieldCircularArc_center_x(msg_);
  }

private:
  ::message_info::msg::FieldCircularArc msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::message_info::msg::FieldCircularArc>()
{
  return message_info::msg::builder::Init_FieldCircularArc_name();
}

}  // namespace message_info

#endif  // MESSAGE_INFO__MSG__DETAIL__FIELD_CIRCULAR_ARC__BUILDER_HPP_
