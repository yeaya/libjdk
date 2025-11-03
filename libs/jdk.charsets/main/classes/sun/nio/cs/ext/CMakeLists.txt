#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" classes.sun.nio.cs.ext_SRCS)
file(GLOB classes.sun.nio.cs.ext_HEADERS *.h *.hpp)
source_group("Include" FILES ${classes.sun.nio.cs.ext_HEADERS}) 
list(LENGTH classes.sun.nio.cs.ext_SRCS classes.sun.nio.cs.ext_SRCS_LENGTH)
if(classes.sun.nio.cs.ext_SRCS_LENGTH)
	add_library(classes.sun.nio.cs.ext OBJECT "${classes.sun.nio.cs.ext_SRCS}" "${classes.sun.nio.cs.ext_HEADERS}")
	jcpp_enable_bigobj(classes.sun.nio.cs.ext)
endif()