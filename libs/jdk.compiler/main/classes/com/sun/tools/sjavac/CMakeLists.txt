#machine generated

add_subdirectory("client")
add_subdirectory("comp")
add_subdirectory("options")
add_subdirectory("pubapi")
add_subdirectory("server")

aux_source_directory(. SRCS)
file(GLOB HEADERS *.h *.hpp)
source_group("Include" FILES ${HEADERS}) 
list(LENGTH SRCS SRCS_LENGTH)
if(SRCS_LENGTH)
	add_library(com.sun.tools.sjavac OBJECT ${SRCS} ${HEADERS})
	jcpp_enable_bigobj(com.sun.tools.sjavac)
endif()