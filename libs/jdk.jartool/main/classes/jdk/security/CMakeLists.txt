#machine generated

add_subdirectory("jarsigner")

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" classes.jdk.security_SRCS)
file(GLOB classes.jdk.security_HEADERS *.h *.hpp)
source_group("Include" FILES ${classes.jdk.security_HEADERS}) 
list(LENGTH classes.jdk.security_SRCS classes.jdk.security_SRCS_LENGTH)
if(classes.jdk.security_SRCS_LENGTH)
	add_library(classes.jdk.security OBJECT "${classes.jdk.security_SRCS}" "${classes.jdk.security_HEADERS}")
	jcpp_enable_bigobj(classes.jdk.security)
endif()