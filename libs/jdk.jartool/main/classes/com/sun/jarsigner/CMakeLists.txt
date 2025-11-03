#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" classes.com.sun.jarsigner_SRCS)
file(GLOB classes.com.sun.jarsigner_HEADERS *.h *.hpp)
source_group("Include" FILES ${classes.com.sun.jarsigner_HEADERS}) 
list(LENGTH classes.com.sun.jarsigner_SRCS classes.com.sun.jarsigner_SRCS_LENGTH)
if(classes.com.sun.jarsigner_SRCS_LENGTH)
	add_library(classes.com.sun.jarsigner OBJECT "${classes.com.sun.jarsigner_SRCS}" "${classes.com.sun.jarsigner_HEADERS}")
	jcpp_enable_bigobj(classes.com.sun.jarsigner)
endif()