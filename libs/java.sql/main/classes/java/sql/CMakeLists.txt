#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" classes.java.sql_SRCS)
file(GLOB classes.java.sql_HEADERS *.h *.hpp)
source_group("Include" FILES ${classes.java.sql_HEADERS}) 
list(LENGTH classes.java.sql_SRCS classes.java.sql_SRCS_LENGTH)
if(classes.java.sql_SRCS_LENGTH)
	add_library(classes.java.sql OBJECT "${classes.java.sql_SRCS}" "${classes.java.sql_HEADERS}")
	jcpp_enable_bigobj(classes.java.sql)
endif()