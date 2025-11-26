#machine generated

add_subdirectory("doclint")
add_subdirectory("javac")
add_subdirectory("sjavac")

aux_source_directory(. SRCS)
file(GLOB HEADERS *.h *.hpp)
source_group("Include" FILES ${HEADERS}) 
list(LENGTH SRCS SRCS_LENGTH)
if(SRCS_LENGTH)
	add_library(com.sun.tools OBJECT ${SRCS} ${HEADERS})
	jcpp_enable_bigobj(com.sun.tools)
endif()