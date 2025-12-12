// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from qulido_robot_msgs:msg/MotionPrimitive.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "qulido_robot_msgs/msg/detail/motion_primitive__rosidl_typesupport_introspection_c.h"
#include "qulido_robot_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "qulido_robot_msgs/msg/detail/motion_primitive__functions.h"
#include "qulido_robot_msgs/msg/detail/motion_primitive__struct.h"


// Include directives for member types
// Member `primitive`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void qulido_robot_msgs__msg__MotionPrimitive__rosidl_typesupport_introspection_c__MotionPrimitive_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  qulido_robot_msgs__msg__MotionPrimitive__init(message_memory);
}

void qulido_robot_msgs__msg__MotionPrimitive__rosidl_typesupport_introspection_c__MotionPrimitive_fini_function(void * message_memory)
{
  qulido_robot_msgs__msg__MotionPrimitive__fini(message_memory);
}

size_t qulido_robot_msgs__msg__MotionPrimitive__rosidl_typesupport_introspection_c__size_function__MotionPrimitive__target_pose(
  const void * untyped_member)
{
  (void)untyped_member;
  return 6;
}

const void * qulido_robot_msgs__msg__MotionPrimitive__rosidl_typesupport_introspection_c__get_const_function__MotionPrimitive__target_pose(
  const void * untyped_member, size_t index)
{
  const double * member =
    (const double *)(untyped_member);
  return &member[index];
}

void * qulido_robot_msgs__msg__MotionPrimitive__rosidl_typesupport_introspection_c__get_function__MotionPrimitive__target_pose(
  void * untyped_member, size_t index)
{
  double * member =
    (double *)(untyped_member);
  return &member[index];
}

void qulido_robot_msgs__msg__MotionPrimitive__rosidl_typesupport_introspection_c__fetch_function__MotionPrimitive__target_pose(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    qulido_robot_msgs__msg__MotionPrimitive__rosidl_typesupport_introspection_c__get_const_function__MotionPrimitive__target_pose(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void qulido_robot_msgs__msg__MotionPrimitive__rosidl_typesupport_introspection_c__assign_function__MotionPrimitive__target_pose(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    qulido_robot_msgs__msg__MotionPrimitive__rosidl_typesupport_introspection_c__get_function__MotionPrimitive__target_pose(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

static rosidl_typesupport_introspection_c__MessageMember qulido_robot_msgs__msg__MotionPrimitive__rosidl_typesupport_introspection_c__MotionPrimitive_message_member_array[3] = {
  {
    "primitive",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(qulido_robot_msgs__msg__MotionPrimitive, primitive),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "target_pose",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    6,  // array size
    false,  // is upper bound
    offsetof(qulido_robot_msgs__msg__MotionPrimitive, target_pose),  // bytes offset in struct
    NULL,  // default value
    qulido_robot_msgs__msg__MotionPrimitive__rosidl_typesupport_introspection_c__size_function__MotionPrimitive__target_pose,  // size() function pointer
    qulido_robot_msgs__msg__MotionPrimitive__rosidl_typesupport_introspection_c__get_const_function__MotionPrimitive__target_pose,  // get_const(index) function pointer
    qulido_robot_msgs__msg__MotionPrimitive__rosidl_typesupport_introspection_c__get_function__MotionPrimitive__target_pose,  // get(index) function pointer
    qulido_robot_msgs__msg__MotionPrimitive__rosidl_typesupport_introspection_c__fetch_function__MotionPrimitive__target_pose,  // fetch(index, &value) function pointer
    qulido_robot_msgs__msg__MotionPrimitive__rosidl_typesupport_introspection_c__assign_function__MotionPrimitive__target_pose,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "gripper_width",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(qulido_robot_msgs__msg__MotionPrimitive, gripper_width),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers qulido_robot_msgs__msg__MotionPrimitive__rosidl_typesupport_introspection_c__MotionPrimitive_message_members = {
  "qulido_robot_msgs__msg",  // message namespace
  "MotionPrimitive",  // message name
  3,  // number of fields
  sizeof(qulido_robot_msgs__msg__MotionPrimitive),
  qulido_robot_msgs__msg__MotionPrimitive__rosidl_typesupport_introspection_c__MotionPrimitive_message_member_array,  // message members
  qulido_robot_msgs__msg__MotionPrimitive__rosidl_typesupport_introspection_c__MotionPrimitive_init_function,  // function to initialize message memory (memory has to be allocated)
  qulido_robot_msgs__msg__MotionPrimitive__rosidl_typesupport_introspection_c__MotionPrimitive_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t qulido_robot_msgs__msg__MotionPrimitive__rosidl_typesupport_introspection_c__MotionPrimitive_message_type_support_handle = {
  0,
  &qulido_robot_msgs__msg__MotionPrimitive__rosidl_typesupport_introspection_c__MotionPrimitive_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_qulido_robot_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, qulido_robot_msgs, msg, MotionPrimitive)() {
  if (!qulido_robot_msgs__msg__MotionPrimitive__rosidl_typesupport_introspection_c__MotionPrimitive_message_type_support_handle.typesupport_identifier) {
    qulido_robot_msgs__msg__MotionPrimitive__rosidl_typesupport_introspection_c__MotionPrimitive_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &qulido_robot_msgs__msg__MotionPrimitive__rosidl_typesupport_introspection_c__MotionPrimitive_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
