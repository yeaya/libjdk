#machine generated

add_subdirectory("ccache")
add_subdirectory("crypto")
add_subdirectory("ktab")
add_subdirectory("rcache")
add_subdirectory("util")

aux_source_directory(. SRCS)
file(GLOB HEADERS *.h *.hpp)
source_group("Include" FILES ${HEADERS}) 
list(LENGTH SRCS SRCS_LENGTH)
if(SRCS_LENGTH)
	add_library(sun.security.krb5.internal OBJECT ${SRCS} ${HEADERS})
	jcpp_enable_bigobj(sun.security.krb5.internal)
endif()