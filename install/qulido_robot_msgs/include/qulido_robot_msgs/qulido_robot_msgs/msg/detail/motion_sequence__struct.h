// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from qulido_robot_msgs:msg/MotionSequence.idl
// generated code does not contain a copyright notice

#ifndef QULIDO_ROBOT_MSGS__MSG__DETAIL__MOTION_SEQUENCE__STRUCT_H_
#define QULIDO_ROBOT_MSGS__MSG__DETAIL__MOTION_SEQUENCE__STRUCT_H_

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
#include "qulido_robot_msgs/msg/detail/motion_primitive__struct.h"

/// Struct defined in msg/MotionSequence in the package qulido_robot_msgs.
typedef struct qulido_robot_msgs__msg__MotionSequence
{
  qulido_robot_msgs__msg__MotionPrimitive__Sequence sequence;
} qulido_robot_msgs__msg__MotionSequence;

// Struct for a sequence of qulido_robot_msgs__msg__MotionSequence.
typedef struct qulido_robot_msgs__msg__MotionSequence__Sequence
{
  qulido_robot_msgs__msg__MotionSequence * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} qulido_robot_msgs__msg__MotionSequence__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // QULIDO_ROBOT_MSGS__MSG__DETAIL__MOTION_SEQUENCE__STRUCT_H_
