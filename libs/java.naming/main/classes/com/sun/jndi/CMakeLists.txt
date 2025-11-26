#machine generated

add_subdirectory("ldap")
add_subdirectory("toolkit")
add_subdirectory("url")

aux_source_directory(. SRCS)
file(GLOB HEADERS *.h *.hpp)
source_group("Include" FILES ${HEADERS}) 
list(LENGTH SRCS SRCS_LENGTH)
if(SRCS_LENGTH)
	add_library(com.sun.jndi OBJECT ${SRCS} ${HEADERS})
	jcpp_enable_bigobj(com.sun.jndi)
endif()