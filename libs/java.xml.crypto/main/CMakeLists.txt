#machine generated

jcpp_add_dependencies(
	"java.logging:17.35"
	"java.xml:17.35"
	"java.base:17.35"
)

add_definitions(-DJCPP_USE_LIB_CURRENT_OBJECT_STACK_CACHE)

include_directories("classes")

add_subdirectory("classes")

set(local_object ${local_object}
	"$<TARGET_OBJECTS:classes>"
	"$<TARGET_OBJECTS:com.sun.org.apache.xml.inter_0>"
	"$<TARGET_OBJECTS:com.sun.org.apache.xml.inter_1>"
	"$<TARGET_OBJECTS:com.sun.org.apache.xml.inter_2>"
	"$<TARGET_OBJECTS:com.sun.org.apache.xml.inter_3>"
	"$<TARGET_OBJECTS:com.sun.org.apache.xml.inter_4>"
	"$<TARGET_OBJECTS:com.sun.org.apache.xml.inter_5>"
	"$<TARGET_OBJECTS:com.sun.org.apache.xml.inter_6>"
	"$<TARGET_OBJECTS:com.sun.org.apache.xml.inter_7>"
	"$<TARGET_OBJECTS:com.sun.org.apache.xml.inter_8>"
	"$<TARGET_OBJECTS:com.sun.org.apache.xml.inter_9>"
	"$<TARGET_OBJECTS:com.sun.org.apache.xml.inte_10>"
	"$<TARGET_OBJECTS:com.sun.org.apache.xml.inte_11>"
	"$<TARGET_OBJECTS:com.sun.org.apache.xml.inte_12>"
	"$<TARGET_OBJECTS:com.sun.org.apache.xml.inte_13>"
	"$<TARGET_OBJECTS:com.sun.org.apache.xml.inte_14>"
	"$<TARGET_OBJECTS:com.sun.org.apache.xml.inte_15>"
	"$<TARGET_OBJECTS:com.sun.org.apache.xml.inte_16>"
	"$<TARGET_OBJECTS:com.sun.org.apache.xml.inte_17>"
	"$<TARGET_OBJECTS:com.sun.org.apache.xml.inte_18>"
	"$<TARGET_OBJECTS:com.sun.org.apache.xml.inte_19>"
	"$<TARGET_OBJECTS:com.sun.org.apache.xml.inte_20>"
	"$<TARGET_OBJECTS:com.sun.org.apache.xml.inte_21>"
	"$<TARGET_OBJECTS:com.sun.org.apache.xml.inte_22>"
	"$<TARGET_OBJECTS:com.sun.org.apache.xml.inte_23>"
	"$<TARGET_OBJECTS:com.sun.org.slf4j.internal>"
	"$<TARGET_OBJECTS:javax.xml.crypto>"
	"$<TARGET_OBJECTS:javax.xml.crypto.dom>"
	"$<TARGET_OBJECTS:javax.xml.crypto.dsig>"
	"$<TARGET_OBJECTS:javax.xml.crypto.dsig.dom>"
	"$<TARGET_OBJECTS:javax.xml.crypto.dsig.keyinfo>"
	"$<TARGET_OBJECTS:javax.xml.crypto.dsig.spec>"
	"$<TARGET_OBJECTS:org.jcp.xml.dsig.internal>"
	"$<TARGET_OBJECTS:org.jcp.xml.dsig.internal.dom>"
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
