#machine generated

if(JCPP_OS MATCHES "macos")
	add_definitions("-DSTATIC_BUILD")
	add_definitions("-DLIBRARY_NAME=osxkrb5")
endif()

aux_source_directory(. SRCS)
file(GLOB HEADERS *.h *.hpp)
source_group("Include" FILES ${HEADERS}) 
list(LENGTH SRCS SRCS_LENGTH)
if(SRCS_LENGTH)
	add_library(macos-native.libosxkrb5 OBJECT ${SRCS} ${HEADERS})
	jcpp_enable_bigobj(macos-native.libosxkrb5)
endif()