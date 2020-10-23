// generated from rosidl_typesupport_connext_cpp/resource/idl__rosidl_typesupport_connext_cpp.hpp.em
// with input from geometry_msgs:msg\PolygonStamped.idl
// generated code does not contain a copyright notice


#ifndef GEOMETRY_MSGS__MSG__POLYGON_STAMPED__ROSIDL_TYPESUPPORT_CONNEXT_CPP_HPP_
#define GEOMETRY_MSGS__MSG__POLYGON_STAMPED__ROSIDL_TYPESUPPORT_CONNEXT_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "geometry_msgs/msg/rosidl_typesupport_connext_cpp__visibility_control.h"
#include "geometry_msgs/msg/detail/polygon_stamped__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif

#include "geometry_msgs/msg/dds_connext/PolygonStamped_Support.h"
#include "geometry_msgs/msg/dds_connext/PolygonStamped_Plugin.h"
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


namespace geometry_msgs
{

namespace msg
{
namespace typesupport_connext_cpp
{

DDS_TypeCode *
get_type_code__PolygonStamped();

bool
ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_geometry_msgs
convert_ros_message_to_dds(
  const geometry_msgs::msg::PolygonStamped & ros_message,
  geometry_msgs::msg::dds_::PolygonStamped_ & dds_message);

bool
ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_geometry_msgs
convert_dds_message_to_ros(
  const geometry_msgs::msg::dds_::PolygonStamped_ & dds_message,
  geometry_msgs::msg::PolygonStamped & ros_message);

bool
to_cdr_stream__PolygonStamped(
  const void * untyped_ros_message,
  ConnextStaticCDRStream * cdr_stream);

bool
to_message__PolygonStamped(
  const ConnextStaticCDRStream * cdr_stream,
  void * untyped_ros_message);

}  // namespace typesupport_connext_cpp

}  // namespace msg

}  // namespace geometry_msgs


#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_geometry_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_connext_cpp,
  geometry_msgs, msg,
  PolygonStamped)();

#ifdef __cplusplus
}
#endif


#endif  // GEOMETRY_MSGS__MSG__POLYGON_STAMPED__ROSIDL_TYPESUPPORT_CONNEXT_CPP_HPP_
