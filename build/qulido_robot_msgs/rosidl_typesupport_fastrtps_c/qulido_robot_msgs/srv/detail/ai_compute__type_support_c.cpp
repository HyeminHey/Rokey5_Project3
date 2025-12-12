// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from qulido_robot_msgs:srv/AiCompute.idl
// generated code does not contain a copyright notice
#include "qulido_robot_msgs/srv/detail/ai_compute__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "qulido_robot_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "qulido_robot_msgs/srv/detail/ai_compute__struct.h"
#include "qulido_robot_msgs/srv/detail/ai_compute__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/primitives_sequence.h"  // added
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // added

// forward declare type support functions


using _AiCompute_Request__ros_msg_type = qulido_robot_msgs__srv__AiCompute_Request;

static bool _AiCompute_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _AiCompute_Request__ros_msg_type * ros_message = static_cast<const _AiCompute_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: added
  {
    size_t size = ros_message->added.size;
    auto array_ptr = ros_message->added.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  return true;
}

static bool _AiCompute_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _AiCompute_Request__ros_msg_type * ros_message = static_cast<_AiCompute_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: added
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);

    // Check there are at least 'size' remaining bytes in the CDR stream before resizing
    auto old_state = cdr.getState();
    bool correct_size = cdr.jump(size);
    cdr.setState(old_state);
    if (!correct_size) {
      fprintf(stderr, "sequence size exceeds remaining buffer\n");
      return false;
    }

    if (ros_message->added.data) {
      rosidl_runtime_c__int32__Sequence__fini(&ros_message->added);
    }
    if (!rosidl_runtime_c__int32__Sequence__init(&ros_message->added, size)) {
      fprintf(stderr, "failed to create array for field 'added'");
      return false;
    }
    auto array_ptr = ros_message->added.data;
    cdr.deserializeArray(array_ptr, size);
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_qulido_robot_msgs
size_t get_serialized_size_qulido_robot_msgs__srv__AiCompute_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _AiCompute_Request__ros_msg_type * ros_message = static_cast<const _AiCompute_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name added
  {
    size_t array_size = ros_message->added.size;
    auto array_ptr = ros_message->added.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _AiCompute_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_qulido_robot_msgs__srv__AiCompute_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_qulido_robot_msgs
size_t max_serialized_size_qulido_robot_msgs__srv__AiCompute_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: added
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = qulido_robot_msgs__srv__AiCompute_Request;
    is_plain =
      (
      offsetof(DataType, added) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _AiCompute_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_qulido_robot_msgs__srv__AiCompute_Request(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_AiCompute_Request = {
  "qulido_robot_msgs::srv",
  "AiCompute_Request",
  _AiCompute_Request__cdr_serialize,
  _AiCompute_Request__cdr_deserialize,
  _AiCompute_Request__get_serialized_size,
  _AiCompute_Request__max_serialized_size
};

static rosidl_message_type_support_t _AiCompute_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_AiCompute_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, qulido_robot_msgs, srv, AiCompute_Request)() {
  return &_AiCompute_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "qulido_robot_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "qulido_robot_msgs/srv/detail/ai_compute__struct.h"
// already included above
// #include "qulido_robot_msgs/srv/detail/ai_compute__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

// already included above
// #include "rosidl_runtime_c/primitives_sequence.h"  // ai_cmd
// already included above
// #include "rosidl_runtime_c/primitives_sequence_functions.h"  // ai_cmd

// forward declare type support functions


using _AiCompute_Response__ros_msg_type = qulido_robot_msgs__srv__AiCompute_Response;

static bool _AiCompute_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _AiCompute_Response__ros_msg_type * ros_message = static_cast<const _AiCompute_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: ai_cmd
  {
    size_t size = ros_message->ai_cmd.size;
    auto array_ptr = ros_message->ai_cmd.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  return true;
}

static bool _AiCompute_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _AiCompute_Response__ros_msg_type * ros_message = static_cast<_AiCompute_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: ai_cmd
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);

    // Check there are at least 'size' remaining bytes in the CDR stream before resizing
    auto old_state = cdr.getState();
    bool correct_size = cdr.jump(size);
    cdr.setState(old_state);
    if (!correct_size) {
      fprintf(stderr, "sequence size exceeds remaining buffer\n");
      return false;
    }

    if (ros_message->ai_cmd.data) {
      rosidl_runtime_c__int32__Sequence__fini(&ros_message->ai_cmd);
    }
    if (!rosidl_runtime_c__int32__Sequence__init(&ros_message->ai_cmd, size)) {
      fprintf(stderr, "failed to create array for field 'ai_cmd'");
      return false;
    }
    auto array_ptr = ros_message->ai_cmd.data;
    cdr.deserializeArray(array_ptr, size);
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_qulido_robot_msgs
size_t get_serialized_size_qulido_robot_msgs__srv__AiCompute_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _AiCompute_Response__ros_msg_type * ros_message = static_cast<const _AiCompute_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name ai_cmd
  {
    size_t array_size = ros_message->ai_cmd.size;
    auto array_ptr = ros_message->ai_cmd.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _AiCompute_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_qulido_robot_msgs__srv__AiCompute_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_qulido_robot_msgs
size_t max_serialized_size_qulido_robot_msgs__srv__AiCompute_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: ai_cmd
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = qulido_robot_msgs__srv__AiCompute_Response;
    is_plain =
      (
      offsetof(DataType, ai_cmd) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _AiCompute_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_qulido_robot_msgs__srv__AiCompute_Response(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_AiCompute_Response = {
  "qulido_robot_msgs::srv",
  "AiCompute_Response",
  _AiCompute_Response__cdr_serialize,
  _AiCompute_Response__cdr_deserialize,
  _AiCompute_Response__get_serialized_size,
  _AiCompute_Response__max_serialized_size
};

static rosidl_message_type_support_t _AiCompute_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_AiCompute_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, qulido_robot_msgs, srv, AiCompute_Response)() {
  return &_AiCompute_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "qulido_robot_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "qulido_robot_msgs/srv/ai_compute.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t AiCompute__callbacks = {
  "qulido_robot_msgs::srv",
  "AiCompute",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, qulido_robot_msgs, srv, AiCompute_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, qulido_robot_msgs, srv, AiCompute_Response)(),
};

static rosidl_service_type_support_t AiCompute__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &AiCompute__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, qulido_robot_msgs, srv, AiCompute)() {
  return &AiCompute__handle;
}

#if defined(__cplusplus)
}
#endif
