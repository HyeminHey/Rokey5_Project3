// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from qulido_robot_msgs:msg/MotionPrimitive.idl
// generated code does not contain a copyright notice

#ifndef QULIDO_ROBOT_MSGS__MSG__DETAIL__MOTION_PRIMITIVE__STRUCT_HPP_
#define QULIDO_ROBOT_MSGS__MSG__DETAIL__MOTION_PRIMITIVE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__qulido_robot_msgs__msg__MotionPrimitive __attribute__((deprecated))
#else
# define DEPRECATED__qulido_robot_msgs__msg__MotionPrimitive __declspec(deprecated)
#endif

namespace qulido_robot_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MotionPrimitive_
{
  using Type = MotionPrimitive_<ContainerAllocator>;

  explicit MotionPrimitive_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->primitive = "";
      std::fill<typename std::array<double, 6>::iterator, double>(this->target_pose.begin(), this->target_pose.end(), 0.0);
      this->gripper_width = 0l;
    }
  }

  explicit MotionPrimitive_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : primitive(_alloc),
    target_pose(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->primitive = "";
      std::fill<typename std::array<double, 6>::iterator, double>(this->target_pose.begin(), this->target_pose.end(), 0.0);
      this->gripper_width = 0l;
    }
  }

  // field types and members
  using _primitive_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _primitive_type primitive;
  using _target_pose_type =
    std::array<double, 6>;
  _target_pose_type target_pose;
  using _gripper_width_type =
    int32_t;
  _gripper_width_type gripper_width;

  // setters for named parameter idiom
  Type & set__primitive(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->primitive = _arg;
    return *this;
  }
  Type & set__target_pose(
    const std::array<double, 6> & _arg)
  {
    this->target_pose = _arg;
    return *this;
  }
  Type & set__gripper_width(
    const int32_t & _arg)
  {
    this->gripper_width = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    qulido_robot_msgs::msg::MotionPrimitive_<ContainerAllocator> *;
  using ConstRawPtr =
    const qulido_robot_msgs::msg::MotionPrimitive_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<qulido_robot_msgs::msg::MotionPrimitive_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<qulido_robot_msgs::msg::MotionPrimitive_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      qulido_robot_msgs::msg::MotionPrimitive_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<qulido_robot_msgs::msg::MotionPrimitive_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      qulido_robot_msgs::msg::MotionPrimitive_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<qulido_robot_msgs::msg::MotionPrimitive_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<qulido_robot_msgs::msg::MotionPrimitive_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<qulido_robot_msgs::msg::MotionPrimitive_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__qulido_robot_msgs__msg__MotionPrimitive
    std::shared_ptr<qulido_robot_msgs::msg::MotionPrimitive_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__qulido_robot_msgs__msg__MotionPrimitive
    std::shared_ptr<qulido_robot_msgs::msg::MotionPrimitive_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MotionPrimitive_ & other) const
  {
    if (this->primitive != other.primitive) {
      return false;
    }
    if (this->target_pose != other.target_pose) {
      return false;
    }
    if (this->gripper_width != other.gripper_width) {
      return false;
    }
    return true;
  }
  bool operator!=(const MotionPrimitive_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MotionPrimitive_

// alias to use template instance with default allocator
using MotionPrimitive =
  qulido_robot_msgs::msg::MotionPrimitive_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace qulido_robot_msgs

#endif  // QULIDO_ROBOT_MSGS__MSG__DETAIL__MOTION_PRIMITIVE__STRUCT_HPP_
