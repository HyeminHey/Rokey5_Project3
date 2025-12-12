// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from qulido_robot_msgs:srv/AiCompute.idl
// generated code does not contain a copyright notice
#include "qulido_robot_msgs/srv/detail/ai_compute__rosidl_typesupport_fastrtps_cpp.hpp"
#include "qulido_robot_msgs/srv/detail/ai_compute__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace qulido_robot_msgs
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_qulido_robot_msgs
cdr_serialize(
  const qulido_robot_msgs::srv::AiCompute_Request & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: added
  {
    cdr << ros_message.added;
  }
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_qulido_robot_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  qulido_robot_msgs::srv::AiCompute_Request & ros_message)
{
  // Member: added
  {
    cdr >> ros_message.added;
  }

  return true;
}  // NOLINT(readability/fn_size)

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_qulido_robot_msgs
get_serialized_size(
  const qulido_robot_msgs::srv::AiCompute_Request & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: added
  {
    size_t array_size = ros_message.added.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.added[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_qulido_robot_msgs
max_serialized_size_AiCompute_Request(
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


  // Member: added
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
    using DataType = qulido_robot_msgs::srv::AiCompute_Request;
    is_plain =
      (
      offsetof(DataType, added) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _AiCompute_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const qulido_robot_msgs::srv::AiCompute_Request *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _AiCompute_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<qulido_robot_msgs::srv::AiCompute_Request *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _AiCompute_Request__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const qulido_robot_msgs::srv::AiCompute_Request *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _AiCompute_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_AiCompute_Request(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _AiCompute_Request__callbacks = {
  "qulido_robot_msgs::srv",
  "AiCompute_Request",
  _AiCompute_Request__cdr_serialize,
  _AiCompute_Request__cdr_deserialize,
  _AiCompute_Request__get_serialized_size,
  _AiCompute_Request__max_serialized_size
};

static rosidl_message_type_support_t _AiCompute_Request__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_AiCompute_Request__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace qulido_robot_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_qulido_robot_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<qulido_robot_msgs::srv::AiCompute_Request>()
{
  return &qulido_robot_msgs::srv::typesupport_fastrtps_cpp::_AiCompute_Request__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, qulido_robot_msgs, srv, AiCompute_Request)() {
  return &qulido_robot_msgs::srv::typesupport_fastrtps_cpp::_AiCompute_Request__handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include <limits>
// already included above
// #include <stdexcept>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
// already included above
// #include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace qulido_robot_msgs
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_qulido_robot_msgs
cdr_serialize(
  const qulido_robot_msgs::srv::AiCompute_Response & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: ai_cmd
  {
    cdr << ros_message.ai_cmd;
  }
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_qulido_robot_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  qulido_robot_msgs::srv::AiCompute_Response & ros_message)
{
  // Member: ai_cmd
  {
    cdr >> ros_message.ai_cmd;
  }

  return true;
}  // NOLINT(readability/fn_size)

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_qulido_robot_msgs
get_serialized_size(
  const qulido_robot_msgs::srv::AiCompute_Response & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: ai_cmd
  {
    size_t array_size = ros_message.ai_cmd.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.ai_cmd[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_qulido_robot_msgs
max_serialized_size_AiCompute_Response(
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


  // Member: ai_cmd
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
    using DataType = qulido_robot_msgs::srv::AiCompute_Response;
    is_plain =
      (
      offsetof(DataType, ai_cmd) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _AiCompute_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const qulido_robot_msgs::srv::AiCompute_Response *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _AiCompute_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<qulido_robot_msgs::srv::AiCompute_Response *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _AiCompute_Response__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const qulido_robot_msgs::srv::AiCompute_Response *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _AiCompute_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_AiCompute_Response(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _AiCompute_Response__callbacks = {
  "qulido_robot_msgs::srv",
  "AiCompute_Response",
  _AiCompute_Response__cdr_serialize,
  _AiCompute_Response__cdr_deserialize,
  _AiCompute_Response__get_serialized_size,
  _AiCompute_Response__max_serialized_size
};

static rosidl_message_type_support_t _AiCompute_Response__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_AiCompute_Response__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace qulido_robot_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_qulido_robot_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<qulido_robot_msgs::srv::AiCompute_Response>()
{
  return &qulido_robot_msgs::srv::typesupport_fastrtps_cpp::_AiCompute_Response__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, qulido_robot_msgs, srv, AiCompute_Response)() {
  return &qulido_robot_msgs::srv::typesupport_fastrtps_cpp::_AiCompute_Response__handle;
}

#ifdef __cplusplus
}
#endif

#include "rmw/error_handling.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support_decl.hpp"

namespace qulido_robot_msgs
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

static service_type_support_callbacks_t _AiCompute__callbacks = {
  "qulido_robot_msgs::srv",
  "AiCompute",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, qulido_robot_msgs, srv, AiCompute_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, qulido_robot_msgs, srv, AiCompute_Response)(),
};

static rosidl_service_type_support_t _AiCompute__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_AiCompute__callbacks,
  get_service_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace qulido_robot_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_qulido_robot_msgs
const rosidl_service_type_support_t *
get_service_type_support_handle<qulido_robot_msgs::srv::AiCompute>()
{
  return &qulido_robot_msgs::srv::typesupport_fastrtps_cpp::_AiCompute__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, qulido_robot_msgs, srv, AiCompute)() {
  return &qulido_robot_msgs::srv::typesupport_fastrtps_cpp::_AiCompute__handle;
}

#ifdef __cplusplus
}
#endif
