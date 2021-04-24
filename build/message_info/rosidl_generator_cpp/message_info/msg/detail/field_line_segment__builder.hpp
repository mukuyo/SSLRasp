// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from message_info:msg/FieldLineSegment.idl
// generated code does not contain a copyright notice

#ifndef MESSAGE_INFO__MSG__DETAIL__FIELD_LINE_SEGMENT__BUILDER_HPP_
#define MESSAGE_INFO__MSG__DETAIL__FIELD_LINE_SEGMENT__BUILDER_HPP_

#include "message_info/msg/detail/field_line_segment__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace message_info
{

namespace msg
{

namespace builder
{

class Init_FieldLineSegment_thickness
{
public:
  explicit Init_FieldLineSegment_thickness(::message_info::msg::FieldLineSegment & msg)
  : msg_(msg)
  {}
  ::message_info::msg::FieldLineSegment thickness(::message_info::msg::FieldLineSegment::_thickness_type arg)
  {
    msg_.thickness = std::move(arg);
    return std::move(msg_);
  }

private:
  ::message_info::msg::FieldLineSegment msg_;
};

class Init_FieldLineSegment_p2_y
{
public:
  explicit Init_FieldLineSegment_p2_y(::message_info::msg::FieldLineSegment & msg)
  : msg_(msg)
  {}
  Init_FieldLineSegment_thickness p2_y(::message_info::msg::FieldLineSegment::_p2_y_type arg)
  {
    msg_.p2_y = std::move(arg);
    return Init_FieldLineSegment_thickness(msg_);
  }

private:
  ::message_info::msg::FieldLineSegment msg_;
};

class Init_FieldLineSegment_p2_x
{
public:
  explicit Init_FieldLineSegment_p2_x(::message_info::msg::FieldLineSegment & msg)
  : msg_(msg)
  {}
  Init_FieldLineSegment_p2_y p2_x(::message_info::msg::FieldLineSegment::_p2_x_type arg)
  {
    msg_.p2_x = std::move(arg);
    return Init_FieldLineSegment_p2_y(msg_);
  }

private:
  ::message_info::msg::FieldLineSegment msg_;
};

class Init_FieldLineSegment_p1_y
{
public:
  explicit Init_FieldLineSegment_p1_y(::message_info::msg::FieldLineSegment & msg)
  : msg_(msg)
  {}
  Init_FieldLineSegment_p2_x p1_y(::message_info::msg::FieldLineSegment::_p1_y_type arg)
  {
    msg_.p1_y = std::move(arg);
    return Init_FieldLineSegment_p2_x(msg_);
  }

private:
  ::message_info::msg::FieldLineSegment msg_;
};

class Init_FieldLineSegment_p1_x
{
public:
  explicit Init_FieldLineSegment_p1_x(::message_info::msg::FieldLineSegment & msg)
  : msg_(msg)
  {}
  Init_FieldLineSegment_p1_y p1_x(::message_info::msg::FieldLineSegment::_p1_x_type arg)
  {
    msg_.p1_x = std::move(arg);
    return Init_FieldLineSegment_p1_y(msg_);
  }

private:
  ::message_info::msg::FieldLineSegment msg_;
};

class Init_FieldLineSegment_name
{
public:
  Init_FieldLineSegment_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FieldLineSegment_p1_x name(::message_info::msg::FieldLineSegment::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_FieldLineSegment_p1_x(msg_);
  }

private:
  ::message_info::msg::FieldLineSegment msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::message_info::msg::FieldLineSegment>()
{
  return message_info::msg::builder::Init_FieldLineSegment_name();
}

}  // namespace message_info

#endif  // MESSAGE_INFO__MSG__DETAIL__FIELD_LINE_SEGMENT__BUILDER_HPP_
