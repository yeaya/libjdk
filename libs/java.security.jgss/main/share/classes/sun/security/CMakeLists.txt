#machine generated

add_subdirectory("jgss")
add_subdirectory("krb5")

aux_source_directory(. SRCS)
file(GLOB HEADERS *.h *.hpp)
source_group("Include" FILES ${HEADERS}) 
list(LENGTH SRCS SRCS_LENGTH)
if(SRCS_LENGTH)
	add_library(sun.security OBJECT ${SRCS} ${HEADERS})
	jcpp_enable_bigobj(sun.security)
endif()