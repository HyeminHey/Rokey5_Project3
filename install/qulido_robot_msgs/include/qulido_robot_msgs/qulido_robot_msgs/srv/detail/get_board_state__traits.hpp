// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from qulido_robot_msgs:srv/GetBoardState.idl
// generated code does not contain a copyright notice

#ifndef QULIDO_ROBOT_MSGS__SRV__DETAIL__GET_BOARD_STATE__TRAITS_HPP_
#define QULIDO_ROBOT_MSGS__SRV__DETAIL__GET_BOARD_STATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "qulido_robot_msgs/srv/detail/get_board_state__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace qulido_robot_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetBoardState_Request & msg,
  std::ostream & out)
{
  (void)msg;
  out << "null";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetBoardState_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetBoardState_Request & msg, bool use_flow_style = false)
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
  const qulido_robot_msgs::srv::GetBoardState_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  qulido_robot_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use qulido_robot_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const qulido_robot_msgs::srv::GetBoardState_Request & msg)
{
  return qulido_robot_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<qulido_robot_msgs::srv::GetBoardState_Request>()
{
  return "qulido_robot_msgs::srv::GetBoardState_Request";
}

template<>
inline const char * name<qulido_robot_msgs::srv::GetBoardState_Request>()
{
  return "qulido_robot_msgs/srv/GetBoardState_Request";
}

template<>
struct has_fixed_size<qulido_robot_msgs::srv::GetBoardState_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<qulido_robot_msgs::srv::GetBoardState_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<qulido_robot_msgs::srv::GetBoardState_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'board_state'
#include "qulido_robot_msgs/msg/detail/int32_row__traits.hpp"

namespace qulido_robot_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetBoardState_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: board_state
  {
    if (msg.board_state.size() == 0) {
      out << "board_state: []";
    } else {
      out << "board_state: [";
      size_t pending_items = msg.board_state.size();
      for (auto item : msg.board_state) {
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
  const GetBoardState_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: board_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.board_state.size() == 0) {
      out << "board_state: []\n";
    } else {
      out << "board_state:\n";
      for (auto item : msg.board_state) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetBoardState_Response & msg, bool use_flow_style = false)
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
  const qulido_robot_msgs::srv::GetBoardState_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  qulido_robot_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use qulido_robot_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const qulido_robot_msgs::srv::GetBoardState_Response & msg)
{
  return qulido_robot_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<qulido_robot_msgs::srv::GetBoardState_Response>()
{
  return "qulido_robot_msgs::srv::GetBoardState_Response";
}

template<>
inline const char * name<qulido_robot_msgs::srv::GetBoardState_Response>()
{
  return "qulido_robot_msgs/srv/GetBoardState_Response";
}

template<>
struct has_fixed_size<qulido_robot_msgs::srv::GetBoardState_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<qulido_robot_msgs::srv::GetBoardState_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<qulido_robot_msgs::srv::GetBoardState_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<qulido_robot_msgs::srv::GetBoardState>()
{
  return "qulido_robot_msgs::srv::GetBoardState";
}

template<>
inline const char * name<qulido_robot_msgs::srv::GetBoardState>()
{
  return "qulido_robot_msgs/srv/GetBoardState";
}

template<>
struct has_fixed_size<qulido_robot_msgs::srv::GetBoardState>
  : std::integral_constant<
    bool,
    has_fixed_size<qulido_robot_msgs::srv::GetBoardState_Request>::value &&
    has_fixed_size<qulido_robot_msgs::srv::GetBoardState_Response>::value
  >
{
};

template<>
struct has_bounded_size<qulido_robot_msgs::srv::GetBoardState>
  : std::integral_constant<
    bool,
    has_bounded_size<qulido_robot_msgs::srv::GetBoardState_Request>::value &&
    has_bounded_size<qulido_robot_msgs::srv::GetBoardState_Response>::value
  >
{
};

template<>
struct is_service<qulido_robot_msgs::srv::GetBoardState>
  : std::true_type
{
};

template<>
struct is_service_request<qulido_robot_msgs::srv::GetBoardState_Request>
  : std::true_type
{
};

template<>
struct is_service_response<qulido_robot_msgs::srv::GetBoardState_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // QULIDO_ROBOT_MSGS__SRV__DETAIL__GET_BOARD_STATE__TRAITS_HPP_
