#machine generated

add_subdirectory("log")
add_subdirectory("registry")
add_subdirectory("runtime")
add_subdirectory("server")
add_subdirectory("transport")

aux_source_directory(. SRCS)
file(GLOB HEADERS *.h *.hpp)
source_group("Include" FILES ${HEADERS}) 
list(LENGTH SRCS SRCS_LENGTH)
if(SRCS_LENGTH)
	add_library(sun.rmi OBJECT ${SRCS} ${HEADERS})
	jcpp_enable_bigobj(sun.rmi)
endif()