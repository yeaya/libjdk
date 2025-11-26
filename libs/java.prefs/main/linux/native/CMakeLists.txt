#machine generated

if(JCPP_OS MATCHES "linux")
	add_definitions("-D_ALLBSD_SOURCE")
endif()

aux_source_directory(. SRCS)
file(GLOB HEADERS *.h *.hpp)
source_group("Include" FILES ${HEADERS}) 
list(LENGTH SRCS SRCS_LENGTH)
if(SRCS_LENGTH)
	add_library(linux-native OBJECT ${SRCS} ${HEADERS})
	jcpp_enable_bigobj(linux-native)
endif()