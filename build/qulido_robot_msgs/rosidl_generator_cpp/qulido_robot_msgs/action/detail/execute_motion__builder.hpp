// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from qulido_robot_msgs:action/ExecuteMotion.idl
// generated code does not contain a copyright notice

#ifndef QULIDO_ROBOT_MSGS__ACTION__DETAIL__EXECUTE_MOTION__BUILDER_HPP_
#define QULIDO_ROBOT_MSGS__ACTION__DETAIL__EXECUTE_MOTION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "qulido_robot_msgs/action/detail/execute_motion__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace qulido_robot_msgs
{

namespace action
{

namespace builder
{

class Init_ExecuteMotion_Goal_sequence
{
public:
  Init_ExecuteMotion_Goal_sequence()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::qulido_robot_msgs::action::ExecuteMotion_Goal sequence(::qulido_robot_msgs::action::ExecuteMotion_Goal::_sequence_type arg)
  {
    msg_.sequence = std::move(arg);
    return std::move(msg_);
  }

private:
  ::qulido_robot_msgs::action::ExecuteMotion_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::qulido_robot_msgs::action::ExecuteMotion_Goal>()
{
  return qulido_robot_msgs::action::builder::Init_ExecuteMotion_Goal_sequence();
}

}  // namespace qulido_robot_msgs


namespace qulido_robot_msgs
{

namespace action
{

namespace builder
{

class Init_ExecuteMotion_Result_success
{
public:
  Init_ExecuteMotion_Result_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::qulido_robot_msgs::action::ExecuteMotion_Result success(::qulido_robot_msgs::action::ExecuteMotion_Result::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::qulido_robot_msgs::action::ExecuteMotion_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::qulido_robot_msgs::action::ExecuteMotion_Result>()
{
  return qulido_robot_msgs::action::builder::Init_ExecuteMotion_Result_success();
}

}  // namespace qulido_robot_msgs


namespace qulido_robot_msgs
{

namespace action
{

namespace builder
{

class Init_ExecuteMotion_Feedback_current_step
{
public:
  Init_ExecuteMotion_Feedback_current_step()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::qulido_robot_msgs::action::ExecuteMotion_Feedback current_step(::qulido_robot_msgs::action::ExecuteMotion_Feedback::_current_step_type arg)
  {
    msg_.current_step = std::move(arg);
    return std::move(msg_);
  }

private:
  ::qulido_robot_msgs::action::ExecuteMotion_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::qulido_robot_msgs::action::ExecuteMotion_Feedback>()
{
  return qulido_robot_msgs::action::builder::Init_ExecuteMotion_Feedback_current_step();
}

}  // namespace qulido_robot_msgs


namespace qulido_robot_msgs
{

namespace action
{

namespace builder
{

class Init_ExecuteMotion_SendGoal_Request_goal
{
public:
  explicit Init_ExecuteMotion_SendGoal_Request_goal(::qulido_robot_msgs::action::ExecuteMotion_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::qulido_robot_msgs::action::ExecuteMotion_SendGoal_Request goal(::qulido_robot_msgs::action::ExecuteMotion_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::qulido_robot_msgs::action::ExecuteMotion_SendGoal_Request msg_;
};

class Init_ExecuteMotion_SendGoal_Request_goal_id
{
public:
  Init_ExecuteMotion_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ExecuteMotion_SendGoal_Request_goal goal_id(::qulido_robot_msgs::action::ExecuteMotion_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_ExecuteMotion_SendGoal_Request_goal(msg_);
  }

private:
  ::qulido_robot_msgs::action::ExecuteMotion_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::qulido_robot_msgs::action::ExecuteMotion_SendGoal_Request>()
{
  return qulido_robot_msgs::action::builder::Init_ExecuteMotion_SendGoal_Request_goal_id();
}

}  // namespace qulido_robot_msgs


namespace qulido_robot_msgs
{

namespace action
{

namespace builder
{

class Init_ExecuteMotion_SendGoal_Response_stamp
{
public:
  explicit Init_ExecuteMotion_SendGoal_Response_stamp(::qulido_robot_msgs::action::ExecuteMotion_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::qulido_robot_msgs::action::ExecuteMotion_SendGoal_Response stamp(::qulido_robot_msgs::action::ExecuteMotion_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::qulido_robot_msgs::action::ExecuteMotion_SendGoal_Response msg_;
};

class Init_ExecuteMotion_SendGoal_Response_accepted
{
public:
  Init_ExecuteMotion_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ExecuteMotion_SendGoal_Response_stamp accepted(::qulido_robot_msgs::action::ExecuteMotion_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_ExecuteMotion_SendGoal_Response_stamp(msg_);
  }

private:
  ::qulido_robot_msgs::action::ExecuteMotion_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::qulido_robot_msgs::action::ExecuteMotion_SendGoal_Response>()
{
  return qulido_robot_msgs::action::builder::Init_ExecuteMotion_SendGoal_Response_accepted();
}

}  // namespace qulido_robot_msgs


namespace qulido_robot_msgs
{

namespace action
{

namespace builder
{

class Init_ExecuteMotion_GetResult_Request_goal_id
{
public:
  Init_ExecuteMotion_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::qulido_robot_msgs::action::ExecuteMotion_GetResult_Request goal_id(::qulido_robot_msgs::action::ExecuteMotion_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::qulido_robot_msgs::action::ExecuteMotion_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::qulido_robot_msgs::action::ExecuteMotion_GetResult_Request>()
{
  return qulido_robot_msgs::action::builder::Init_ExecuteMotion_GetResult_Request_goal_id();
}

}  // namespace qulido_robot_msgs


namespace qulido_robot_msgs
{

namespace action
{

namespace builder
{

class Init_ExecuteMotion_GetResult_Response_result
{
public:
  explicit Init_ExecuteMotion_GetResult_Response_result(::qulido_robot_msgs::action::ExecuteMotion_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::qulido_robot_msgs::action::ExecuteMotion_GetResult_Response result(::qulido_robot_msgs::action::ExecuteMotion_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::qulido_robot_msgs::action::ExecuteMotion_GetResult_Response msg_;
};

class Init_ExecuteMotion_GetResult_Response_status
{
public:
  Init_ExecuteMotion_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ExecuteMotion_GetResult_Response_result status(::qulido_robot_msgs::action::ExecuteMotion_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_ExecuteMotion_GetResult_Response_result(msg_);
  }

private:
  ::qulido_robot_msgs::action::ExecuteMotion_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::qulido_robot_msgs::action::ExecuteMotion_GetResult_Response>()
{
  return qulido_robot_msgs::action::builder::Init_ExecuteMotion_GetResult_Response_status();
}

}  // namespace qulido_robot_msgs


namespace qulido_robot_msgs
{

namespace action
{

namespace builder
{

class Init_ExecuteMotion_FeedbackMessage_feedback
{
public:
  explicit Init_ExecuteMotion_FeedbackMessage_feedback(::qulido_robot_msgs::action::ExecuteMotion_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::qulido_robot_msgs::action::ExecuteMotion_FeedbackMessage feedback(::qulido_robot_msgs::action::ExecuteMotion_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::qulido_robot_msgs::action::ExecuteMotion_FeedbackMessage msg_;
};

class Init_ExecuteMotion_FeedbackMessage_goal_id
{
public:
  Init_ExecuteMotion_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ExecuteMotion_FeedbackMessage_feedback goal_id(::qulido_robot_msgs::action::ExecuteMotion_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_ExecuteMotion_FeedbackMessage_feedback(msg_);
  }

private:
  ::qulido_robot_msgs::action::ExecuteMotion_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::qulido_robot_msgs::action::ExecuteMotion_FeedbackMessage>()
{
  return qulido_robot_msgs::action::builder::Init_ExecuteMotion_FeedbackMessage_goal_id();
}

}  // namespace qulido_robot_msgs

#endif  // QULIDO_ROBOT_MSGS__ACTION__DETAIL__EXECUTE_MOTION__BUILDER_HPP_
