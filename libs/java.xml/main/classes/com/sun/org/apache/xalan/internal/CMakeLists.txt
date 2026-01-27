#machine generated

add_subdirectory("extensions")
add_subdirectory("lib")
add_subdirectory("res")
add_subdirectory("templates")
add_subdirectory("utils")
add_subdirectory("xsltc")

aux_source_directory(. SRCS)
file(GLOB HEADERS *.h *.hpp)
source_group("Include" FILES ${HEADERS}) 
list(LENGTH SRCS SRCS_LENGTH)
if(SRCS_LENGTH)
	add_library(com.sun.org.apache.xalan.inter OBJECT ${SRCS} ${HEADERS})
	jcpp_enable_bigobj(com.sun.org.apache.xalan.inter)
endif()