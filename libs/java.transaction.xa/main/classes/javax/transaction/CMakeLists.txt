#machine generated

add_subdirectory("xa")

aux_source_directory(. SRCS)
file(GLOB HEADERS *.h *.hpp)
source_group("Include" FILES ${HEADERS}) 
list(LENGTH SRCS SRCS_LENGTH)
if(SRCS_LENGTH)
	add_library(javax.transaction OBJECT ${SRCS} ${HEADERS})
	jcpp_enable_bigobj(javax.transaction)
endif()