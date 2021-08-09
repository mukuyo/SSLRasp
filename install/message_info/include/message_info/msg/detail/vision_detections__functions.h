// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from message_info:msg/VisionDetections.idl
// generated code does not contain a copyright notice

#ifndef MESSAGE_INFO__MSG__DETAIL__VISION_DETECTIONS__FUNCTIONS_H_
#define MESSAGE_INFO__MSG__DETAIL__VISION_DETECTIONS__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "message_info/msg/rosidl_generator_c__visibility_control.h"

#include "message_info/msg/detail/vision_detections__struct.h"

/// Initialize msg/VisionDetections message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * message_info__msg__VisionDetections
 * )) before or use
 * message_info__msg__VisionDetections__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_message_info
bool
message_info__msg__VisionDetections__init(message_info__msg__VisionDetections * msg);

/// Finalize msg/VisionDetections message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_message_info
void
message_info__msg__VisionDetections__fini(message_info__msg__VisionDetections * msg);

/// Create msg/VisionDetections message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * message_info__msg__VisionDetections__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_message_info
message_info__msg__VisionDetections *
message_info__msg__VisionDetections__create();

/// Destroy msg/VisionDetections message.
/**
 * It calls
 * message_info__msg__VisionDetections__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_message_info
void
message_info__msg__VisionDetections__destroy(message_info__msg__VisionDetections * msg);


/// Initialize array of msg/VisionDetections messages.
/**
 * It allocates the memory for the number of elements and calls
 * message_info__msg__VisionDetections__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_message_info
bool
message_info__msg__VisionDetections__Sequence__init(message_info__msg__VisionDetections__Sequence * array, size_t size);

/// Finalize array of msg/VisionDetections messages.
/**
 * It calls
 * message_info__msg__VisionDetections__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_message_info
void
message_info__msg__VisionDetections__Sequence__fini(message_info__msg__VisionDetections__Sequence * array);

/// Create array of msg/VisionDetections messages.
/**
 * It allocates the memory for the array and calls
 * message_info__msg__VisionDetections__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_message_info
message_info__msg__VisionDetections__Sequence *
message_info__msg__VisionDetections__Sequence__create(size_t size);

/// Destroy array of msg/VisionDetections messages.
/**
 * It calls
 * message_info__msg__VisionDetections__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_message_info
void
message_info__msg__VisionDetections__Sequence__destroy(message_info__msg__VisionDetections__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // MESSAGE_INFO__MSG__DETAIL__VISION_DETECTIONS__FUNCTIONS_H_
