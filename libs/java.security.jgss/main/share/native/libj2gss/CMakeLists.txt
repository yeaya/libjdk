#machine generated

if(JCPP_OS MATCHES "macos")
	add_definitions("-DSTATIC_BUILD")
	add_definitions("-DLIBRARY_NAME=j2gss")
endif()

aux_source_directory(. SRCS)
file(GLOB HEADERS *.h *.hpp)
source_group("Include" FILES ${HEADERS}) 
list(LENGTH SRCS SRCS_LENGTH)
if(SRCS_LENGTH)
	add_library(native.libj2gss OBJECT ${SRCS} ${HEADERS})
	jcpp_enable_bigobj(native.libj2gss)
endif()