#machine generated

if(JCPP_OS MATCHES "macos")
	add_definitions("-DSTATIC_BUILD")
	add_definitions("-DLIBRARY_NAME=j2gss")
endif()

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" native.libj2gss_SRCS)
file(GLOB native.libj2gss_HEADERS *.h *.hpp)
source_group("Include" FILES ${native.libj2gss_HEADERS}) 
list(LENGTH native.libj2gss_SRCS native.libj2gss_SRCS_LENGTH)
if(native.libj2gss_SRCS_LENGTH)
	add_library(native.libj2gss OBJECT "${native.libj2gss_SRCS}" "${native.libj2gss_HEADERS}")
	jcpp_enable_bigobj(native.libj2gss)
endif()