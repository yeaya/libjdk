#machine generated

add_subdirectory("bcel")
add_subdirectory("xalan")
add_subdirectory("xerces")
add_subdirectory("xml")
add_subdirectory("xpath")

aux_source_directory(. SRCS)
file(GLOB HEADERS *.h *.hpp)
source_group("Include" FILES ${HEADERS}) 
list(LENGTH SRCS SRCS_LENGTH)
if(SRCS_LENGTH)
	add_library(com.sun.org.apache OBJECT ${SRCS} ${HEADERS})
	jcpp_enable_bigobj(com.sun.org.apache)
endif()