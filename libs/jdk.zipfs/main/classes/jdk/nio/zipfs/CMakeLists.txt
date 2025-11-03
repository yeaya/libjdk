#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" classes.jdk.nio.zipfs_SRCS)
file(GLOB classes.jdk.nio.zipfs_HEADERS *.h *.hpp)
source_group("Include" FILES ${classes.jdk.nio.zipfs_HEADERS}) 
list(LENGTH classes.jdk.nio.zipfs_SRCS classes.jdk.nio.zipfs_SRCS_LENGTH)
if(classes.jdk.nio.zipfs_SRCS_LENGTH)
	add_library(classes.jdk.nio.zipfs OBJECT "${classes.jdk.nio.zipfs_SRCS}" "${classes.jdk.nio.zipfs_HEADERS}")
	jcpp_enable_bigobj(classes.jdk.nio.zipfs)
endif()