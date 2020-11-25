#----------------------------------------------------------------
# Generated CMake target import file for configuration "RelWithDebInfo".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "rclcpp::rclcpp" for configuration "RelWithDebInfo"
set_property(TARGET rclcpp::rclcpp APPEND PROPERTY IMPORTED_CONFIGURATIONS RELWITHDEBINFO)
set_target_properties(rclcpp::rclcpp PROPERTIES
  IMPORTED_IMPLIB_RELWITHDEBINFO "${_IMPORT_PREFIX}/lib/rclcpp.lib"
  IMPORTED_LOCATION_RELWITHDEBINFO "${_IMPORT_PREFIX}/bin/rclcpp.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS rclcpp::rclcpp )
list(APPEND _IMPORT_CHECK_FILES_FOR_rclcpp::rclcpp "${_IMPORT_PREFIX}/lib/rclcpp.lib" "${_IMPORT_PREFIX}/bin/rclcpp.dll" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
