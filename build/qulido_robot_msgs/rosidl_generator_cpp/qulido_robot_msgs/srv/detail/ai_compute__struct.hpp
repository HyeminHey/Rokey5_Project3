// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from qulido_robot_msgs:srv/AiCompute.idl
// generated code does not contain a copyright notice

#ifndef QULIDO_ROBOT_MSGS__SRV__DETAIL__AI_COMPUTE__STRUCT_HPP_
#define QULIDO_ROBOT_MSGS__SRV__DETAIL__AI_COMPUTE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__qulido_robot_msgs__srv__AiCompute_Request __attribute__((deprecated))
#else
# define DEPRECATED__qulido_robot_msgs__srv__AiCompute_Request __declspec(deprecated)
#endif

namespace qulido_robot_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct AiCompute_Request_
{
  using Type = AiCompute_Request_<ContainerAllocator>;

  explicit AiCompute_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit AiCompute_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _added_type =
    std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>>;
  _added_type added;

  // setters for named parameter idiom
  Type & set__added(
    const std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>> & _arg)
  {
    this->added = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    qulido_robot_msgs::srv::AiCompute_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const qulido_robot_msgs::srv::AiCompute_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<qulido_robot_msgs::srv::AiCompute_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<qulido_robot_msgs::srv::AiCompute_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      qulido_robot_msgs::srv::AiCompute_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<qulido_robot_msgs::srv::AiCompute_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      qulido_robot_msgs::srv::AiCompute_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<qulido_robot_msgs::srv::AiCompute_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<qulido_robot_msgs::srv::AiCompute_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<qulido_robot_msgs::srv::AiCompute_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__qulido_robot_msgs__srv__AiCompute_Request
    std::shared_ptr<qulido_robot_msgs::srv::AiCompute_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__qulido_robot_msgs__srv__AiCompute_Request
    std::shared_ptr<qulido_robot_msgs::srv::AiCompute_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AiCompute_Request_ & other) const
  {
    if (this->added != other.added) {
      return false;
    }
    return true;
  }
  bool operator!=(const AiCompute_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AiCompute_Request_

// alias to use template instance with default allocator
using AiCompute_Request =
  qulido_robot_msgs::srv::AiCompute_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace qulido_robot_msgs


#ifndef _WIN32
# define DEPRECATED__qulido_robot_msgs__srv__AiCompute_Response __attribute__((deprecated))
#else
# define DEPRECATED__qulido_robot_msgs__srv__AiCompute_Response __declspec(deprecated)
#endif

namespace qulido_robot_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct AiCompute_Response_
{
  using Type = AiCompute_Response_<ContainerAllocator>;

  explicit AiCompute_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit AiCompute_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _ai_cmd_type =
    std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>>;
  _ai_cmd_type ai_cmd;

  // setters for named parameter idiom
  Type & set__ai_cmd(
    const std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>> & _arg)
  {
    this->ai_cmd = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    qulido_robot_msgs::srv::AiCompute_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const qulido_robot_msgs::srv::AiCompute_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<qulido_robot_msgs::srv::AiCompute_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<qulido_robot_msgs::srv::AiCompute_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      qulido_robot_msgs::srv::AiCompute_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<qulido_robot_msgs::srv::AiCompute_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      qulido_robot_msgs::srv::AiCompute_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<qulido_robot_msgs::srv::AiCompute_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<qulido_robot_msgs::srv::AiCompute_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<qulido_robot_msgs::srv::AiCompute_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__qulido_robot_msgs__srv__AiCompute_Response
    std::shared_ptr<qulido_robot_msgs::srv::AiCompute_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__qulido_robot_msgs__srv__AiCompute_Response
    std::shared_ptr<qulido_robot_msgs::srv::AiCompute_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AiCompute_Response_ & other) const
  {
    if (this->ai_cmd != other.ai_cmd) {
      return false;
    }
    return true;
  }
  bool operator!=(const AiCompute_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AiCompute_Response_

// alias to use template instance with default allocator
using AiCompute_Response =
  qulido_robot_msgs::srv::AiCompute_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace qulido_robot_msgs

namespace qulido_robot_msgs
{

namespace srv
{

struct AiCompute
{
  using Request = qulido_robot_msgs::srv::AiCompute_Request;
  using Response = qulido_robot_msgs::srv::AiCompute_Response;
};

}  // namespace srv

}  // namespace qulido_robot_msgs

#endif  // QULIDO_ROBOT_MSGS__SRV__DETAIL__AI_COMPUTE__STRUCT_HPP_
