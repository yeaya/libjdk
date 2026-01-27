#machine generated

jcpp_add_dependencies(
	"java.base:17.35"
)

if(BUILD_SHARED_LIB)
	add_definitions(-DJCPP_SHARED_BUILD)
endif()

include_directories("classes")

add_subdirectory("classes")

set(local_object ${local_object}
	"$<TARGET_OBJECTS:classes>"
	"$<TARGET_OBJECTS:com.sun.java_cup.internal.runt>"
	"$<TARGET_OBJECTS:com.sun.org.apache.bcel.intern>"
	"$<TARGET_OBJECTS:com.sun.org.apache.bcel.inte_0>"
	"$<TARGET_OBJECTS:com.sun.org.apache.bcel.inte_1>"
	"$<TARGET_OBJECTS:com.sun.org.apache.bcel.inte_2>"
	"$<TARGET_OBJECTS:com.sun.org.apache.xalan.int_3>"
	"$<TARGET_OBJECTS:com.sun.org.apache.xalan.int_4>"
	"$<TARGET_OBJECTS:com.sun.org.apache.xalan.int_5>"
	"$<TARGET_OBJECTS:com.sun.org.apache.xalan.int_6>"
	"$<TARGET_OBJECTS:com.sun.org.apache.xalan.int_7>"
	"$<TARGET_OBJECTS:com.sun.org.apache.xalan.int_8>"
	"$<TARGET_OBJECTS:com.sun.org.apache.xalan.int_9>"
	"$<TARGET_OBJECTS:com.sun.org.apache.xalan.in_10>"
	"$<TARGET_OBJECTS:com.sun.org.apache.xalan.in_11>"
	"$<TARGET_OBJECTS:com.sun.org.apache.xalan.in_12>"
	"$<TARGET_OBJECTS:com.sun.org.apache.xalan.in_13>"
	"$<TARGET_OBJECTS:com.sun.org.apache.xalan.in_14>"
	"$<TARGET_OBJECTS:com.sun.org.apache.xalan.in_15>"
	"$<TARGET_OBJECTS:com.sun.org.apache.xerces.i_16>"
	"$<TARGET_OBJECTS:com.sun.org.apache.xerces.i_17>"
	"$<TARGET_OBJECTS:com.sun.org.apache.xerces.i_18>"
	"$<TARGET_OBJECTS:com.sun.org.apache.xerces.i_19>"
	"$<TARGET_OBJECTS:com.sun.org.apache.xerces.i_20>"
	"$<TARGET_OBJECTS:com.sun.org.apache.xerces.i_21>"
	"$<TARGET_OBJECTS:com.sun.org.apache.xerces.i_22>"
	"$<TARGET_OBJECTS:com.sun.org.apache.xerces.i_23>"
	"$<TARGET_OBJECTS:com.sun.org.apache.xerces.i_24>"
	"$<TARGET_OBJECTS:com.sun.org.apache.xerces.i_25>"
	"$<TARGET_OBJECTS:com.sun.org.apache.xerces.i_26>"
	"$<TARGET_OBJECTS:com.sun.org.apache.xerces.i_27>"
	"$<TARGET_OBJECTS:com.sun.org.apache.xerces.i_28>"
	"$<TARGET_OBJECTS:com.sun.org.apache.xerces.i_29>"
	"$<TARGET_OBJECTS:com.sun.org.apache.xerces.i_30>"
	"$<TARGET_OBJECTS:com.sun.org.apache.xerces.i_31>"
	"$<TARGET_OBJECTS:com.sun.org.apache.xerces.i_32>"
	"$<TARGET_OBJECTS:com.sun.org.apache.xerces.i_33>"
	"$<TARGET_OBJECTS:com.sun.org.apache.xerces.i_34>"
	"$<TARGET_OBJECTS:com.sun.org.apache.xerces.i_35>"
	"$<TARGET_OBJECTS:com.sun.org.apache.xerces.i_36>"
	"$<TARGET_OBJECTS:com.sun.org.apache.xerces.i_37>"
	"$<TARGET_OBJECTS:com.sun.org.apache.xerces.i_38>"
	"$<TARGET_OBJECTS:com.sun.org.apache.xerces.i_39>"
	"$<TARGET_OBJECTS:com.sun.org.apache.xerces.i_40>"
	"$<TARGET_OBJECTS:com.sun.org.apache.xerces.i_41>"
	"$<TARGET_OBJECTS:com.sun.org.apache.xerces.i_42>"
	"$<TARGET_OBJECTS:com.sun.org.apache.xerces.i_43>"
	"$<TARGET_OBJECTS:com.sun.org.apache.xerces.i_44>"
	"$<TARGET_OBJECTS:com.sun.org.apache.xerces.i_45>"
	"$<TARGET_OBJECTS:com.sun.org.apache.xerces.i_46>"
	"$<TARGET_OBJECTS:com.sun.org.apache.xerces.i_47>"
	"$<TARGET_OBJECTS:com.sun.org.apache.xerces.i_48>"
	"$<TARGET_OBJECTS:com.sun.org.apache.xml.inte_49>"
	"$<TARGET_OBJECTS:com.sun.org.apache.xml.inte_50>"
	"$<TARGET_OBJECTS:com.sun.org.apache.xml.inte_51>"
	"$<TARGET_OBJECTS:com.sun.org.apache.xml.inte_52>"
	"$<TARGET_OBJECTS:com.sun.org.apache.xml.inte_53>"
	"$<TARGET_OBJECTS:com.sun.org.apache.xml.inte_54>"
	"$<TARGET_OBJECTS:com.sun.org.apache.xml.inte_55>"
	"$<TARGET_OBJECTS:com.sun.org.apache.xml.inte_56>"
	"$<TARGET_OBJECTS:com.sun.org.apache.xml.inte_57>"
	"$<TARGET_OBJECTS:com.sun.org.apache.xml.inte_58>"
	"$<TARGET_OBJECTS:com.sun.org.apache.xml.inte_59>"
	"$<TARGET_OBJECTS:com.sun.org.apache.xpath.inter>"
	"$<TARGET_OBJECTS:com.sun.org.apache.xpath.in_60>"
	"$<TARGET_OBJECTS:com.sun.org.apache.xpath.in_61>"
	"$<TARGET_OBJECTS:com.sun.org.apache.xpath.in_62>"
	"$<TARGET_OBJECTS:com.sun.org.apache.xpath.in_63>"
	"$<TARGET_OBJECTS:com.sun.org.apache.xpath.in_64>"
	"$<TARGET_OBJECTS:com.sun.org.apache.xpath.in_65>"
	"$<TARGET_OBJECTS:com.sun.org.apache.xpath.in_66>"
	"$<TARGET_OBJECTS:com.sun.org.apache.xpath.in_67>"
	"$<TARGET_OBJECTS:com.sun.xml.internal.stream>"
	"$<TARGET_OBJECTS:com.sun.xml.internal.stream.dt>"
	"$<TARGET_OBJECTS:com.sun.xml.internal.stream_68>"
	"$<TARGET_OBJECTS:com.sun.xml.internal.stream.ev>"
	"$<TARGET_OBJECTS:com.sun.xml.internal.stream.ut>"
	"$<TARGET_OBJECTS:com.sun.xml.internal.stream.wr>"
	"$<TARGET_OBJECTS:javax.xml>"
	"$<TARGET_OBJECTS:javax.xml.catalog>"
	"$<TARGET_OBJECTS:javax.xml.datatype>"
	"$<TARGET_OBJECTS:javax.xml.namespace>"
	"$<TARGET_OBJECTS:javax.xml.parsers>"
	"$<TARGET_OBJECTS:javax.xml.stream>"
	"$<TARGET_OBJECTS:javax.xml.stream.events>"
	"$<TARGET_OBJECTS:javax.xml.stream.util>"
	"$<TARGET_OBJECTS:javax.xml.transform>"
	"$<TARGET_OBJECTS:javax.xml.transform.dom>"
	"$<TARGET_OBJECTS:javax.xml.transform.sax>"
	"$<TARGET_OBJECTS:javax.xml.transform.stax>"
	"$<TARGET_OBJECTS:javax.xml.transform.stream>"
	"$<TARGET_OBJECTS:javax.xml.validation>"
	"$<TARGET_OBJECTS:javax.xml.xpath>"
	"$<TARGET_OBJECTS:jdk.xml.internal>"
	"$<TARGET_OBJECTS:org.w3c.dom>"
	"$<TARGET_OBJECTS:org.w3c.dom.bootstrap>"
	"$<TARGET_OBJECTS:org.w3c.dom.events>"
	"$<TARGET_OBJECTS:org.w3c.dom.ls>"
	"$<TARGET_OBJECTS:org.w3c.dom.ranges>"
	"$<TARGET_OBJECTS:org.w3c.dom.traversal>"
	"$<TARGET_OBJECTS:org.w3c.dom.views>"
	"$<TARGET_OBJECTS:org.xml.sax>"
	"$<TARGET_OBJECTS:org.xml.sax.ext>"
	"$<TARGET_OBJECTS:org.xml.sax.helpers>"
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

jcpp_add_main_app(com.sun.org.apache.xalan.internal.xsltc.ProcessorVersion-app "com.sun.org.apache.xalan.internal.xsltc.ProcessorVersion-app" "com.sun.org.apache.xalan.internal.xsltc.ProcessorVersion.cpp")

install(
	DIRECTORY "include/"
	DESTINATION "${JCPP_INSTALL_INCLUDE_DIR}"
)
