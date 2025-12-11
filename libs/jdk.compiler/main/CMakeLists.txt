#machine generated

jcpp_add_dependencies(
	"java.base:17.35"
	"java.compiler:17.35"
	"jdk.zipfs:17.35"
)

add_definitions(-DJCPP_USE_LIB_CURRENT_OBJECT_STACK_CACHE)

include_directories("classes")

add_subdirectory("classes")

set(local_object ${local_object}
	"$<TARGET_OBJECTS:classes>"
	"$<TARGET_OBJECTS:com.sun.source.doctree>"
	"$<TARGET_OBJECTS:com.sun.source.tree>"
	"$<TARGET_OBJECTS:com.sun.source.util>"
	"$<TARGET_OBJECTS:com.sun.tools.doclint>"
	"$<TARGET_OBJECTS:com.sun.tools.javac>"
	"$<TARGET_OBJECTS:com.sun.tools.javac.api>"
	"$<TARGET_OBJECTS:com.sun.tools.javac.code>"
	"$<TARGET_OBJECTS:com.sun.tools.javac.comp>"
	"$<TARGET_OBJECTS:com.sun.tools.javac.file>"
	"$<TARGET_OBJECTS:com.sun.tools.javac.jvm>"
	"$<TARGET_OBJECTS:com.sun.tools.javac.launcher>"
	"$<TARGET_OBJECTS:com.sun.tools.javac.main>"
	"$<TARGET_OBJECTS:com.sun.tools.javac.model>"
	"$<TARGET_OBJECTS:com.sun.tools.javac.parser>"
	"$<TARGET_OBJECTS:com.sun.tools.javac.platform>"
	"$<TARGET_OBJECTS:com.sun.tools.javac.processing>"
	"$<TARGET_OBJECTS:com.sun.tools.javac.resources>"
	"$<TARGET_OBJECTS:com.sun.tools.javac.tree>"
	"$<TARGET_OBJECTS:com.sun.tools.javac.util>"
	"$<TARGET_OBJECTS:com.sun.tools.sjavac>"
	"$<TARGET_OBJECTS:com.sun.tools.sjavac.client>"
	"$<TARGET_OBJECTS:com.sun.tools.sjavac.comp>"
	"$<TARGET_OBJECTS:com.sun.tools.sjavac.comp.depe>"
	"$<TARGET_OBJECTS:com.sun.tools.sjavac.options>"
	"$<TARGET_OBJECTS:com.sun.tools.sjavac.pubapi>"
	"$<TARGET_OBJECTS:com.sun.tools.sjavac.server>"
	"$<TARGET_OBJECTS:com.sun.tools.sjavac.server.lo>"
	"$<TARGET_OBJECTS:jdk.internal.shellsupport.doc>"
	"$<TARGET_OBJECTS:jdk.internal.shellsupport.doc.>"
	"$<TARGET_OBJECTS:sun.tools.serialver>"
	"$<TARGET_OBJECTS:sun.tools.serialver.resources>"
)

if(BUILD_STATIC_LIB)
	add_library(${JCPP_PROJECT_NAME}_static STATIC ${local_object} ${source_SRCS})

	SET_TARGET_PROPERTIES(${JCPP_PROJECT_NAME}_static PROPERTIES OUTPUT_NAME "${JCPP_PROJECT_FULL_NAME}")
	SET_TARGET_PROPERTIES(${JCPP_PROJECT_NAME}_static PROPERTIES CLEAN_DIRECT_OUTPUT 1)
	SET_TARGET_PROPERTIES(${JCPP_PROJECT_NAME}_static PROPERTIES VERSION ${JCPP_PROJECT_VERSION} SOVERSION 1)

	jcpp_enable_bigobj(${JCPP_PROJECT_NAME}_static)

	install(TARGETS ${JCPP_PROJECT_NAME}_static
		LIBRARY DESTINATION "${JCPP_INSTALL_LIB_DIR}"
		ARCHIVE DESTINATION "${JCPP_INSTALL_LIB_DIR}"
		RUNTIME DESTINATION "${JCPP_INSTALL_BIN_DIR}"
	)
endif()

if(BUILD_SHARED_LIB)
	add_library(${JCPP_PROJECT_NAME}_shared SHARED ${local_object} ${source_SRCS})

	SET_TARGET_PROPERTIES(${JCPP_PROJECT_NAME}_shared PROPERTIES OUTPUT_NAME "${JCPP_PROJECT_FULL_NAME}")
	SET_TARGET_PROPERTIES(${JCPP_PROJECT_NAME}_shared PROPERTIES CLEAN_DIRECT_OUTPUT 1)
	SET_TARGET_PROPERTIES(${JCPP_PROJECT_NAME}_shared PROPERTIES VERSION ${JCPP_PROJECT_VERSION} SOVERSION 1)
if(JCPP_OS MATCHES "linux")
	SET_TARGET_PROPERTIES(${JCPP_PROJECT_NAME}_shared PROPERTIES INSTALL_RPATH "\$ORIGIN;\$ORIGIN/../lib")
elseif(JCPP_OS MATCHES "macos")
	SET_TARGET_PROPERTIES(${JCPP_PROJECT_NAME}_shared PROPERTIES INSTALL_RPATH ".;../lib")
endif()

	target_link_libraries(${JCPP_PROJECT_NAME}_shared
		PUBLIC ${JCPP_DEPENDENCY_LIBS}
		PRIVATE ${JCPP_EXT_LIBS}
	)

	jcpp_enable_bigobj(${JCPP_PROJECT_NAME}_shared)

	jcpp_encode_symbol(${JCPP_PROJECT_NAME}_shared)

	install(TARGETS ${JCPP_PROJECT_NAME}_shared
		LIBRARY DESTINATION "${JCPP_INSTALL_LIB_DIR}"
		ARCHIVE DESTINATION "${JCPP_INSTALL_LIB_DIR}"
		RUNTIME DESTINATION "${JCPP_INSTALL_BIN_DIR}"
	)
endif()

install(
	DIRECTORY "include/"
	DESTINATION "${JCPP_INSTALL_INCLUDE_DIR}"
)
