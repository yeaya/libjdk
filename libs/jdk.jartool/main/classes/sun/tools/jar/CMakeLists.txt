#machine generated

add_subdirectory("resources")

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" classes.sun.tools.jar_SRCS)
file(GLOB classes.sun.tools.jar_HEADERS *.h *.hpp)
source_group("Include" FILES ${classes.sun.tools.jar_HEADERS}) 
list(LENGTH classes.sun.tools.jar_SRCS classes.sun.tools.jar_SRCS_LENGTH)
if(classes.sun.tools.jar_SRCS_LENGTH)
	add_library(classes.sun.tools.jar OBJECT "${classes.sun.tools.jar_SRCS}" "${classes.sun.tools.jar_HEADERS}")
	jcpp_enable_bigobj(classes.sun.tools.jar)
endif()