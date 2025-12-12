// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from qulido_robot_msgs:action/ExecuteMotion.idl
// generated code does not contain a copyright notice

#ifndef QULIDO_ROBOT_MSGS__ACTION__DETAIL__EXECUTE_MOTION__STRUCT_H_
#define QULIDO_ROBOT_MSGS__ACTION__DETAIL__EXECUTE_MOTION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'sequence'
#include "qulido_robot_msgs/msg/detail/motion_sequence__struct.h"

/// Struct defined in action/ExecuteMotion in the package qulido_robot_msgs.
typedef struct qulido_robot_msgs__action__ExecuteMotion_Goal
{
  qulido_robot_msgs__msg__MotionSequence sequence;
} qulido_robot_msgs__action__ExecuteMotion_Goal;

// Struct for a sequence of qulido_robot_msgs__action__ExecuteMotion_Goal.
typedef struct qulido_robot_msgs__action__ExecuteMotion_Goal__Sequence
{
  qulido_robot_msgs__action__ExecuteMotion_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} qulido_robot_msgs__action__ExecuteMotion_Goal__Sequence;


// Constants defined in the message

/// Struct defined in action/ExecuteMotion in the package qulido_robot_msgs.
typedef struct qulido_robot_msgs__action__ExecuteMotion_Result
{
  bool success;
} qulido_robot_msgs__action__ExecuteMotion_Result;

// Struct for a sequence of qulido_robot_msgs__action__ExecuteMotion_Result.
typedef struct qulido_robot_msgs__action__ExecuteMotion_Result__Sequence
{
  qulido_robot_msgs__action__ExecuteMotion_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} qulido_robot_msgs__action__ExecuteMotion_Result__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'current_step'
#include "rosidl_runtime_c/string.h"

/// Struct defined in action/ExecuteMotion in the package qulido_robot_msgs.
typedef struct qulido_robot_msgs__action__ExecuteMotion_Feedback
{
  rosidl_runtime_c__String current_step;
} qulido_robot_msgs__action__ExecuteMotion_Feedback;

// Struct for a sequence of qulido_robot_msgs__action__ExecuteMotion_Feedback.
typedef struct qulido_robot_msgs__action__ExecuteMotion_Feedback__Sequence
{
  qulido_robot_msgs__action__ExecuteMotion_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} qulido_robot_msgs__action__ExecuteMotion_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "qulido_robot_msgs/action/detail/execute_motion__struct.h"

/// Struct defined in action/ExecuteMotion in the package qulido_robot_msgs.
typedef struct qulido_robot_msgs__action__ExecuteMotion_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  qulido_robot_msgs__action__ExecuteMotion_Goal goal;
} qulido_robot_msgs__action__ExecuteMotion_SendGoal_Request;

// Struct for a sequence of qulido_robot_msgs__action__ExecuteMotion_SendGoal_Request.
typedef struct qulido_robot_msgs__action__ExecuteMotion_SendGoal_Request__Sequence
{
  qulido_robot_msgs__action__ExecuteMotion_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} qulido_robot_msgs__action__ExecuteMotion_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/ExecuteMotion in the package qulido_robot_msgs.
typedef struct qulido_robot_msgs__action__ExecuteMotion_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} qulido_robot_msgs__action__ExecuteMotion_SendGoal_Response;

// Struct for a sequence of qulido_robot_msgs__action__ExecuteMotion_SendGoal_Response.
typedef struct qulido_robot_msgs__action__ExecuteMotion_SendGoal_Response__Sequence
{
  qulido_robot_msgs__action__ExecuteMotion_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} qulido_robot_msgs__action__ExecuteMotion_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/ExecuteMotion in the package qulido_robot_msgs.
typedef struct qulido_robot_msgs__action__ExecuteMotion_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} qulido_robot_msgs__action__ExecuteMotion_GetResult_Request;

// Struct for a sequence of qulido_robot_msgs__action__ExecuteMotion_GetResult_Request.
typedef struct qulido_robot_msgs__action__ExecuteMotion_GetResult_Request__Sequence
{
  qulido_robot_msgs__action__ExecuteMotion_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} qulido_robot_msgs__action__ExecuteMotion_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "qulido_robot_msgs/action/detail/execute_motion__struct.h"

/// Struct defined in action/ExecuteMotion in the package qulido_robot_msgs.
typedef struct qulido_robot_msgs__action__ExecuteMotion_GetResult_Response
{
  int8_t status;
  qulido_robot_msgs__action__ExecuteMotion_Result result;
} qulido_robot_msgs__action__ExecuteMotion_GetResult_Response;

// Struct for a sequence of qulido_robot_msgs__action__ExecuteMotion_GetResult_Response.
typedef struct qulido_robot_msgs__action__ExecuteMotion_GetResult_Response__Sequence
{
  qulido_robot_msgs__action__ExecuteMotion_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} qulido_robot_msgs__action__ExecuteMotion_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "qulido_robot_msgs/action/detail/execute_motion__struct.h"

/// Struct defined in action/ExecuteMotion in the package qulido_robot_msgs.
typedef struct qulido_robot_msgs__action__ExecuteMotion_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  qulido_robot_msgs__action__ExecuteMotion_Feedback feedback;
} qulido_robot_msgs__action__ExecuteMotion_FeedbackMessage;

// Struct for a sequence of qulido_robot_msgs__action__ExecuteMotion_FeedbackMessage.
typedef struct qulido_robot_msgs__action__ExecuteMotion_FeedbackMessage__Sequence
{
  qulido_robot_msgs__action__ExecuteMotion_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} qulido_robot_msgs__action__ExecuteMotion_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // QULIDO_ROBOT_MSGS__ACTION__DETAIL__EXECUTE_MOTION__STRUCT_H_
