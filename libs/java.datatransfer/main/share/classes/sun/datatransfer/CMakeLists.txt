#machine generated

add_subdirectory("resources")

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" classes.sun.datatransfer_SRCS)
file(GLOB classes.sun.datatransfer_HEADERS *.h *.hpp)
source_group("Include" FILES ${classes.sun.datatransfer_HEADERS}) 
list(LENGTH classes.sun.datatransfer_SRCS classes.sun.datatransfer_SRCS_LENGTH)
if(classes.sun.datatransfer_SRCS_LENGTH)
	add_library(classes.sun.datatransfer OBJECT "${classes.sun.datatransfer_SRCS}" "${classes.sun.datatransfer_HEADERS}")
	jcpp_enable_bigobj(classes.sun.datatransfer)
endif()