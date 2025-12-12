// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from qulido_robot_msgs:msg/MotionSequence.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "qulido_robot_msgs/msg/detail/motion_sequence__rosidl_typesupport_introspection_c.h"
#include "qulido_robot_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "qulido_robot_msgs/msg/detail/motion_sequence__functions.h"
#include "qulido_robot_msgs/msg/detail/motion_sequence__struct.h"


// Include directives for member types
// Member `sequence`
#include "qulido_robot_msgs/msg/motion_primitive.h"
// Member `sequence`
#include "qulido_robot_msgs/msg/detail/motion_primitive__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void qulido_robot_msgs__msg__MotionSequence__rosidl_typesupport_introspection_c__MotionSequence_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  qulido_robot_msgs__msg__MotionSequence__init(message_memory);
}

void qulido_robot_msgs__msg__MotionSequence__rosidl_typesupport_introspection_c__MotionSequence_fini_function(void * message_memory)
{
  qulido_robot_msgs__msg__MotionSequence__fini(message_memory);
}

size_t qulido_robot_msgs__msg__MotionSequence__rosidl_typesupport_introspection_c__size_function__MotionSequence__sequence(
  const void * untyped_member)
{
  const qulido_robot_msgs__msg__MotionPrimitive__Sequence * member =
    (const qulido_robot_msgs__msg__MotionPrimitive__Sequence *)(untyped_member);
  return member->size;
}

const void * qulido_robot_msgs__msg__MotionSequence__rosidl_typesupport_introspection_c__get_const_function__MotionSequence__sequence(
  const void * untyped_member, size_t index)
{
  const qulido_robot_msgs__msg__MotionPrimitive__Sequence * member =
    (const qulido_robot_msgs__msg__MotionPrimitive__Sequence *)(untyped_member);
  return &member->data[index];
}

void * qulido_robot_msgs__msg__MotionSequence__rosidl_typesupport_introspection_c__get_function__MotionSequence__sequence(
  void * untyped_member, size_t index)
{
  qulido_robot_msgs__msg__MotionPrimitive__Sequence * member =
    (qulido_robot_msgs__msg__MotionPrimitive__Sequence *)(untyped_member);
  return &member->data[index];
}

void qulido_robot_msgs__msg__MotionSequence__rosidl_typesupport_introspection_c__fetch_function__MotionSequence__sequence(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const qulido_robot_msgs__msg__MotionPrimitive * item =
    ((const qulido_robot_msgs__msg__MotionPrimitive *)
    qulido_robot_msgs__msg__MotionSequence__rosidl_typesupport_introspection_c__get_const_function__MotionSequence__sequence(untyped_member, index));
  qulido_robot_msgs__msg__MotionPrimitive * value =
    (qulido_robot_msgs__msg__MotionPrimitive *)(untyped_value);
  *value = *item;
}

void qulido_robot_msgs__msg__MotionSequence__rosidl_typesupport_introspection_c__assign_function__MotionSequence__sequence(
  void * untyped_member, size_t index, const void * untyped_value)
{
  qulido_robot_msgs__msg__MotionPrimitive * item =
    ((qulido_robot_msgs__msg__MotionPrimitive *)
    qulido_robot_msgs__msg__MotionSequence__rosidl_typesupport_introspection_c__get_function__MotionSequence__sequence(untyped_member, index));
  const qulido_robot_msgs__msg__MotionPrimitive * value =
    (const qulido_robot_msgs__msg__MotionPrimitive *)(untyped_value);
  *item = *value;
}

bool qulido_robot_msgs__msg__MotionSequence__rosidl_typesupport_introspection_c__resize_function__MotionSequence__sequence(
  void * untyped_member, size_t size)
{
  qulido_robot_msgs__msg__MotionPrimitive__Sequence * member =
    (qulido_robot_msgs__msg__MotionPrimitive__Sequence *)(untyped_member);
  qulido_robot_msgs__msg__MotionPrimitive__Sequence__fini(member);
  return qulido_robot_msgs__msg__MotionPrimitive__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember qulido_robot_msgs__msg__MotionSequence__rosidl_typesupport_introspection_c__MotionSequence_message_member_array[1] = {
  {
    "sequence",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(qulido_robot_msgs__msg__MotionSequence, sequence),  // bytes offset in struct
    NULL,  // default value
    qulido_robot_msgs__msg__MotionSequence__rosidl_typesupport_introspection_c__size_function__MotionSequence__sequence,  // size() function pointer
    qulido_robot_msgs__msg__MotionSequence__rosidl_typesupport_introspection_c__get_const_function__MotionSequence__sequence,  // get_const(index) function pointer
    qulido_robot_msgs__msg__MotionSequence__rosidl_typesupport_introspection_c__get_function__MotionSequence__sequence,  // get(index) function pointer
    qulido_robot_msgs__msg__MotionSequence__rosidl_typesupport_introspection_c__fetch_function__MotionSequence__sequence,  // fetch(index, &value) function pointer
    qulido_robot_msgs__msg__MotionSequence__rosidl_typesupport_introspection_c__assign_function__MotionSequence__sequence,  // assign(index, value) function pointer
    qulido_robot_msgs__msg__MotionSequence__rosidl_typesupport_introspection_c__resize_function__MotionSequence__sequence  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers qulido_robot_msgs__msg__MotionSequence__rosidl_typesupport_introspection_c__MotionSequence_message_members = {
  "qulido_robot_msgs__msg",  // message namespace
  "MotionSequence",  // message name
  1,  // number of fields
  sizeof(qulido_robot_msgs__msg__MotionSequence),
  qulido_robot_msgs__msg__MotionSequence__rosidl_typesupport_introspection_c__MotionSequence_message_member_array,  // message members
  qulido_robot_msgs__msg__MotionSequence__rosidl_typesupport_introspection_c__MotionSequence_init_function,  // function to initialize message memory (memory has to be allocated)
  qulido_robot_msgs__msg__MotionSequence__rosidl_typesupport_introspection_c__MotionSequence_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t qulido_robot_msgs__msg__MotionSequence__rosidl_typesupport_introspection_c__MotionSequence_message_type_support_handle = {
  0,
  &qulido_robot_msgs__msg__MotionSequence__rosidl_typesupport_introspection_c__MotionSequence_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_qulido_robot_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, qulido_robot_msgs, msg, MotionSequence)() {
  qulido_robot_msgs__msg__MotionSequence__rosidl_typesupport_introspection_c__MotionSequence_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, qulido_robot_msgs, msg, MotionPrimitive)();
  if (!qulido_robot_msgs__msg__MotionSequence__rosidl_typesupport_introspection_c__MotionSequence_message_type_support_handle.typesupport_identifier) {
    qulido_robot_msgs__msg__MotionSequence__rosidl_typesupport_introspection_c__MotionSequence_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &qulido_robot_msgs__msg__MotionSequence__rosidl_typesupport_introspection_c__MotionSequence_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
