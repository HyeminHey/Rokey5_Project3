// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from qulido_robot_msgs:msg/MotionSequence.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "qulido_robot_msgs/msg/detail/motion_sequence__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace qulido_robot_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void MotionSequence_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) qulido_robot_msgs::msg::MotionSequence(_init);
}

void MotionSequence_fini_function(void * message_memory)
{
  auto typed_message = static_cast<qulido_robot_msgs::msg::MotionSequence *>(message_memory);
  typed_message->~MotionSequence();
}

size_t size_function__MotionSequence__sequence(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<qulido_robot_msgs::msg::MotionPrimitive> *>(untyped_member);
  return member->size();
}

const void * get_const_function__MotionSequence__sequence(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<qulido_robot_msgs::msg::MotionPrimitive> *>(untyped_member);
  return &member[index];
}

void * get_function__MotionSequence__sequence(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<qulido_robot_msgs::msg::MotionPrimitive> *>(untyped_member);
  return &member[index];
}

void fetch_function__MotionSequence__sequence(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const qulido_robot_msgs::msg::MotionPrimitive *>(
    get_const_function__MotionSequence__sequence(untyped_member, index));
  auto & value = *reinterpret_cast<qulido_robot_msgs::msg::MotionPrimitive *>(untyped_value);
  value = item;
}

void assign_function__MotionSequence__sequence(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<qulido_robot_msgs::msg::MotionPrimitive *>(
    get_function__MotionSequence__sequence(untyped_member, index));
  const auto & value = *reinterpret_cast<const qulido_robot_msgs::msg::MotionPrimitive *>(untyped_value);
  item = value;
}

void resize_function__MotionSequence__sequence(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<qulido_robot_msgs::msg::MotionPrimitive> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember MotionSequence_message_member_array[1] = {
  {
    "sequence",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<qulido_robot_msgs::msg::MotionPrimitive>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(qulido_robot_msgs::msg::MotionSequence, sequence),  // bytes offset in struct
    nullptr,  // default value
    size_function__MotionSequence__sequence,  // size() function pointer
    get_const_function__MotionSequence__sequence,  // get_const(index) function pointer
    get_function__MotionSequence__sequence,  // get(index) function pointer
    fetch_function__MotionSequence__sequence,  // fetch(index, &value) function pointer
    assign_function__MotionSequence__sequence,  // assign(index, value) function pointer
    resize_function__MotionSequence__sequence  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers MotionSequence_message_members = {
  "qulido_robot_msgs::msg",  // message namespace
  "MotionSequence",  // message name
  1,  // number of fields
  sizeof(qulido_robot_msgs::msg::MotionSequence),
  MotionSequence_message_member_array,  // message members
  MotionSequence_init_function,  // function to initialize message memory (memory has to be allocated)
  MotionSequence_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t MotionSequence_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &MotionSequence_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace qulido_robot_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<qulido_robot_msgs::msg::MotionSequence>()
{
  return &::qulido_robot_msgs::msg::rosidl_typesupport_introspection_cpp::MotionSequence_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, qulido_robot_msgs, msg, MotionSequence)() {
  return &::qulido_robot_msgs::msg::rosidl_typesupport_introspection_cpp::MotionSequence_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
