// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from qulido_robot_msgs:msg/MotionPrimitive.idl
// generated code does not contain a copyright notice
#include "qulido_robot_msgs/msg/detail/motion_primitive__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `primitive`
#include "rosidl_runtime_c/string_functions.h"

bool
qulido_robot_msgs__msg__MotionPrimitive__init(qulido_robot_msgs__msg__MotionPrimitive * msg)
{
  if (!msg) {
    return false;
  }
  // primitive
  if (!rosidl_runtime_c__String__init(&msg->primitive)) {
    qulido_robot_msgs__msg__MotionPrimitive__fini(msg);
    return false;
  }
  // target_pose
  // gripper_width
  return true;
}

void
qulido_robot_msgs__msg__MotionPrimitive__fini(qulido_robot_msgs__msg__MotionPrimitive * msg)
{
  if (!msg) {
    return;
  }
  // primitive
  rosidl_runtime_c__String__fini(&msg->primitive);
  // target_pose
  // gripper_width
}

bool
qulido_robot_msgs__msg__MotionPrimitive__are_equal(const qulido_robot_msgs__msg__MotionPrimitive * lhs, const qulido_robot_msgs__msg__MotionPrimitive * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // primitive
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->primitive), &(rhs->primitive)))
  {
    return false;
  }
  // target_pose
  for (size_t i = 0; i < 6; ++i) {
    if (lhs->target_pose[i] != rhs->target_pose[i]) {
      return false;
    }
  }
  // gripper_width
  if (lhs->gripper_width != rhs->gripper_width) {
    return false;
  }
  return true;
}

bool
qulido_robot_msgs__msg__MotionPrimitive__copy(
  const qulido_robot_msgs__msg__MotionPrimitive * input,
  qulido_robot_msgs__msg__MotionPrimitive * output)
{
  if (!input || !output) {
    return false;
  }
  // primitive
  if (!rosidl_runtime_c__String__copy(
      &(input->primitive), &(output->primitive)))
  {
    return false;
  }
  // target_pose
  for (size_t i = 0; i < 6; ++i) {
    output->target_pose[i] = input->target_pose[i];
  }
  // gripper_width
  output->gripper_width = input->gripper_width;
  return true;
}

qulido_robot_msgs__msg__MotionPrimitive *
qulido_robot_msgs__msg__MotionPrimitive__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  qulido_robot_msgs__msg__MotionPrimitive * msg = (qulido_robot_msgs__msg__MotionPrimitive *)allocator.allocate(sizeof(qulido_robot_msgs__msg__MotionPrimitive), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(qulido_robot_msgs__msg__MotionPrimitive));
  bool success = qulido_robot_msgs__msg__MotionPrimitive__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
qulido_robot_msgs__msg__MotionPrimitive__destroy(qulido_robot_msgs__msg__MotionPrimitive * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    qulido_robot_msgs__msg__MotionPrimitive__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
qulido_robot_msgs__msg__MotionPrimitive__Sequence__init(qulido_robot_msgs__msg__MotionPrimitive__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  qulido_robot_msgs__msg__MotionPrimitive * data = NULL;

  if (size) {
    data = (qulido_robot_msgs__msg__MotionPrimitive *)allocator.zero_allocate(size, sizeof(qulido_robot_msgs__msg__MotionPrimitive), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = qulido_robot_msgs__msg__MotionPrimitive__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        qulido_robot_msgs__msg__MotionPrimitive__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
qulido_robot_msgs__msg__MotionPrimitive__Sequence__fini(qulido_robot_msgs__msg__MotionPrimitive__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      qulido_robot_msgs__msg__MotionPrimitive__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

qulido_robot_msgs__msg__MotionPrimitive__Sequence *
qulido_robot_msgs__msg__MotionPrimitive__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  qulido_robot_msgs__msg__MotionPrimitive__Sequence * array = (qulido_robot_msgs__msg__MotionPrimitive__Sequence *)allocator.allocate(sizeof(qulido_robot_msgs__msg__MotionPrimitive__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = qulido_robot_msgs__msg__MotionPrimitive__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
qulido_robot_msgs__msg__MotionPrimitive__Sequence__destroy(qulido_robot_msgs__msg__MotionPrimitive__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    qulido_robot_msgs__msg__MotionPrimitive__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
qulido_robot_msgs__msg__MotionPrimitive__Sequence__are_equal(const qulido_robot_msgs__msg__MotionPrimitive__Sequence * lhs, const qulido_robot_msgs__msg__MotionPrimitive__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!qulido_robot_msgs__msg__MotionPrimitive__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
qulido_robot_msgs__msg__MotionPrimitive__Sequence__copy(
  const qulido_robot_msgs__msg__MotionPrimitive__Sequence * input,
  qulido_robot_msgs__msg__MotionPrimitive__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(qulido_robot_msgs__msg__MotionPrimitive);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    qulido_robot_msgs__msg__MotionPrimitive * data =
      (qulido_robot_msgs__msg__MotionPrimitive *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!qulido_robot_msgs__msg__MotionPrimitive__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          qulido_robot_msgs__msg__MotionPrimitive__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!qulido_robot_msgs__msg__MotionPrimitive__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
