#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" classes.sun.net.httpserver_SRCS)
file(GLOB classes.sun.net.httpserver_HEADERS *.h *.hpp)
source_group("Include" FILES ${classes.sun.net.httpserver_HEADERS}) 
list(LENGTH classes.sun.net.httpserver_SRCS classes.sun.net.httpserver_SRCS_LENGTH)
if(classes.sun.net.httpserver_SRCS_LENGTH)
	add_library(classes.sun.net.httpserver OBJECT "${classes.sun.net.httpserver_SRCS}" "${classes.sun.net.httpserver_HEADERS}")
	jcpp_enable_bigobj(classes.sun.net.httpserver)
endif()