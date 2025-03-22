# This file was automatically generated for projects
# without default 'CMakeLists.txt' file.

FILE(GLOB_RECURSE app_sources ${CMAKE_SOURCE_DIR}/src/*.*)

set(COMPONENT_ADD_INCLUDEDIRS
	"."
	"${CMAKE_CURRENT_LIST_DIR}"
)

idf_component_register( 
	SRCS ${app_sources}
    INCLUDE_DIRS ${COMPONENT_ADD_INCLUDEDIRS}
)
