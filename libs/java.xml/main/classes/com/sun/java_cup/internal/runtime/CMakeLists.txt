#machine generated

aux_source_directory(. SRCS)
file(GLOB HEADERS *.h *.hpp)
source_group("Include" FILES ${HEADERS}) 
list(LENGTH SRCS SRCS_LENGTH)
if(SRCS_LENGTH)
	add_library(com.sun.java_cup.internal.runt OBJECT ${SRCS} ${HEADERS})
	jcpp_enable_bigobj(com.sun.java_cup.internal.runt)
endif()