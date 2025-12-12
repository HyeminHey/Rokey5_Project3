// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from qulido_robot_msgs:srv/AiCompute.idl
// generated code does not contain a copyright notice

#ifndef QULIDO_ROBOT_MSGS__SRV__DETAIL__AI_COMPUTE__STRUCT_H_
#define QULIDO_ROBOT_MSGS__SRV__DETAIL__AI_COMPUTE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'added'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in srv/AiCompute in the package qulido_robot_msgs.
typedef struct qulido_robot_msgs__srv__AiCompute_Request
{
  rosidl_runtime_c__int32__Sequence added;
} qulido_robot_msgs__srv__AiCompute_Request;

// Struct for a sequence of qulido_robot_msgs__srv__AiCompute_Request.
typedef struct qulido_robot_msgs__srv__AiCompute_Request__Sequence
{
  qulido_robot_msgs__srv__AiCompute_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} qulido_robot_msgs__srv__AiCompute_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'ai_cmd'
// already included above
// #include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in srv/AiCompute in the package qulido_robot_msgs.
typedef struct qulido_robot_msgs__srv__AiCompute_Response
{
  rosidl_runtime_c__int32__Sequence ai_cmd;
} qulido_robot_msgs__srv__AiCompute_Response;

// Struct for a sequence of qulido_robot_msgs__srv__AiCompute_Response.
typedef struct qulido_robot_msgs__srv__AiCompute_Response__Sequence
{
  qulido_robot_msgs__srv__AiCompute_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} qulido_robot_msgs__srv__AiCompute_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // QULIDO_ROBOT_MSGS__SRV__DETAIL__AI_COMPUTE__STRUCT_H_
