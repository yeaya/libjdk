#machine generated

add_subdirectory("dependencies")

aux_source_directory(. SRCS)
file(GLOB HEADERS *.h *.hpp)
source_group("Include" FILES ${HEADERS}) 
list(LENGTH SRCS SRCS_LENGTH)
if(SRCS_LENGTH)
	add_library(com.sun.tools.sjavac.comp OBJECT ${SRCS} ${HEADERS})
	jcpp_enable_bigobj(com.sun.tools.sjavac.comp)
endif()