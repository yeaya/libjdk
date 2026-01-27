#machine generated

add_subdirectory("dtd")
add_subdirectory("dv")
add_subdirectory("io")
add_subdirectory("msg")
add_subdirectory("validation")
add_subdirectory("xpath")
add_subdirectory("xs")

aux_source_directory(. SRCS)
file(GLOB HEADERS *.h *.hpp)
source_group("Include" FILES ${HEADERS}) 
list(LENGTH SRCS SRCS_LENGTH)
if(SRCS_LENGTH)
	add_library(com.sun.org.apache.xerces.i_18 OBJECT ${SRCS} ${HEADERS})
	jcpp_enable_bigobj(com.sun.org.apache.xerces.i_18)
endif()