// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from message_info:msg/VisionDetections.idl
// generated code does not contain a copyright notice

#ifndef MESSAGE_INFO__MSG__DETAIL__VISION_DETECTIONS__STRUCT_HPP_
#define MESSAGE_INFO__MSG__DETAIL__VISION_DETECTIONS__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"
// Member 'frames'
#include "message_info/msg/detail/detection_frame__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__message_info__msg__VisionDetections __attribute__((deprecated))
#else
# define DEPRECATED__message_info__msg__VisionDetections __declspec(deprecated)
#endif

namespace message_info
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct VisionDetections_
{
  using Type = VisionDetections_<ContainerAllocator>;

  explicit VisionDetections_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->test = 0ll;
    }
  }

  explicit VisionDetections_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->test = 0ll;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _frames_type =
    std::vector<message_info::msg::DetectionFrame_<ContainerAllocator>, typename ContainerAllocator::template rebind<message_info::msg::DetectionFrame_<ContainerAllocator>>::other>;
  _frames_type frames;
  using _test_type =
    int64_t;
  _test_type test;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__frames(
    const std::vector<message_info::msg::DetectionFrame_<ContainerAllocator>, typename ContainerAllocator::template rebind<message_info::msg::DetectionFrame_<ContainerAllocator>>::other> & _arg)
  {
    this->frames = _arg;
    return *this;
  }
  Type & set__test(
    const int64_t & _arg)
  {
    this->test = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    message_info::msg::VisionDetections_<ContainerAllocator> *;
  using ConstRawPtr =
    const message_info::msg::VisionDetections_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<message_info::msg::VisionDetections_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<message_info::msg::VisionDetections_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      message_info::msg::VisionDetections_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<message_info::msg::VisionDetections_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      message_info::msg::VisionDetections_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<message_info::msg::VisionDetections_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<message_info::msg::VisionDetections_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<message_info::msg::VisionDetections_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__message_info__msg__VisionDetections
    std::shared_ptr<message_info::msg::VisionDetections_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__message_info__msg__VisionDetections
    std::shared_ptr<message_info::msg::VisionDetections_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const VisionDetections_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->frames != other.frames) {
      return false;
    }
    if (this->test != other.test) {
      return false;
    }
    return true;
  }
  bool operator!=(const VisionDetections_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct VisionDetections_

// alias to use template instance with default allocator
using VisionDetections =
  message_info::msg::VisionDetections_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace message_info

#endif  // MESSAGE_INFO__MSG__DETAIL__VISION_DETECTIONS__STRUCT_HPP_
