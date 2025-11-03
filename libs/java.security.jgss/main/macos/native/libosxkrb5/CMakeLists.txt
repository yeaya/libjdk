#machine generated

if(JCPP_OS MATCHES "macos")
	add_definitions("-DSTATIC_BUILD")
	add_definitions("-DLIBRARY_NAME=osxkrb5")
endif()

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" macos-native.libosxkrb5_SRCS)
file(GLOB macos-native.libosxkrb5_HEADERS *.h *.hpp)
source_group("Include" FILES ${macos-native.libosxkrb5_HEADERS}) 
list(LENGTH macos-native.libosxkrb5_SRCS macos-native.libosxkrb5_SRCS_LENGTH)
if(macos-native.libosxkrb5_SRCS_LENGTH)
	add_library(macos-native.libosxkrb5 OBJECT "${macos-native.libosxkrb5_SRCS}" "${macos-native.libosxkrb5_HEADERS}")
	jcpp_enable_bigobj(macos-native.libosxkrb5)
endif()