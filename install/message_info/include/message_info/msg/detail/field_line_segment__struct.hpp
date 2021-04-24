// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from message_info:msg/FieldLineSegment.idl
// generated code does not contain a copyright notice

#ifndef MESSAGE_INFO__MSG__DETAIL__FIELD_LINE_SEGMENT__STRUCT_HPP_
#define MESSAGE_INFO__MSG__DETAIL__FIELD_LINE_SEGMENT__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__message_info__msg__FieldLineSegment __attribute__((deprecated))
#else
# define DEPRECATED__message_info__msg__FieldLineSegment __declspec(deprecated)
#endif

namespace message_info
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct FieldLineSegment_
{
  using Type = FieldLineSegment_<ContainerAllocator>;

  explicit FieldLineSegment_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->p1_x = 0.0;
      this->p1_y = 0.0;
      this->p2_x = 0.0;
      this->p2_y = 0.0;
      this->thickness = 0.0;
    }
  }

  explicit FieldLineSegment_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->p1_x = 0.0;
      this->p1_y = 0.0;
      this->p2_x = 0.0;
      this->p2_y = 0.0;
      this->thickness = 0.0;
    }
  }

  // field types and members
  using _name_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _name_type name;
  using _p1_x_type =
    double;
  _p1_x_type p1_x;
  using _p1_y_type =
    double;
  _p1_y_type p1_y;
  using _p2_x_type =
    double;
  _p2_x_type p2_x;
  using _p2_y_type =
    double;
  _p2_y_type p2_y;
  using _thickness_type =
    double;
  _thickness_type thickness;

  // setters for named parameter idiom
  Type & set__name(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->name = _arg;
    return *this;
  }
  Type & set__p1_x(
    const double & _arg)
  {
    this->p1_x = _arg;
    return *this;
  }
  Type & set__p1_y(
    const double & _arg)
  {
    this->p1_y = _arg;
    return *this;
  }
  Type & set__p2_x(
    const double & _arg)
  {
    this->p2_x = _arg;
    return *this;
  }
  Type & set__p2_y(
    const double & _arg)
  {
    this->p2_y = _arg;
    return *this;
  }
  Type & set__thickness(
    const double & _arg)
  {
    this->thickness = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    message_info::msg::FieldLineSegment_<ContainerAllocator> *;
  using ConstRawPtr =
    const message_info::msg::FieldLineSegment_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<message_info::msg::FieldLineSegment_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<message_info::msg::FieldLineSegment_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      message_info::msg::FieldLineSegment_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<message_info::msg::FieldLineSegment_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      message_info::msg::FieldLineSegment_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<message_info::msg::FieldLineSegment_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<message_info::msg::FieldLineSegment_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<message_info::msg::FieldLineSegment_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__message_info__msg__FieldLineSegment
    std::shared_ptr<message_info::msg::FieldLineSegment_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__message_info__msg__FieldLineSegment
    std::shared_ptr<message_info::msg::FieldLineSegment_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FieldLineSegment_ & other) const
  {
    if (this->name != other.name) {
      return false;
    }
    if (this->p1_x != other.p1_x) {
      return false;
    }
    if (this->p1_y != other.p1_y) {
      return false;
    }
    if (this->p2_x != other.p2_x) {
      return false;
    }
    if (this->p2_y != other.p2_y) {
      return false;
    }
    if (this->thickness != other.thickness) {
      return false;
    }
    return true;
  }
  bool operator!=(const FieldLineSegment_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FieldLineSegment_

// alias to use template instance with default allocator
using FieldLineSegment =
  message_info::msg::FieldLineSegment_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace message_info

#endif  // MESSAGE_INFO__MSG__DETAIL__FIELD_LINE_SEGMENT__STRUCT_HPP_
