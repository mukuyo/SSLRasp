// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from message_info:msg/Attacker.idl
// generated code does not contain a copyright notice

#ifndef MESSAGE_INFO__MSG__DETAIL__ATTACKER__STRUCT_HPP_
#define MESSAGE_INFO__MSG__DETAIL__ATTACKER__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'pose'
// Member 'set_position'
#include "geometry_msgs/msg/detail/pose2_d__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__message_info__msg__Attacker __attribute__((deprecated))
#else
# define DEPRECATED__message_info__msg__Attacker __declspec(deprecated)
#endif

namespace message_info
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Attacker_
{
  using Type = Attacker_<ContainerAllocator>;

  explicit Attacker_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : pose(_init),
    set_position(_init)
  {
    (void)_init;
  }

  explicit Attacker_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : pose(_alloc, _init),
    set_position(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _pose_type =
    geometry_msgs::msg::Pose2D_<ContainerAllocator>;
  _pose_type pose;
  using _set_position_type =
    geometry_msgs::msg::Pose2D_<ContainerAllocator>;
  _set_position_type set_position;

  // setters for named parameter idiom
  Type & set__pose(
    const geometry_msgs::msg::Pose2D_<ContainerAllocator> & _arg)
  {
    this->pose = _arg;
    return *this;
  }
  Type & set__set_position(
    const geometry_msgs::msg::Pose2D_<ContainerAllocator> & _arg)
  {
    this->set_position = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    message_info::msg::Attacker_<ContainerAllocator> *;
  using ConstRawPtr =
    const message_info::msg::Attacker_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<message_info::msg::Attacker_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<message_info::msg::Attacker_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      message_info::msg::Attacker_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<message_info::msg::Attacker_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      message_info::msg::Attacker_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<message_info::msg::Attacker_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<message_info::msg::Attacker_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<message_info::msg::Attacker_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__message_info__msg__Attacker
    std::shared_ptr<message_info::msg::Attacker_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__message_info__msg__Attacker
    std::shared_ptr<message_info::msg::Attacker_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Attacker_ & other) const
  {
    if (this->pose != other.pose) {
      return false;
    }
    if (this->set_position != other.set_position) {
      return false;
    }
    return true;
  }
  bool operator!=(const Attacker_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Attacker_

// alias to use template instance with default allocator
using Attacker =
  message_info::msg::Attacker_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace message_info

#endif  // MESSAGE_INFO__MSG__DETAIL__ATTACKER__STRUCT_HPP_
