// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from message_info:msg/VisionGeometry.idl
// generated code does not contain a copyright notice

#ifndef MESSAGE_INFO__MSG__DETAIL__VISION_GEOMETRY__BUILDER_HPP_
#define MESSAGE_INFO__MSG__DETAIL__VISION_GEOMETRY__BUILDER_HPP_

#include "message_info/msg/detail/vision_geometry__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace message_info
{

namespace msg
{

namespace builder
{

class Init_VisionGeometry_goal_minus_half
{
public:
  explicit Init_VisionGeometry_goal_minus_half(::message_info::msg::VisionGeometry & msg)
  : msg_(msg)
  {}
  ::message_info::msg::VisionGeometry goal_minus_half(::message_info::msg::VisionGeometry::_goal_minus_half_type arg)
  {
    msg_.goal_minus_half = std::move(arg);
    return std::move(msg_);
  }

private:
  ::message_info::msg::VisionGeometry msg_;
};

class Init_VisionGeometry_goal_plus_half
{
public:
  explicit Init_VisionGeometry_goal_plus_half(::message_info::msg::VisionGeometry & msg)
  : msg_(msg)
  {}
  Init_VisionGeometry_goal_minus_half goal_plus_half(::message_info::msg::VisionGeometry::_goal_plus_half_type arg)
  {
    msg_.goal_plus_half = std::move(arg);
    return Init_VisionGeometry_goal_minus_half(msg_);
  }

private:
  ::message_info::msg::VisionGeometry msg_;
};

class Init_VisionGeometry_goal_minus
{
public:
  explicit Init_VisionGeometry_goal_minus(::message_info::msg::VisionGeometry & msg)
  : msg_(msg)
  {}
  Init_VisionGeometry_goal_plus_half goal_minus(::message_info::msg::VisionGeometry::_goal_minus_type arg)
  {
    msg_.goal_minus = std::move(arg);
    return Init_VisionGeometry_goal_plus_half(msg_);
  }

private:
  ::message_info::msg::VisionGeometry msg_;
};

class Init_VisionGeometry_goal_plus
{
public:
  explicit Init_VisionGeometry_goal_plus(::message_info::msg::VisionGeometry & msg)
  : msg_(msg)
  {}
  Init_VisionGeometry_goal_minus goal_plus(::message_info::msg::VisionGeometry::_goal_plus_type arg)
  {
    msg_.goal_plus = std::move(arg);
    return Init_VisionGeometry_goal_minus(msg_);
  }

private:
  ::message_info::msg::VisionGeometry msg_;
};

class Init_VisionGeometry_field_arcs
{
public:
  explicit Init_VisionGeometry_field_arcs(::message_info::msg::VisionGeometry & msg)
  : msg_(msg)
  {}
  Init_VisionGeometry_goal_plus field_arcs(::message_info::msg::VisionGeometry::_field_arcs_type arg)
  {
    msg_.field_arcs = std::move(arg);
    return Init_VisionGeometry_goal_plus(msg_);
  }

private:
  ::message_info::msg::VisionGeometry msg_;
};

class Init_VisionGeometry_field_lines
{
public:
  explicit Init_VisionGeometry_field_lines(::message_info::msg::VisionGeometry & msg)
  : msg_(msg)
  {}
  Init_VisionGeometry_field_arcs field_lines(::message_info::msg::VisionGeometry::_field_lines_type arg)
  {
    msg_.field_lines = std::move(arg);
    return Init_VisionGeometry_field_arcs(msg_);
  }

private:
  ::message_info::msg::VisionGeometry msg_;
};

class Init_VisionGeometry_boundary_width
{
public:
  explicit Init_VisionGeometry_boundary_width(::message_info::msg::VisionGeometry & msg)
  : msg_(msg)
  {}
  Init_VisionGeometry_field_lines boundary_width(::message_info::msg::VisionGeometry::_boundary_width_type arg)
  {
    msg_.boundary_width = std::move(arg);
    return Init_VisionGeometry_field_lines(msg_);
  }

private:
  ::message_info::msg::VisionGeometry msg_;
};

class Init_VisionGeometry_robot_angular_velocity
{
public:
  explicit Init_VisionGeometry_robot_angular_velocity(::message_info::msg::VisionGeometry & msg)
  : msg_(msg)
  {}
  Init_VisionGeometry_boundary_width robot_angular_velocity(::message_info::msg::VisionGeometry::_robot_angular_velocity_type arg)
  {
    msg_.robot_angular_velocity = std::move(arg);
    return Init_VisionGeometry_boundary_width(msg_);
  }

private:
  ::message_info::msg::VisionGeometry msg_;
};

class Init_VisionGeometry_robot_speed
{
public:
  explicit Init_VisionGeometry_robot_speed(::message_info::msg::VisionGeometry & msg)
  : msg_(msg)
  {}
  Init_VisionGeometry_robot_angular_velocity robot_speed(::message_info::msg::VisionGeometry::_robot_speed_type arg)
  {
    msg_.robot_speed = std::move(arg);
    return Init_VisionGeometry_robot_angular_velocity(msg_);
  }

private:
  ::message_info::msg::VisionGeometry msg_;
};

class Init_VisionGeometry_ball_intercept
{
public:
  explicit Init_VisionGeometry_ball_intercept(::message_info::msg::VisionGeometry & msg)
  : msg_(msg)
  {}
  Init_VisionGeometry_robot_speed ball_intercept(::message_info::msg::VisionGeometry::_ball_intercept_type arg)
  {
    msg_.ball_intercept = std::move(arg);
    return Init_VisionGeometry_robot_speed(msg_);
  }

private:
  ::message_info::msg::VisionGeometry msg_;
};

class Init_VisionGeometry_ball_slope
{
public:
  explicit Init_VisionGeometry_ball_slope(::message_info::msg::VisionGeometry & msg)
  : msg_(msg)
  {}
  Init_VisionGeometry_ball_intercept ball_slope(::message_info::msg::VisionGeometry::_ball_slope_type arg)
  {
    msg_.ball_slope = std::move(arg);
    return Init_VisionGeometry_ball_intercept(msg_);
  }

private:
  ::message_info::msg::VisionGeometry msg_;
};

class Init_VisionGeometry_ball_speed
{
public:
  explicit Init_VisionGeometry_ball_speed(::message_info::msg::VisionGeometry & msg)
  : msg_(msg)
  {}
  Init_VisionGeometry_ball_slope ball_speed(::message_info::msg::VisionGeometry::_ball_speed_type arg)
  {
    msg_.ball_speed = std::move(arg);
    return Init_VisionGeometry_ball_slope(msg_);
  }

private:
  ::message_info::msg::VisionGeometry msg_;
};

class Init_VisionGeometry_field_arcs_radius
{
public:
  explicit Init_VisionGeometry_field_arcs_radius(::message_info::msg::VisionGeometry & msg)
  : msg_(msg)
  {}
  Init_VisionGeometry_ball_speed field_arcs_radius(::message_info::msg::VisionGeometry::_field_arcs_radius_type arg)
  {
    msg_.field_arcs_radius = std::move(arg);
    return Init_VisionGeometry_ball_speed(msg_);
  }

private:
  ::message_info::msg::VisionGeometry msg_;
};

class Init_VisionGeometry_goal_depth
{
public:
  explicit Init_VisionGeometry_goal_depth(::message_info::msg::VisionGeometry & msg)
  : msg_(msg)
  {}
  Init_VisionGeometry_field_arcs_radius goal_depth(::message_info::msg::VisionGeometry::_goal_depth_type arg)
  {
    msg_.goal_depth = std::move(arg);
    return Init_VisionGeometry_field_arcs_radius(msg_);
  }

private:
  ::message_info::msg::VisionGeometry msg_;
};

class Init_VisionGeometry_goal_width
{
public:
  explicit Init_VisionGeometry_goal_width(::message_info::msg::VisionGeometry & msg)
  : msg_(msg)
  {}
  Init_VisionGeometry_goal_depth goal_width(::message_info::msg::VisionGeometry::_goal_width_type arg)
  {
    msg_.goal_width = std::move(arg);
    return Init_VisionGeometry_goal_depth(msg_);
  }

private:
  ::message_info::msg::VisionGeometry msg_;
};

class Init_VisionGeometry_field_width
{
public:
  explicit Init_VisionGeometry_field_width(::message_info::msg::VisionGeometry & msg)
  : msg_(msg)
  {}
  Init_VisionGeometry_goal_width field_width(::message_info::msg::VisionGeometry::_field_width_type arg)
  {
    msg_.field_width = std::move(arg);
    return Init_VisionGeometry_goal_width(msg_);
  }

private:
  ::message_info::msg::VisionGeometry msg_;
};

class Init_VisionGeometry_field_length
{
public:
  Init_VisionGeometry_field_length()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_VisionGeometry_field_width field_length(::message_info::msg::VisionGeometry::_field_length_type arg)
  {
    msg_.field_length = std::move(arg);
    return Init_VisionGeometry_field_width(msg_);
  }

private:
  ::message_info::msg::VisionGeometry msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::message_info::msg::VisionGeometry>()
{
  return message_info::msg::builder::Init_VisionGeometry_field_length();
}

}  // namespace message_info

#endif  // MESSAGE_INFO__MSG__DETAIL__VISION_GEOMETRY__BUILDER_HPP_
