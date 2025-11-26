#machine generated

add_subdirectory("dgc")
add_subdirectory("registry")
add_subdirectory("server")

aux_source_directory(. SRCS)
file(GLOB HEADERS *.h *.hpp)
source_group("Include" FILES ${HEADERS}) 
list(LENGTH SRCS SRCS_LENGTH)
if(SRCS_LENGTH)
	add_library(java.rmi OBJECT ${SRCS} ${HEADERS})
	jcpp_enable_bigobj(java.rmi)
endif()