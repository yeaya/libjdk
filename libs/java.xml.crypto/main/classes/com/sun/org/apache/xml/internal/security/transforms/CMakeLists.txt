#machine generated

add_subdirectory("implementations")
add_subdirectory("params")

aux_source_directory(. SRCS)
file(GLOB HEADERS *.h *.hpp)
source_group("Include" FILES ${HEADERS}) 
list(LENGTH SRCS SRCS_LENGTH)
if(SRCS_LENGTH)
	add_library(com.sun.org.apache.xml.inte_18 OBJECT ${SRCS} ${HEADERS})
	jcpp_enable_bigobj(com.sun.org.apache.xml.inte_18)
endif()