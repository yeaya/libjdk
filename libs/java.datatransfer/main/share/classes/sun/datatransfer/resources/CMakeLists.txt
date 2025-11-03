#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" classes.sun.datatransfer.res_0_SRCS)
file(GLOB classes.sun.datatransfer.res_0_HEADERS *.h *.hpp)
source_group("Include" FILES ${classes.sun.datatransfer.res_0_HEADERS}) 
list(LENGTH classes.sun.datatransfer.res_0_SRCS classes.sun.datatransfer.res_0_SRCS_LENGTH)
if(classes.sun.datatransfer.res_0_SRCS_LENGTH)
	add_library(classes.sun.datatransfer.res_0 OBJECT "${classes.sun.datatransfer.res_0_SRCS}" "${classes.sun.datatransfer.res_0_HEADERS}")
	jcpp_enable_bigobj(classes.sun.datatransfer.res_0)
endif()