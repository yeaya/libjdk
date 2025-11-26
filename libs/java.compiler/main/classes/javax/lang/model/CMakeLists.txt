#machine generated

add_subdirectory("element")
add_subdirectory("type")
add_subdirectory("util")

aux_source_directory(. SRCS)
file(GLOB HEADERS *.h *.hpp)
source_group("Include" FILES ${HEADERS}) 
list(LENGTH SRCS SRCS_LENGTH)
if(SRCS_LENGTH)
	add_library(javax.lang.model OBJECT ${SRCS} ${HEADERS})
	jcpp_enable_bigobj(javax.lang.model)
endif()