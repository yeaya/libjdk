#machine generated

add_subdirectory("file")

aux_source_directory(. SRCS)
file(GLOB HEADERS *.h *.hpp)
source_group("Include" FILES ${HEADERS}) 
list(LENGTH SRCS SRCS_LENGTH)
if(SRCS_LENGTH)
	add_library(com.sun.nio OBJECT ${SRCS} ${HEADERS})
	jcpp_enable_bigobj(com.sun.nio)
endif()