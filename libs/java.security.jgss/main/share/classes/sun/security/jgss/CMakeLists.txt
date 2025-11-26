#machine generated

add_subdirectory("krb5")
add_subdirectory("spi")
add_subdirectory("spnego")
add_subdirectory("wrapper")

aux_source_directory(. SRCS)
file(GLOB HEADERS *.h *.hpp)
source_group("Include" FILES ${HEADERS}) 
list(LENGTH SRCS SRCS_LENGTH)
if(SRCS_LENGTH)
	add_library(sun.security.jgss OBJECT ${SRCS} ${HEADERS})
	jcpp_enable_bigobj(sun.security.jgss)
endif()