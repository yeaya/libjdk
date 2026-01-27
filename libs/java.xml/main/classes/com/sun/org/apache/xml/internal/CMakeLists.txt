#machine generated

add_subdirectory("dtm")
add_subdirectory("res")
add_subdirectory("serialize")
add_subdirectory("serializer")
add_subdirectory("utils")

aux_source_directory(. SRCS)
file(GLOB HEADERS *.h *.hpp)
source_group("Include" FILES ${HEADERS}) 
list(LENGTH SRCS SRCS_LENGTH)
if(SRCS_LENGTH)
	add_library(com.sun.org.apache.xml.interna OBJECT ${SRCS} ${HEADERS})
	jcpp_enable_bigobj(com.sun.org.apache.xml.interna)
endif()