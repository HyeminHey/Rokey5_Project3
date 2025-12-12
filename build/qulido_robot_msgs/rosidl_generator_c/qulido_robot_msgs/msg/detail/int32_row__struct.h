// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from qulido_robot_msgs:msg/Int32Row.idl
// generated code does not contain a copyright notice

#ifndef QULIDO_ROBOT_MSGS__MSG__DETAIL__INT32_ROW__STRUCT_H_
#define QULIDO_ROBOT_MSGS__MSG__DETAIL__INT32_ROW__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'data'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/Int32Row in the package qulido_robot_msgs.
typedef struct qulido_robot_msgs__msg__Int32Row
{
  rosidl_runtime_c__int32__Sequence data;
} qulido_robot_msgs__msg__Int32Row;

// Struct for a sequence of qulido_robot_msgs__msg__Int32Row.
typedef struct qulido_robot_msgs__msg__Int32Row__Sequence
{
  qulido_robot_msgs__msg__Int32Row * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} qulido_robot_msgs__msg__Int32Row__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // QULIDO_ROBOT_MSGS__MSG__DETAIL__INT32_ROW__STRUCT_H_
