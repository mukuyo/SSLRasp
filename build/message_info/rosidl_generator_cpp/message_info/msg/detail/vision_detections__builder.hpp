// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from message_info:msg/VisionDetections.idl
// generated code does not contain a copyright notice

#ifndef MESSAGE_INFO__MSG__DETAIL__VISION_DETECTIONS__BUILDER_HPP_
#define MESSAGE_INFO__MSG__DETAIL__VISION_DETECTIONS__BUILDER_HPP_

#include "message_info/msg/detail/vision_detections__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace message_info
{

namespace msg
{

namespace builder
{

class Init_VisionDetections_test
{
public:
  explicit Init_VisionDetections_test(::message_info::msg::VisionDetections & msg)
  : msg_(msg)
  {}
  ::message_info::msg::VisionDetections test(::message_info::msg::VisionDetections::_test_type arg)
  {
    msg_.test = std::move(arg);
    return std::move(msg_);
  }

private:
  ::message_info::msg::VisionDetections msg_;
};

class Init_VisionDetections_frames
{
public:
  explicit Init_VisionDetections_frames(::message_info::msg::VisionDetections & msg)
  : msg_(msg)
  {}
  Init_VisionDetections_test frames(::message_info::msg::VisionDetections::_frames_type arg)
  {
    msg_.frames = std::move(arg);
    return Init_VisionDetections_test(msg_);
  }

private:
  ::message_info::msg::VisionDetections msg_;
};

class Init_VisionDetections_header
{
public:
  Init_VisionDetections_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_VisionDetections_frames header(::message_info::msg::VisionDetections::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_VisionDetections_frames(msg_);
  }

private:
  ::message_info::msg::VisionDetections msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::message_info::msg::VisionDetections>()
{
  return message_info::msg::builder::Init_VisionDetections_header();
}

}  // namespace message_info

#endif  // MESSAGE_INFO__MSG__DETAIL__VISION_DETECTIONS__BUILDER_HPP_
