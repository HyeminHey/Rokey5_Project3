// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from qulido_robot_msgs:msg/MotionSequence.idl
// generated code does not contain a copyright notice

#ifndef QULIDO_ROBOT_MSGS__MSG__DETAIL__MOTION_SEQUENCE__TRAITS_HPP_
#define QULIDO_ROBOT_MSGS__MSG__DETAIL__MOTION_SEQUENCE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "qulido_robot_msgs/msg/detail/motion_sequence__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'sequence'
#include "qulido_robot_msgs/msg/detail/motion_primitive__traits.hpp"

namespace qulido_robot_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const MotionSequence & msg,
  std::ostream & out)
{
  out << "{";
  // member: sequence
  {
    if (msg.sequence.size() == 0) {
      out << "sequence: []";
    } else {
      out << "sequence: [";
      size_t pending_items = msg.sequence.size();
      for (auto item : msg.sequence) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MotionSequence & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: sequence
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.sequence.size() == 0) {
      out << "sequence: []\n";
    } else {
      out << "sequence:\n";
      for (auto item : msg.sequence) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MotionSequence & msg, bool use_flow_style = false)
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
  const qulido_robot_msgs::msg::MotionSequence & msg,
  std::ostream & out, size_t indentation = 0)
{
  qulido_robot_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use qulido_robot_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const qulido_robot_msgs::msg::MotionSequence & msg)
{
  return qulido_robot_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<qulido_robot_msgs::msg::MotionSequence>()
{
  return "qulido_robot_msgs::msg::MotionSequence";
}

template<>
inline const char * name<qulido_robot_msgs::msg::MotionSequence>()
{
  return "qulido_robot_msgs/msg/MotionSequence";
}

template<>
struct has_fixed_size<qulido_robot_msgs::msg::MotionSequence>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<qulido_robot_msgs::msg::MotionSequence>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<qulido_robot_msgs::msg::MotionSequence>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // QULIDO_ROBOT_MSGS__MSG__DETAIL__MOTION_SEQUENCE__TRAITS_HPP_
