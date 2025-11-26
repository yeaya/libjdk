#machine generated

add_subdirectory("com")
add_subdirectory("handlers")
add_subdirectory("jdk")
add_subdirectory("org")
add_subdirectory("p")

aux_source_directory(. SRCS)
file(GLOB HEADERS *.h *.hpp)
source_group("Include" FILES ${HEADERS}) 
list(LENGTH SRCS SRCS_LENGTH)
if(SRCS_LENGTH)
	add_library(test-classes OBJECT ${SRCS} ${HEADERS})
	jcpp_enable_bigobj(test-classes)
endif()