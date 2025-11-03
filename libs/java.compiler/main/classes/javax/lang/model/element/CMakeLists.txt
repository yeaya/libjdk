#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" classes.javax.lang.model.ele_1_SRCS)
file(GLOB classes.javax.lang.model.ele_1_HEADERS *.h *.hpp)
source_group("Include" FILES ${classes.javax.lang.model.ele_1_HEADERS}) 
list(LENGTH classes.javax.lang.model.ele_1_SRCS classes.javax.lang.model.ele_1_SRCS_LENGTH)
if(classes.javax.lang.model.ele_1_SRCS_LENGTH)
	add_library(classes.javax.lang.model.ele_1 OBJECT "${classes.javax.lang.model.ele_1_SRCS}" "${classes.javax.lang.model.ele_1_HEADERS}")
	jcpp_enable_bigobj(classes.javax.lang.model.ele_1)
endif()