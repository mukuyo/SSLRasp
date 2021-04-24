// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from message_info:msg/Test.idl
// generated code does not contain a copyright notice

#ifndef MESSAGE_INFO__MSG__DETAIL__TEST__BUILDER_HPP_
#define MESSAGE_INFO__MSG__DETAIL__TEST__BUILDER_HPP_

#include "message_info/msg/detail/test__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace message_info
{

namespace msg
{

namespace builder
{

class Init_Test_b
{
public:
  explicit Init_Test_b(::message_info::msg::Test & msg)
  : msg_(msg)
  {}
  ::message_info::msg::Test b(::message_info::msg::Test::_b_type arg)
  {
    msg_.b = std::move(arg);
    return std::move(msg_);
  }

private:
  ::message_info::msg::Test msg_;
};

class Init_Test_a
{
public:
  Init_Test_a()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Test_b a(::message_info::msg::Test::_a_type arg)
  {
    msg_.a = std::move(arg);
    return Init_Test_b(msg_);
  }

private:
  ::message_info::msg::Test msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::message_info::msg::Test>()
{
  return message_info::msg::builder::Init_Test_a();
}

}  // namespace message_info

#endif  // MESSAGE_INFO__MSG__DETAIL__TEST__BUILDER_HPP_
