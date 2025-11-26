#machine generated

add_subdirectory("resources")

aux_source_directory(. SRCS)
file(GLOB HEADERS *.h *.hpp)
source_group("Include" FILES ${HEADERS}) 
list(LENGTH SRCS SRCS_LENGTH)
if(SRCS_LENGTH)
	add_library(jdk.internal.shellsupport.doc OBJECT ${SRCS} ${HEADERS})
	jcpp_enable_bigobj(jdk.internal.shellsupport.doc)
endif()