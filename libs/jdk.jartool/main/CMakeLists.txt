#machine generated

jcpp_add_dependencies(
	"java.base:17.35"
)

add_definitions(-DJCPP_USE_LIB_CURRENT_OBJECT_STACK_CACHE)

include_directories("classes")

add_subdirectory("classes")

set(local_object ${local_object}
	"$<TARGET_OBJECTS:classes>"
	"$<TARGET_OBJECTS:com.sun.jarsigner>"
	"$<TARGET_OBJECTS:jdk.security.jarsigner>"
	"$<TARGET_OBJECTS:sun.security.tools.jarsigner>"
	"$<TARGET_OBJECTS:sun.tools.jar>"
	"$<TARGET_OBJECTS:sun.tools.jar.resources>"
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

jcpp_add_main_app(sun.security.tools.jarsigner.Main-app "sun.security.tools.jarsigner.Main-app" "sun.security.tools.jarsigner.Main.cpp")
jcpp_add_main_app(sun.tools.jar.Main-app "sun.tools.jar.Main-app" "sun.tools.jar.Main.cpp")

install(
	DIRECTORY "include/"
	DESTINATION "${JCPP_INSTALL_INCLUDE_DIR}"
)
