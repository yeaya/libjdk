#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" classes.javax.tools_SRCS)
file(GLOB classes.javax.tools_HEADERS *.h *.hpp)
source_group("Include" FILES ${classes.javax.tools_HEADERS}) 
list(LENGTH classes.javax.tools_SRCS classes.javax.tools_SRCS_LENGTH)
if(classes.javax.tools_SRCS_LENGTH)
	add_library(classes.javax.tools OBJECT "${classes.javax.tools_SRCS}" "${classes.javax.tools_HEADERS}")
	jcpp_enable_bigobj(classes.javax.tools)
endif()