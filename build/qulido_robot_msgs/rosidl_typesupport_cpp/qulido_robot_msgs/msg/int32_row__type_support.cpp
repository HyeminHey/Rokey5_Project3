// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from qulido_robot_msgs:msg/Int32Row.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "qulido_robot_msgs/msg/detail/int32_row__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace qulido_robot_msgs
{

namespace msg
{

namespace rosidl_typesupport_cpp
{

typedef struct _Int32Row_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Int32Row_type_support_ids_t;

static const _Int32Row_type_support_ids_t _Int32Row_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _Int32Row_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Int32Row_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Int32Row_type_support_symbol_names_t _Int32Row_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, qulido_robot_msgs, msg, Int32Row)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, qulido_robot_msgs, msg, Int32Row)),
  }
};

typedef struct _Int32Row_type_support_data_t
{
  void * data[2];
} _Int32Row_type_support_data_t;

static _Int32Row_type_support_data_t _Int32Row_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Int32Row_message_typesupport_map = {
  2,
  "qulido_robot_msgs",
  &_Int32Row_message_typesupport_ids.typesupport_identifier[0],
  &_Int32Row_message_typesupport_symbol_names.symbol_name[0],
  &_Int32Row_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Int32Row_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Int32Row_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace msg

}  // namespace qulido_robot_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<qulido_robot_msgs::msg::Int32Row>()
{
  return &::qulido_robot_msgs::msg::rosidl_typesupport_cpp::Int32Row_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, qulido_robot_msgs, msg, Int32Row)() {
  return get_message_type_support_handle<qulido_robot_msgs::msg::Int32Row>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp
