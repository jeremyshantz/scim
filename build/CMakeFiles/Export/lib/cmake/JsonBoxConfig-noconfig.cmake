#----------------------------------------------------------------
# Generated CMake target import file for configuration "".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "JsonBox" for configuration ""
set_property(TARGET JsonBox APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(JsonBox PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libJsonBox.a"
  )

list(APPEND _IMPORT_CHECK_TARGETS JsonBox )
list(APPEND _IMPORT_CHECK_FILES_FOR_JsonBox "${_IMPORT_PREFIX}/lib/libJsonBox.a" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)