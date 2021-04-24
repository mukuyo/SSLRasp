// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from message_info:msg/Info.idl
// generated code does not contain a copyright notice

#ifndef MESSAGE_INFO__MSG__DETAIL__INFO__STRUCT_HPP_
#define MESSAGE_INFO__MSG__DETAIL__INFO__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'frame'
#include "message_info/msg/detail/detection_frame__struct.hpp"
// Member 'geometry'
#include "message_info/msg/detail/vision_geometry__struct.hpp"
// Member 'role'
#include "message_info/msg/detail/role__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__message_info__msg__Info __attribute__((deprecated))
#else
# define DEPRECATED__message_info__msg__Info __declspec(deprecated)
#endif

namespace message_info
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Info_
{
  using Type = Info_<ContainerAllocator>;

  explicit Info_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : frame(_init),
    geometry(_init),
    role(_init)
  {
    (void)_init;
  }

  explicit Info_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : frame(_alloc, _init),
    geometry(_alloc, _init),
    role(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _name_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>, typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>>::other>;
  _name_type name;
  using _frame_type =
    message_info::msg::DetectionFrame_<ContainerAllocator>;
  _frame_type frame;
  using _geometry_type =
    message_info::msg::VisionGeometry_<ContainerAllocator>;
  _geometry_type geometry;
  using _role_type =
    message_info::msg::Role_<ContainerAllocator>;
  _role_type role;

  // setters for named parameter idiom
  Type & set__name(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>, typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>>::other> & _arg)
  {
    this->name = _arg;
    return *this;
  }
  Type & set__frame(
    const message_info::msg::DetectionFrame_<ContainerAllocator> & _arg)
  {
    this->frame = _arg;
    return *this;
  }
  Type & set__geometry(
    const message_info::msg::VisionGeometry_<ContainerAllocator> & _arg)
  {
    this->geometry = _arg;
    return *this;
  }
  Type & set__role(
    const message_info::msg::Role_<ContainerAllocator> & _arg)
  {
    this->role = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    message_info::msg::Info_<ContainerAllocator> *;
  using ConstRawPtr =
    const message_info::msg::Info_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<message_info::msg::Info_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<message_info::msg::Info_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      message_info::msg::Info_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<message_info::msg::Info_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      message_info::msg::Info_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<message_info::msg::Info_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<message_info::msg::Info_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<message_info::msg::Info_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__message_info__msg__Info
    std::shared_ptr<message_info::msg::Info_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__message_info__msg__Info
    std::shared_ptr<message_info::msg::Info_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Info_ & other) const
  {
    if (this->name != other.name) {
      return false;
    }
    if (this->frame != other.frame) {
      return false;
    }
    if (this->geometry != other.geometry) {
      return false;
    }
    if (this->role != other.role) {
      return false;
    }
    return true;
  }
  bool operator!=(const Info_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Info_

// alias to use template instance with default allocator
using Info =
  message_info::msg::Info_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace message_info

#endif  // MESSAGE_INFO__MSG__DETAIL__INFO__STRUCT_HPP_
