// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from message_info:msg/DetectionFrame.idl
// generated code does not contain a copyright notice

#ifndef MESSAGE_INFO__MSG__DETAIL__DETECTION_FRAME__BUILDER_HPP_
#define MESSAGE_INFO__MSG__DETAIL__DETECTION_FRAME__BUILDER_HPP_

#include "message_info/msg/detail/detection_frame__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace message_info
{

namespace msg
{

namespace builder
{

class Init_DetectionFrame_ball
{
public:
  explicit Init_DetectionFrame_ball(::message_info::msg::DetectionFrame & msg)
  : msg_(msg)
  {}
  ::message_info::msg::DetectionFrame ball(::message_info::msg::DetectionFrame::_ball_type arg)
  {
    msg_.ball = std::move(arg);
    return std::move(msg_);
  }

private:
  ::message_info::msg::DetectionFrame msg_;
};

class Init_DetectionFrame_their_robots
{
public:
  explicit Init_DetectionFrame_their_robots(::message_info::msg::DetectionFrame & msg)
  : msg_(msg)
  {}
  Init_DetectionFrame_ball their_robots(::message_info::msg::DetectionFrame::_their_robots_type arg)
  {
    msg_.their_robots = std::move(arg);
    return Init_DetectionFrame_ball(msg_);
  }

private:
  ::message_info::msg::DetectionFrame msg_;
};

class Init_DetectionFrame_our_robots
{
public:
  explicit Init_DetectionFrame_our_robots(::message_info::msg::DetectionFrame & msg)
  : msg_(msg)
  {}
  Init_DetectionFrame_their_robots our_robots(::message_info::msg::DetectionFrame::_our_robots_type arg)
  {
    msg_.our_robots = std::move(arg);
    return Init_DetectionFrame_their_robots(msg_);
  }

private:
  ::message_info::msg::DetectionFrame msg_;
};

class Init_DetectionFrame_robots_blue
{
public:
  explicit Init_DetectionFrame_robots_blue(::message_info::msg::DetectionFrame & msg)
  : msg_(msg)
  {}
  Init_DetectionFrame_our_robots robots_blue(::message_info::msg::DetectionFrame::_robots_blue_type arg)
  {
    msg_.robots_blue = std::move(arg);
    return Init_DetectionFrame_our_robots(msg_);
  }

private:
  ::message_info::msg::DetectionFrame msg_;
};

class Init_DetectionFrame_robots_yellow
{
public:
  explicit Init_DetectionFrame_robots_yellow(::message_info::msg::DetectionFrame & msg)
  : msg_(msg)
  {}
  Init_DetectionFrame_robots_blue robots_yellow(::message_info::msg::DetectionFrame::_robots_yellow_type arg)
  {
    msg_.robots_yellow = std::move(arg);
    return Init_DetectionFrame_robots_blue(msg_);
  }

private:
  ::message_info::msg::DetectionFrame msg_;
};

class Init_DetectionFrame_balls
{
public:
  explicit Init_DetectionFrame_balls(::message_info::msg::DetectionFrame & msg)
  : msg_(msg)
  {}
  Init_DetectionFrame_robots_yellow balls(::message_info::msg::DetectionFrame::_balls_type arg)
  {
    msg_.balls = std::move(arg);
    return Init_DetectionFrame_robots_yellow(msg_);
  }

private:
  ::message_info::msg::DetectionFrame msg_;
};

class Init_DetectionFrame_camera_id
{
public:
  explicit Init_DetectionFrame_camera_id(::message_info::msg::DetectionFrame & msg)
  : msg_(msg)
  {}
  Init_DetectionFrame_balls camera_id(::message_info::msg::DetectionFrame::_camera_id_type arg)
  {
    msg_.camera_id = std::move(arg);
    return Init_DetectionFrame_balls(msg_);
  }

private:
  ::message_info::msg::DetectionFrame msg_;
};

class Init_DetectionFrame_t_sent
{
public:
  explicit Init_DetectionFrame_t_sent(::message_info::msg::DetectionFrame & msg)
  : msg_(msg)
  {}
  Init_DetectionFrame_camera_id t_sent(::message_info::msg::DetectionFrame::_t_sent_type arg)
  {
    msg_.t_sent = std::move(arg);
    return Init_DetectionFrame_camera_id(msg_);
  }

private:
  ::message_info::msg::DetectionFrame msg_;
};

class Init_DetectionFrame_t_capture
{
public:
  Init_DetectionFrame_t_capture()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DetectionFrame_t_sent t_capture(::message_info::msg::DetectionFrame::_t_capture_type arg)
  {
    msg_.t_capture = std::move(arg);
    return Init_DetectionFrame_t_sent(msg_);
  }

private:
  ::message_info::msg::DetectionFrame msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::message_info::msg::DetectionFrame>()
{
  return message_info::msg::builder::Init_DetectionFrame_t_capture();
}

}  // namespace message_info

#endif  // MESSAGE_INFO__MSG__DETAIL__DETECTION_FRAME__BUILDER_HPP_
