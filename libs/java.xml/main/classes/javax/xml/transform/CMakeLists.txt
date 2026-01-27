#machine generated

add_subdirectory("dom")
add_subdirectory("sax")
add_subdirectory("stax")
add_subdirectory("stream")

aux_source_directory(. SRCS)
file(GLOB HEADERS *.h *.hpp)
source_group("Include" FILES ${HEADERS}) 
list(LENGTH SRCS SRCS_LENGTH)
if(SRCS_LENGTH)
	add_library(javax.xml.transform OBJECT ${SRCS} ${HEADERS})
	jcpp_enable_bigobj(javax.xml.transform)
endif()