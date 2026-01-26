#machine generated

jcpp_add_dependencies(
	"java.base:17.35"
)

if(BUILD_SHARED_LIB)
	add_definitions(-DJCPP_SHARED_BUILD)
endif()

include_directories("classes")
include_directories("native")

add_subdirectory("classes")
add_subdirectory("native")

set(local_object ${local_object}
	"$<TARGET_OBJECTS:classes>"
	"$<TARGET_OBJECTS:com.sun.jmx.defaults>"
	"$<TARGET_OBJECTS:com.sun.jmx.interceptor>"
	"$<TARGET_OBJECTS:com.sun.jmx.mbeanserver>"
	"$<TARGET_OBJECTS:com.sun.jmx.remote.internal>"
	"$<TARGET_OBJECTS:com.sun.jmx.remote.security>"
	"$<TARGET_OBJECTS:com.sun.jmx.remote.util>"
	"$<TARGET_OBJECTS:java.lang.management>"
	"$<TARGET_OBJECTS:javax.management>"
	"$<TARGET_OBJECTS:javax.management.loading>"
	"$<TARGET_OBJECTS:javax.management.modelmbean>"
	"$<TARGET_OBJECTS:javax.management.monitor>"
	"$<TARGET_OBJECTS:javax.management.openmbean>"
	"$<TARGET_OBJECTS:javax.management.relation>"
	"$<TARGET_OBJECTS:javax.management.remote>"
	"$<TARGET_OBJECTS:javax.management.timer>"
	"$<TARGET_OBJECTS:sun.management>"
	"$<TARGET_OBJECTS:sun.management.counter>"
	"$<TARGET_OBJECTS:sun.management.counter.perf>"
	"$<TARGET_OBJECTS:sun.management.spi>"
	"$<TARGET_OBJECTS:native>"
)

if(BUILD_STATIC_LIB)
	add_library(${JCPP_PROJECT_NAME}-main STATIC ${local_object} ${source_SRCS})
	SET_TARGET_PROPERTIES(${JCPP_PROJECT_NAME}-main PROPERTIES OUTPUT_NAME "${JCPP_PROJECT_FULL_NAME}")
	SET_TARGET_PROPERTIES(${JCPP_PROJECT_NAME}-main PROPERTIES CLEAN_DIRECT_OUTPUT 1)
endif()

if(BUILD_SHARED_LIB)
	add_library(${JCPP_PROJECT_NAME}-main SHARED ${local_object} ${source_SRCS})
	SET_TARGET_PROPERTIES(${JCPP_PROJECT_NAME}-main PROPERTIES OUTPUT_NAME "${JCPP_PROJECT_FULL_NAME}")
	SET_TARGET_PROPERTIES(${JCPP_PROJECT_NAME}-main PROPERTIES CLEAN_DIRECT_OUTPUT 1)
	SET_TARGET_PROPERTIES(${JCPP_PROJECT_NAME}-main PROPERTIES VERSION ${JCPP_PROJECT_VERSION} SOVERSION 1)
	if(JCPP_OS MATCHES "linux")
		SET_TARGET_PROPERTIES(${JCPP_PROJECT_NAME}-main PROPERTIES INSTALL_RPATH "\$ORIGIN;\$ORIGIN/../lib")
	elseif(JCPP_OS MATCHES "macos")
		SET_TARGET_PROPERTIES(${JCPP_PROJECT_NAME}-main PROPERTIES INSTALL_RPATH ".;../lib")
	endif()
	target_link_libraries(${JCPP_PROJECT_NAME}-main
		PUBLIC ${JCPP_DEPENDENCY_LIBS}
		PRIVATE ${JCPP_EXT_LIBS}
	)
	jcpp_encode_symbol(${JCPP_PROJECT_NAME}-main)
endif()

jcpp_enable_bigobj(${JCPP_PROJECT_NAME}-main)
install(TARGETS ${JCPP_PROJECT_NAME}-main
	LIBRARY DESTINATION "${JCPP_INSTALL_LIB_DIR}"
	ARCHIVE DESTINATION "${JCPP_INSTALL_LIB_DIR}"
	RUNTIME DESTINATION "${JCPP_INSTALL_BIN_DIR}"
)


install(
	DIRECTORY "include/"
	DESTINATION "${JCPP_INSTALL_INCLUDE_DIR}"
)
