// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from message_info:msg/RefereeGameEvent.idl
// generated code does not contain a copyright notice

#ifndef MESSAGE_INFO__MSG__DETAIL__REFEREE_GAME_EVENT__STRUCT_HPP_
#define MESSAGE_INFO__MSG__DETAIL__REFEREE_GAME_EVENT__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__message_info__msg__RefereeGameEvent __attribute__((deprecated))
#else
# define DEPRECATED__message_info__msg__RefereeGameEvent __declspec(deprecated)
#endif

namespace message_info
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RefereeGameEvent_
{
  using Type = RefereeGameEvent_<ContainerAllocator>;

  explicit RefereeGameEvent_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->game_event_type = 0;
      this->originator_team = 0;
      this->originator_bot_id = 0ul;
      this->message = "";
    }
  }

  explicit RefereeGameEvent_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : message(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->game_event_type = 0;
      this->originator_team = 0;
      this->originator_bot_id = 0ul;
      this->message = "";
    }
  }

  // field types and members
  using _game_event_type_type =
    uint8_t;
  _game_event_type_type game_event_type;
  using _originator_team_type =
    uint8_t;
  _originator_team_type originator_team;
  using _originator_bot_id_type =
    uint32_t;
  _originator_bot_id_type originator_bot_id;
  using _message_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _message_type message;

  // setters for named parameter idiom
  Type & set__game_event_type(
    const uint8_t & _arg)
  {
    this->game_event_type = _arg;
    return *this;
  }
  Type & set__originator_team(
    const uint8_t & _arg)
  {
    this->originator_team = _arg;
    return *this;
  }
  Type & set__originator_bot_id(
    const uint32_t & _arg)
  {
    this->originator_bot_id = _arg;
    return *this;
  }
  Type & set__message(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->message = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    message_info::msg::RefereeGameEvent_<ContainerAllocator> *;
  using ConstRawPtr =
    const message_info::msg::RefereeGameEvent_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<message_info::msg::RefereeGameEvent_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<message_info::msg::RefereeGameEvent_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      message_info::msg::RefereeGameEvent_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<message_info::msg::RefereeGameEvent_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      message_info::msg::RefereeGameEvent_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<message_info::msg::RefereeGameEvent_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<message_info::msg::RefereeGameEvent_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<message_info::msg::RefereeGameEvent_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__message_info__msg__RefereeGameEvent
    std::shared_ptr<message_info::msg::RefereeGameEvent_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__message_info__msg__RefereeGameEvent
    std::shared_ptr<message_info::msg::RefereeGameEvent_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RefereeGameEvent_ & other) const
  {
    if (this->game_event_type != other.game_event_type) {
      return false;
    }
    if (this->originator_team != other.originator_team) {
      return false;
    }
    if (this->originator_bot_id != other.originator_bot_id) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    return true;
  }
  bool operator!=(const RefereeGameEvent_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RefereeGameEvent_

// alias to use template instance with default allocator
using RefereeGameEvent =
  message_info::msg::RefereeGameEvent_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace message_info

#endif  // MESSAGE_INFO__MSG__DETAIL__REFEREE_GAME_EVENT__STRUCT_HPP_
