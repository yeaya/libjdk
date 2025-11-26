#machine generated

add_subdirectory("prefs")

aux_source_directory(. SRCS)
file(GLOB HEADERS *.h *.hpp)
source_group("Include" FILES ${HEADERS}) 
list(LENGTH SRCS SRCS_LENGTH)
if(SRCS_LENGTH)
	add_library(macos.java.util OBJECT ${SRCS} ${HEADERS})
	jcpp_enable_bigobj(macos.java.util)
endif()