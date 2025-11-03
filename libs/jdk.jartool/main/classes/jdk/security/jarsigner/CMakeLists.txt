#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" classes.jdk.security.jarsigner_SRCS)
file(GLOB classes.jdk.security.jarsigner_HEADERS *.h *.hpp)
source_group("Include" FILES ${classes.jdk.security.jarsigner_HEADERS}) 
list(LENGTH classes.jdk.security.jarsigner_SRCS classes.jdk.security.jarsigner_SRCS_LENGTH)
if(classes.jdk.security.jarsigner_SRCS_LENGTH)
	add_library(classes.jdk.security.jarsigner OBJECT "${classes.jdk.security.jarsigner_SRCS}" "${classes.jdk.security.jarsigner_HEADERS}")
	jcpp_enable_bigobj(classes.jdk.security.jarsigner)
endif()