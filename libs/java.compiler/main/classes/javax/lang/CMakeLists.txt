#machine generated

add_subdirectory("model")

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" classes.javax.lang_SRCS)
file(GLOB classes.javax.lang_HEADERS *.h *.hpp)
source_group("Include" FILES ${classes.javax.lang_HEADERS}) 
list(LENGTH classes.javax.lang_SRCS classes.javax.lang_SRCS_LENGTH)
if(classes.javax.lang_SRCS_LENGTH)
	add_library(classes.javax.lang OBJECT "${classes.javax.lang_SRCS}" "${classes.javax.lang_HEADERS}")
	jcpp_enable_bigobj(classes.javax.lang)
endif()