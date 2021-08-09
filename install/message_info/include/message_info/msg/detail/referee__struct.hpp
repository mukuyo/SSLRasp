// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from message_info:msg/Referee.idl
// generated code does not contain a copyright notice

#ifndef MESSAGE_INFO__MSG__DETAIL__REFEREE__STRUCT_HPP_
#define MESSAGE_INFO__MSG__DETAIL__REFEREE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'yellow'
// Member 'blue'
#include "message_info/msg/detail/referee_team_info__struct.hpp"
// Member 'designated_position'
#include "geometry_msgs/msg/detail/point__struct.hpp"
// Member 'game_event'
#include "message_info/msg/detail/referee_game_event__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__message_info__msg__Referee __attribute__((deprecated))
#else
# define DEPRECATED__message_info__msg__Referee __declspec(deprecated)
#endif

namespace message_info
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Referee_
{
  using Type = Referee_<ContainerAllocator>;

  explicit Referee_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : yellow(_init),
    blue(_init),
    designated_position(_init),
    game_event(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->stage = 0;
      this->play = false;
      this->info = "";
      this->command = 0;
      this->command_counter = 0ul;
    }
  }

  explicit Referee_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_alloc),
    yellow(_alloc, _init),
    blue(_alloc, _init),
    designated_position(_alloc, _init),
    game_event(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->stage = 0;
      this->play = false;
      this->info = "";
      this->command = 0;
      this->command_counter = 0ul;
    }
  }

  // field types and members
  using _stage_type =
    uint8_t;
  _stage_type stage;
  using _play_type =
    bool;
  _play_type play;
  using _info_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _info_type info;
  using _command_type =
    uint8_t;
  _command_type command;
  using _command_counter_type =
    uint32_t;
  _command_counter_type command_counter;
  using _yellow_type =
    message_info::msg::RefereeTeamInfo_<ContainerAllocator>;
  _yellow_type yellow;
  using _blue_type =
    message_info::msg::RefereeTeamInfo_<ContainerAllocator>;
  _blue_type blue;
  using _designated_position_type =
    geometry_msgs::msg::Point_<ContainerAllocator>;
  _designated_position_type designated_position;
  using _game_event_type =
    message_info::msg::RefereeGameEvent_<ContainerAllocator>;
  _game_event_type game_event;

  // setters for named parameter idiom
  Type & set__stage(
    const uint8_t & _arg)
  {
    this->stage = _arg;
    return *this;
  }
  Type & set__play(
    const bool & _arg)
  {
    this->play = _arg;
    return *this;
  }
  Type & set__info(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->info = _arg;
    return *this;
  }
  Type & set__command(
    const uint8_t & _arg)
  {
    this->command = _arg;
    return *this;
  }
  Type & set__command_counter(
    const uint32_t & _arg)
  {
    this->command_counter = _arg;
    return *this;
  }
  Type & set__yellow(
    const message_info::msg::RefereeTeamInfo_<ContainerAllocator> & _arg)
  {
    this->yellow = _arg;
    return *this;
  }
  Type & set__blue(
    const message_info::msg::RefereeTeamInfo_<ContainerAllocator> & _arg)
  {
    this->blue = _arg;
    return *this;
  }
  Type & set__designated_position(
    const geometry_msgs::msg::Point_<ContainerAllocator> & _arg)
  {
    this->designated_position = _arg;
    return *this;
  }
  Type & set__game_event(
    const message_info::msg::RefereeGameEvent_<ContainerAllocator> & _arg)
  {
    this->game_event = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    message_info::msg::Referee_<ContainerAllocator> *;
  using ConstRawPtr =
    const message_info::msg::Referee_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<message_info::msg::Referee_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<message_info::msg::Referee_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      message_info::msg::Referee_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<message_info::msg::Referee_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      message_info::msg::Referee_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<message_info::msg::Referee_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<message_info::msg::Referee_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<message_info::msg::Referee_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__message_info__msg__Referee
    std::shared_ptr<message_info::msg::Referee_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__message_info__msg__Referee
    std::shared_ptr<message_info::msg::Referee_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Referee_ & other) const
  {
    if (this->stage != other.stage) {
      return false;
    }
    if (this->play != other.play) {
      return false;
    }
    if (this->info != other.info) {
      return false;
    }
    if (this->command != other.command) {
      return false;
    }
    if (this->command_counter != other.command_counter) {
      return false;
    }
    if (this->yellow != other.yellow) {
      return false;
    }
    if (this->blue != other.blue) {
      return false;
    }
    if (this->designated_position != other.designated_position) {
      return false;
    }
    if (this->game_event != other.game_event) {
      return false;
    }
    return true;
  }
  bool operator!=(const Referee_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Referee_

// alias to use template instance with default allocator
using Referee =
  message_info::msg::Referee_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace message_info

#endif  // MESSAGE_INFO__MSG__DETAIL__REFEREE__STRUCT_HPP_
