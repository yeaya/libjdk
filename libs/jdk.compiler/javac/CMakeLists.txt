#machine generated

jcpp_add_dependencies(
	"java.base:17.35"
	"java.compiler:17.35"
	"jdk.zipfs:17.35"
)

add_definitions(-DJCPP_USE_LIB_CURRENT_OBJECT_STACK_CACHE)

include_directories("classes")
include_directories("../main/include")

add_subdirectory("classes")

aux_source_directory("." source_SRCS)

set(local_object ${local_object}
	"$<TARGET_OBJECTS:javac-classes>"
)

add_executable(${JCPP_PROJECT_FULL_NAME}-javac "${local_object}" "${source_SRCS}")

SET_TARGET_PROPERTIES(${JCPP_PROJECT_FULL_NAME}-javac PROPERTIES OUTPUT_NAME "javac")
if(JCPP_OS MATCHES "linux")
	SET_TARGET_PROPERTIES(${JCPP_PROJECT_FULL_NAME}-javac PROPERTIES INSTALL_RPATH "\\\$ORIGIN;\\\$ORIGIN/../lib")
elseif(JCPP_OS MATCHES "macos")
	SET_TARGET_PROPERTIES(${JCPP_PROJECT_FULL_NAME}-javac PROPERTIES INSTALL_RPATH ".;../lib")
endif()

jcpp_encode_symbol(${JCPP_PROJECT_FULL_NAME}-javac)

if(BUILD_SHARED_LIB)
	target_link_libraries(${JCPP_PROJECT_FULL_NAME}-javac
		PRIVATE ${JCPP_DEPENDENCY_LIBS}
		PRIVATE ${JCPP_PROJECT_NAME}_shared
	)
	add_dependencies(${JCPP_PROJECT_FULL_NAME}-javac ${JCPP_PROJECT_NAME}_shared)
	foreach(runtimeFile IN LISTS JCPP_DEPENDENCY_RUNTIME_FILE_PATHS)
		add_custom_command(TARGET ${JCPP_PROJECT_FULL_NAME}-javac POST_BUILD
			COMMAND ${CMAKE_COMMAND} -E copy_if_different
				${runtimeFile}
				$<TARGET_FILE_DIR:${JCPP_PROJECT_FULL_NAME}-javac>
		)
	endforeach()
	add_custom_command(TARGET ${JCPP_PROJECT_FULL_NAME}-javac POST_BUILD
		COMMAND ${CMAKE_COMMAND} -E copy_if_different
			$<TARGET_FILE:${JCPP_PROJECT_NAME}_shared>
			$<TARGET_FILE_DIR:${JCPP_PROJECT_FULL_NAME}-javac>
	)
else()

	target_link_libraries(${JCPP_PROJECT_FULL_NAME}-javac
		PRIVATE ${JCPP_PROJECT_NAME}_static
		${JCPP_EXT_LIBS}
	)
	add_dependencies(${JCPP_PROJECT_FULL_NAME}-javac ${JCPP_PROJECT_NAME}_static)
endif()

jcpp_enable_bigobj(${JCPP_PROJECT_FULL_NAME}-javac)

install(TARGETS ${JCPP_PROJECT_FULL_NAME}-javac DESTINATION "${JCPP_INSTALL_BIN_DIR}")
