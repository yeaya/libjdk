#machine generated

add_subdirectory("algorithms")
add_subdirectory("c14n")
add_subdirectory("exceptions")
add_subdirectory("keys")
add_subdirectory("parser")
add_subdirectory("signature")
add_subdirectory("transforms")
add_subdirectory("utils")

aux_source_directory(. SRCS)
file(GLOB HEADERS *.h *.hpp)
source_group("Include" FILES ${HEADERS}) 
list(LENGTH SRCS SRCS_LENGTH)
if(SRCS_LENGTH)
	add_library(com.sun.org.apache.xml.inter_0 OBJECT ${SRCS} ${HEADERS})
	jcpp_enable_bigobj(com.sun.org.apache.xml.inter_0)
endif()