// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from qulido_robot_msgs:srv/AiCompute.idl
// generated code does not contain a copyright notice

#ifndef QULIDO_ROBOT_MSGS__SRV__DETAIL__AI_COMPUTE__BUILDER_HPP_
#define QULIDO_ROBOT_MSGS__SRV__DETAIL__AI_COMPUTE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "qulido_robot_msgs/srv/detail/ai_compute__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace qulido_robot_msgs
{

namespace srv
{

namespace builder
{

class Init_AiCompute_Request_added
{
public:
  Init_AiCompute_Request_added()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::qulido_robot_msgs::srv::AiCompute_Request added(::qulido_robot_msgs::srv::AiCompute_Request::_added_type arg)
  {
    msg_.added = std::move(arg);
    return std::move(msg_);
  }

private:
  ::qulido_robot_msgs::srv::AiCompute_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::qulido_robot_msgs::srv::AiCompute_Request>()
{
  return qulido_robot_msgs::srv::builder::Init_AiCompute_Request_added();
}

}  // namespace qulido_robot_msgs


namespace qulido_robot_msgs
{

namespace srv
{

namespace builder
{

class Init_AiCompute_Response_ai_cmd
{
public:
  Init_AiCompute_Response_ai_cmd()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::qulido_robot_msgs::srv::AiCompute_Response ai_cmd(::qulido_robot_msgs::srv::AiCompute_Response::_ai_cmd_type arg)
  {
    msg_.ai_cmd = std::move(arg);
    return std::move(msg_);
  }

private:
  ::qulido_robot_msgs::srv::AiCompute_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::qulido_robot_msgs::srv::AiCompute_Response>()
{
  return qulido_robot_msgs::srv::builder::Init_AiCompute_Response_ai_cmd();
}

}  // namespace qulido_robot_msgs

#endif  // QULIDO_ROBOT_MSGS__SRV__DETAIL__AI_COMPUTE__BUILDER_HPP_
