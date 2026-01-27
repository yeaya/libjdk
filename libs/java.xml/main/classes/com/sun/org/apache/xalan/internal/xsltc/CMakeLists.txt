#machine generated

add_subdirectory("compiler")
add_subdirectory("dom")
add_subdirectory("runtime")
add_subdirectory("trax")
add_subdirectory("util")

aux_source_directory(. SRCS)
file(GLOB HEADERS *.h *.hpp)
source_group("Include" FILES ${HEADERS}) 
list(LENGTH SRCS SRCS_LENGTH)
if(SRCS_LENGTH)
	add_library(com.sun.org.apache.xalan.int_8 OBJECT ${SRCS} ${HEADERS})
	jcpp_enable_bigobj(com.sun.org.apache.xalan.int_8)
endif()