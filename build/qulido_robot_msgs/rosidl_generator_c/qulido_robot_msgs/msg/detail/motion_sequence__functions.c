// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from qulido_robot_msgs:msg/MotionSequence.idl
// generated code does not contain a copyright notice
#include "qulido_robot_msgs/msg/detail/motion_sequence__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `sequence`
#include "qulido_robot_msgs/msg/detail/motion_primitive__functions.h"

bool
qulido_robot_msgs__msg__MotionSequence__init(qulido_robot_msgs__msg__MotionSequence * msg)
{
  if (!msg) {
    return false;
  }
  // sequence
  if (!qulido_robot_msgs__msg__MotionPrimitive__Sequence__init(&msg->sequence, 0)) {
    qulido_robot_msgs__msg__MotionSequence__fini(msg);
    return false;
  }
  return true;
}

void
qulido_robot_msgs__msg__MotionSequence__fini(qulido_robot_msgs__msg__MotionSequence * msg)
{
  if (!msg) {
    return;
  }
  // sequence
  qulido_robot_msgs__msg__MotionPrimitive__Sequence__fini(&msg->sequence);
}

bool
qulido_robot_msgs__msg__MotionSequence__are_equal(const qulido_robot_msgs__msg__MotionSequence * lhs, const qulido_robot_msgs__msg__MotionSequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // sequence
  if (!qulido_robot_msgs__msg__MotionPrimitive__Sequence__are_equal(
      &(lhs->sequence), &(rhs->sequence)))
  {
    return false;
  }
  return true;
}

bool
qulido_robot_msgs__msg__MotionSequence__copy(
  const qulido_robot_msgs__msg__MotionSequence * input,
  qulido_robot_msgs__msg__MotionSequence * output)
{
  if (!input || !output) {
    return false;
  }
  // sequence
  if (!qulido_robot_msgs__msg__MotionPrimitive__Sequence__copy(
      &(input->sequence), &(output->sequence)))
  {
    return false;
  }
  return true;
}

qulido_robot_msgs__msg__MotionSequence *
qulido_robot_msgs__msg__MotionSequence__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  qulido_robot_msgs__msg__MotionSequence * msg = (qulido_robot_msgs__msg__MotionSequence *)allocator.allocate(sizeof(qulido_robot_msgs__msg__MotionSequence), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(qulido_robot_msgs__msg__MotionSequence));
  bool success = qulido_robot_msgs__msg__MotionSequence__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
qulido_robot_msgs__msg__MotionSequence__destroy(qulido_robot_msgs__msg__MotionSequence * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    qulido_robot_msgs__msg__MotionSequence__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
qulido_robot_msgs__msg__MotionSequence__Sequence__init(qulido_robot_msgs__msg__MotionSequence__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  qulido_robot_msgs__msg__MotionSequence * data = NULL;

  if (size) {
    data = (qulido_robot_msgs__msg__MotionSequence *)allocator.zero_allocate(size, sizeof(qulido_robot_msgs__msg__MotionSequence), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = qulido_robot_msgs__msg__MotionSequence__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        qulido_robot_msgs__msg__MotionSequence__fini(&data[i - 1]);
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
qulido_robot_msgs__msg__MotionSequence__Sequence__fini(qulido_robot_msgs__msg__MotionSequence__Sequence * array)
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
      qulido_robot_msgs__msg__MotionSequence__fini(&array->data[i]);
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

qulido_robot_msgs__msg__MotionSequence__Sequence *
qulido_robot_msgs__msg__MotionSequence__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  qulido_robot_msgs__msg__MotionSequence__Sequence * array = (qulido_robot_msgs__msg__MotionSequence__Sequence *)allocator.allocate(sizeof(qulido_robot_msgs__msg__MotionSequence__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = qulido_robot_msgs__msg__MotionSequence__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
qulido_robot_msgs__msg__MotionSequence__Sequence__destroy(qulido_robot_msgs__msg__MotionSequence__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    qulido_robot_msgs__msg__MotionSequence__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
qulido_robot_msgs__msg__MotionSequence__Sequence__are_equal(const qulido_robot_msgs__msg__MotionSequence__Sequence * lhs, const qulido_robot_msgs__msg__MotionSequence__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!qulido_robot_msgs__msg__MotionSequence__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
qulido_robot_msgs__msg__MotionSequence__Sequence__copy(
  const qulido_robot_msgs__msg__MotionSequence__Sequence * input,
  qulido_robot_msgs__msg__MotionSequence__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(qulido_robot_msgs__msg__MotionSequence);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    qulido_robot_msgs__msg__MotionSequence * data =
      (qulido_robot_msgs__msg__MotionSequence *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!qulido_robot_msgs__msg__MotionSequence__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          qulido_robot_msgs__msg__MotionSequence__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!qulido_robot_msgs__msg__MotionSequence__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
