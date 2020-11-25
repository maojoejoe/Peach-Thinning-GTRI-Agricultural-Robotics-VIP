#----------------------------------------------------------------
# Generated CMake target import file for configuration "RelWithDebInfo".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "console_bridge::console_bridge" for configuration "RelWithDebInfo"
set_property(TARGET console_bridge::console_bridge APPEND PROPERTY IMPORTED_CONFIGURATIONS RELWITHDEBINFO)
set_target_properties(console_bridge::console_bridge PROPERTIES
  IMPORTED_IMPLIB_RELWITHDEBINFO "${_IMPORT_PREFIX}/lib/console_bridge.lib"
  IMPORTED_LOCATION_RELWITHDEBINFO "${_IMPORT_PREFIX}/bin/console_bridge.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS console_bridge::console_bridge )
list(APPEND _IMPORT_CHECK_FILES_FOR_console_bridge::console_bridge "${_IMPORT_PREFIX}/lib/console_bridge.lib" "${_IMPORT_PREFIX}/bin/console_bridge.dll" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
