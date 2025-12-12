// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from qulido_robot_msgs:msg/Int32Row.idl
// generated code does not contain a copyright notice

#ifndef QULIDO_ROBOT_MSGS__MSG__DETAIL__INT32_ROW__BUILDER_HPP_
#define QULIDO_ROBOT_MSGS__MSG__DETAIL__INT32_ROW__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "qulido_robot_msgs/msg/detail/int32_row__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace qulido_robot_msgs
{

namespace msg
{

namespace builder
{

class Init_Int32Row_data
{
public:
  Init_Int32Row_data()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::qulido_robot_msgs::msg::Int32Row data(::qulido_robot_msgs::msg::Int32Row::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::qulido_robot_msgs::msg::Int32Row msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::qulido_robot_msgs::msg::Int32Row>()
{
  return qulido_robot_msgs::msg::builder::Init_Int32Row_data();
}

}  // namespace qulido_robot_msgs

#endif  // QULIDO_ROBOT_MSGS__MSG__DETAIL__INT32_ROW__BUILDER_HPP_
