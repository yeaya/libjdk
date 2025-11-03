#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" classes.javax.lang.model.util_SRCS)
file(GLOB classes.javax.lang.model.util_HEADERS *.h *.hpp)
source_group("Include" FILES ${classes.javax.lang.model.util_HEADERS}) 
list(LENGTH classes.javax.lang.model.util_SRCS classes.javax.lang.model.util_SRCS_LENGTH)
if(classes.javax.lang.model.util_SRCS_LENGTH)
	add_library(classes.javax.lang.model.util OBJECT "${classes.javax.lang.model.util_SRCS}" "${classes.javax.lang.model.util_HEADERS}")
	jcpp_enable_bigobj(classes.javax.lang.model.util)
endif()