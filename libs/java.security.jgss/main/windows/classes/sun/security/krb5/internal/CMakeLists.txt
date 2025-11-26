#machine generated

add_subdirectory("tools")

aux_source_directory(. SRCS)
file(GLOB HEADERS *.h *.hpp)
source_group("Include" FILES ${HEADERS}) 
list(LENGTH SRCS SRCS_LENGTH)
if(SRCS_LENGTH)
	add_library(windows.sun.security.krb5.inte OBJECT ${SRCS} ${HEADERS})
	jcpp_enable_bigobj(windows.sun.security.krb5.inte)
endif()