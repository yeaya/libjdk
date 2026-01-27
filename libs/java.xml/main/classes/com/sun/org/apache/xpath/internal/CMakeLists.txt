#machine generated

add_subdirectory("axes")
add_subdirectory("compiler")
add_subdirectory("functions")
add_subdirectory("jaxp")
add_subdirectory("objects")
add_subdirectory("operations")
add_subdirectory("patterns")
add_subdirectory("res")

aux_source_directory(. SRCS)
file(GLOB HEADERS *.h *.hpp)
source_group("Include" FILES ${HEADERS}) 
list(LENGTH SRCS SRCS_LENGTH)
if(SRCS_LENGTH)
	add_library(com.sun.org.apache.xpath.inter OBJECT ${SRCS} ${HEADERS})
	jcpp_enable_bigobj(com.sun.org.apache.xpath.inter)
endif()