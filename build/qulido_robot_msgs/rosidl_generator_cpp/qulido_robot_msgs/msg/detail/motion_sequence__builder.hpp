// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from qulido_robot_msgs:msg/MotionSequence.idl
// generated code does not contain a copyright notice

#ifndef QULIDO_ROBOT_MSGS__MSG__DETAIL__MOTION_SEQUENCE__BUILDER_HPP_
#define QULIDO_ROBOT_MSGS__MSG__DETAIL__MOTION_SEQUENCE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "qulido_robot_msgs/msg/detail/motion_sequence__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace qulido_robot_msgs
{

namespace msg
{

namespace builder
{

class Init_MotionSequence_sequence
{
public:
  Init_MotionSequence_sequence()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::qulido_robot_msgs::msg::MotionSequence sequence(::qulido_robot_msgs::msg::MotionSequence::_sequence_type arg)
  {
    msg_.sequence = std::move(arg);
    return std::move(msg_);
  }

private:
  ::qulido_robot_msgs::msg::MotionSequence msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::qulido_robot_msgs::msg::MotionSequence>()
{
  return qulido_robot_msgs::msg::builder::Init_MotionSequence_sequence();
}

}  // namespace qulido_robot_msgs

#endif  // QULIDO_ROBOT_MSGS__MSG__DETAIL__MOTION_SEQUENCE__BUILDER_HPP_
