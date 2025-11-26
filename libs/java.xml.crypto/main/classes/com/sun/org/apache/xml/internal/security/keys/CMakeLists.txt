#machine generated

add_subdirectory("content")
add_subdirectory("keyresolver")
add_subdirectory("storage")

aux_source_directory(. SRCS)
file(GLOB HEADERS *.h *.hpp)
source_group("Include" FILES ${HEADERS}) 
list(LENGTH SRCS SRCS_LENGTH)
if(SRCS_LENGTH)
	add_library(com.sun.org.apache.xml.inter_7 OBJECT ${SRCS} ${HEADERS})
	jcpp_enable_bigobj(com.sun.org.apache.xml.inter_7)
endif()