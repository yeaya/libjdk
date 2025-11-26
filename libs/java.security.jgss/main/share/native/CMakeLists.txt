#machine generated

add_subdirectory("libj2gss")

if(JCPP_OS MATCHES "macos")
	include_directories("../../macos/native")
endif()

aux_source_directory(. SRCS)
file(GLOB HEADERS *.h *.hpp)
source_group("Include" FILES ${HEADERS}) 
list(LENGTH SRCS SRCS_LENGTH)
if(SRCS_LENGTH)
	add_library(native OBJECT ${SRCS} ${HEADERS})
	jcpp_enable_bigobj(native)
endif()