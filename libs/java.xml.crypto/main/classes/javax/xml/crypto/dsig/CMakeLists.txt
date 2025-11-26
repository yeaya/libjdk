#machine generated

add_subdirectory("dom")
add_subdirectory("keyinfo")
add_subdirectory("spec")

aux_source_directory(. SRCS)
file(GLOB HEADERS *.h *.hpp)
source_group("Include" FILES ${HEADERS}) 
list(LENGTH SRCS SRCS_LENGTH)
if(SRCS_LENGTH)
	add_library(javax.xml.crypto.dsig OBJECT ${SRCS} ${HEADERS})
	jcpp_enable_bigobj(javax.xml.crypto.dsig)
endif()