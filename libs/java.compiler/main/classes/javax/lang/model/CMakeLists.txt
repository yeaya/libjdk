#machine generated

add_subdirectory("element")
add_subdirectory("type")
add_subdirectory("util")

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" classes.javax.lang.model_SRCS)
file(GLOB classes.javax.lang.model_HEADERS *.h *.hpp)
source_group("Include" FILES ${classes.javax.lang.model_HEADERS}) 
list(LENGTH classes.javax.lang.model_SRCS classes.javax.lang.model_SRCS_LENGTH)
if(classes.javax.lang.model_SRCS_LENGTH)
	add_library(classes.javax.lang.model OBJECT "${classes.javax.lang.model_SRCS}" "${classes.javax.lang.model_HEADERS}")
	jcpp_enable_bigobj(classes.javax.lang.model)
endif()