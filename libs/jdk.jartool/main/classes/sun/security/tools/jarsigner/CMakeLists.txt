#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" classes.sun.security.tools.j_0_SRCS)
file(GLOB classes.sun.security.tools.j_0_HEADERS *.h *.hpp)
source_group("Include" FILES ${classes.sun.security.tools.j_0_HEADERS}) 
list(LENGTH classes.sun.security.tools.j_0_SRCS classes.sun.security.tools.j_0_SRCS_LENGTH)
if(classes.sun.security.tools.j_0_SRCS_LENGTH)
	add_library(classes.sun.security.tools.j_0 OBJECT "${classes.sun.security.tools.j_0_SRCS}" "${classes.sun.security.tools.j_0_HEADERS}")
	jcpp_enable_bigobj(classes.sun.security.tools.j_0)
endif()