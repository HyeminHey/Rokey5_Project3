// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from qulido_robot_msgs:msg/MotionSequence.idl
// generated code does not contain a copyright notice

#ifndef QULIDO_ROBOT_MSGS__MSG__DETAIL__MOTION_SEQUENCE__STRUCT_HPP_
#define QULIDO_ROBOT_MSGS__MSG__DETAIL__MOTION_SEQUENCE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'sequence'
#include "qulido_robot_msgs/msg/detail/motion_primitive__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__qulido_robot_msgs__msg__MotionSequence __attribute__((deprecated))
#else
# define DEPRECATED__qulido_robot_msgs__msg__MotionSequence __declspec(deprecated)
#endif

namespace qulido_robot_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MotionSequence_
{
  using Type = MotionSequence_<ContainerAllocator>;

  explicit MotionSequence_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit MotionSequence_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _sequence_type =
    std::vector<qulido_robot_msgs::msg::MotionPrimitive_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<qulido_robot_msgs::msg::MotionPrimitive_<ContainerAllocator>>>;
  _sequence_type sequence;

  // setters for named parameter idiom
  Type & set__sequence(
    const std::vector<qulido_robot_msgs::msg::MotionPrimitive_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<qulido_robot_msgs::msg::MotionPrimitive_<ContainerAllocator>>> & _arg)
  {
    this->sequence = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    qulido_robot_msgs::msg::MotionSequence_<ContainerAllocator> *;
  using ConstRawPtr =
    const qulido_robot_msgs::msg::MotionSequence_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<qulido_robot_msgs::msg::MotionSequence_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<qulido_robot_msgs::msg::MotionSequence_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      qulido_robot_msgs::msg::MotionSequence_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<qulido_robot_msgs::msg::MotionSequence_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      qulido_robot_msgs::msg::MotionSequence_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<qulido_robot_msgs::msg::MotionSequence_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<qulido_robot_msgs::msg::MotionSequence_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<qulido_robot_msgs::msg::MotionSequence_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__qulido_robot_msgs__msg__MotionSequence
    std::shared_ptr<qulido_robot_msgs::msg::MotionSequence_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__qulido_robot_msgs__msg__MotionSequence
    std::shared_ptr<qulido_robot_msgs::msg::MotionSequence_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MotionSequence_ & other) const
  {
    if (this->sequence != other.sequence) {
      return false;
    }
    return true;
  }
  bool operator!=(const MotionSequence_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MotionSequence_

// alias to use template instance with default allocator
using MotionSequence =
  qulido_robot_msgs::msg::MotionSequence_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace qulido_robot_msgs

#endif  // QULIDO_ROBOT_MSGS__MSG__DETAIL__MOTION_SEQUENCE__STRUCT_HPP_
