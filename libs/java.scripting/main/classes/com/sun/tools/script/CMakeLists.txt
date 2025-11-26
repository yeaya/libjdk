#machine generated

add_subdirectory("shell")

aux_source_directory(. SRCS)
file(GLOB HEADERS *.h *.hpp)
source_group("Include" FILES ${HEADERS}) 
list(LENGTH SRCS SRCS_LENGTH)
if(SRCS_LENGTH)
	add_library(com.sun.tools.script OBJECT ${SRCS} ${HEADERS})
	jcpp_enable_bigobj(com.sun.tools.script)
endif()