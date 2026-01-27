#machine generated

add_subdirectory("java_cup")
add_subdirectory("org")
add_subdirectory("xml")

aux_source_directory(. SRCS)
file(GLOB HEADERS *.h *.hpp)
source_group("Include" FILES ${HEADERS}) 
list(LENGTH SRCS SRCS_LENGTH)
if(SRCS_LENGTH)
	add_library(com.sun OBJECT ${SRCS} ${HEADERS})
	jcpp_enable_bigobj(com.sun)
endif()