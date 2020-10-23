#----------------------------------------------------------------
# Generated CMake target import file for configuration "RelWithDebInfo".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "rviz_default_plugins::rviz_default_plugins" for configuration "RelWithDebInfo"
set_property(TARGET rviz_default_plugins::rviz_default_plugins APPEND PROPERTY IMPORTED_CONFIGURATIONS RELWITHDEBINFO)
set_target_properties(rviz_default_plugins::rviz_default_plugins PROPERTIES
  IMPORTED_IMPLIB_RELWITHDEBINFO "${_IMPORT_PREFIX}/lib/rviz_default_plugins.lib"
  IMPORTED_LOCATION_RELWITHDEBINFO "${_IMPORT_PREFIX}/bin/rviz_default_plugins.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS rviz_default_plugins::rviz_default_plugins )
list(APPEND _IMPORT_CHECK_FILES_FOR_rviz_default_plugins::rviz_default_plugins "${_IMPORT_PREFIX}/lib/rviz_default_plugins.lib" "${_IMPORT_PREFIX}/bin/rviz_default_plugins.dll" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
