#machine generated

add_subdirectory("http")

aux_source_directory(. SRCS)
file(GLOB HEADERS *.h *.hpp)
source_group("Include" FILES ${HEADERS}) 
list(LENGTH SRCS SRCS_LENGTH)
if(SRCS_LENGTH)
	add_library(test.jdk.internal.net OBJECT ${SRCS} ${HEADERS})
	jcpp_enable_bigobj(test.jdk.internal.net)
endif()