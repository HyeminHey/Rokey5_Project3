// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from qulido_robot_msgs:msg/MotionPrimitive.idl
// generated code does not contain a copyright notice

#ifndef QULIDO_ROBOT_MSGS__MSG__DETAIL__MOTION_PRIMITIVE__BUILDER_HPP_
#define QULIDO_ROBOT_MSGS__MSG__DETAIL__MOTION_PRIMITIVE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "qulido_robot_msgs/msg/detail/motion_primitive__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace qulido_robot_msgs
{

namespace msg
{

namespace builder
{

class Init_MotionPrimitive_gripper_width
{
public:
  explicit Init_MotionPrimitive_gripper_width(::qulido_robot_msgs::msg::MotionPrimitive & msg)
  : msg_(msg)
  {}
  ::qulido_robot_msgs::msg::MotionPrimitive gripper_width(::qulido_robot_msgs::msg::MotionPrimitive::_gripper_width_type arg)
  {
    msg_.gripper_width = std::move(arg);
    return std::move(msg_);
  }

private:
  ::qulido_robot_msgs::msg::MotionPrimitive msg_;
};

class Init_MotionPrimitive_target_pose
{
public:
  explicit Init_MotionPrimitive_target_pose(::qulido_robot_msgs::msg::MotionPrimitive & msg)
  : msg_(msg)
  {}
  Init_MotionPrimitive_gripper_width target_pose(::qulido_robot_msgs::msg::MotionPrimitive::_target_pose_type arg)
  {
    msg_.target_pose = std::move(arg);
    return Init_MotionPrimitive_gripper_width(msg_);
  }

private:
  ::qulido_robot_msgs::msg::MotionPrimitive msg_;
};

class Init_MotionPrimitive_primitive
{
public:
  Init_MotionPrimitive_primitive()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MotionPrimitive_target_pose primitive(::qulido_robot_msgs::msg::MotionPrimitive::_primitive_type arg)
  {
    msg_.primitive = std::move(arg);
    return Init_MotionPrimitive_target_pose(msg_);
  }

private:
  ::qulido_robot_msgs::msg::MotionPrimitive msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::qulido_robot_msgs::msg::MotionPrimitive>()
{
  return qulido_robot_msgs::msg::builder::Init_MotionPrimitive_primitive();
}

}  // namespace qulido_robot_msgs

#endif  // QULIDO_ROBOT_MSGS__MSG__DETAIL__MOTION_PRIMITIVE__BUILDER_HPP_
