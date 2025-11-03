#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" classes.sun.tools.jar.resour_1_SRCS)
file(GLOB classes.sun.tools.jar.resour_1_HEADERS *.h *.hpp)
source_group("Include" FILES ${classes.sun.tools.jar.resour_1_HEADERS}) 
list(LENGTH classes.sun.tools.jar.resour_1_SRCS classes.sun.tools.jar.resour_1_SRCS_LENGTH)
if(classes.sun.tools.jar.resour_1_SRCS_LENGTH)
	add_library(classes.sun.tools.jar.resour_1 OBJECT "${classes.sun.tools.jar.resour_1_SRCS}" "${classes.sun.tools.jar.resour_1_HEADERS}")
	jcpp_enable_bigobj(classes.sun.tools.jar.resour_1)
endif()