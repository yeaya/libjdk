#machine generated

add_subdirectory("nonvalidating")

aux_source_directory(. SRCS)
file(GLOB HEADERS *.h *.hpp)
source_group("Include" FILES ${HEADERS}) 
list(LENGTH SRCS SRCS_LENGTH)
if(SRCS_LENGTH)
	add_library(com.sun.xml.internal.stream.dt OBJECT ${SRCS} ${HEADERS})
	jcpp_enable_bigobj(com.sun.xml.internal.stream.dt)
endif()