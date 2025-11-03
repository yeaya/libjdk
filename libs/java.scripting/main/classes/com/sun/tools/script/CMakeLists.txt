#machine generated

add_subdirectory("shell")

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" classes.com.sun.tools.script_SRCS)
file(GLOB classes.com.sun.tools.script_HEADERS *.h *.hpp)
source_group("Include" FILES ${classes.com.sun.tools.script_HEADERS}) 
list(LENGTH classes.com.sun.tools.script_SRCS classes.com.sun.tools.script_SRCS_LENGTH)
if(classes.com.sun.tools.script_SRCS_LENGTH)
	add_library(classes.com.sun.tools.script OBJECT "${classes.com.sun.tools.script_SRCS}" "${classes.com.sun.tools.script_HEADERS}")
	jcpp_enable_bigobj(classes.com.sun.tools.script)
endif()