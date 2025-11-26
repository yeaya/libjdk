#machine generated

add_subdirectory("digest")
add_subdirectory("ntlm")
add_subdirectory("util")

aux_source_directory(. SRCS)
file(GLOB HEADERS *.h *.hpp)
source_group("Include" FILES ${HEADERS}) 
list(LENGTH SRCS SRCS_LENGTH)
if(SRCS_LENGTH)
	add_library(com.sun.security.sasl OBJECT ${SRCS} ${HEADERS})
	jcpp_enable_bigobj(com.sun.security.sasl)
endif()