// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from qulido_robot_msgs:srv/GetBoardState.idl
// generated code does not contain a copyright notice

#ifndef QULIDO_ROBOT_MSGS__SRV__DETAIL__GET_BOARD_STATE__BUILDER_HPP_
#define QULIDO_ROBOT_MSGS__SRV__DETAIL__GET_BOARD_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "qulido_robot_msgs/srv/detail/get_board_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace qulido_robot_msgs
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::qulido_robot_msgs::srv::GetBoardState_Request>()
{
  return ::qulido_robot_msgs::srv::GetBoardState_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace qulido_robot_msgs


namespace qulido_robot_msgs
{

namespace srv
{

namespace builder
{

class Init_GetBoardState_Response_board_state
{
public:
  Init_GetBoardState_Response_board_state()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::qulido_robot_msgs::srv::GetBoardState_Response board_state(::qulido_robot_msgs::srv::GetBoardState_Response::_board_state_type arg)
  {
    msg_.board_state = std::move(arg);
    return std::move(msg_);
  }

private:
  ::qulido_robot_msgs::srv::GetBoardState_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::qulido_robot_msgs::srv::GetBoardState_Response>()
{
  return qulido_robot_msgs::srv::builder::Init_GetBoardState_Response_board_state();
}

}  // namespace qulido_robot_msgs

#endif  // QULIDO_ROBOT_MSGS__SRV__DETAIL__GET_BOARD_STATE__BUILDER_HPP_
