// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from message_info:msg/Attacker.idl
// generated code does not contain a copyright notice

#ifndef MESSAGE_INFO__MSG__DETAIL__ATTACKER__FUNCTIONS_H_
#define MESSAGE_INFO__MSG__DETAIL__ATTACKER__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "message_info/msg/rosidl_generator_c__visibility_control.h"

#include "message_info/msg/detail/attacker__struct.h"

/// Initialize msg/Attacker message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * message_info__msg__Attacker
 * )) before or use
 * message_info__msg__Attacker__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_message_info
bool
message_info__msg__Attacker__init(message_info__msg__Attacker * msg);

/// Finalize msg/Attacker message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_message_info
void
message_info__msg__Attacker__fini(message_info__msg__Attacker * msg);

/// Create msg/Attacker message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * message_info__msg__Attacker__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_message_info
message_info__msg__Attacker *
message_info__msg__Attacker__create();

/// Destroy msg/Attacker message.
/**
 * It calls
 * message_info__msg__Attacker__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_message_info
void
message_info__msg__Attacker__destroy(message_info__msg__Attacker * msg);


/// Initialize array of msg/Attacker messages.
/**
 * It allocates the memory for the number of elements and calls
 * message_info__msg__Attacker__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_message_info
bool
message_info__msg__Attacker__Sequence__init(message_info__msg__Attacker__Sequence * array, size_t size);

/// Finalize array of msg/Attacker messages.
/**
 * It calls
 * message_info__msg__Attacker__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_message_info
void
message_info__msg__Attacker__Sequence__fini(message_info__msg__Attacker__Sequence * array);

/// Create array of msg/Attacker messages.
/**
 * It allocates the memory for the array and calls
 * message_info__msg__Attacker__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_message_info
message_info__msg__Attacker__Sequence *
message_info__msg__Attacker__Sequence__create(size_t size);

/// Destroy array of msg/Attacker messages.
/**
 * It calls
 * message_info__msg__Attacker__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_message_info
void
message_info__msg__Attacker__Sequence__destroy(message_info__msg__Attacker__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // MESSAGE_INFO__MSG__DETAIL__ATTACKER__FUNCTIONS_H_