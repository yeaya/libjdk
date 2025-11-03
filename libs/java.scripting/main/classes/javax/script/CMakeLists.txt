#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" classes.javax.script_SRCS)
file(GLOB classes.javax.script_HEADERS *.h *.hpp)
source_group("Include" FILES ${classes.javax.script_HEADERS}) 
list(LENGTH classes.javax.script_SRCS classes.javax.script_SRCS_LENGTH)
if(classes.javax.script_SRCS_LENGTH)
	add_library(classes.javax.script OBJECT "${classes.javax.script_SRCS}" "${classes.javax.script_HEADERS}")
	jcpp_enable_bigobj(classes.javax.script)
endif()