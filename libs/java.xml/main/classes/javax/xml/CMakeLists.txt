#machine generated

add_subdirectory("catalog")
add_subdirectory("datatype")
add_subdirectory("namespace")
add_subdirectory("parsers")
add_subdirectory("stream")
add_subdirectory("transform")
add_subdirectory("validation")
add_subdirectory("xpath")

aux_source_directory(. SRCS)
file(GLOB HEADERS *.h *.hpp)
source_group("Include" FILES ${HEADERS}) 
list(LENGTH SRCS SRCS_LENGTH)
if(SRCS_LENGTH)
	add_library(javax.xml OBJECT ${SRCS} ${HEADERS})
	jcpp_enable_bigobj(javax.xml)
endif()