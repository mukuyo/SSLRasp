// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from message_info:msg/RefereeTeamInfo.idl
// generated code does not contain a copyright notice

#ifndef MESSAGE_INFO__MSG__DETAIL__REFEREE_TEAM_INFO__STRUCT_HPP_
#define MESSAGE_INFO__MSG__DETAIL__REFEREE_TEAM_INFO__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__message_info__msg__RefereeTeamInfo __attribute__((deprecated))
#else
# define DEPRECATED__message_info__msg__RefereeTeamInfo __declspec(deprecated)
#endif

namespace message_info
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RefereeTeamInfo_
{
  using Type = RefereeTeamInfo_<ContainerAllocator>;

  explicit RefereeTeamInfo_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->score = 0ul;
      this->red_cards = 0ul;
      this->yellow_cards = 0ul;
      this->timeouts = 0ul;
      this->timeout_time = 0ul;
      this->goalie = 0ul;
    }
  }

  explicit RefereeTeamInfo_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->score = 0ul;
      this->red_cards = 0ul;
      this->yellow_cards = 0ul;
      this->timeouts = 0ul;
      this->timeout_time = 0ul;
      this->goalie = 0ul;
    }
  }

  // field types and members
  using _name_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _name_type name;
  using _score_type =
    uint32_t;
  _score_type score;
  using _red_cards_type =
    uint32_t;
  _red_cards_type red_cards;
  using _yellow_card_times_type =
    std::vector<uint32_t, typename ContainerAllocator::template rebind<uint32_t>::other>;
  _yellow_card_times_type yellow_card_times;
  using _yellow_cards_type =
    uint32_t;
  _yellow_cards_type yellow_cards;
  using _timeouts_type =
    uint32_t;
  _timeouts_type timeouts;
  using _timeout_time_type =
    uint32_t;
  _timeout_time_type timeout_time;
  using _goalie_type =
    uint32_t;
  _goalie_type goalie;

  // setters for named parameter idiom
  Type & set__name(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->name = _arg;
    return *this;
  }
  Type & set__score(
    const uint32_t & _arg)
  {
    this->score = _arg;
    return *this;
  }
  Type & set__red_cards(
    const uint32_t & _arg)
  {
    this->red_cards = _arg;
    return *this;
  }
  Type & set__yellow_card_times(
    const std::vector<uint32_t, typename ContainerAllocator::template rebind<uint32_t>::other> & _arg)
  {
    this->yellow_card_times = _arg;
    return *this;
  }
  Type & set__yellow_cards(
    const uint32_t & _arg)
  {
    this->yellow_cards = _arg;
    return *this;
  }
  Type & set__timeouts(
    const uint32_t & _arg)
  {
    this->timeouts = _arg;
    return *this;
  }
  Type & set__timeout_time(
    const uint32_t & _arg)
  {
    this->timeout_time = _arg;
    return *this;
  }
  Type & set__goalie(
    const uint32_t & _arg)
  {
    this->goalie = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    message_info::msg::RefereeTeamInfo_<ContainerAllocator> *;
  using ConstRawPtr =
    const message_info::msg::RefereeTeamInfo_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<message_info::msg::RefereeTeamInfo_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<message_info::msg::RefereeTeamInfo_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      message_info::msg::RefereeTeamInfo_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<message_info::msg::RefereeTeamInfo_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      message_info::msg::RefereeTeamInfo_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<message_info::msg::RefereeTeamInfo_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<message_info::msg::RefereeTeamInfo_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<message_info::msg::RefereeTeamInfo_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__message_info__msg__RefereeTeamInfo
    std::shared_ptr<message_info::msg::RefereeTeamInfo_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__message_info__msg__RefereeTeamInfo
    std::shared_ptr<message_info::msg::RefereeTeamInfo_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RefereeTeamInfo_ & other) const
  {
    if (this->name != other.name) {
      return false;
    }
    if (this->score != other.score) {
      return false;
    }
    if (this->red_cards != other.red_cards) {
      return false;
    }
    if (this->yellow_card_times != other.yellow_card_times) {
      return false;
    }
    if (this->yellow_cards != other.yellow_cards) {
      return false;
    }
    if (this->timeouts != other.timeouts) {
      return false;
    }
    if (this->timeout_time != other.timeout_time) {
      return false;
    }
    if (this->goalie != other.goalie) {
      return false;
    }
    return true;
  }
  bool operator!=(const RefereeTeamInfo_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RefereeTeamInfo_

// alias to use template instance with default allocator
using RefereeTeamInfo =
  message_info::msg::RefereeTeamInfo_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace message_info

#endif  // MESSAGE_INFO__MSG__DETAIL__REFEREE_TEAM_INFO__STRUCT_HPP_
