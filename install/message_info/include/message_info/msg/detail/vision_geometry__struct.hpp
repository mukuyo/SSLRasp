// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from message_info:msg/VisionGeometry.idl
// generated code does not contain a copyright notice

#ifndef MESSAGE_INFO__MSG__DETAIL__VISION_GEOMETRY__STRUCT_HPP_
#define MESSAGE_INFO__MSG__DETAIL__VISION_GEOMETRY__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'field_lines'
#include "message_info/msg/detail/field_line_segment__struct.hpp"
// Member 'field_arcs'
#include "message_info/msg/detail/field_circular_arc__struct.hpp"
// Member 'goal_plus'
// Member 'goal_minus'
// Member 'goal_plus_half'
// Member 'goal_minus_half'
#include "geometry_msgs/msg/detail/pose2_d__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__message_info__msg__VisionGeometry __attribute__((deprecated))
#else
# define DEPRECATED__message_info__msg__VisionGeometry __declspec(deprecated)
#endif

namespace message_info
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct VisionGeometry_
{
  using Type = VisionGeometry_<ContainerAllocator>;

  explicit VisionGeometry_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_plus(_init),
    goal_minus(_init),
    goal_plus_half(_init),
    goal_minus_half(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->field_length = 0.0;
      this->field_width = 0.0;
      this->goal_width = 0.0;
      this->goal_depth = 0.0;
      this->field_arcs_radius = 0.0;
      this->ball_speed = 0.0;
      this->ball_slope = 0.0;
      this->ball_intercept = 0.0;
      this->robot_speed = 0.0;
      this->robot_angular_velocity = 0.0;
      this->boundary_width = 0l;
    }
  }

  explicit VisionGeometry_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_plus(_alloc, _init),
    goal_minus(_alloc, _init),
    goal_plus_half(_alloc, _init),
    goal_minus_half(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->field_length = 0.0;
      this->field_width = 0.0;
      this->goal_width = 0.0;
      this->goal_depth = 0.0;
      this->field_arcs_radius = 0.0;
      this->ball_speed = 0.0;
      this->ball_slope = 0.0;
      this->ball_intercept = 0.0;
      this->robot_speed = 0.0;
      this->robot_angular_velocity = 0.0;
      this->boundary_width = 0l;
    }
  }

  // field types and members
  using _field_length_type =
    double;
  _field_length_type field_length;
  using _field_width_type =
    double;
  _field_width_type field_width;
  using _goal_width_type =
    double;
  _goal_width_type goal_width;
  using _goal_depth_type =
    double;
  _goal_depth_type goal_depth;
  using _field_arcs_radius_type =
    double;
  _field_arcs_radius_type field_arcs_radius;
  using _ball_speed_type =
    double;
  _ball_speed_type ball_speed;
  using _ball_slope_type =
    double;
  _ball_slope_type ball_slope;
  using _ball_intercept_type =
    double;
  _ball_intercept_type ball_intercept;
  using _robot_speed_type =
    double;
  _robot_speed_type robot_speed;
  using _robot_angular_velocity_type =
    double;
  _robot_angular_velocity_type robot_angular_velocity;
  using _boundary_width_type =
    int32_t;
  _boundary_width_type boundary_width;
  using _field_lines_type =
    std::vector<message_info::msg::FieldLineSegment_<ContainerAllocator>, typename ContainerAllocator::template rebind<message_info::msg::FieldLineSegment_<ContainerAllocator>>::other>;
  _field_lines_type field_lines;
  using _field_arcs_type =
    std::vector<message_info::msg::FieldCircularArc_<ContainerAllocator>, typename ContainerAllocator::template rebind<message_info::msg::FieldCircularArc_<ContainerAllocator>>::other>;
  _field_arcs_type field_arcs;
  using _goal_plus_type =
    geometry_msgs::msg::Pose2D_<ContainerAllocator>;
  _goal_plus_type goal_plus;
  using _goal_minus_type =
    geometry_msgs::msg::Pose2D_<ContainerAllocator>;
  _goal_minus_type goal_minus;
  using _goal_plus_half_type =
    geometry_msgs::msg::Pose2D_<ContainerAllocator>;
  _goal_plus_half_type goal_plus_half;
  using _goal_minus_half_type =
    geometry_msgs::msg::Pose2D_<ContainerAllocator>;
  _goal_minus_half_type goal_minus_half;

  // setters for named parameter idiom
  Type & set__field_length(
    const double & _arg)
  {
    this->field_length = _arg;
    return *this;
  }
  Type & set__field_width(
    const double & _arg)
  {
    this->field_width = _arg;
    return *this;
  }
  Type & set__goal_width(
    const double & _arg)
  {
    this->goal_width = _arg;
    return *this;
  }
  Type & set__goal_depth(
    const double & _arg)
  {
    this->goal_depth = _arg;
    return *this;
  }
  Type & set__field_arcs_radius(
    const double & _arg)
  {
    this->field_arcs_radius = _arg;
    return *this;
  }
  Type & set__ball_speed(
    const double & _arg)
  {
    this->ball_speed = _arg;
    return *this;
  }
  Type & set__ball_slope(
    const double & _arg)
  {
    this->ball_slope = _arg;
    return *this;
  }
  Type & set__ball_intercept(
    const double & _arg)
  {
    this->ball_intercept = _arg;
    return *this;
  }
  Type & set__robot_speed(
    const double & _arg)
  {
    this->robot_speed = _arg;
    return *this;
  }
  Type & set__robot_angular_velocity(
    const double & _arg)
  {
    this->robot_angular_velocity = _arg;
    return *this;
  }
  Type & set__boundary_width(
    const int32_t & _arg)
  {
    this->boundary_width = _arg;
    return *this;
  }
  Type & set__field_lines(
    const std::vector<message_info::msg::FieldLineSegment_<ContainerAllocator>, typename ContainerAllocator::template rebind<message_info::msg::FieldLineSegment_<ContainerAllocator>>::other> & _arg)
  {
    this->field_lines = _arg;
    return *this;
  }
  Type & set__field_arcs(
    const std::vector<message_info::msg::FieldCircularArc_<ContainerAllocator>, typename ContainerAllocator::template rebind<message_info::msg::FieldCircularArc_<ContainerAllocator>>::other> & _arg)
  {
    this->field_arcs = _arg;
    return *this;
  }
  Type & set__goal_plus(
    const geometry_msgs::msg::Pose2D_<ContainerAllocator> & _arg)
  {
    this->goal_plus = _arg;
    return *this;
  }
  Type & set__goal_minus(
    const geometry_msgs::msg::Pose2D_<ContainerAllocator> & _arg)
  {
    this->goal_minus = _arg;
    return *this;
  }
  Type & set__goal_plus_half(
    const geometry_msgs::msg::Pose2D_<ContainerAllocator> & _arg)
  {
    this->goal_plus_half = _arg;
    return *this;
  }
  Type & set__goal_minus_half(
    const geometry_msgs::msg::Pose2D_<ContainerAllocator> & _arg)
  {
    this->goal_minus_half = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    message_info::msg::VisionGeometry_<ContainerAllocator> *;
  using ConstRawPtr =
    const message_info::msg::VisionGeometry_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<message_info::msg::VisionGeometry_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<message_info::msg::VisionGeometry_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      message_info::msg::VisionGeometry_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<message_info::msg::VisionGeometry_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      message_info::msg::VisionGeometry_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<message_info::msg::VisionGeometry_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<message_info::msg::VisionGeometry_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<message_info::msg::VisionGeometry_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__message_info__msg__VisionGeometry
    std::shared_ptr<message_info::msg::VisionGeometry_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__message_info__msg__VisionGeometry
    std::shared_ptr<message_info::msg::VisionGeometry_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const VisionGeometry_ & other) const
  {
    if (this->field_length != other.field_length) {
      return false;
    }
    if (this->field_width != other.field_width) {
      return false;
    }
    if (this->goal_width != other.goal_width) {
      return false;
    }
    if (this->goal_depth != other.goal_depth) {
      return false;
    }
    if (this->field_arcs_radius != other.field_arcs_radius) {
      return false;
    }
    if (this->ball_speed != other.ball_speed) {
      return false;
    }
    if (this->ball_slope != other.ball_slope) {
      return false;
    }
    if (this->ball_intercept != other.ball_intercept) {
      return false;
    }
    if (this->robot_speed != other.robot_speed) {
      return false;
    }
    if (this->robot_angular_velocity != other.robot_angular_velocity) {
      return false;
    }
    if (this->boundary_width != other.boundary_width) {
      return false;
    }
    if (this->field_lines != other.field_lines) {
      return false;
    }
    if (this->field_arcs != other.field_arcs) {
      return false;
    }
    if (this->goal_plus != other.goal_plus) {
      return false;
    }
    if (this->goal_minus != other.goal_minus) {
      return false;
    }
    if (this->goal_plus_half != other.goal_plus_half) {
      return false;
    }
    if (this->goal_minus_half != other.goal_minus_half) {
      return false;
    }
    return true;
  }
  bool operator!=(const VisionGeometry_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct VisionGeometry_

// alias to use template instance with default allocator
using VisionGeometry =
  message_info::msg::VisionGeometry_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace message_info

#endif  // MESSAGE_INFO__MSG__DETAIL__VISION_GEOMETRY__STRUCT_HPP_
