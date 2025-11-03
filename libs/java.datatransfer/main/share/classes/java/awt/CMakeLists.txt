#machine generated

add_subdirectory("datatransfer")

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" classes.java.awt_SRCS)
file(GLOB classes.java.awt_HEADERS *.h *.hpp)
source_group("Include" FILES ${classes.java.awt_HEADERS}) 
list(LENGTH classes.java.awt_SRCS classes.java.awt_SRCS_LENGTH)
if(classes.java.awt_SRCS_LENGTH)
	add_library(classes.java.awt OBJECT "${classes.java.awt_SRCS}" "${classes.java.awt_HEADERS}")
	jcpp_enable_bigobj(classes.java.awt)
endif()