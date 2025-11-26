#machine generated

add_subdirectory("loading")
add_subdirectory("modelmbean")
add_subdirectory("monitor")
add_subdirectory("openmbean")
add_subdirectory("relation")
add_subdirectory("remote")
add_subdirectory("timer")

aux_source_directory(. SRCS)
file(GLOB HEADERS *.h *.hpp)
source_group("Include" FILES ${HEADERS}) 
list(LENGTH SRCS SRCS_LENGTH)
if(SRCS_LENGTH)
	add_library(javax.management OBJECT ${SRCS} ${HEADERS})
	jcpp_enable_bigobj(javax.management)
endif()