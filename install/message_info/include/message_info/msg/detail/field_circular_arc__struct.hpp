// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from message_info:msg/FieldCircularArc.idl
// generated code does not contain a copyright notice

#ifndef MESSAGE_INFO__MSG__DETAIL__FIELD_CIRCULAR_ARC__STRUCT_HPP_
#define MESSAGE_INFO__MSG__DETAIL__FIELD_CIRCULAR_ARC__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__message_info__msg__FieldCircularArc __attribute__((deprecated))
#else
# define DEPRECATED__message_info__msg__FieldCircularArc __declspec(deprecated)
#endif

namespace message_info
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct FieldCircularArc_
{
  using Type = FieldCircularArc_<ContainerAllocator>;

  explicit FieldCircularArc_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->center_x = 0.0;
      this->center_y = 0.0;
      this->radius = 0.0;
      this->a1 = 0.0;
      this->a2 = 0.0;
      this->thickness = 0.0;
    }
  }

  explicit FieldCircularArc_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->center_x = 0.0;
      this->center_y = 0.0;
      this->radius = 0.0;
      this->a1 = 0.0;
      this->a2 = 0.0;
      this->thickness = 0.0;
    }
  }

  // field types and members
  using _name_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _name_type name;
  using _center_x_type =
    double;
  _center_x_type center_x;
  using _center_y_type =
    double;
  _center_y_type center_y;
  using _radius_type =
    double;
  _radius_type radius;
  using _a1_type =
    double;
  _a1_type a1;
  using _a2_type =
    double;
  _a2_type a2;
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
  Type & set__center_x(
    const double & _arg)
  {
    this->center_x = _arg;
    return *this;
  }
  Type & set__center_y(
    const double & _arg)
  {
    this->center_y = _arg;
    return *this;
  }
  Type & set__radius(
    const double & _arg)
  {
    this->radius = _arg;
    return *this;
  }
  Type & set__a1(
    const double & _arg)
  {
    this->a1 = _arg;
    return *this;
  }
  Type & set__a2(
    const double & _arg)
  {
    this->a2 = _arg;
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
    message_info::msg::FieldCircularArc_<ContainerAllocator> *;
  using ConstRawPtr =
    const message_info::msg::FieldCircularArc_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<message_info::msg::FieldCircularArc_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<message_info::msg::FieldCircularArc_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      message_info::msg::FieldCircularArc_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<message_info::msg::FieldCircularArc_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      message_info::msg::FieldCircularArc_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<message_info::msg::FieldCircularArc_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<message_info::msg::FieldCircularArc_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<message_info::msg::FieldCircularArc_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__message_info__msg__FieldCircularArc
    std::shared_ptr<message_info::msg::FieldCircularArc_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__message_info__msg__FieldCircularArc
    std::shared_ptr<message_info::msg::FieldCircularArc_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FieldCircularArc_ & other) const
  {
    if (this->name != other.name) {
      return false;
    }
    if (this->center_x != other.center_x) {
      return false;
    }
    if (this->center_y != other.center_y) {
      return false;
    }
    if (this->radius != other.radius) {
      return false;
    }
    if (this->a1 != other.a1) {
      return false;
    }
    if (this->a2 != other.a2) {
      return false;
    }
    if (this->thickness != other.thickness) {
      return false;
    }
    return true;
  }
  bool operator!=(const FieldCircularArc_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FieldCircularArc_

// alias to use template instance with default allocator
using FieldCircularArc =
  message_info::msg::FieldCircularArc_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace message_info

#endif  // MESSAGE_INFO__MSG__DETAIL__FIELD_CIRCULAR_ARC__STRUCT_HPP_
