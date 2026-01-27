#machine generated

add_subdirectory("dom")

aux_source_directory(. SRCS)
file(GLOB HEADERS *.h *.hpp)
source_group("Include" FILES ${HEADERS}) 
list(LENGTH SRCS SRCS_LENGTH)
if(SRCS_LENGTH)
	add_library(org.w3c OBJECT ${SRCS} ${HEADERS})
	jcpp_enable_bigobj(org.w3c)
endif()