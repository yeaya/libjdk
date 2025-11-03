#machine generated

add_subdirectory("processing")

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" classes.javax.annotation_SRCS)
file(GLOB classes.javax.annotation_HEADERS *.h *.hpp)
source_group("Include" FILES ${classes.javax.annotation_HEADERS}) 
list(LENGTH classes.javax.annotation_SRCS classes.javax.annotation_SRCS_LENGTH)
if(classes.javax.annotation_SRCS_LENGTH)
	add_library(classes.javax.annotation OBJECT "${classes.javax.annotation_SRCS}" "${classes.javax.annotation_HEADERS}")
	jcpp_enable_bigobj(classes.javax.annotation)
endif()