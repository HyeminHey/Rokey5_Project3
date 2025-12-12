// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from qulido_robot_msgs:srv/GetBoardState.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "qulido_robot_msgs/srv/detail/get_board_state__struct.hpp"
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

void GetBoardState_Request_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) qulido_robot_msgs::srv::GetBoardState_Request(_init);
}

void GetBoardState_Request_fini_function(void * message_memory)
{
  auto typed_message = static_cast<qulido_robot_msgs::srv::GetBoardState_Request *>(message_memory);
  typed_message->~GetBoardState_Request();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember GetBoardState_Request_message_member_array[1] = {
  {
    "structure_needs_at_least_one_member",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(qulido_robot_msgs::srv::GetBoardState_Request, structure_needs_at_least_one_member),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers GetBoardState_Request_message_members = {
  "qulido_robot_msgs::srv",  // message namespace
  "GetBoardState_Request",  // message name
  1,  // number of fields
  sizeof(qulido_robot_msgs::srv::GetBoardState_Request),
  GetBoardState_Request_message_member_array,  // message members
  GetBoardState_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  GetBoardState_Request_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t GetBoardState_Request_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &GetBoardState_Request_message_members,
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
get_message_type_support_handle<qulido_robot_msgs::srv::GetBoardState_Request>()
{
  return &::qulido_robot_msgs::srv::rosidl_typesupport_introspection_cpp::GetBoardState_Request_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, qulido_robot_msgs, srv, GetBoardState_Request)() {
  return &::qulido_robot_msgs::srv::rosidl_typesupport_introspection_cpp::GetBoardState_Request_message_type_support_handle;
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
// #include "qulido_robot_msgs/srv/detail/get_board_state__struct.hpp"
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

void GetBoardState_Response_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) qulido_robot_msgs::srv::GetBoardState_Response(_init);
}

void GetBoardState_Response_fini_function(void * message_memory)
{
  auto typed_message = static_cast<qulido_robot_msgs::srv::GetBoardState_Response *>(message_memory);
  typed_message->~GetBoardState_Response();
}

size_t size_function__GetBoardState_Response__board_state(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<qulido_robot_msgs::msg::Int32Row> *>(untyped_member);
  return member->size();
}

const void * get_const_function__GetBoardState_Response__board_state(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<qulido_robot_msgs::msg::Int32Row> *>(untyped_member);
  return &member[index];
}

void * get_function__GetBoardState_Response__board_state(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<qulido_robot_msgs::msg::Int32Row> *>(untyped_member);
  return &member[index];
}

void fetch_function__GetBoardState_Response__board_state(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const qulido_robot_msgs::msg::Int32Row *>(
    get_const_function__GetBoardState_Response__board_state(untyped_member, index));
  auto & value = *reinterpret_cast<qulido_robot_msgs::msg::Int32Row *>(untyped_value);
  value = item;
}

void assign_function__GetBoardState_Response__board_state(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<qulido_robot_msgs::msg::Int32Row *>(
    get_function__GetBoardState_Response__board_state(untyped_member, index));
  const auto & value = *reinterpret_cast<const qulido_robot_msgs::msg::Int32Row *>(untyped_value);
  item = value;
}

void resize_function__GetBoardState_Response__board_state(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<qulido_robot_msgs::msg::Int32Row> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember GetBoardState_Response_message_member_array[1] = {
  {
    "board_state",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<qulido_robot_msgs::msg::Int32Row>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(qulido_robot_msgs::srv::GetBoardState_Response, board_state),  // bytes offset in struct
    nullptr,  // default value
    size_function__GetBoardState_Response__board_state,  // size() function pointer
    get_const_function__GetBoardState_Response__board_state,  // get_const(index) function pointer
    get_function__GetBoardState_Response__board_state,  // get(index) function pointer
    fetch_function__GetBoardState_Response__board_state,  // fetch(index, &value) function pointer
    assign_function__GetBoardState_Response__board_state,  // assign(index, value) function pointer
    resize_function__GetBoardState_Response__board_state  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers GetBoardState_Response_message_members = {
  "qulido_robot_msgs::srv",  // message namespace
  "GetBoardState_Response",  // message name
  1,  // number of fields
  sizeof(qulido_robot_msgs::srv::GetBoardState_Response),
  GetBoardState_Response_message_member_array,  // message members
  GetBoardState_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  GetBoardState_Response_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t GetBoardState_Response_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &GetBoardState_Response_message_members,
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
get_message_type_support_handle<qulido_robot_msgs::srv::GetBoardState_Response>()
{
  return &::qulido_robot_msgs::srv::rosidl_typesupport_introspection_cpp::GetBoardState_Response_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, qulido_robot_msgs, srv, GetBoardState_Response)() {
  return &::qulido_robot_msgs::srv::rosidl_typesupport_introspection_cpp::GetBoardState_Response_message_type_support_handle;
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
// #include "qulido_robot_msgs/srv/detail/get_board_state__struct.hpp"
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
static ::rosidl_typesupport_introspection_cpp::ServiceMembers GetBoardState_service_members = {
  "qulido_robot_msgs::srv",  // service namespace
  "GetBoardState",  // service name
  // these two fields are initialized below on the first access
  // see get_service_type_support_handle<qulido_robot_msgs::srv::GetBoardState>()
  nullptr,  // request message
  nullptr  // response message
};

static const rosidl_service_type_support_t GetBoardState_service_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &GetBoardState_service_members,
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
get_service_type_support_handle<qulido_robot_msgs::srv::GetBoardState>()
{
  // get a handle to the value to be returned
  auto service_type_support =
    &::qulido_robot_msgs::srv::rosidl_typesupport_introspection_cpp::GetBoardState_service_type_support_handle;
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
        ::qulido_robot_msgs::srv::GetBoardState_Request
      >()->data
      );
    // initialize the response_members_ with the static function from the external library
    service_members->response_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::qulido_robot_msgs::srv::GetBoardState_Response
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
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, qulido_robot_msgs, srv, GetBoardState)() {
  return ::rosidl_typesupport_introspection_cpp::get_service_type_support_handle<qulido_robot_msgs::srv::GetBoardState>();
}

#ifdef __cplusplus
}
#endif
