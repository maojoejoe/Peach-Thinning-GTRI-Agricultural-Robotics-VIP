#----------------------------------------------------------------
# Generated CMake target import file for configuration "RelWithDebInfo".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "rviz_rendering::rviz_rendering" for configuration "RelWithDebInfo"
set_property(TARGET rviz_rendering::rviz_rendering APPEND PROPERTY IMPORTED_CONFIGURATIONS RELWITHDEBINFO)
set_target_properties(rviz_rendering::rviz_rendering PROPERTIES
  IMPORTED_IMPLIB_RELWITHDEBINFO "${_IMPORT_PREFIX}/lib/rviz_rendering.lib"
  IMPORTED_LOCATION_RELWITHDEBINFO "${_IMPORT_PREFIX}/bin/rviz_rendering.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS rviz_rendering::rviz_rendering )
list(APPEND _IMPORT_CHECK_FILES_FOR_rviz_rendering::rviz_rendering "${_IMPORT_PREFIX}/lib/rviz_rendering.lib" "${_IMPORT_PREFIX}/bin/rviz_rendering.dll" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
