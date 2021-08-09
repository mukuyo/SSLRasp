// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from message_info:msg/Role.idl
// generated code does not contain a copyright notice

#ifndef MESSAGE_INFO__MSG__DETAIL__ROLE__STRUCT_HPP_
#define MESSAGE_INFO__MSG__DETAIL__ROLE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__message_info__msg__Role __attribute__((deprecated))
#else
# define DEPRECATED__message_info__msg__Role __declspec(deprecated)
#endif

namespace message_info
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Role_
{
  using Type = Role_<ContainerAllocator>;

  explicit Role_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->attacker = 0l;
      this->goalie = 0l;
      std::fill<typename std::array<int32_t, 10>::iterator, int32_t>(this->defense.begin(), this->defense.end(), 0l);
      std::fill<typename std::array<int32_t, 10>::iterator, int32_t>(this->offense.begin(), this->offense.end(), 0l);
      this->offense_count = 0l;
      this->defense_count = 0l;
    }
  }

  explicit Role_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : defense(_alloc),
    offense(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->attacker = 0l;
      this->goalie = 0l;
      std::fill<typename std::array<int32_t, 10>::iterator, int32_t>(this->defense.begin(), this->defense.end(), 0l);
      std::fill<typename std::array<int32_t, 10>::iterator, int32_t>(this->offense.begin(), this->offense.end(), 0l);
      this->offense_count = 0l;
      this->defense_count = 0l;
    }
  }

  // field types and members
  using _attacker_type =
    int32_t;
  _attacker_type attacker;
  using _goalie_type =
    int32_t;
  _goalie_type goalie;
  using _defense_type =
    std::array<int32_t, 10>;
  _defense_type defense;
  using _offense_type =
    std::array<int32_t, 10>;
  _offense_type offense;
  using _offense_count_type =
    int32_t;
  _offense_count_type offense_count;
  using _defense_count_type =
    int32_t;
  _defense_count_type defense_count;

  // setters for named parameter idiom
  Type & set__attacker(
    const int32_t & _arg)
  {
    this->attacker = _arg;
    return *this;
  }
  Type & set__goalie(
    const int32_t & _arg)
  {
    this->goalie = _arg;
    return *this;
  }
  Type & set__defense(
    const std::array<int32_t, 10> & _arg)
  {
    this->defense = _arg;
    return *this;
  }
  Type & set__offense(
    const std::array<int32_t, 10> & _arg)
  {
    this->offense = _arg;
    return *this;
  }
  Type & set__offense_count(
    const int32_t & _arg)
  {
    this->offense_count = _arg;
    return *this;
  }
  Type & set__defense_count(
    const int32_t & _arg)
  {
    this->defense_count = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    message_info::msg::Role_<ContainerAllocator> *;
  using ConstRawPtr =
    const message_info::msg::Role_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<message_info::msg::Role_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<message_info::msg::Role_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      message_info::msg::Role_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<message_info::msg::Role_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      message_info::msg::Role_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<message_info::msg::Role_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<message_info::msg::Role_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<message_info::msg::Role_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__message_info__msg__Role
    std::shared_ptr<message_info::msg::Role_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__message_info__msg__Role
    std::shared_ptr<message_info::msg::Role_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Role_ & other) const
  {
    if (this->attacker != other.attacker) {
      return false;
    }
    if (this->goalie != other.goalie) {
      return false;
    }
    if (this->defense != other.defense) {
      return false;
    }
    if (this->offense != other.offense) {
      return false;
    }
    if (this->offense_count != other.offense_count) {
      return false;
    }
    if (this->defense_count != other.defense_count) {
      return false;
    }
    return true;
  }
  bool operator!=(const Role_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Role_

// alias to use template instance with default allocator
using Role =
  message_info::msg::Role_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace message_info

#endif  // MESSAGE_INFO__MSG__DETAIL__ROLE__STRUCT_HPP_
