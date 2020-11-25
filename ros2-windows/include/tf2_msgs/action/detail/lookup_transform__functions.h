// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from tf2_msgs:action\LookupTransform.idl
// generated code does not contain a copyright notice

#ifndef TF2_MSGS__ACTION__DETAIL__LOOKUP_TRANSFORM__FUNCTIONS_H_
#define TF2_MSGS__ACTION__DETAIL__LOOKUP_TRANSFORM__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "tf2_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "tf2_msgs/action/detail/lookup_transform__struct.h"

/// Initialize action/LookupTransform message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * tf2_msgs__action__LookupTransform_Goal
 * )) before or use
 * tf2_msgs__action__LookupTransform_Goal__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_tf2_msgs
bool
tf2_msgs__action__LookupTransform_Goal__init(tf2_msgs__action__LookupTransform_Goal * msg);

/// Finalize action/LookupTransform message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tf2_msgs
void
tf2_msgs__action__LookupTransform_Goal__fini(tf2_msgs__action__LookupTransform_Goal * msg);

/// Create action/LookupTransform message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * tf2_msgs__action__LookupTransform_Goal__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_tf2_msgs
tf2_msgs__action__LookupTransform_Goal *
tf2_msgs__action__LookupTransform_Goal__create();

/// Destroy action/LookupTransform message.
/**
 * It calls
 * tf2_msgs__action__LookupTransform_Goal__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tf2_msgs
void
tf2_msgs__action__LookupTransform_Goal__destroy(tf2_msgs__action__LookupTransform_Goal * msg);


/// Initialize array of action/LookupTransform messages.
/**
 * It allocates the memory for the number of elements and calls
 * tf2_msgs__action__LookupTransform_Goal__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_tf2_msgs
bool
tf2_msgs__action__LookupTransform_Goal__Sequence__init(tf2_msgs__action__LookupTransform_Goal__Sequence * array, size_t size);

/// Finalize array of action/LookupTransform messages.
/**
 * It calls
 * tf2_msgs__action__LookupTransform_Goal__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tf2_msgs
void
tf2_msgs__action__LookupTransform_Goal__Sequence__fini(tf2_msgs__action__LookupTransform_Goal__Sequence * array);

/// Create array of action/LookupTransform messages.
/**
 * It allocates the memory for the array and calls
 * tf2_msgs__action__LookupTransform_Goal__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_tf2_msgs
tf2_msgs__action__LookupTransform_Goal__Sequence *
tf2_msgs__action__LookupTransform_Goal__Sequence__create(size_t size);

/// Destroy array of action/LookupTransform messages.
/**
 * It calls
 * tf2_msgs__action__LookupTransform_Goal__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tf2_msgs
void
tf2_msgs__action__LookupTransform_Goal__Sequence__destroy(tf2_msgs__action__LookupTransform_Goal__Sequence * array);

/// Initialize action/LookupTransform message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * tf2_msgs__action__LookupTransform_Result
 * )) before or use
 * tf2_msgs__action__LookupTransform_Result__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_tf2_msgs
bool
tf2_msgs__action__LookupTransform_Result__init(tf2_msgs__action__LookupTransform_Result * msg);

/// Finalize action/LookupTransform message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tf2_msgs
void
tf2_msgs__action__LookupTransform_Result__fini(tf2_msgs__action__LookupTransform_Result * msg);

/// Create action/LookupTransform message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * tf2_msgs__action__LookupTransform_Result__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_tf2_msgs
tf2_msgs__action__LookupTransform_Result *
tf2_msgs__action__LookupTransform_Result__create();

/// Destroy action/LookupTransform message.
/**
 * It calls
 * tf2_msgs__action__LookupTransform_Result__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tf2_msgs
void
tf2_msgs__action__LookupTransform_Result__destroy(tf2_msgs__action__LookupTransform_Result * msg);


/// Initialize array of action/LookupTransform messages.
/**
 * It allocates the memory for the number of elements and calls
 * tf2_msgs__action__LookupTransform_Result__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_tf2_msgs
bool
tf2_msgs__action__LookupTransform_Result__Sequence__init(tf2_msgs__action__LookupTransform_Result__Sequence * array, size_t size);

/// Finalize array of action/LookupTransform messages.
/**
 * It calls
 * tf2_msgs__action__LookupTransform_Result__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tf2_msgs
void
tf2_msgs__action__LookupTransform_Result__Sequence__fini(tf2_msgs__action__LookupTransform_Result__Sequence * array);

/// Create array of action/LookupTransform messages.
/**
 * It allocates the memory for the array and calls
 * tf2_msgs__action__LookupTransform_Result__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_tf2_msgs
tf2_msgs__action__LookupTransform_Result__Sequence *
tf2_msgs__action__LookupTransform_Result__Sequence__create(size_t size);

/// Destroy array of action/LookupTransform messages.
/**
 * It calls
 * tf2_msgs__action__LookupTransform_Result__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tf2_msgs
void
tf2_msgs__action__LookupTransform_Result__Sequence__destroy(tf2_msgs__action__LookupTransform_Result__Sequence * array);

/// Initialize action/LookupTransform message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * tf2_msgs__action__LookupTransform_Feedback
 * )) before or use
 * tf2_msgs__action__LookupTransform_Feedback__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_tf2_msgs
bool
tf2_msgs__action__LookupTransform_Feedback__init(tf2_msgs__action__LookupTransform_Feedback * msg);

/// Finalize action/LookupTransform message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tf2_msgs
void
tf2_msgs__action__LookupTransform_Feedback__fini(tf2_msgs__action__LookupTransform_Feedback * msg);

/// Create action/LookupTransform message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * tf2_msgs__action__LookupTransform_Feedback__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_tf2_msgs
tf2_msgs__action__LookupTransform_Feedback *
tf2_msgs__action__LookupTransform_Feedback__create();

/// Destroy action/LookupTransform message.
/**
 * It calls
 * tf2_msgs__action__LookupTransform_Feedback__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tf2_msgs
void
tf2_msgs__action__LookupTransform_Feedback__destroy(tf2_msgs__action__LookupTransform_Feedback * msg);


/// Initialize array of action/LookupTransform messages.
/**
 * It allocates the memory for the number of elements and calls
 * tf2_msgs__action__LookupTransform_Feedback__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_tf2_msgs
bool
tf2_msgs__action__LookupTransform_Feedback__Sequence__init(tf2_msgs__action__LookupTransform_Feedback__Sequence * array, size_t size);

/// Finalize array of action/LookupTransform messages.
/**
 * It calls
 * tf2_msgs__action__LookupTransform_Feedback__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tf2_msgs
void
tf2_msgs__action__LookupTransform_Feedback__Sequence__fini(tf2_msgs__action__LookupTransform_Feedback__Sequence * array);

/// Create array of action/LookupTransform messages.
/**
 * It allocates the memory for the array and calls
 * tf2_msgs__action__LookupTransform_Feedback__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_tf2_msgs
tf2_msgs__action__LookupTransform_Feedback__Sequence *
tf2_msgs__action__LookupTransform_Feedback__Sequence__create(size_t size);

/// Destroy array of action/LookupTransform messages.
/**
 * It calls
 * tf2_msgs__action__LookupTransform_Feedback__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tf2_msgs
void
tf2_msgs__action__LookupTransform_Feedback__Sequence__destroy(tf2_msgs__action__LookupTransform_Feedback__Sequence * array);

/// Initialize action/LookupTransform message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * tf2_msgs__action__LookupTransform_SendGoal_Request
 * )) before or use
 * tf2_msgs__action__LookupTransform_SendGoal_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_tf2_msgs
bool
tf2_msgs__action__LookupTransform_SendGoal_Request__init(tf2_msgs__action__LookupTransform_SendGoal_Request * msg);

/// Finalize action/LookupTransform message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tf2_msgs
void
tf2_msgs__action__LookupTransform_SendGoal_Request__fini(tf2_msgs__action__LookupTransform_SendGoal_Request * msg);

/// Create action/LookupTransform message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * tf2_msgs__action__LookupTransform_SendGoal_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_tf2_msgs
tf2_msgs__action__LookupTransform_SendGoal_Request *
tf2_msgs__action__LookupTransform_SendGoal_Request__create();

/// Destroy action/LookupTransform message.
/**
 * It calls
 * tf2_msgs__action__LookupTransform_SendGoal_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tf2_msgs
void
tf2_msgs__action__LookupTransform_SendGoal_Request__destroy(tf2_msgs__action__LookupTransform_SendGoal_Request * msg);


/// Initialize array of action/LookupTransform messages.
/**
 * It allocates the memory for the number of elements and calls
 * tf2_msgs__action__LookupTransform_SendGoal_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_tf2_msgs
bool
tf2_msgs__action__LookupTransform_SendGoal_Request__Sequence__init(tf2_msgs__action__LookupTransform_SendGoal_Request__Sequence * array, size_t size);

/// Finalize array of action/LookupTransform messages.
/**
 * It calls
 * tf2_msgs__action__LookupTransform_SendGoal_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tf2_msgs
void
tf2_msgs__action__LookupTransform_SendGoal_Request__Sequence__fini(tf2_msgs__action__LookupTransform_SendGoal_Request__Sequence * array);

/// Create array of action/LookupTransform messages.
/**
 * It allocates the memory for the array and calls
 * tf2_msgs__action__LookupTransform_SendGoal_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_tf2_msgs
tf2_msgs__action__LookupTransform_SendGoal_Request__Sequence *
tf2_msgs__action__LookupTransform_SendGoal_Request__Sequence__create(size_t size);

/// Destroy array of action/LookupTransform messages.
/**
 * It calls
 * tf2_msgs__action__LookupTransform_SendGoal_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tf2_msgs
void
tf2_msgs__action__LookupTransform_SendGoal_Request__Sequence__destroy(tf2_msgs__action__LookupTransform_SendGoal_Request__Sequence * array);

/// Initialize action/LookupTransform message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * tf2_msgs__action__LookupTransform_SendGoal_Response
 * )) before or use
 * tf2_msgs__action__LookupTransform_SendGoal_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_tf2_msgs
bool
tf2_msgs__action__LookupTransform_SendGoal_Response__init(tf2_msgs__action__LookupTransform_SendGoal_Response * msg);

/// Finalize action/LookupTransform message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tf2_msgs
void
tf2_msgs__action__LookupTransform_SendGoal_Response__fini(tf2_msgs__action__LookupTransform_SendGoal_Response * msg);

/// Create action/LookupTransform message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * tf2_msgs__action__LookupTransform_SendGoal_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_tf2_msgs
tf2_msgs__action__LookupTransform_SendGoal_Response *
tf2_msgs__action__LookupTransform_SendGoal_Response__create();

/// Destroy action/LookupTransform message.
/**
 * It calls
 * tf2_msgs__action__LookupTransform_SendGoal_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tf2_msgs
void
tf2_msgs__action__LookupTransform_SendGoal_Response__destroy(tf2_msgs__action__LookupTransform_SendGoal_Response * msg);


/// Initialize array of action/LookupTransform messages.
/**
 * It allocates the memory for the number of elements and calls
 * tf2_msgs__action__LookupTransform_SendGoal_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_tf2_msgs
bool
tf2_msgs__action__LookupTransform_SendGoal_Response__Sequence__init(tf2_msgs__action__LookupTransform_SendGoal_Response__Sequence * array, size_t size);

/// Finalize array of action/LookupTransform messages.
/**
 * It calls
 * tf2_msgs__action__LookupTransform_SendGoal_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tf2_msgs
void
tf2_msgs__action__LookupTransform_SendGoal_Response__Sequence__fini(tf2_msgs__action__LookupTransform_SendGoal_Response__Sequence * array);

/// Create array of action/LookupTransform messages.
/**
 * It allocates the memory for the array and calls
 * tf2_msgs__action__LookupTransform_SendGoal_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_tf2_msgs
tf2_msgs__action__LookupTransform_SendGoal_Response__Sequence *
tf2_msgs__action__LookupTransform_SendGoal_Response__Sequence__create(size_t size);

/// Destroy array of action/LookupTransform messages.
/**
 * It calls
 * tf2_msgs__action__LookupTransform_SendGoal_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tf2_msgs
void
tf2_msgs__action__LookupTransform_SendGoal_Response__Sequence__destroy(tf2_msgs__action__LookupTransform_SendGoal_Response__Sequence * array);

/// Initialize action/LookupTransform message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * tf2_msgs__action__LookupTransform_GetResult_Request
 * )) before or use
 * tf2_msgs__action__LookupTransform_GetResult_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_tf2_msgs
bool
tf2_msgs__action__LookupTransform_GetResult_Request__init(tf2_msgs__action__LookupTransform_GetResult_Request * msg);

/// Finalize action/LookupTransform message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tf2_msgs
void
tf2_msgs__action__LookupTransform_GetResult_Request__fini(tf2_msgs__action__LookupTransform_GetResult_Request * msg);

/// Create action/LookupTransform message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * tf2_msgs__action__LookupTransform_GetResult_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_tf2_msgs
tf2_msgs__action__LookupTransform_GetResult_Request *
tf2_msgs__action__LookupTransform_GetResult_Request__create();

/// Destroy action/LookupTransform message.
/**
 * It calls
 * tf2_msgs__action__LookupTransform_GetResult_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tf2_msgs
void
tf2_msgs__action__LookupTransform_GetResult_Request__destroy(tf2_msgs__action__LookupTransform_GetResult_Request * msg);


/// Initialize array of action/LookupTransform messages.
/**
 * It allocates the memory for the number of elements and calls
 * tf2_msgs__action__LookupTransform_GetResult_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_tf2_msgs
bool
tf2_msgs__action__LookupTransform_GetResult_Request__Sequence__init(tf2_msgs__action__LookupTransform_GetResult_Request__Sequence * array, size_t size);

/// Finalize array of action/LookupTransform messages.
/**
 * It calls
 * tf2_msgs__action__LookupTransform_GetResult_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tf2_msgs
void
tf2_msgs__action__LookupTransform_GetResult_Request__Sequence__fini(tf2_msgs__action__LookupTransform_GetResult_Request__Sequence * array);

/// Create array of action/LookupTransform messages.
/**
 * It allocates the memory for the array and calls
 * tf2_msgs__action__LookupTransform_GetResult_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_tf2_msgs
tf2_msgs__action__LookupTransform_GetResult_Request__Sequence *
tf2_msgs__action__LookupTransform_GetResult_Request__Sequence__create(size_t size);

/// Destroy array of action/LookupTransform messages.
/**
 * It calls
 * tf2_msgs__action__LookupTransform_GetResult_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tf2_msgs
void
tf2_msgs__action__LookupTransform_GetResult_Request__Sequence__destroy(tf2_msgs__action__LookupTransform_GetResult_Request__Sequence * array);

/// Initialize action/LookupTransform message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * tf2_msgs__action__LookupTransform_GetResult_Response
 * )) before or use
 * tf2_msgs__action__LookupTransform_GetResult_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_tf2_msgs
bool
tf2_msgs__action__LookupTransform_GetResult_Response__init(tf2_msgs__action__LookupTransform_GetResult_Response * msg);

/// Finalize action/LookupTransform message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tf2_msgs
void
tf2_msgs__action__LookupTransform_GetResult_Response__fini(tf2_msgs__action__LookupTransform_GetResult_Response * msg);

/// Create action/LookupTransform message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * tf2_msgs__action__LookupTransform_GetResult_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_tf2_msgs
tf2_msgs__action__LookupTransform_GetResult_Response *
tf2_msgs__action__LookupTransform_GetResult_Response__create();

/// Destroy action/LookupTransform message.
/**
 * It calls
 * tf2_msgs__action__LookupTransform_GetResult_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tf2_msgs
void
tf2_msgs__action__LookupTransform_GetResult_Response__destroy(tf2_msgs__action__LookupTransform_GetResult_Response * msg);


/// Initialize array of action/LookupTransform messages.
/**
 * It allocates the memory for the number of elements and calls
 * tf2_msgs__action__LookupTransform_GetResult_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_tf2_msgs
bool
tf2_msgs__action__LookupTransform_GetResult_Response__Sequence__init(tf2_msgs__action__LookupTransform_GetResult_Response__Sequence * array, size_t size);

/// Finalize array of action/LookupTransform messages.
/**
 * It calls
 * tf2_msgs__action__LookupTransform_GetResult_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tf2_msgs
void
tf2_msgs__action__LookupTransform_GetResult_Response__Sequence__fini(tf2_msgs__action__LookupTransform_GetResult_Response__Sequence * array);

/// Create array of action/LookupTransform messages.
/**
 * It allocates the memory for the array and calls
 * tf2_msgs__action__LookupTransform_GetResult_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_tf2_msgs
tf2_msgs__action__LookupTransform_GetResult_Response__Sequence *
tf2_msgs__action__LookupTransform_GetResult_Response__Sequence__create(size_t size);

/// Destroy array of action/LookupTransform messages.
/**
 * It calls
 * tf2_msgs__action__LookupTransform_GetResult_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tf2_msgs
void
tf2_msgs__action__LookupTransform_GetResult_Response__Sequence__destroy(tf2_msgs__action__LookupTransform_GetResult_Response__Sequence * array);

/// Initialize action/LookupTransform message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * tf2_msgs__action__LookupTransform_FeedbackMessage
 * )) before or use
 * tf2_msgs__action__LookupTransform_FeedbackMessage__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_tf2_msgs
bool
tf2_msgs__action__LookupTransform_FeedbackMessage__init(tf2_msgs__action__LookupTransform_FeedbackMessage * msg);

/// Finalize action/LookupTransform message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tf2_msgs
void
tf2_msgs__action__LookupTransform_FeedbackMessage__fini(tf2_msgs__action__LookupTransform_FeedbackMessage * msg);

/// Create action/LookupTransform message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * tf2_msgs__action__LookupTransform_FeedbackMessage__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_tf2_msgs
tf2_msgs__action__LookupTransform_FeedbackMessage *
tf2_msgs__action__LookupTransform_FeedbackMessage__create();

/// Destroy action/LookupTransform message.
/**
 * It calls
 * tf2_msgs__action__LookupTransform_FeedbackMessage__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tf2_msgs
void
tf2_msgs__action__LookupTransform_FeedbackMessage__destroy(tf2_msgs__action__LookupTransform_FeedbackMessage * msg);


/// Initialize array of action/LookupTransform messages.
/**
 * It allocates the memory for the number of elements and calls
 * tf2_msgs__action__LookupTransform_FeedbackMessage__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_tf2_msgs
bool
tf2_msgs__action__LookupTransform_FeedbackMessage__Sequence__init(tf2_msgs__action__LookupTransform_FeedbackMessage__Sequence * array, size_t size);

/// Finalize array of action/LookupTransform messages.
/**
 * It calls
 * tf2_msgs__action__LookupTransform_FeedbackMessage__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tf2_msgs
void
tf2_msgs__action__LookupTransform_FeedbackMessage__Sequence__fini(tf2_msgs__action__LookupTransform_FeedbackMessage__Sequence * array);

/// Create array of action/LookupTransform messages.
/**
 * It allocates the memory for the array and calls
 * tf2_msgs__action__LookupTransform_FeedbackMessage__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_tf2_msgs
tf2_msgs__action__LookupTransform_FeedbackMessage__Sequence *
tf2_msgs__action__LookupTransform_FeedbackMessage__Sequence__create(size_t size);

/// Destroy array of action/LookupTransform messages.
/**
 * It calls
 * tf2_msgs__action__LookupTransform_FeedbackMessage__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tf2_msgs
void
tf2_msgs__action__LookupTransform_FeedbackMessage__Sequence__destroy(tf2_msgs__action__LookupTransform_FeedbackMessage__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // TF2_MSGS__ACTION__DETAIL__LOOKUP_TRANSFORM__FUNCTIONS_H_