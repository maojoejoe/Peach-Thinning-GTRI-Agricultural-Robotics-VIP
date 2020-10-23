// generated from rosidl_typesupport_connext_cpp/resource/idl__rosidl_typesupport_connext_cpp.hpp.em
// with input from move_base_msgs:action\MoveBase.idl
// generated code does not contain a copyright notice


#ifndef MOVE_BASE_MSGS__ACTION__MOVE_BASE__ROSIDL_TYPESUPPORT_CONNEXT_CPP_HPP_
#define MOVE_BASE_MSGS__ACTION__MOVE_BASE__ROSIDL_TYPESUPPORT_CONNEXT_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "move_base_msgs/msg/rosidl_typesupport_connext_cpp__visibility_control.h"
#include "move_base_msgs/action/detail/move_base__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif

#include "move_base_msgs/action/dds_connext/MoveBase_Support.h"
#include "move_base_msgs/action/dds_connext/MoveBase_Plugin.h"
#include "ndds/ndds_cpp.h"

#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// forward declaration of internal CDR Stream
struct ConnextStaticCDRStream;

// forward declaration of DDS types
class DDSDomainParticipant;
class DDSDataWriter;
class DDSDataReader;


namespace move_base_msgs
{

namespace action
{
namespace typesupport_connext_cpp
{

DDS_TypeCode *
get_type_code__MoveBase_Goal();

bool
ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_move_base_msgs
convert_ros_message_to_dds(
  const move_base_msgs::action::MoveBase_Goal & ros_message,
  move_base_msgs::action::dds_::MoveBase_Goal_ & dds_message);

bool
ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_move_base_msgs
convert_dds_message_to_ros(
  const move_base_msgs::action::dds_::MoveBase_Goal_ & dds_message,
  move_base_msgs::action::MoveBase_Goal & ros_message);

bool
to_cdr_stream__MoveBase_Goal(
  const void * untyped_ros_message,
  ConnextStaticCDRStream * cdr_stream);

bool
to_message__MoveBase_Goal(
  const ConnextStaticCDRStream * cdr_stream,
  void * untyped_ros_message);

}  // namespace typesupport_connext_cpp

}  // namespace action

}  // namespace move_base_msgs


#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_move_base_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_connext_cpp,
  move_base_msgs, action,
  MoveBase_Goal)();

#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "move_base_msgs/msg/rosidl_typesupport_connext_cpp__visibility_control.h"
// already included above
// #include "move_base_msgs/action/detail/move_base__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif

// already included above
// #include "move_base_msgs/action/dds_connext/MoveBase_Support.h"
// already included above
// #include "move_base_msgs/action/dds_connext/MoveBase_Plugin.h"
// already included above
// #include "ndds/ndds_cpp.h"

#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// forward declaration of internal CDR Stream
struct ConnextStaticCDRStream;

// forward declaration of DDS types
class DDSDomainParticipant;
class DDSDataWriter;
class DDSDataReader;


namespace move_base_msgs
{

namespace action
{
namespace typesupport_connext_cpp
{

DDS_TypeCode *
get_type_code__MoveBase_Result();

bool
ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_move_base_msgs
convert_ros_message_to_dds(
  const move_base_msgs::action::MoveBase_Result & ros_message,
  move_base_msgs::action::dds_::MoveBase_Result_ & dds_message);

bool
ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_move_base_msgs
convert_dds_message_to_ros(
  const move_base_msgs::action::dds_::MoveBase_Result_ & dds_message,
  move_base_msgs::action::MoveBase_Result & ros_message);

bool
to_cdr_stream__MoveBase_Result(
  const void * untyped_ros_message,
  ConnextStaticCDRStream * cdr_stream);

bool
to_message__MoveBase_Result(
  const ConnextStaticCDRStream * cdr_stream,
  void * untyped_ros_message);

}  // namespace typesupport_connext_cpp

}  // namespace action

}  // namespace move_base_msgs


#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_move_base_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_connext_cpp,
  move_base_msgs, action,
  MoveBase_Result)();

#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "move_base_msgs/msg/rosidl_typesupport_connext_cpp__visibility_control.h"
// already included above
// #include "move_base_msgs/action/detail/move_base__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif

// already included above
// #include "move_base_msgs/action/dds_connext/MoveBase_Support.h"
// already included above
// #include "move_base_msgs/action/dds_connext/MoveBase_Plugin.h"
// already included above
// #include "ndds/ndds_cpp.h"

#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// forward declaration of internal CDR Stream
struct ConnextStaticCDRStream;

// forward declaration of DDS types
class DDSDomainParticipant;
class DDSDataWriter;
class DDSDataReader;


namespace move_base_msgs
{

namespace action
{
namespace typesupport_connext_cpp
{

DDS_TypeCode *
get_type_code__MoveBase_Feedback();

bool
ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_move_base_msgs
convert_ros_message_to_dds(
  const move_base_msgs::action::MoveBase_Feedback & ros_message,
  move_base_msgs::action::dds_::MoveBase_Feedback_ & dds_message);

bool
ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_move_base_msgs
convert_dds_message_to_ros(
  const move_base_msgs::action::dds_::MoveBase_Feedback_ & dds_message,
  move_base_msgs::action::MoveBase_Feedback & ros_message);

bool
to_cdr_stream__MoveBase_Feedback(
  const void * untyped_ros_message,
  ConnextStaticCDRStream * cdr_stream);

bool
to_message__MoveBase_Feedback(
  const ConnextStaticCDRStream * cdr_stream,
  void * untyped_ros_message);

}  // namespace typesupport_connext_cpp

}  // namespace action

}  // namespace move_base_msgs


#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_move_base_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_connext_cpp,
  move_base_msgs, action,
  MoveBase_Feedback)();

#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "move_base_msgs/msg/rosidl_typesupport_connext_cpp__visibility_control.h"
// already included above
// #include "move_base_msgs/action/detail/move_base__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif

// already included above
// #include "move_base_msgs/action/dds_connext/MoveBase_Support.h"
// already included above
// #include "move_base_msgs/action/dds_connext/MoveBase_Plugin.h"
// already included above
// #include "ndds/ndds_cpp.h"

#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// forward declaration of internal CDR Stream
struct ConnextStaticCDRStream;

// forward declaration of DDS types
class DDSDomainParticipant;
class DDSDataWriter;
class DDSDataReader;


namespace move_base_msgs
{

namespace action
{
namespace typesupport_connext_cpp
{

DDS_TypeCode *
get_type_code__MoveBase_SendGoal_Request();

bool
ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_move_base_msgs
convert_ros_message_to_dds(
  const move_base_msgs::action::MoveBase_SendGoal_Request & ros_message,
  move_base_msgs::action::dds_::MoveBase_SendGoal_Request_ & dds_message);

bool
ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_move_base_msgs
convert_dds_message_to_ros(
  const move_base_msgs::action::dds_::MoveBase_SendGoal_Request_ & dds_message,
  move_base_msgs::action::MoveBase_SendGoal_Request & ros_message);

bool
to_cdr_stream__MoveBase_SendGoal_Request(
  const void * untyped_ros_message,
  ConnextStaticCDRStream * cdr_stream);

bool
to_message__MoveBase_SendGoal_Request(
  const ConnextStaticCDRStream * cdr_stream,
  void * untyped_ros_message);

}  // namespace typesupport_connext_cpp

}  // namespace action

}  // namespace move_base_msgs


#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_move_base_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_connext_cpp,
  move_base_msgs, action,
  MoveBase_SendGoal_Request)();

#ifdef __cplusplus
}
#endif


// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "move_base_msgs/msg/rosidl_typesupport_connext_cpp__visibility_control.h"
// already included above
// #include "move_base_msgs/action/detail/move_base__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif

// already included above
// #include "move_base_msgs/action/dds_connext/MoveBase_Support.h"
// already included above
// #include "move_base_msgs/action/dds_connext/MoveBase_Plugin.h"
// already included above
// #include "ndds/ndds_cpp.h"

#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// forward declaration of internal CDR Stream
struct ConnextStaticCDRStream;

// forward declaration of DDS types
class DDSDomainParticipant;
class DDSDataWriter;
class DDSDataReader;


namespace move_base_msgs
{

namespace action
{
namespace typesupport_connext_cpp
{

DDS_TypeCode *
get_type_code__MoveBase_SendGoal_Response();

bool
ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_move_base_msgs
convert_ros_message_to_dds(
  const move_base_msgs::action::MoveBase_SendGoal_Response & ros_message,
  move_base_msgs::action::dds_::MoveBase_SendGoal_Response_ & dds_message);

bool
ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_move_base_msgs
convert_dds_message_to_ros(
  const move_base_msgs::action::dds_::MoveBase_SendGoal_Response_ & dds_message,
  move_base_msgs::action::MoveBase_SendGoal_Response & ros_message);

bool
to_cdr_stream__MoveBase_SendGoal_Response(
  const void * untyped_ros_message,
  ConnextStaticCDRStream * cdr_stream);

bool
to_message__MoveBase_SendGoal_Response(
  const ConnextStaticCDRStream * cdr_stream,
  void * untyped_ros_message);

}  // namespace typesupport_connext_cpp

}  // namespace action

}  // namespace move_base_msgs


#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_move_base_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_connext_cpp,
  move_base_msgs, action,
  MoveBase_SendGoal_Response)();

#ifdef __cplusplus
}
#endif


#include "rmw/types.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "move_base_msgs/msg/rosidl_typesupport_connext_cpp__visibility_control.h"

namespace move_base_msgs
{
namespace action
{
namespace typesupport_connext_cpp
{

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_move_base_msgs
void *
create_requester__MoveBase_SendGoal(
  void * untyped_participant,
  const char * request_topic_str,
  const char * response_topic_str,
  const void * untyped_datareader_qos,
  const void * untyped_datawriter_qos,
  void ** untyped_reader,
  void ** untyped_writer,
  void * (*allocator)(size_t));

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_move_base_msgs
const char *
destroy_requester__MoveBase_SendGoal(
  void * untyped_requester,
  void (* deallocator)(void *));

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_move_base_msgs
int64_t
send_request__MoveBase_SendGoal(
  void * untyped_requester,
  const void * untyped_ros_request);

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_move_base_msgs
void *
create_replier__MoveBase_SendGoal(
  void * untyped_participant,
  const char * request_topic_str,
  const char * response_topic_str,
  const void * untyped_datareader_qos,
  const void * untyped_datawriter_qos,
  void ** untyped_reader,
  void ** untyped_writer,
  void * (*allocator)(size_t));

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_move_base_msgs
const char *
destroy_replier__MoveBase_SendGoal(
  void * untyped_replier,
  void (* deallocator)(void *));

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_move_base_msgs
bool
take_request__MoveBase_SendGoal(
  void * untyped_replier,
  rmw_service_info_t * request_header,
  void * untyped_ros_request);

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_move_base_msgs
bool
take_response__MoveBase_SendGoal(
  void * untyped_requester,
  rmw_service_info_t * request_header,
  void * untyped_ros_response);

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_move_base_msgs
bool
send_response__MoveBase_SendGoal(
  void * untyped_replier,
  const rmw_request_id_t * request_header,
  const void * untyped_ros_response);

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_move_base_msgs
void *
get_request_datawriter__MoveBase_SendGoal(void * untyped_requester);

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_move_base_msgs
void *
get_reply_datareader__MoveBase_SendGoal(void * untyped_requester);

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_move_base_msgs
void *
get_request_datareader__MoveBase_SendGoal(void * untyped_replier);

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_move_base_msgs
void *
get_reply_datawriter__MoveBase_SendGoal(void * untyped_replier);

}  // namespace typesupport_connext_cpp
}  // namespace action
}  // namespace move_base_msgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_move_base_msgs
const rosidl_service_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
  rosidl_typesupport_connext_cpp,
  move_base_msgs, action,
  MoveBase_SendGoal)();

#ifdef __cplusplus
}
#endif
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "move_base_msgs/msg/rosidl_typesupport_connext_cpp__visibility_control.h"
// already included above
// #include "move_base_msgs/action/detail/move_base__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif

// already included above
// #include "move_base_msgs/action/dds_connext/MoveBase_Support.h"
// already included above
// #include "move_base_msgs/action/dds_connext/MoveBase_Plugin.h"
// already included above
// #include "ndds/ndds_cpp.h"

#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// forward declaration of internal CDR Stream
struct ConnextStaticCDRStream;

// forward declaration of DDS types
class DDSDomainParticipant;
class DDSDataWriter;
class DDSDataReader;


namespace move_base_msgs
{

namespace action
{
namespace typesupport_connext_cpp
{

DDS_TypeCode *
get_type_code__MoveBase_GetResult_Request();

bool
ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_move_base_msgs
convert_ros_message_to_dds(
  const move_base_msgs::action::MoveBase_GetResult_Request & ros_message,
  move_base_msgs::action::dds_::MoveBase_GetResult_Request_ & dds_message);

bool
ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_move_base_msgs
convert_dds_message_to_ros(
  const move_base_msgs::action::dds_::MoveBase_GetResult_Request_ & dds_message,
  move_base_msgs::action::MoveBase_GetResult_Request & ros_message);

bool
to_cdr_stream__MoveBase_GetResult_Request(
  const void * untyped_ros_message,
  ConnextStaticCDRStream * cdr_stream);

bool
to_message__MoveBase_GetResult_Request(
  const ConnextStaticCDRStream * cdr_stream,
  void * untyped_ros_message);

}  // namespace typesupport_connext_cpp

}  // namespace action

}  // namespace move_base_msgs


#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_move_base_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_connext_cpp,
  move_base_msgs, action,
  MoveBase_GetResult_Request)();

#ifdef __cplusplus
}
#endif


// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "move_base_msgs/msg/rosidl_typesupport_connext_cpp__visibility_control.h"
// already included above
// #include "move_base_msgs/action/detail/move_base__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif

// already included above
// #include "move_base_msgs/action/dds_connext/MoveBase_Support.h"
// already included above
// #include "move_base_msgs/action/dds_connext/MoveBase_Plugin.h"
// already included above
// #include "ndds/ndds_cpp.h"

#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// forward declaration of internal CDR Stream
struct ConnextStaticCDRStream;

// forward declaration of DDS types
class DDSDomainParticipant;
class DDSDataWriter;
class DDSDataReader;


namespace move_base_msgs
{

namespace action
{
namespace typesupport_connext_cpp
{

DDS_TypeCode *
get_type_code__MoveBase_GetResult_Response();

bool
ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_move_base_msgs
convert_ros_message_to_dds(
  const move_base_msgs::action::MoveBase_GetResult_Response & ros_message,
  move_base_msgs::action::dds_::MoveBase_GetResult_Response_ & dds_message);

bool
ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_move_base_msgs
convert_dds_message_to_ros(
  const move_base_msgs::action::dds_::MoveBase_GetResult_Response_ & dds_message,
  move_base_msgs::action::MoveBase_GetResult_Response & ros_message);

bool
to_cdr_stream__MoveBase_GetResult_Response(
  const void * untyped_ros_message,
  ConnextStaticCDRStream * cdr_stream);

bool
to_message__MoveBase_GetResult_Response(
  const ConnextStaticCDRStream * cdr_stream,
  void * untyped_ros_message);

}  // namespace typesupport_connext_cpp

}  // namespace action

}  // namespace move_base_msgs


#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_move_base_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_connext_cpp,
  move_base_msgs, action,
  MoveBase_GetResult_Response)();

#ifdef __cplusplus
}
#endif


// already included above
// #include "rmw/types.h"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "move_base_msgs/msg/rosidl_typesupport_connext_cpp__visibility_control.h"

namespace move_base_msgs
{
namespace action
{
namespace typesupport_connext_cpp
{

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_move_base_msgs
void *
create_requester__MoveBase_GetResult(
  void * untyped_participant,
  const char * request_topic_str,
  const char * response_topic_str,
  const void * untyped_datareader_qos,
  const void * untyped_datawriter_qos,
  void ** untyped_reader,
  void ** untyped_writer,
  void * (*allocator)(size_t));

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_move_base_msgs
const char *
destroy_requester__MoveBase_GetResult(
  void * untyped_requester,
  void (* deallocator)(void *));

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_move_base_msgs
int64_t
send_request__MoveBase_GetResult(
  void * untyped_requester,
  const void * untyped_ros_request);

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_move_base_msgs
void *
create_replier__MoveBase_GetResult(
  void * untyped_participant,
  const char * request_topic_str,
  const char * response_topic_str,
  const void * untyped_datareader_qos,
  const void * untyped_datawriter_qos,
  void ** untyped_reader,
  void ** untyped_writer,
  void * (*allocator)(size_t));

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_move_base_msgs
const char *
destroy_replier__MoveBase_GetResult(
  void * untyped_replier,
  void (* deallocator)(void *));

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_move_base_msgs
bool
take_request__MoveBase_GetResult(
  void * untyped_replier,
  rmw_service_info_t * request_header,
  void * untyped_ros_request);

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_move_base_msgs
bool
take_response__MoveBase_GetResult(
  void * untyped_requester,
  rmw_service_info_t * request_header,
  void * untyped_ros_response);

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_move_base_msgs
bool
send_response__MoveBase_GetResult(
  void * untyped_replier,
  const rmw_request_id_t * request_header,
  const void * untyped_ros_response);

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_move_base_msgs
void *
get_request_datawriter__MoveBase_GetResult(void * untyped_requester);

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_move_base_msgs
void *
get_reply_datareader__MoveBase_GetResult(void * untyped_requester);

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_move_base_msgs
void *
get_request_datareader__MoveBase_GetResult(void * untyped_replier);

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_move_base_msgs
void *
get_reply_datawriter__MoveBase_GetResult(void * untyped_replier);

}  // namespace typesupport_connext_cpp
}  // namespace action
}  // namespace move_base_msgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_move_base_msgs
const rosidl_service_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
  rosidl_typesupport_connext_cpp,
  move_base_msgs, action,
  MoveBase_GetResult)();

#ifdef __cplusplus
}
#endif
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "move_base_msgs/msg/rosidl_typesupport_connext_cpp__visibility_control.h"
// already included above
// #include "move_base_msgs/action/detail/move_base__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif

// already included above
// #include "move_base_msgs/action/dds_connext/MoveBase_Support.h"
// already included above
// #include "move_base_msgs/action/dds_connext/MoveBase_Plugin.h"
// already included above
// #include "ndds/ndds_cpp.h"

#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// forward declaration of internal CDR Stream
struct ConnextStaticCDRStream;

// forward declaration of DDS types
class DDSDomainParticipant;
class DDSDataWriter;
class DDSDataReader;


namespace move_base_msgs
{

namespace action
{
namespace typesupport_connext_cpp
{

DDS_TypeCode *
get_type_code__MoveBase_FeedbackMessage();

bool
ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_move_base_msgs
convert_ros_message_to_dds(
  const move_base_msgs::action::MoveBase_FeedbackMessage & ros_message,
  move_base_msgs::action::dds_::MoveBase_FeedbackMessage_ & dds_message);

bool
ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_move_base_msgs
convert_dds_message_to_ros(
  const move_base_msgs::action::dds_::MoveBase_FeedbackMessage_ & dds_message,
  move_base_msgs::action::MoveBase_FeedbackMessage & ros_message);

bool
to_cdr_stream__MoveBase_FeedbackMessage(
  const void * untyped_ros_message,
  ConnextStaticCDRStream * cdr_stream);

bool
to_message__MoveBase_FeedbackMessage(
  const ConnextStaticCDRStream * cdr_stream,
  void * untyped_ros_message);

}  // namespace typesupport_connext_cpp

}  // namespace action

}  // namespace move_base_msgs


#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_move_base_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_connext_cpp,
  move_base_msgs, action,
  MoveBase_FeedbackMessage)();

#ifdef __cplusplus
}
#endif


#endif  // MOVE_BASE_MSGS__ACTION__MOVE_BASE__ROSIDL_TYPESUPPORT_CONNEXT_CPP_HPP_
