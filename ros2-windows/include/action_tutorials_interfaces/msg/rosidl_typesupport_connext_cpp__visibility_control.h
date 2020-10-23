// generated from
// rosidl_typesupport_connext_cpp/resource/rosidl_typesupport_connext_cpp__visibility_control.h.in
// generated code does not contain a copyright notice

#ifndef ACTION_TUTORIALS_INTERFACES__MSG__ROSIDL_TYPESUPPORT_CONNEXT_CPP__VISIBILITY_CONTROL_H_
#define ACTION_TUTORIALS_INTERFACES__MSG__ROSIDL_TYPESUPPORT_CONNEXT_CPP__VISIBILITY_CONTROL_H_

#ifdef __cplusplus
extern "C"
{
#endif

// This logic was borrowed (then namespaced) from the examples on the gcc wiki:
//     https://gcc.gnu.org/wiki/Visibility

#if defined _WIN32 || defined __CYGWIN__
  #ifdef __GNUC__
    #define ROSIDL_TYPESUPPORT_CONNEXT_CPP_EXPORT_action_tutorials_interfaces __attribute__ ((dllexport))
    #define ROSIDL_TYPESUPPORT_CONNEXT_CPP_IMPORT_action_tutorials_interfaces __attribute__ ((dllimport))
  #else
    #define ROSIDL_TYPESUPPORT_CONNEXT_CPP_EXPORT_action_tutorials_interfaces __declspec(dllexport)
    #define ROSIDL_TYPESUPPORT_CONNEXT_CPP_IMPORT_action_tutorials_interfaces __declspec(dllimport)
  #endif
  #ifdef ROSIDL_TYPESUPPORT_CONNEXT_CPP_BUILDING_DLL_action_tutorials_interfaces
    #define ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_action_tutorials_interfaces ROSIDL_TYPESUPPORT_CONNEXT_CPP_EXPORT_action_tutorials_interfaces
  #else
    #define ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_action_tutorials_interfaces ROSIDL_TYPESUPPORT_CONNEXT_CPP_IMPORT_action_tutorials_interfaces
  #endif
#else
  #define ROSIDL_TYPESUPPORT_CONNEXT_CPP_EXPORT_action_tutorials_interfaces __attribute__ ((visibility("default")))
  #define ROSIDL_TYPESUPPORT_CONNEXT_CPP_IMPORT_action_tutorials_interfaces
  #if __GNUC__ >= 4
    #define ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_action_tutorials_interfaces __attribute__ ((visibility("default")))
  #else
    #define ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_action_tutorials_interfaces
  #endif
#endif

#ifdef __cplusplus
}
#endif

#endif  // ACTION_TUTORIALS_INTERFACES__MSG__ROSIDL_TYPESUPPORT_CONNEXT_CPP__VISIBILITY_CONTROL_H_
