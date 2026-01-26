#machine generated

jcpp_add_dependencies(
	"java.base:17.35"
)

include_directories("share/classes")
include_directories("../main/share/include")

add_subdirectory("share/classes")

if(JCPP_SUBSYSTEM MATCHES "WINDOWS")
	set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} /SUBSYSTEM:WINDOWS")
	add_definitions(-DJCPP_SUBSYSTEM_WINDOWS)
	message(STATUS "set the WINDOWS subsystem for the executable")
endif()

aux_source_directory("share" source_SRCS)

set(local_object ${local_object}
	"$<TARGET_OBJECTS:test-classes>"
)

add_executable(${JCPP_PROJECT_FULL_NAME}-test "${local_object}" "${source_SRCS}")

SET_TARGET_PROPERTIES(${JCPP_PROJECT_FULL_NAME}-test PROPERTIES OUTPUT_NAME "${JCPP_PROJECT_FULL_NAME}-test")
if(JCPP_OS MATCHES "linux")
	SET_TARGET_PROPERTIES(${JCPP_PROJECT_FULL_NAME}-test PROPERTIES INSTALL_RPATH "\$ORIGIN;\$ORIGIN/../lib")
elseif(JCPP_OS MATCHES "macos")
	SET_TARGET_PROPERTIES(${JCPP_PROJECT_FULL_NAME}-test PROPERTIES INSTALL_RPATH ".;../lib")
endif()

jcpp_encode_symbol(${JCPP_PROJECT_FULL_NAME}-test)

if(BUILD_SHARED_LIB)
	target_link_libraries(${JCPP_PROJECT_FULL_NAME}-test
		PRIVATE ${JCPP_DEPENDENCY_LIBS}
		PRIVATE ${JCPP_PROJECT_NAME}-main
	)
	if(JCPP_OS MATCHES "windows")
		foreach(runtimeFile IN LISTS JCPP_DEPENDENCY_RUNTIME_FILE_PATHS)
			add_custom_command(TARGET ${JCPP_PROJECT_FULL_NAME}-test POST_BUILD
				COMMAND ${CMAKE_COMMAND} -E copy_if_different
					${runtimeFile}
					$<TARGET_FILE_DIR:${JCPP_PROJECT_FULL_NAME}-test>
			)
		endforeach()
		add_custom_command(TARGET ${JCPP_PROJECT_FULL_NAME}-test POST_BUILD
			COMMAND ${CMAKE_COMMAND} -E copy_if_different
				$<TARGET_FILE:${JCPP_PROJECT_NAME}-main>
				$<TARGET_FILE_DIR:${JCPP_PROJECT_FULL_NAME}-test>
		)
	endif()
else()
	target_link_libraries(${JCPP_PROJECT_FULL_NAME}-test
		PRIVATE ${JCPP_PROJECT_NAME}-main
		${JCPP_EXT_LIBS}
	)
endif()

jcpp_enable_bigobj(${JCPP_PROJECT_FULL_NAME}-test)

install(TARGETS ${JCPP_PROJECT_FULL_NAME}-test DESTINATION "${JCPP_INSTALL_BIN_DIR}")

add_test(NAME CharsetContainmentTest COMMAND $<TARGET_FILE:${JCPP_PROJECT_FULL_NAME}-test> CharsetContainmentTest)
add_test(NAME CurrencyFormat COMMAND $<TARGET_FILE:${JCPP_PROJECT_FULL_NAME}-test> CurrencyFormat)
add_test(NAME JapaneseTest COMMAND $<TARGET_FILE:${JCPP_PROJECT_FULL_NAME}-test> JapaneseTest)
add_test(NAME KoreanTest COMMAND $<TARGET_FILE:${JCPP_PROJECT_FULL_NAME}-test> KoreanTest)
add_test(NAME LargeMessageFormat COMMAND $<TARGET_FILE:${JCPP_PROJECT_FULL_NAME}-test> LargeMessageFormat)
add_test(NAME NonGregorianFormatTest COMMAND $<TARGET_FILE:${JCPP_PROJECT_FULL_NAME}-test> NonGregorianFormatTest)
add_test(NAME SystemInAvailable COMMAND $<TARGET_FILE:${JCPP_PROJECT_FULL_NAME}-test> SystemInAvailable)
add_test(NAME TestPeruCurrencyFormat COMMAND $<TARGET_FILE:${JCPP_PROJECT_FULL_NAME}-test> TestPeruCurrencyFormat)
add_test(NAME TestWrite COMMAND $<TARGET_FILE:${JCPP_PROJECT_FULL_NAME}-test> TestWrite)
add_test(NAME bug4117335 COMMAND $<TARGET_FILE:${JCPP_PROJECT_FULL_NAME}-test> bug4117335)
