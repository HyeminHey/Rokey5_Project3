// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from qulido_robot_msgs:msg/MotionPrimitive.idl
// generated code does not contain a copyright notice

#ifndef QULIDO_ROBOT_MSGS__MSG__DETAIL__MOTION_PRIMITIVE__STRUCT_H_
#define QULIDO_ROBOT_MSGS__MSG__DETAIL__MOTION_PRIMITIVE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'primitive'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/MotionPrimitive in the package qulido_robot_msgs.
typedef struct qulido_robot_msgs__msg__MotionPrimitive
{
  /// "move_pose" | "operate_gripper" | "force_control"
  rosidl_runtime_c__String primitive;
  /// [x, y, z, roll, pitch, yaw]
  double target_pose[6];
  int32_t gripper_width;
} qulido_robot_msgs__msg__MotionPrimitive;

// Struct for a sequence of qulido_robot_msgs__msg__MotionPrimitive.
typedef struct qulido_robot_msgs__msg__MotionPrimitive__Sequence
{
  qulido_robot_msgs__msg__MotionPrimitive * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} qulido_robot_msgs__msg__MotionPrimitive__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // QULIDO_ROBOT_MSGS__MSG__DETAIL__MOTION_PRIMITIVE__STRUCT_H_
