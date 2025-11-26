#machine generated

add_subdirectory("doctree")
add_subdirectory("tree")
add_subdirectory("util")

aux_source_directory(. SRCS)
file(GLOB HEADERS *.h *.hpp)
source_group("Include" FILES ${HEADERS}) 
list(LENGTH SRCS SRCS_LENGTH)
if(SRCS_LENGTH)
	add_library(com.sun.source OBJECT ${SRCS} ${HEADERS})
	jcpp_enable_bigobj(com.sun.source)
endif()