#----------------------------------------------------------------
# Generated CMake target import file for configuration "RelWithDebInfo".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "rosbag2_compression::rosbag2_compression" for configuration "RelWithDebInfo"
set_property(TARGET rosbag2_compression::rosbag2_compression APPEND PROPERTY IMPORTED_CONFIGURATIONS RELWITHDEBINFO)
set_target_properties(rosbag2_compression::rosbag2_compression PROPERTIES
  IMPORTED_IMPLIB_RELWITHDEBINFO "${_IMPORT_PREFIX}/lib/rosbag2_compression.lib"
  IMPORTED_LOCATION_RELWITHDEBINFO "${_IMPORT_PREFIX}/bin/rosbag2_compression.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS rosbag2_compression::rosbag2_compression )
list(APPEND _IMPORT_CHECK_FILES_FOR_rosbag2_compression::rosbag2_compression "${_IMPORT_PREFIX}/lib/rosbag2_compression.lib" "${_IMPORT_PREFIX}/bin/rosbag2_compression.dll" )

# Import target "rosbag2_compression::rosbag2_compression_zstd" for configuration "RelWithDebInfo"
set_property(TARGET rosbag2_compression::rosbag2_compression_zstd APPEND PROPERTY IMPORTED_CONFIGURATIONS RELWITHDEBINFO)
set_target_properties(rosbag2_compression::rosbag2_compression_zstd PROPERTIES
  IMPORTED_IMPLIB_RELWITHDEBINFO "${_IMPORT_PREFIX}/lib/rosbag2_compression_zstd.lib"
  IMPORTED_LOCATION_RELWITHDEBINFO "${_IMPORT_PREFIX}/bin/rosbag2_compression_zstd.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS rosbag2_compression::rosbag2_compression_zstd )
list(APPEND _IMPORT_CHECK_FILES_FOR_rosbag2_compression::rosbag2_compression_zstd "${_IMPORT_PREFIX}/lib/rosbag2_compression_zstd.lib" "${_IMPORT_PREFIX}/bin/rosbag2_compression_zstd.dll" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
