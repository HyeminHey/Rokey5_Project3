// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from qulido_robot_msgs:srv/AiCompute.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "qulido_robot_msgs/srv/detail/ai_compute__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace qulido_robot_msgs
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void AiCompute_Request_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) qulido_robot_msgs::srv::AiCompute_Request(_init);
}

void AiCompute_Request_fini_function(void * message_memory)
{
  auto typed_message = static_cast<qulido_robot_msgs::srv::AiCompute_Request *>(message_memory);
  typed_message->~AiCompute_Request();
}

size_t size_function__AiCompute_Request__added(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<int32_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__AiCompute_Request__added(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<int32_t> *>(untyped_member);
  return &member[index];
}

void * get_function__AiCompute_Request__added(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<int32_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__AiCompute_Request__added(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const int32_t *>(
    get_const_function__AiCompute_Request__added(untyped_member, index));
  auto & value = *reinterpret_cast<int32_t *>(untyped_value);
  value = item;
}

void assign_function__AiCompute_Request__added(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<int32_t *>(
    get_function__AiCompute_Request__added(untyped_member, index));
  const auto & value = *reinterpret_cast<const int32_t *>(untyped_value);
  item = value;
}

void resize_function__AiCompute_Request__added(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<int32_t> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember AiCompute_Request_message_member_array[1] = {
  {
    "added",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(qulido_robot_msgs::srv::AiCompute_Request, added),  // bytes offset in struct
    nullptr,  // default value
    size_function__AiCompute_Request__added,  // size() function pointer
    get_const_function__AiCompute_Request__added,  // get_const(index) function pointer
    get_function__AiCompute_Request__added,  // get(index) function pointer
    fetch_function__AiCompute_Request__added,  // fetch(index, &value) function pointer
    assign_function__AiCompute_Request__added,  // assign(index, value) function pointer
    resize_function__AiCompute_Request__added  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers AiCompute_Request_message_members = {
  "qulido_robot_msgs::srv",  // message namespace
  "AiCompute_Request",  // message name
  1,  // number of fields
  sizeof(qulido_robot_msgs::srv::AiCompute_Request),
  AiCompute_Request_message_member_array,  // message members
  AiCompute_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  AiCompute_Request_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t AiCompute_Request_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &AiCompute_Request_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace qulido_robot_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<qulido_robot_msgs::srv::AiCompute_Request>()
{
  return &::qulido_robot_msgs::srv::rosidl_typesupport_introspection_cpp::AiCompute_Request_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, qulido_robot_msgs, srv, AiCompute_Request)() {
  return &::qulido_robot_msgs::srv::rosidl_typesupport_introspection_cpp::AiCompute_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "qulido_robot_msgs/srv/detail/ai_compute__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace qulido_robot_msgs
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void AiCompute_Response_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) qulido_robot_msgs::srv::AiCompute_Response(_init);
}

void AiCompute_Response_fini_function(void * message_memory)
{
  auto typed_message = static_cast<qulido_robot_msgs::srv::AiCompute_Response *>(message_memory);
  typed_message->~AiCompute_Response();
}

size_t size_function__AiCompute_Response__ai_cmd(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<int32_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__AiCompute_Response__ai_cmd(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<int32_t> *>(untyped_member);
  return &member[index];
}

void * get_function__AiCompute_Response__ai_cmd(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<int32_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__AiCompute_Response__ai_cmd(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const int32_t *>(
    get_const_function__AiCompute_Response__ai_cmd(untyped_member, index));
  auto & value = *reinterpret_cast<int32_t *>(untyped_value);
  value = item;
}

void assign_function__AiCompute_Response__ai_cmd(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<int32_t *>(
    get_function__AiCompute_Response__ai_cmd(untyped_member, index));
  const auto & value = *reinterpret_cast<const int32_t *>(untyped_value);
  item = value;
}

void resize_function__AiCompute_Response__ai_cmd(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<int32_t> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember AiCompute_Response_message_member_array[1] = {
  {
    "ai_cmd",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(qulido_robot_msgs::srv::AiCompute_Response, ai_cmd),  // bytes offset in struct
    nullptr,  // default value
    size_function__AiCompute_Response__ai_cmd,  // size() function pointer
    get_const_function__AiCompute_Response__ai_cmd,  // get_const(index) function pointer
    get_function__AiCompute_Response__ai_cmd,  // get(index) function pointer
    fetch_function__AiCompute_Response__ai_cmd,  // fetch(index, &value) function pointer
    assign_function__AiCompute_Response__ai_cmd,  // assign(index, value) function pointer
    resize_function__AiCompute_Response__ai_cmd  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers AiCompute_Response_message_members = {
  "qulido_robot_msgs::srv",  // message namespace
  "AiCompute_Response",  // message name
  1,  // number of fields
  sizeof(qulido_robot_msgs::srv::AiCompute_Response),
  AiCompute_Response_message_member_array,  // message members
  AiCompute_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  AiCompute_Response_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t AiCompute_Response_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &AiCompute_Response_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace qulido_robot_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<qulido_robot_msgs::srv::AiCompute_Response>()
{
  return &::qulido_robot_msgs::srv::rosidl_typesupport_introspection_cpp::AiCompute_Response_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, qulido_robot_msgs, srv, AiCompute_Response)() {
  return &::qulido_robot_msgs::srv::rosidl_typesupport_introspection_cpp::AiCompute_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"
// already included above
// #include "qulido_robot_msgs/srv/detail/ai_compute__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/service_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/service_type_support_decl.hpp"

namespace qulido_robot_msgs
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

// this is intentionally not const to allow initialization later to prevent an initialization race
static ::rosidl_typesupport_introspection_cpp::ServiceMembers AiCompute_service_members = {
  "qulido_robot_msgs::srv",  // service namespace
  "AiCompute",  // service name
  // these two fields are initialized below on the first access
  // see get_service_type_support_handle<qulido_robot_msgs::srv::AiCompute>()
  nullptr,  // request message
  nullptr  // response message
};

static const rosidl_service_type_support_t AiCompute_service_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &AiCompute_service_members,
  get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace qulido_robot_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<qulido_robot_msgs::srv::AiCompute>()
{
  // get a handle to the value to be returned
  auto service_type_support =
    &::qulido_robot_msgs::srv::rosidl_typesupport_introspection_cpp::AiCompute_service_type_support_handle;
  // get a non-const and properly typed version of the data void *
  auto service_members = const_cast<::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
    static_cast<const ::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
      service_type_support->data));
  // make sure that both the request_members_ and the response_members_ are initialized
  // if they are not, initialize them
  if (
    service_members->request_members_ == nullptr ||
    service_members->response_members_ == nullptr)
  {
    // initialize the request_members_ with the static function from the external library
    service_members->request_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::qulido_robot_msgs::srv::AiCompute_Request
      >()->data
      );
    // initialize the response_members_ with the static function from the external library
    service_members->response_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::qulido_robot_msgs::srv::AiCompute_Response
      >()->data
      );
  }
  // finally return the properly initialized service_type_support handle
  return service_type_support;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, qulido_robot_msgs, srv, AiCompute)() {
  return ::rosidl_typesupport_introspection_cpp::get_service_type_support_handle<qulido_robot_msgs::srv::AiCompute>();
}

#ifdef __cplusplus
}
#endif
