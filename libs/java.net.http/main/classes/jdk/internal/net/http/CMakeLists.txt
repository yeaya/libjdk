#machine generated

add_subdirectory("common")
add_subdirectory("frame")
add_subdirectory("hpack")
add_subdirectory("websocket")

aux_source_directory(. SRCS)
file(GLOB HEADERS *.h *.hpp)
source_group("Include" FILES ${HEADERS}) 
list(LENGTH SRCS SRCS_LENGTH)
if(SRCS_LENGTH)
	add_library(jdk.internal.net.http OBJECT ${SRCS} ${HEADERS})
	jcpp_enable_bigobj(jdk.internal.net.http)
endif()