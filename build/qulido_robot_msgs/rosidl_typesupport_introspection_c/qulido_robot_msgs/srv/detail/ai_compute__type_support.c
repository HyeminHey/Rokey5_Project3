// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from qulido_robot_msgs:srv/AiCompute.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "qulido_robot_msgs/srv/detail/ai_compute__rosidl_typesupport_introspection_c.h"
#include "qulido_robot_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "qulido_robot_msgs/srv/detail/ai_compute__functions.h"
#include "qulido_robot_msgs/srv/detail/ai_compute__struct.h"


// Include directives for member types
// Member `added`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void qulido_robot_msgs__srv__AiCompute_Request__rosidl_typesupport_introspection_c__AiCompute_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  qulido_robot_msgs__srv__AiCompute_Request__init(message_memory);
}

void qulido_robot_msgs__srv__AiCompute_Request__rosidl_typesupport_introspection_c__AiCompute_Request_fini_function(void * message_memory)
{
  qulido_robot_msgs__srv__AiCompute_Request__fini(message_memory);
}

size_t qulido_robot_msgs__srv__AiCompute_Request__rosidl_typesupport_introspection_c__size_function__AiCompute_Request__added(
  const void * untyped_member)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return member->size;
}

const void * qulido_robot_msgs__srv__AiCompute_Request__rosidl_typesupport_introspection_c__get_const_function__AiCompute_Request__added(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void * qulido_robot_msgs__srv__AiCompute_Request__rosidl_typesupport_introspection_c__get_function__AiCompute_Request__added(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void qulido_robot_msgs__srv__AiCompute_Request__rosidl_typesupport_introspection_c__fetch_function__AiCompute_Request__added(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int32_t * item =
    ((const int32_t *)
    qulido_robot_msgs__srv__AiCompute_Request__rosidl_typesupport_introspection_c__get_const_function__AiCompute_Request__added(untyped_member, index));
  int32_t * value =
    (int32_t *)(untyped_value);
  *value = *item;
}

void qulido_robot_msgs__srv__AiCompute_Request__rosidl_typesupport_introspection_c__assign_function__AiCompute_Request__added(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int32_t * item =
    ((int32_t *)
    qulido_robot_msgs__srv__AiCompute_Request__rosidl_typesupport_introspection_c__get_function__AiCompute_Request__added(untyped_member, index));
  const int32_t * value =
    (const int32_t *)(untyped_value);
  *item = *value;
}

bool qulido_robot_msgs__srv__AiCompute_Request__rosidl_typesupport_introspection_c__resize_function__AiCompute_Request__added(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  rosidl_runtime_c__int32__Sequence__fini(member);
  return rosidl_runtime_c__int32__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember qulido_robot_msgs__srv__AiCompute_Request__rosidl_typesupport_introspection_c__AiCompute_Request_message_member_array[1] = {
  {
    "added",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(qulido_robot_msgs__srv__AiCompute_Request, added),  // bytes offset in struct
    NULL,  // default value
    qulido_robot_msgs__srv__AiCompute_Request__rosidl_typesupport_introspection_c__size_function__AiCompute_Request__added,  // size() function pointer
    qulido_robot_msgs__srv__AiCompute_Request__rosidl_typesupport_introspection_c__get_const_function__AiCompute_Request__added,  // get_const(index) function pointer
    qulido_robot_msgs__srv__AiCompute_Request__rosidl_typesupport_introspection_c__get_function__AiCompute_Request__added,  // get(index) function pointer
    qulido_robot_msgs__srv__AiCompute_Request__rosidl_typesupport_introspection_c__fetch_function__AiCompute_Request__added,  // fetch(index, &value) function pointer
    qulido_robot_msgs__srv__AiCompute_Request__rosidl_typesupport_introspection_c__assign_function__AiCompute_Request__added,  // assign(index, value) function pointer
    qulido_robot_msgs__srv__AiCompute_Request__rosidl_typesupport_introspection_c__resize_function__AiCompute_Request__added  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers qulido_robot_msgs__srv__AiCompute_Request__rosidl_typesupport_introspection_c__AiCompute_Request_message_members = {
  "qulido_robot_msgs__srv",  // message namespace
  "AiCompute_Request",  // message name
  1,  // number of fields
  sizeof(qulido_robot_msgs__srv__AiCompute_Request),
  qulido_robot_msgs__srv__AiCompute_Request__rosidl_typesupport_introspection_c__AiCompute_Request_message_member_array,  // message members
  qulido_robot_msgs__srv__AiCompute_Request__rosidl_typesupport_introspection_c__AiCompute_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  qulido_robot_msgs__srv__AiCompute_Request__rosidl_typesupport_introspection_c__AiCompute_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t qulido_robot_msgs__srv__AiCompute_Request__rosidl_typesupport_introspection_c__AiCompute_Request_message_type_support_handle = {
  0,
  &qulido_robot_msgs__srv__AiCompute_Request__rosidl_typesupport_introspection_c__AiCompute_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_qulido_robot_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, qulido_robot_msgs, srv, AiCompute_Request)() {
  if (!qulido_robot_msgs__srv__AiCompute_Request__rosidl_typesupport_introspection_c__AiCompute_Request_message_type_support_handle.typesupport_identifier) {
    qulido_robot_msgs__srv__AiCompute_Request__rosidl_typesupport_introspection_c__AiCompute_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &qulido_robot_msgs__srv__AiCompute_Request__rosidl_typesupport_introspection_c__AiCompute_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "qulido_robot_msgs/srv/detail/ai_compute__rosidl_typesupport_introspection_c.h"
// already included above
// #include "qulido_robot_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "qulido_robot_msgs/srv/detail/ai_compute__functions.h"
// already included above
// #include "qulido_robot_msgs/srv/detail/ai_compute__struct.h"


// Include directives for member types
// Member `ai_cmd`
// already included above
// #include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void qulido_robot_msgs__srv__AiCompute_Response__rosidl_typesupport_introspection_c__AiCompute_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  qulido_robot_msgs__srv__AiCompute_Response__init(message_memory);
}

void qulido_robot_msgs__srv__AiCompute_Response__rosidl_typesupport_introspection_c__AiCompute_Response_fini_function(void * message_memory)
{
  qulido_robot_msgs__srv__AiCompute_Response__fini(message_memory);
}

size_t qulido_robot_msgs__srv__AiCompute_Response__rosidl_typesupport_introspection_c__size_function__AiCompute_Response__ai_cmd(
  const void * untyped_member)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return member->size;
}

const void * qulido_robot_msgs__srv__AiCompute_Response__rosidl_typesupport_introspection_c__get_const_function__AiCompute_Response__ai_cmd(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void * qulido_robot_msgs__srv__AiCompute_Response__rosidl_typesupport_introspection_c__get_function__AiCompute_Response__ai_cmd(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void qulido_robot_msgs__srv__AiCompute_Response__rosidl_typesupport_introspection_c__fetch_function__AiCompute_Response__ai_cmd(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int32_t * item =
    ((const int32_t *)
    qulido_robot_msgs__srv__AiCompute_Response__rosidl_typesupport_introspection_c__get_const_function__AiCompute_Response__ai_cmd(untyped_member, index));
  int32_t * value =
    (int32_t *)(untyped_value);
  *value = *item;
}

void qulido_robot_msgs__srv__AiCompute_Response__rosidl_typesupport_introspection_c__assign_function__AiCompute_Response__ai_cmd(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int32_t * item =
    ((int32_t *)
    qulido_robot_msgs__srv__AiCompute_Response__rosidl_typesupport_introspection_c__get_function__AiCompute_Response__ai_cmd(untyped_member, index));
  const int32_t * value =
    (const int32_t *)(untyped_value);
  *item = *value;
}

bool qulido_robot_msgs__srv__AiCompute_Response__rosidl_typesupport_introspection_c__resize_function__AiCompute_Response__ai_cmd(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  rosidl_runtime_c__int32__Sequence__fini(member);
  return rosidl_runtime_c__int32__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember qulido_robot_msgs__srv__AiCompute_Response__rosidl_typesupport_introspection_c__AiCompute_Response_message_member_array[1] = {
  {
    "ai_cmd",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(qulido_robot_msgs__srv__AiCompute_Response, ai_cmd),  // bytes offset in struct
    NULL,  // default value
    qulido_robot_msgs__srv__AiCompute_Response__rosidl_typesupport_introspection_c__size_function__AiCompute_Response__ai_cmd,  // size() function pointer
    qulido_robot_msgs__srv__AiCompute_Response__rosidl_typesupport_introspection_c__get_const_function__AiCompute_Response__ai_cmd,  // get_const(index) function pointer
    qulido_robot_msgs__srv__AiCompute_Response__rosidl_typesupport_introspection_c__get_function__AiCompute_Response__ai_cmd,  // get(index) function pointer
    qulido_robot_msgs__srv__AiCompute_Response__rosidl_typesupport_introspection_c__fetch_function__AiCompute_Response__ai_cmd,  // fetch(index, &value) function pointer
    qulido_robot_msgs__srv__AiCompute_Response__rosidl_typesupport_introspection_c__assign_function__AiCompute_Response__ai_cmd,  // assign(index, value) function pointer
    qulido_robot_msgs__srv__AiCompute_Response__rosidl_typesupport_introspection_c__resize_function__AiCompute_Response__ai_cmd  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers qulido_robot_msgs__srv__AiCompute_Response__rosidl_typesupport_introspection_c__AiCompute_Response_message_members = {
  "qulido_robot_msgs__srv",  // message namespace
  "AiCompute_Response",  // message name
  1,  // number of fields
  sizeof(qulido_robot_msgs__srv__AiCompute_Response),
  qulido_robot_msgs__srv__AiCompute_Response__rosidl_typesupport_introspection_c__AiCompute_Response_message_member_array,  // message members
  qulido_robot_msgs__srv__AiCompute_Response__rosidl_typesupport_introspection_c__AiCompute_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  qulido_robot_msgs__srv__AiCompute_Response__rosidl_typesupport_introspection_c__AiCompute_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t qulido_robot_msgs__srv__AiCompute_Response__rosidl_typesupport_introspection_c__AiCompute_Response_message_type_support_handle = {
  0,
  &qulido_robot_msgs__srv__AiCompute_Response__rosidl_typesupport_introspection_c__AiCompute_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_qulido_robot_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, qulido_robot_msgs, srv, AiCompute_Response)() {
  if (!qulido_robot_msgs__srv__AiCompute_Response__rosidl_typesupport_introspection_c__AiCompute_Response_message_type_support_handle.typesupport_identifier) {
    qulido_robot_msgs__srv__AiCompute_Response__rosidl_typesupport_introspection_c__AiCompute_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &qulido_robot_msgs__srv__AiCompute_Response__rosidl_typesupport_introspection_c__AiCompute_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "qulido_robot_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "qulido_robot_msgs/srv/detail/ai_compute__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers qulido_robot_msgs__srv__detail__ai_compute__rosidl_typesupport_introspection_c__AiCompute_service_members = {
  "qulido_robot_msgs__srv",  // service namespace
  "AiCompute",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // qulido_robot_msgs__srv__detail__ai_compute__rosidl_typesupport_introspection_c__AiCompute_Request_message_type_support_handle,
  NULL  // response message
  // qulido_robot_msgs__srv__detail__ai_compute__rosidl_typesupport_introspection_c__AiCompute_Response_message_type_support_handle
};

static rosidl_service_type_support_t qulido_robot_msgs__srv__detail__ai_compute__rosidl_typesupport_introspection_c__AiCompute_service_type_support_handle = {
  0,
  &qulido_robot_msgs__srv__detail__ai_compute__rosidl_typesupport_introspection_c__AiCompute_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, qulido_robot_msgs, srv, AiCompute_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, qulido_robot_msgs, srv, AiCompute_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_qulido_robot_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, qulido_robot_msgs, srv, AiCompute)() {
  if (!qulido_robot_msgs__srv__detail__ai_compute__rosidl_typesupport_introspection_c__AiCompute_service_type_support_handle.typesupport_identifier) {
    qulido_robot_msgs__srv__detail__ai_compute__rosidl_typesupport_introspection_c__AiCompute_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)qulido_robot_msgs__srv__detail__ai_compute__rosidl_typesupport_introspection_c__AiCompute_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, qulido_robot_msgs, srv, AiCompute_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, qulido_robot_msgs, srv, AiCompute_Response)()->data;
  }

  return &qulido_robot_msgs__srv__detail__ai_compute__rosidl_typesupport_introspection_c__AiCompute_service_type_support_handle;
}
