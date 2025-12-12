// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from qulido_robot_msgs:srv/GetBoardState.idl
// generated code does not contain a copyright notice

#ifndef QULIDO_ROBOT_MSGS__SRV__DETAIL__GET_BOARD_STATE__STRUCT_HPP_
#define QULIDO_ROBOT_MSGS__SRV__DETAIL__GET_BOARD_STATE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__qulido_robot_msgs__srv__GetBoardState_Request __attribute__((deprecated))
#else
# define DEPRECATED__qulido_robot_msgs__srv__GetBoardState_Request __declspec(deprecated)
#endif

namespace qulido_robot_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetBoardState_Request_
{
  using Type = GetBoardState_Request_<ContainerAllocator>;

  explicit GetBoardState_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit GetBoardState_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  // field types and members
  using _structure_needs_at_least_one_member_type =
    uint8_t;
  _structure_needs_at_least_one_member_type structure_needs_at_least_one_member;


  // constant declarations

  // pointer types
  using RawPtr =
    qulido_robot_msgs::srv::GetBoardState_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const qulido_robot_msgs::srv::GetBoardState_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<qulido_robot_msgs::srv::GetBoardState_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<qulido_robot_msgs::srv::GetBoardState_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      qulido_robot_msgs::srv::GetBoardState_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<qulido_robot_msgs::srv::GetBoardState_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      qulido_robot_msgs::srv::GetBoardState_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<qulido_robot_msgs::srv::GetBoardState_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<qulido_robot_msgs::srv::GetBoardState_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<qulido_robot_msgs::srv::GetBoardState_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__qulido_robot_msgs__srv__GetBoardState_Request
    std::shared_ptr<qulido_robot_msgs::srv::GetBoardState_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__qulido_robot_msgs__srv__GetBoardState_Request
    std::shared_ptr<qulido_robot_msgs::srv::GetBoardState_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetBoardState_Request_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetBoardState_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetBoardState_Request_

// alias to use template instance with default allocator
using GetBoardState_Request =
  qulido_robot_msgs::srv::GetBoardState_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace qulido_robot_msgs


// Include directives for member types
// Member 'board_state'
#include "qulido_robot_msgs/msg/detail/int32_row__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__qulido_robot_msgs__srv__GetBoardState_Response __attribute__((deprecated))
#else
# define DEPRECATED__qulido_robot_msgs__srv__GetBoardState_Response __declspec(deprecated)
#endif

namespace qulido_robot_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetBoardState_Response_
{
  using Type = GetBoardState_Response_<ContainerAllocator>;

  explicit GetBoardState_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit GetBoardState_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _board_state_type =
    std::vector<qulido_robot_msgs::msg::Int32Row_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<qulido_robot_msgs::msg::Int32Row_<ContainerAllocator>>>;
  _board_state_type board_state;

  // setters for named parameter idiom
  Type & set__board_state(
    const std::vector<qulido_robot_msgs::msg::Int32Row_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<qulido_robot_msgs::msg::Int32Row_<ContainerAllocator>>> & _arg)
  {
    this->board_state = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    qulido_robot_msgs::srv::GetBoardState_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const qulido_robot_msgs::srv::GetBoardState_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<qulido_robot_msgs::srv::GetBoardState_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<qulido_robot_msgs::srv::GetBoardState_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      qulido_robot_msgs::srv::GetBoardState_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<qulido_robot_msgs::srv::GetBoardState_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      qulido_robot_msgs::srv::GetBoardState_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<qulido_robot_msgs::srv::GetBoardState_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<qulido_robot_msgs::srv::GetBoardState_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<qulido_robot_msgs::srv::GetBoardState_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__qulido_robot_msgs__srv__GetBoardState_Response
    std::shared_ptr<qulido_robot_msgs::srv::GetBoardState_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__qulido_robot_msgs__srv__GetBoardState_Response
    std::shared_ptr<qulido_robot_msgs::srv::GetBoardState_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetBoardState_Response_ & other) const
  {
    if (this->board_state != other.board_state) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetBoardState_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetBoardState_Response_

// alias to use template instance with default allocator
using GetBoardState_Response =
  qulido_robot_msgs::srv::GetBoardState_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace qulido_robot_msgs

namespace qulido_robot_msgs
{

namespace srv
{

struct GetBoardState
{
  using Request = qulido_robot_msgs::srv::GetBoardState_Request;
  using Response = qulido_robot_msgs::srv::GetBoardState_Response;
};

}  // namespace srv

}  // namespace qulido_robot_msgs

#endif  // QULIDO_ROBOT_MSGS__SRV__DETAIL__GET_BOARD_STATE__STRUCT_HPP_
