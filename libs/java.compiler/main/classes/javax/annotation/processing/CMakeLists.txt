#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" classes.javax.annotation.pro_0_SRCS)
file(GLOB classes.javax.annotation.pro_0_HEADERS *.h *.hpp)
source_group("Include" FILES ${classes.javax.annotation.pro_0_HEADERS}) 
list(LENGTH classes.javax.annotation.pro_0_SRCS classes.javax.annotation.pro_0_SRCS_LENGTH)
if(classes.javax.annotation.pro_0_SRCS_LENGTH)
	add_library(classes.javax.annotation.pro_0 OBJECT "${classes.javax.annotation.pro_0_SRCS}" "${classes.javax.annotation.pro_0_HEADERS}")
	jcpp_enable_bigobj(classes.javax.annotation.pro_0)
endif()