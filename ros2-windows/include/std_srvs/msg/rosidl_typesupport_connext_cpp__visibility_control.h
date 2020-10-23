// generated from
// rosidl_typesupport_connext_cpp/resource/rosidl_typesupport_connext_cpp__visibility_control.h.in
// generated code does not contain a copyright notice

#ifndef STD_SRVS__MSG__ROSIDL_TYPESUPPORT_CONNEXT_CPP__VISIBILITY_CONTROL_H_
#define STD_SRVS__MSG__ROSIDL_TYPESUPPORT_CONNEXT_CPP__VISIBILITY_CONTROL_H_

#ifdef __cplusplus
extern "C"
{
#endif

// This logic was borrowed (then namespaced) from the examples on the gcc wiki:
//     https://gcc.gnu.org/wiki/Visibility

#if defined _WIN32 || defined __CYGWIN__
  #ifdef __GNUC__
    #define ROSIDL_TYPESUPPORT_CONNEXT_CPP_EXPORT_std_srvs __attribute__ ((dllexport))
    #define ROSIDL_TYPESUPPORT_CONNEXT_CPP_IMPORT_std_srvs __attribute__ ((dllimport))
  #else
    #define ROSIDL_TYPESUPPORT_CONNEXT_CPP_EXPORT_std_srvs __declspec(dllexport)
    #define ROSIDL_TYPESUPPORT_CONNEXT_CPP_IMPORT_std_srvs __declspec(dllimport)
  #endif
  #ifdef ROSIDL_TYPESUPPORT_CONNEXT_CPP_BUILDING_DLL_std_srvs
    #define ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_std_srvs ROSIDL_TYPESUPPORT_CONNEXT_CPP_EXPORT_std_srvs
  #else
    #define ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_std_srvs ROSIDL_TYPESUPPORT_CONNEXT_CPP_IMPORT_std_srvs
  #endif
#else
  #define ROSIDL_TYPESUPPORT_CONNEXT_CPP_EXPORT_std_srvs __attribute__ ((visibility("default")))
  #define ROSIDL_TYPESUPPORT_CONNEXT_CPP_IMPORT_std_srvs
  #if __GNUC__ >= 4
    #define ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_std_srvs __attribute__ ((visibility("default")))
  #else
    #define ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_std_srvs
  #endif
#endif

#ifdef __cplusplus
}
#endif

#endif  // STD_SRVS__MSG__ROSIDL_TYPESUPPORT_CONNEXT_CPP__VISIBILITY_CONTROL_H_
