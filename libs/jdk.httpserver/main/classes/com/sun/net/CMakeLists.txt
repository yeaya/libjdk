#machine generated

add_subdirectory("httpserver")

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" classes.com.sun.net_SRCS)
file(GLOB classes.com.sun.net_HEADERS *.h *.hpp)
source_group("Include" FILES ${classes.com.sun.net_HEADERS}) 
list(LENGTH classes.com.sun.net_SRCS classes.com.sun.net_SRCS_LENGTH)
if(classes.com.sun.net_SRCS_LENGTH)
	add_library(classes.com.sun.net OBJECT "${classes.com.sun.net_SRCS}" "${classes.com.sun.net_HEADERS}")
	jcpp_enable_bigobj(classes.com.sun.net)
endif()