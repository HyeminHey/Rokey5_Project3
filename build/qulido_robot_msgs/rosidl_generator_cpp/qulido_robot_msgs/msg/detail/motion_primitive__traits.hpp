// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from qulido_robot_msgs:msg/MotionPrimitive.idl
// generated code does not contain a copyright notice

#ifndef QULIDO_ROBOT_MSGS__MSG__DETAIL__MOTION_PRIMITIVE__TRAITS_HPP_
#define QULIDO_ROBOT_MSGS__MSG__DETAIL__MOTION_PRIMITIVE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "qulido_robot_msgs/msg/detail/motion_primitive__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace qulido_robot_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const MotionPrimitive & msg,
  std::ostream & out)
{
  out << "{";
  // member: primitive
  {
    out << "primitive: ";
    rosidl_generator_traits::value_to_yaml(msg.primitive, out);
    out << ", ";
  }

  // member: target_pose
  {
    if (msg.target_pose.size() == 0) {
      out << "target_pose: []";
    } else {
      out << "target_pose: [";
      size_t pending_items = msg.target_pose.size();
      for (auto item : msg.target_pose) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: gripper_width
  {
    out << "gripper_width: ";
    rosidl_generator_traits::value_to_yaml(msg.gripper_width, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MotionPrimitive & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: primitive
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "primitive: ";
    rosidl_generator_traits::value_to_yaml(msg.primitive, out);
    out << "\n";
  }

  // member: target_pose
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.target_pose.size() == 0) {
      out << "target_pose: []\n";
    } else {
      out << "target_pose:\n";
      for (auto item : msg.target_pose) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: gripper_width
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gripper_width: ";
    rosidl_generator_traits::value_to_yaml(msg.gripper_width, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MotionPrimitive & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace qulido_robot_msgs

namespace rosidl_generator_traits
{

[[deprecated("use qulido_robot_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const qulido_robot_msgs::msg::MotionPrimitive & msg,
  std::ostream & out, size_t indentation = 0)
{
  qulido_robot_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use qulido_robot_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const qulido_robot_msgs::msg::MotionPrimitive & msg)
{
  return qulido_robot_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<qulido_robot_msgs::msg::MotionPrimitive>()
{
  return "qulido_robot_msgs::msg::MotionPrimitive";
}

template<>
inline const char * name<qulido_robot_msgs::msg::MotionPrimitive>()
{
  return "qulido_robot_msgs/msg/MotionPrimitive";
}

template<>
struct has_fixed_size<qulido_robot_msgs::msg::MotionPrimitive>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<qulido_robot_msgs::msg::MotionPrimitive>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<qulido_robot_msgs::msg::MotionPrimitive>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // QULIDO_ROBOT_MSGS__MSG__DETAIL__MOTION_PRIMITIVE__TRAITS_HPP_
