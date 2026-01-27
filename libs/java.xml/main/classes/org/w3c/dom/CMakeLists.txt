#machine generated

add_subdirectory("bootstrap")
add_subdirectory("events")
add_subdirectory("ls")
add_subdirectory("ranges")
add_subdirectory("traversal")
add_subdirectory("views")

aux_source_directory(. SRCS)
file(GLOB HEADERS *.h *.hpp)
source_group("Include" FILES ${HEADERS}) 
list(LENGTH SRCS SRCS_LENGTH)
if(SRCS_LENGTH)
	add_library(org.w3c.dom OBJECT ${SRCS} ${HEADERS})
	jcpp_enable_bigobj(org.w3c.dom)
endif()