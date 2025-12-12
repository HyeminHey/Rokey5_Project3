// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from qulido_robot_msgs:srv/AiCompute.idl
// generated code does not contain a copyright notice

#ifndef QULIDO_ROBOT_MSGS__SRV__DETAIL__AI_COMPUTE__TRAITS_HPP_
#define QULIDO_ROBOT_MSGS__SRV__DETAIL__AI_COMPUTE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "qulido_robot_msgs/srv/detail/ai_compute__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace qulido_robot_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const AiCompute_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: added
  {
    if (msg.added.size() == 0) {
      out << "added: []";
    } else {
      out << "added: [";
      size_t pending_items = msg.added.size();
      for (auto item : msg.added) {
        rosidl_generator_traits::value_to_yaml(item, out);
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
  const AiCompute_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: added
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.added.size() == 0) {
      out << "added: []\n";
    } else {
      out << "added:\n";
      for (auto item : msg.added) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const AiCompute_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace qulido_robot_msgs

namespace rosidl_generator_traits
{

[[deprecated("use qulido_robot_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const qulido_robot_msgs::srv::AiCompute_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  qulido_robot_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use qulido_robot_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const qulido_robot_msgs::srv::AiCompute_Request & msg)
{
  return qulido_robot_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<qulido_robot_msgs::srv::AiCompute_Request>()
{
  return "qulido_robot_msgs::srv::AiCompute_Request";
}

template<>
inline const char * name<qulido_robot_msgs::srv::AiCompute_Request>()
{
  return "qulido_robot_msgs/srv/AiCompute_Request";
}

template<>
struct has_fixed_size<qulido_robot_msgs::srv::AiCompute_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<qulido_robot_msgs::srv::AiCompute_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<qulido_robot_msgs::srv::AiCompute_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace qulido_robot_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const AiCompute_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: ai_cmd
  {
    if (msg.ai_cmd.size() == 0) {
      out << "ai_cmd: []";
    } else {
      out << "ai_cmd: [";
      size_t pending_items = msg.ai_cmd.size();
      for (auto item : msg.ai_cmd) {
        rosidl_generator_traits::value_to_yaml(item, out);
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
  const AiCompute_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: ai_cmd
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.ai_cmd.size() == 0) {
      out << "ai_cmd: []\n";
    } else {
      out << "ai_cmd:\n";
      for (auto item : msg.ai_cmd) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const AiCompute_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace qulido_robot_msgs

namespace rosidl_generator_traits
{

[[deprecated("use qulido_robot_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const qulido_robot_msgs::srv::AiCompute_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  qulido_robot_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use qulido_robot_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const qulido_robot_msgs::srv::AiCompute_Response & msg)
{
  return qulido_robot_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<qulido_robot_msgs::srv::AiCompute_Response>()
{
  return "qulido_robot_msgs::srv::AiCompute_Response";
}

template<>
inline const char * name<qulido_robot_msgs::srv::AiCompute_Response>()
{
  return "qulido_robot_msgs/srv/AiCompute_Response";
}

template<>
struct has_fixed_size<qulido_robot_msgs::srv::AiCompute_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<qulido_robot_msgs::srv::AiCompute_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<qulido_robot_msgs::srv::AiCompute_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<qulido_robot_msgs::srv::AiCompute>()
{
  return "qulido_robot_msgs::srv::AiCompute";
}

template<>
inline const char * name<qulido_robot_msgs::srv::AiCompute>()
{
  return "qulido_robot_msgs/srv/AiCompute";
}

template<>
struct has_fixed_size<qulido_robot_msgs::srv::AiCompute>
  : std::integral_constant<
    bool,
    has_fixed_size<qulido_robot_msgs::srv::AiCompute_Request>::value &&
    has_fixed_size<qulido_robot_msgs::srv::AiCompute_Response>::value
  >
{
};

template<>
struct has_bounded_size<qulido_robot_msgs::srv::AiCompute>
  : std::integral_constant<
    bool,
    has_bounded_size<qulido_robot_msgs::srv::AiCompute_Request>::value &&
    has_bounded_size<qulido_robot_msgs::srv::AiCompute_Response>::value
  >
{
};

template<>
struct is_service<qulido_robot_msgs::srv::AiCompute>
  : std::true_type
{
};

template<>
struct is_service_request<qulido_robot_msgs::srv::AiCompute_Request>
  : std::true_type
{
};

template<>
struct is_service_response<qulido_robot_msgs::srv::AiCompute_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // QULIDO_ROBOT_MSGS__SRV__DETAIL__AI_COMPUTE__TRAITS_HPP_
