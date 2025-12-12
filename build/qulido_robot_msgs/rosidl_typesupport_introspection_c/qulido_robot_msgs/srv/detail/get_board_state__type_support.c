// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from qulido_robot_msgs:srv/GetBoardState.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "qulido_robot_msgs/srv/detail/get_board_state__rosidl_typesupport_introspection_c.h"
#include "qulido_robot_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "qulido_robot_msgs/srv/detail/get_board_state__functions.h"
#include "qulido_robot_msgs/srv/detail/get_board_state__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void qulido_robot_msgs__srv__GetBoardState_Request__rosidl_typesupport_introspection_c__GetBoardState_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  qulido_robot_msgs__srv__GetBoardState_Request__init(message_memory);
}

void qulido_robot_msgs__srv__GetBoardState_Request__rosidl_typesupport_introspection_c__GetBoardState_Request_fini_function(void * message_memory)
{
  qulido_robot_msgs__srv__GetBoardState_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember qulido_robot_msgs__srv__GetBoardState_Request__rosidl_typesupport_introspection_c__GetBoardState_Request_message_member_array[1] = {
  {
    "structure_needs_at_least_one_member",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(qulido_robot_msgs__srv__GetBoardState_Request, structure_needs_at_least_one_member),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers qulido_robot_msgs__srv__GetBoardState_Request__rosidl_typesupport_introspection_c__GetBoardState_Request_message_members = {
  "qulido_robot_msgs__srv",  // message namespace
  "GetBoardState_Request",  // message name
  1,  // number of fields
  sizeof(qulido_robot_msgs__srv__GetBoardState_Request),
  qulido_robot_msgs__srv__GetBoardState_Request__rosidl_typesupport_introspection_c__GetBoardState_Request_message_member_array,  // message members
  qulido_robot_msgs__srv__GetBoardState_Request__rosidl_typesupport_introspection_c__GetBoardState_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  qulido_robot_msgs__srv__GetBoardState_Request__rosidl_typesupport_introspection_c__GetBoardState_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t qulido_robot_msgs__srv__GetBoardState_Request__rosidl_typesupport_introspection_c__GetBoardState_Request_message_type_support_handle = {
  0,
  &qulido_robot_msgs__srv__GetBoardState_Request__rosidl_typesupport_introspection_c__GetBoardState_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_qulido_robot_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, qulido_robot_msgs, srv, GetBoardState_Request)() {
  if (!qulido_robot_msgs__srv__GetBoardState_Request__rosidl_typesupport_introspection_c__GetBoardState_Request_message_type_support_handle.typesupport_identifier) {
    qulido_robot_msgs__srv__GetBoardState_Request__rosidl_typesupport_introspection_c__GetBoardState_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &qulido_robot_msgs__srv__GetBoardState_Request__rosidl_typesupport_introspection_c__GetBoardState_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "qulido_robot_msgs/srv/detail/get_board_state__rosidl_typesupport_introspection_c.h"
// already included above
// #include "qulido_robot_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "qulido_robot_msgs/srv/detail/get_board_state__functions.h"
// already included above
// #include "qulido_robot_msgs/srv/detail/get_board_state__struct.h"


// Include directives for member types
// Member `board_state`
#include "qulido_robot_msgs/msg/int32_row.h"
// Member `board_state`
#include "qulido_robot_msgs/msg/detail/int32_row__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void qulido_robot_msgs__srv__GetBoardState_Response__rosidl_typesupport_introspection_c__GetBoardState_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  qulido_robot_msgs__srv__GetBoardState_Response__init(message_memory);
}

void qulido_robot_msgs__srv__GetBoardState_Response__rosidl_typesupport_introspection_c__GetBoardState_Response_fini_function(void * message_memory)
{
  qulido_robot_msgs__srv__GetBoardState_Response__fini(message_memory);
}

size_t qulido_robot_msgs__srv__GetBoardState_Response__rosidl_typesupport_introspection_c__size_function__GetBoardState_Response__board_state(
  const void * untyped_member)
{
  const qulido_robot_msgs__msg__Int32Row__Sequence * member =
    (const qulido_robot_msgs__msg__Int32Row__Sequence *)(untyped_member);
  return member->size;
}

const void * qulido_robot_msgs__srv__GetBoardState_Response__rosidl_typesupport_introspection_c__get_const_function__GetBoardState_Response__board_state(
  const void * untyped_member, size_t index)
{
  const qulido_robot_msgs__msg__Int32Row__Sequence * member =
    (const qulido_robot_msgs__msg__Int32Row__Sequence *)(untyped_member);
  return &member->data[index];
}

void * qulido_robot_msgs__srv__GetBoardState_Response__rosidl_typesupport_introspection_c__get_function__GetBoardState_Response__board_state(
  void * untyped_member, size_t index)
{
  qulido_robot_msgs__msg__Int32Row__Sequence * member =
    (qulido_robot_msgs__msg__Int32Row__Sequence *)(untyped_member);
  return &member->data[index];
}

void qulido_robot_msgs__srv__GetBoardState_Response__rosidl_typesupport_introspection_c__fetch_function__GetBoardState_Response__board_state(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const qulido_robot_msgs__msg__Int32Row * item =
    ((const qulido_robot_msgs__msg__Int32Row *)
    qulido_robot_msgs__srv__GetBoardState_Response__rosidl_typesupport_introspection_c__get_const_function__GetBoardState_Response__board_state(untyped_member, index));
  qulido_robot_msgs__msg__Int32Row * value =
    (qulido_robot_msgs__msg__Int32Row *)(untyped_value);
  *value = *item;
}

void qulido_robot_msgs__srv__GetBoardState_Response__rosidl_typesupport_introspection_c__assign_function__GetBoardState_Response__board_state(
  void * untyped_member, size_t index, const void * untyped_value)
{
  qulido_robot_msgs__msg__Int32Row * item =
    ((qulido_robot_msgs__msg__Int32Row *)
    qulido_robot_msgs__srv__GetBoardState_Response__rosidl_typesupport_introspection_c__get_function__GetBoardState_Response__board_state(untyped_member, index));
  const qulido_robot_msgs__msg__Int32Row * value =
    (const qulido_robot_msgs__msg__Int32Row *)(untyped_value);
  *item = *value;
}

bool qulido_robot_msgs__srv__GetBoardState_Response__rosidl_typesupport_introspection_c__resize_function__GetBoardState_Response__board_state(
  void * untyped_member, size_t size)
{
  qulido_robot_msgs__msg__Int32Row__Sequence * member =
    (qulido_robot_msgs__msg__Int32Row__Sequence *)(untyped_member);
  qulido_robot_msgs__msg__Int32Row__Sequence__fini(member);
  return qulido_robot_msgs__msg__Int32Row__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember qulido_robot_msgs__srv__GetBoardState_Response__rosidl_typesupport_introspection_c__GetBoardState_Response_message_member_array[1] = {
  {
    "board_state",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(qulido_robot_msgs__srv__GetBoardState_Response, board_state),  // bytes offset in struct
    NULL,  // default value
    qulido_robot_msgs__srv__GetBoardState_Response__rosidl_typesupport_introspection_c__size_function__GetBoardState_Response__board_state,  // size() function pointer
    qulido_robot_msgs__srv__GetBoardState_Response__rosidl_typesupport_introspection_c__get_const_function__GetBoardState_Response__board_state,  // get_const(index) function pointer
    qulido_robot_msgs__srv__GetBoardState_Response__rosidl_typesupport_introspection_c__get_function__GetBoardState_Response__board_state,  // get(index) function pointer
    qulido_robot_msgs__srv__GetBoardState_Response__rosidl_typesupport_introspection_c__fetch_function__GetBoardState_Response__board_state,  // fetch(index, &value) function pointer
    qulido_robot_msgs__srv__GetBoardState_Response__rosidl_typesupport_introspection_c__assign_function__GetBoardState_Response__board_state,  // assign(index, value) function pointer
    qulido_robot_msgs__srv__GetBoardState_Response__rosidl_typesupport_introspection_c__resize_function__GetBoardState_Response__board_state  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers qulido_robot_msgs__srv__GetBoardState_Response__rosidl_typesupport_introspection_c__GetBoardState_Response_message_members = {
  "qulido_robot_msgs__srv",  // message namespace
  "GetBoardState_Response",  // message name
  1,  // number of fields
  sizeof(qulido_robot_msgs__srv__GetBoardState_Response),
  qulido_robot_msgs__srv__GetBoardState_Response__rosidl_typesupport_introspection_c__GetBoardState_Response_message_member_array,  // message members
  qulido_robot_msgs__srv__GetBoardState_Response__rosidl_typesupport_introspection_c__GetBoardState_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  qulido_robot_msgs__srv__GetBoardState_Response__rosidl_typesupport_introspection_c__GetBoardState_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t qulido_robot_msgs__srv__GetBoardState_Response__rosidl_typesupport_introspection_c__GetBoardState_Response_message_type_support_handle = {
  0,
  &qulido_robot_msgs__srv__GetBoardState_Response__rosidl_typesupport_introspection_c__GetBoardState_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_qulido_robot_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, qulido_robot_msgs, srv, GetBoardState_Response)() {
  qulido_robot_msgs__srv__GetBoardState_Response__rosidl_typesupport_introspection_c__GetBoardState_Response_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, qulido_robot_msgs, msg, Int32Row)();
  if (!qulido_robot_msgs__srv__GetBoardState_Response__rosidl_typesupport_introspection_c__GetBoardState_Response_message_type_support_handle.typesupport_identifier) {
    qulido_robot_msgs__srv__GetBoardState_Response__rosidl_typesupport_introspection_c__GetBoardState_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &qulido_robot_msgs__srv__GetBoardState_Response__rosidl_typesupport_introspection_c__GetBoardState_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "qulido_robot_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "qulido_robot_msgs/srv/detail/get_board_state__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers qulido_robot_msgs__srv__detail__get_board_state__rosidl_typesupport_introspection_c__GetBoardState_service_members = {
  "qulido_robot_msgs__srv",  // service namespace
  "GetBoardState",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // qulido_robot_msgs__srv__detail__get_board_state__rosidl_typesupport_introspection_c__GetBoardState_Request_message_type_support_handle,
  NULL  // response message
  // qulido_robot_msgs__srv__detail__get_board_state__rosidl_typesupport_introspection_c__GetBoardState_Response_message_type_support_handle
};

static rosidl_service_type_support_t qulido_robot_msgs__srv__detail__get_board_state__rosidl_typesupport_introspection_c__GetBoardState_service_type_support_handle = {
  0,
  &qulido_robot_msgs__srv__detail__get_board_state__rosidl_typesupport_introspection_c__GetBoardState_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, qulido_robot_msgs, srv, GetBoardState_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, qulido_robot_msgs, srv, GetBoardState_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_qulido_robot_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, qulido_robot_msgs, srv, GetBoardState)() {
  if (!qulido_robot_msgs__srv__detail__get_board_state__rosidl_typesupport_introspection_c__GetBoardState_service_type_support_handle.typesupport_identifier) {
    qulido_robot_msgs__srv__detail__get_board_state__rosidl_typesupport_introspection_c__GetBoardState_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)qulido_robot_msgs__srv__detail__get_board_state__rosidl_typesupport_introspection_c__GetBoardState_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, qulido_robot_msgs, srv, GetBoardState_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, qulido_robot_msgs, srv, GetBoardState_Response)()->data;
  }

  return &qulido_robot_msgs__srv__detail__get_board_state__rosidl_typesupport_introspection_c__GetBoardState_service_type_support_handle;
}
