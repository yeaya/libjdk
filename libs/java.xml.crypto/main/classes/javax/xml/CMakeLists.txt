#machine generated

add_subdirectory("crypto")

aux_source_directory(. SRCS)
file(GLOB HEADERS *.h *.hpp)
source_group("Include" FILES ${HEADERS}) 
list(LENGTH SRCS SRCS_LENGTH)
if(SRCS_LENGTH)
	add_library(javax.xml OBJECT ${SRCS} ${HEADERS})
	jcpp_enable_bigobj(javax.xml)
endif()