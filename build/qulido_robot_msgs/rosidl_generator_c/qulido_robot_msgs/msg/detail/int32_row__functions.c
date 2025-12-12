// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from qulido_robot_msgs:msg/Int32Row.idl
// generated code does not contain a copyright notice
#include "qulido_robot_msgs/msg/detail/int32_row__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `data`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
qulido_robot_msgs__msg__Int32Row__init(qulido_robot_msgs__msg__Int32Row * msg)
{
  if (!msg) {
    return false;
  }
  // data
  if (!rosidl_runtime_c__int32__Sequence__init(&msg->data, 0)) {
    qulido_robot_msgs__msg__Int32Row__fini(msg);
    return false;
  }
  return true;
}

void
qulido_robot_msgs__msg__Int32Row__fini(qulido_robot_msgs__msg__Int32Row * msg)
{
  if (!msg) {
    return;
  }
  // data
  rosidl_runtime_c__int32__Sequence__fini(&msg->data);
}

bool
qulido_robot_msgs__msg__Int32Row__are_equal(const qulido_robot_msgs__msg__Int32Row * lhs, const qulido_robot_msgs__msg__Int32Row * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // data
  if (!rosidl_runtime_c__int32__Sequence__are_equal(
      &(lhs->data), &(rhs->data)))
  {
    return false;
  }
  return true;
}

bool
qulido_robot_msgs__msg__Int32Row__copy(
  const qulido_robot_msgs__msg__Int32Row * input,
  qulido_robot_msgs__msg__Int32Row * output)
{
  if (!input || !output) {
    return false;
  }
  // data
  if (!rosidl_runtime_c__int32__Sequence__copy(
      &(input->data), &(output->data)))
  {
    return false;
  }
  return true;
}

qulido_robot_msgs__msg__Int32Row *
qulido_robot_msgs__msg__Int32Row__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  qulido_robot_msgs__msg__Int32Row * msg = (qulido_robot_msgs__msg__Int32Row *)allocator.allocate(sizeof(qulido_robot_msgs__msg__Int32Row), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(qulido_robot_msgs__msg__Int32Row));
  bool success = qulido_robot_msgs__msg__Int32Row__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
qulido_robot_msgs__msg__Int32Row__destroy(qulido_robot_msgs__msg__Int32Row * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    qulido_robot_msgs__msg__Int32Row__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
qulido_robot_msgs__msg__Int32Row__Sequence__init(qulido_robot_msgs__msg__Int32Row__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  qulido_robot_msgs__msg__Int32Row * data = NULL;

  if (size) {
    data = (qulido_robot_msgs__msg__Int32Row *)allocator.zero_allocate(size, sizeof(qulido_robot_msgs__msg__Int32Row), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = qulido_robot_msgs__msg__Int32Row__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        qulido_robot_msgs__msg__Int32Row__fini(&data[i - 1]);
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
qulido_robot_msgs__msg__Int32Row__Sequence__fini(qulido_robot_msgs__msg__Int32Row__Sequence * array)
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
      qulido_robot_msgs__msg__Int32Row__fini(&array->data[i]);
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

qulido_robot_msgs__msg__Int32Row__Sequence *
qulido_robot_msgs__msg__Int32Row__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  qulido_robot_msgs__msg__Int32Row__Sequence * array = (qulido_robot_msgs__msg__Int32Row__Sequence *)allocator.allocate(sizeof(qulido_robot_msgs__msg__Int32Row__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = qulido_robot_msgs__msg__Int32Row__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
qulido_robot_msgs__msg__Int32Row__Sequence__destroy(qulido_robot_msgs__msg__Int32Row__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    qulido_robot_msgs__msg__Int32Row__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
qulido_robot_msgs__msg__Int32Row__Sequence__are_equal(const qulido_robot_msgs__msg__Int32Row__Sequence * lhs, const qulido_robot_msgs__msg__Int32Row__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!qulido_robot_msgs__msg__Int32Row__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
qulido_robot_msgs__msg__Int32Row__Sequence__copy(
  const qulido_robot_msgs__msg__Int32Row__Sequence * input,
  qulido_robot_msgs__msg__Int32Row__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(qulido_robot_msgs__msg__Int32Row);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    qulido_robot_msgs__msg__Int32Row * data =
      (qulido_robot_msgs__msg__Int32Row *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!qulido_robot_msgs__msg__Int32Row__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          qulido_robot_msgs__msg__Int32Row__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!qulido_robot_msgs__msg__Int32Row__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
