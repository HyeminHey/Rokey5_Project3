// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from qulido_robot_msgs:srv/GetBoardState.idl
// generated code does not contain a copyright notice

#ifndef QULIDO_ROBOT_MSGS__SRV__DETAIL__GET_BOARD_STATE__STRUCT_H_
#define QULIDO_ROBOT_MSGS__SRV__DETAIL__GET_BOARD_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/GetBoardState in the package qulido_robot_msgs.
typedef struct qulido_robot_msgs__srv__GetBoardState_Request
{
  uint8_t structure_needs_at_least_one_member;
} qulido_robot_msgs__srv__GetBoardState_Request;

// Struct for a sequence of qulido_robot_msgs__srv__GetBoardState_Request.
typedef struct qulido_robot_msgs__srv__GetBoardState_Request__Sequence
{
  qulido_robot_msgs__srv__GetBoardState_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} qulido_robot_msgs__srv__GetBoardState_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'board_state'
#include "qulido_robot_msgs/msg/detail/int32_row__struct.h"

/// Struct defined in srv/GetBoardState in the package qulido_robot_msgs.
typedef struct qulido_robot_msgs__srv__GetBoardState_Response
{
  qulido_robot_msgs__msg__Int32Row__Sequence board_state;
} qulido_robot_msgs__srv__GetBoardState_Response;

// Struct for a sequence of qulido_robot_msgs__srv__GetBoardState_Response.
typedef struct qulido_robot_msgs__srv__GetBoardState_Response__Sequence
{
  qulido_robot_msgs__srv__GetBoardState_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} qulido_robot_msgs__srv__GetBoardState_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // QULIDO_ROBOT_MSGS__SRV__DETAIL__GET_BOARD_STATE__STRUCT_H_
