#ifndef _com_sun_org_apache_xalan_internal_xsltc_compiler_util_ErrorMsg_h_
#define _com_sun_org_apache_xalan_internal_xsltc_compiler_util_ErrorMsg_h_
//$ class com.sun.org.apache.xalan.internal.xsltc.compiler.util.ErrorMsg
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("ACCESSING_XSLT_TARGET_ERR")
#undef ACCESSING_XSLT_TARGET_ERR
#pragma push_macro("ARGUMENT_CONVERSION_ERR")
#undef ARGUMENT_CONVERSION_ERR
#pragma push_macro("ATTRIBSET_UNDEF_ERR")
#undef ATTRIBSET_UNDEF_ERR
#pragma push_macro("ATTR_VAL_TEMPLATE_ERR")
#undef ATTR_VAL_TEMPLATE_ERR
#pragma push_macro("CATALOG_EXCEPTION")
#undef CATALOG_EXCEPTION
#pragma push_macro("CIRCULAR_INCLUDE_ERR")
#undef CIRCULAR_INCLUDE_ERR
#pragma push_macro("CIRCULAR_VARIABLE_ERR")
#undef CIRCULAR_VARIABLE_ERR
#pragma push_macro("CLASS_NOT_FOUND_ERR")
#undef CLASS_NOT_FOUND_ERR
#pragma push_macro("CMDLINE_OPT_MISSING_ARG_ERR")
#undef CMDLINE_OPT_MISSING_ARG_ERR
#pragma push_macro("COMPILER_ERROR_KEY")
#undef COMPILER_ERROR_KEY
#pragma push_macro("COMPILER_WARNING_KEY")
#undef COMPILER_WARNING_KEY
#pragma push_macro("COMPILE_STDIN_ERR")
#undef COMPILE_STDIN_ERR
#pragma push_macro("COMPILE_USAGE_STR")
#undef COMPILE_USAGE_STR
#pragma push_macro("CONSTRUCTOR_NOT_FOUND")
#undef CONSTRUCTOR_NOT_FOUND
#pragma push_macro("COULD_NOT_CREATE_TRANS_FACT")
#undef COULD_NOT_CREATE_TRANS_FACT
#pragma push_macro("DATA_CONVERSION_ERR")
#undef DATA_CONVERSION_ERR
#pragma push_macro("DESERIALIZE_TRANSLET_ERR")
#undef DESERIALIZE_TRANSLET_ERR
#pragma push_macro("DOCUMENT_ARG_ERR")
#undef DOCUMENT_ARG_ERR
#pragma push_macro("ELEMENT_PARSE_ERR")
#undef ELEMENT_PARSE_ERR
#pragma push_macro("ERROR_LISTENER_NULL_ERR")
#undef ERROR_LISTENER_NULL_ERR
#pragma push_macro("ERROR_MESSAGES_KEY")
#undef ERROR_MESSAGES_KEY
#pragma push_macro("ERROR_MSG")
#undef ERROR_MSG
#pragma push_macro("ERROR_PLUS_WRAPPED_MSG")
#undef ERROR_PLUS_WRAPPED_MSG
#pragma push_macro("ER_RESULT_NULL")
#undef ER_RESULT_NULL
#pragma push_macro("FATAL_ERR_MSG")
#undef FATAL_ERR_MSG
#pragma push_macro("FATAL_ERR_PLUS_WRAPPED_MSG")
#undef FATAL_ERR_PLUS_WRAPPED_MSG
#pragma push_macro("FILE_ACCESS_ERR")
#undef FILE_ACCESS_ERR
#pragma push_macro("FILE_NOT_FOUND_ERR")
#undef FILE_NOT_FOUND_ERR
#pragma push_macro("FUNCTION_RESOLVE_ERR")
#undef FUNCTION_RESOLVE_ERR
#pragma push_macro("ILLEGAL_ARG_ERR")
#undef ILLEGAL_ARG_ERR
#pragma push_macro("ILLEGAL_ATTRIBUTE_ERR")
#undef ILLEGAL_ATTRIBUTE_ERR
#pragma push_macro("ILLEGAL_ATTR_NAME_ERR")
#undef ILLEGAL_ATTR_NAME_ERR
#pragma push_macro("ILLEGAL_BINARY_OP_ERR")
#undef ILLEGAL_BINARY_OP_ERR
#pragma push_macro("ILLEGAL_CHAR_ERR")
#undef ILLEGAL_CHAR_ERR
#pragma push_macro("ILLEGAL_CHILD_ERR")
#undef ILLEGAL_CHILD_ERR
#pragma push_macro("ILLEGAL_CMDLINE_OPTION_ERR")
#undef ILLEGAL_CMDLINE_OPTION_ERR
#pragma push_macro("ILLEGAL_ELEM_NAME_ERR")
#undef ILLEGAL_ELEM_NAME_ERR
#pragma push_macro("ILLEGAL_PI_ERR")
#undef ILLEGAL_PI_ERR
#pragma push_macro("ILLEGAL_RELAT_OP_ERR")
#undef ILLEGAL_RELAT_OP_ERR
#pragma push_macro("ILLEGAL_TEXT_NODE_ERR")
#undef ILLEGAL_TEXT_NODE_ERR
#pragma push_macro("IMPORT_PRECEDE_OTHERS_ERR")
#undef IMPORT_PRECEDE_OTHERS_ERR
#pragma push_macro("INTERNAL_ERR")
#undef INTERNAL_ERR
#pragma push_macro("INVALID_METHOD_IN_OUTPUT")
#undef INVALID_METHOD_IN_OUTPUT
#pragma push_macro("INVALID_NCNAME_ERR")
#undef INVALID_NCNAME_ERR
#pragma push_macro("INVALID_QNAME_ERR")
#undef INVALID_QNAME_ERR
#pragma push_macro("INVALID_URI_ERR")
#undef INVALID_URI_ERR
#pragma push_macro("JAXP_COMPILE_ERR")
#undef JAXP_COMPILE_ERR
#pragma push_macro("JAXP_GET_FEATURE_NULL_NAME")
#undef JAXP_GET_FEATURE_NULL_NAME
#pragma push_macro("JAXP_INVALID_ATTR_ERR")
#undef JAXP_INVALID_ATTR_ERR
#pragma push_macro("JAXP_INVALID_ATTR_VALUE_ERR")
#undef JAXP_INVALID_ATTR_VALUE_ERR
#pragma push_macro("JAXP_INVALID_SET_PARAM_VALUE")
#undef JAXP_INVALID_SET_PARAM_VALUE
#pragma push_macro("JAXP_NO_HANDLER_ERR")
#undef JAXP_NO_HANDLER_ERR
#pragma push_macro("JAXP_NO_RESULT_ERR")
#undef JAXP_NO_RESULT_ERR
#pragma push_macro("JAXP_NO_SOURCE_ERR")
#undef JAXP_NO_SOURCE_ERR
#pragma push_macro("JAXP_NO_TRANSLET_ERR")
#undef JAXP_NO_TRANSLET_ERR
#pragma push_macro("JAXP_SECUREPROCESSING_FEATURE")
#undef JAXP_SECUREPROCESSING_FEATURE
#pragma push_macro("JAXP_SET_FEATURE_NULL_NAME")
#undef JAXP_SET_FEATURE_NULL_NAME
#pragma push_macro("JAXP_SET_RESULT_ERR")
#undef JAXP_SET_RESULT_ERR
#pragma push_macro("JAXP_UNKNOWN_PROP_ERR")
#undef JAXP_UNKNOWN_PROP_ERR
#pragma push_macro("JAXP_UNKNOWN_SOURCE_ERR")
#undef JAXP_UNKNOWN_SOURCE_ERR
#pragma push_macro("JAXP_UNSUPPORTED_FEATURE")
#undef JAXP_UNSUPPORTED_FEATURE
#pragma push_macro("KEY_USE_ATTR_ERR")
#undef KEY_USE_ATTR_ERR
#pragma push_macro("METHOD_NOT_FOUND_ERR")
#undef METHOD_NOT_FOUND_ERR
#pragma push_macro("MISSING_ROOT_ERR")
#undef MISSING_ROOT_ERR
#pragma push_macro("MISSING_WHEN_ERR")
#undef MISSING_WHEN_ERR
#pragma push_macro("MISSING_XSLT_TARGET_ERR")
#undef MISSING_XSLT_TARGET_ERR
#pragma push_macro("MISSING_XSLT_URI_ERR")
#undef MISSING_XSLT_URI_ERR
#pragma push_macro("MULTIPLE_OTHERWISE_ERR")
#undef MULTIPLE_OTHERWISE_ERR
#pragma push_macro("MULTIPLE_STYLESHEET_ERR")
#undef MULTIPLE_STYLESHEET_ERR
#pragma push_macro("NAMESPACE_UNDEF_ERR")
#undef NAMESPACE_UNDEF_ERR
#pragma push_macro("NEED_LITERAL_ERR")
#undef NEED_LITERAL_ERR
#pragma push_macro("NOT_IMPLEMENTED_ERR")
#undef NOT_IMPLEMENTED_ERR
#pragma push_macro("NOT_STYLESHEET_ERR")
#undef NOT_STYLESHEET_ERR
#pragma push_macro("NO_JAVA_FUNCT_THIS_REF")
#undef NO_JAVA_FUNCT_THIS_REF
#pragma push_macro("NO_MAIN_TRANSLET_ERR")
#undef NO_MAIN_TRANSLET_ERR
#pragma push_macro("NO_TRANSLET_CLASS_ERR")
#undef NO_TRANSLET_CLASS_ERR
#pragma push_macro("OUTLINE_ERR_DELETED_TARGET")
#undef OUTLINE_ERR_DELETED_TARGET
#pragma push_macro("OUTLINE_ERR_METHOD_TOO_BIG")
#undef OUTLINE_ERR_METHOD_TOO_BIG
#pragma push_macro("OUTLINE_ERR_TRY_CATCH")
#undef OUTLINE_ERR_TRY_CATCH
#pragma push_macro("OUTLINE_ERR_UNBALANCED_MARKERS")
#undef OUTLINE_ERR_UNBALANCED_MARKERS
#pragma push_macro("OUTPUT_VERSION_ERR")
#undef OUTPUT_VERSION_ERR
#pragma push_macro("REQUIRED_ATTR_ERR")
#undef REQUIRED_ATTR_ERR
#pragma push_macro("RESULT_TREE_SORT_ERR")
#undef RESULT_TREE_SORT_ERR
#pragma push_macro("RUNTIME_ERROR_KEY")
#undef RUNTIME_ERROR_KEY
#pragma push_macro("SAX2DOM_ADAPTER_ERR")
#undef SAX2DOM_ADAPTER_ERR
#pragma push_macro("SAX_PARSER_CONFIG_ERR")
#undef SAX_PARSER_CONFIG_ERR
#pragma push_macro("STRAY_ATTRIBUTE_ERR")
#undef STRAY_ATTRIBUTE_ERR
#pragma push_macro("STRAY_OTHERWISE_ERR")
#undef STRAY_OTHERWISE_ERR
#pragma push_macro("STRAY_SORT_ERR")
#undef STRAY_SORT_ERR
#pragma push_macro("STRAY_WHEN_ERR")
#undef STRAY_WHEN_ERR
#pragma push_macro("SYMBOLS_REDEF_ERR")
#undef SYMBOLS_REDEF_ERR
#pragma push_macro("SYNTAX_ERR")
#undef SYNTAX_ERR
#pragma push_macro("TEMPLATE_REDEF_ERR")
#undef TEMPLATE_REDEF_ERR
#pragma push_macro("TEMPLATE_UNDEF_ERR")
#undef TEMPLATE_UNDEF_ERR
#pragma push_macro("TRANSFORM_USAGE_STR")
#undef TRANSFORM_USAGE_STR
#pragma push_macro("TRANSFORM_WITH_JAR_STR")
#undef TRANSFORM_WITH_JAR_STR
#pragma push_macro("TRANSFORM_WITH_TRANSLET_STR")
#undef TRANSFORM_WITH_TRANSLET_STR
#pragma push_macro("TRANSLET_CLASS_ERR")
#undef TRANSLET_CLASS_ERR
#pragma push_macro("TRANSLET_NAME_JAVA_CONFLICT")
#undef TRANSLET_NAME_JAVA_CONFLICT
#pragma push_macro("TRANSLET_OBJECT_ERR")
#undef TRANSLET_OBJECT_ERR
#pragma push_macro("TYPE_CHECK_ERR")
#undef TYPE_CHECK_ERR
#pragma push_macro("TYPE_CHECK_UNK_LOC_ERR")
#undef TYPE_CHECK_UNK_LOC_ERR
#pragma push_macro("UNKNOWN_SIG_TYPE_ERR")
#undef UNKNOWN_SIG_TYPE_ERR
#pragma push_macro("UNNAMED_ATTRIBSET_ERR")
#undef UNNAMED_ATTRIBSET_ERR
#pragma push_macro("UNSUPPORTED_ENCODING")
#undef UNSUPPORTED_ENCODING
#pragma push_macro("UNSUPPORTED_EXT_ERR")
#undef UNSUPPORTED_EXT_ERR
#pragma push_macro("UNSUPPORTED_XSL_ERR")
#undef UNSUPPORTED_XSL_ERR
#pragma push_macro("VARIABLE_REDEF_ERR")
#undef VARIABLE_REDEF_ERR
#pragma push_macro("VARIABLE_UNDEF_ERR")
#undef VARIABLE_UNDEF_ERR
#pragma push_macro("WARNING_MSG")
#undef WARNING_MSG
#pragma push_macro("WARNING_PLUS_WRAPPED_MSG")
#undef WARNING_PLUS_WRAPPED_MSG
#pragma push_macro("WHEN_ELEMENT_ERR")
#undef WHEN_ELEMENT_ERR
#pragma push_macro("XPATH_PARSER_ERR")
#undef XPATH_PARSER_ERR
#pragma push_macro("XSLTC_SOURCE_ERR")
#undef XSLTC_SOURCE_ERR
#pragma push_macro("XSL_VERSION_ERR")
#undef XSL_VERSION_ERR

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace xsltc {
							namespace compiler {
								class SyntaxTreeNode;
							}
						}
					}
				}
			}
		}
	}
}
namespace java {
	namespace lang {
		class Throwable;
	}
}
namespace java {
	namespace util {
		class ResourceBundle;
	}
}

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace xsltc {
							namespace compiler {
								namespace util {

class ErrorMsg : public ::java::lang::Object {
	$class(ErrorMsg, 0, ::java::lang::Object)
public:
	ErrorMsg();
	void init$($String* code);
	void init$($String* code, $Throwable* e);
	void init$($String* message, int32_t line);
	void init$($String* code, int32_t line, Object$* param);
	void init$($String* code, Object$* param);
	void init$($String* code, Object$* param1, Object$* param2);
	void init$($String* code, ::com::sun::org::apache::xalan::internal::xsltc::compiler::SyntaxTreeNode* node);
	void init$($String* code, Object$* param1, ::com::sun::org::apache::xalan::internal::xsltc::compiler::SyntaxTreeNode* node);
	void init$($String* code, Object$* param1, Object$* param2, ::com::sun::org::apache::xalan::internal::xsltc::compiler::SyntaxTreeNode* node);
	$String* formatLine();
	$Throwable* getCause();
	$String* getErrorMessage();
	$String* getFileName(::com::sun::org::apache::xalan::internal::xsltc::compiler::SyntaxTreeNode* node);
	bool isWarningError();
	void setWarningError(bool flag);
	virtual $String* toString() override;
	$String* toString(Object$* obj);
	$String* toString(Object$* obj0, Object$* obj1);
	$String* _code = nullptr;
	int32_t _line = 0;
	$String* _message = nullptr;
	$String* _url = nullptr;
	$ObjectArray* _params = nullptr;
	bool _isWarningError = false;
	$Throwable* _cause = nullptr;
	static $String* MULTIPLE_STYLESHEET_ERR;
	static $String* TEMPLATE_REDEF_ERR;
	static $String* TEMPLATE_UNDEF_ERR;
	static $String* VARIABLE_REDEF_ERR;
	static $String* VARIABLE_UNDEF_ERR;
	static $String* CLASS_NOT_FOUND_ERR;
	static $String* METHOD_NOT_FOUND_ERR;
	static $String* ARGUMENT_CONVERSION_ERR;
	static $String* FILE_NOT_FOUND_ERR;
	static $String* INVALID_URI_ERR;
	static $String* CATALOG_EXCEPTION;
	static $String* FILE_ACCESS_ERR;
	static $String* MISSING_ROOT_ERR;
	static $String* NAMESPACE_UNDEF_ERR;
	static $String* FUNCTION_RESOLVE_ERR;
	static $String* NEED_LITERAL_ERR;
	static $String* XPATH_PARSER_ERR;
	static $String* REQUIRED_ATTR_ERR;
	static $String* ILLEGAL_CHAR_ERR;
	static $String* ILLEGAL_PI_ERR;
	static $String* STRAY_ATTRIBUTE_ERR;
	static $String* ILLEGAL_ATTRIBUTE_ERR;
	static $String* CIRCULAR_INCLUDE_ERR;
	static $String* IMPORT_PRECEDE_OTHERS_ERR;
	static $String* RESULT_TREE_SORT_ERR;
	static $String* SYMBOLS_REDEF_ERR;
	static $String* XSL_VERSION_ERR;
	static $String* CIRCULAR_VARIABLE_ERR;
	static $String* ILLEGAL_BINARY_OP_ERR;
	static $String* ILLEGAL_ARG_ERR;
	static $String* DOCUMENT_ARG_ERR;
	static $String* MISSING_WHEN_ERR;
	static $String* MULTIPLE_OTHERWISE_ERR;
	static $String* STRAY_OTHERWISE_ERR;
	static $String* STRAY_WHEN_ERR;
	static $String* WHEN_ELEMENT_ERR;
	static $String* UNNAMED_ATTRIBSET_ERR;
	static $String* ILLEGAL_CHILD_ERR;
	static $String* ILLEGAL_ELEM_NAME_ERR;
	static $String* ILLEGAL_ATTR_NAME_ERR;
	static $String* ILLEGAL_TEXT_NODE_ERR;
	static $String* SAX_PARSER_CONFIG_ERR;
	static $String* INTERNAL_ERR;
	static $String* UNSUPPORTED_XSL_ERR;
	static $String* UNSUPPORTED_EXT_ERR;
	static $String* MISSING_XSLT_URI_ERR;
	static $String* MISSING_XSLT_TARGET_ERR;
	static $String* ACCESSING_XSLT_TARGET_ERR;
	static $String* NOT_IMPLEMENTED_ERR;
	static $String* NOT_STYLESHEET_ERR;
	static $String* ELEMENT_PARSE_ERR;
	static $String* KEY_USE_ATTR_ERR;
	static $String* OUTPUT_VERSION_ERR;
	static $String* ILLEGAL_RELAT_OP_ERR;
	static $String* ATTRIBSET_UNDEF_ERR;
	static $String* ATTR_VAL_TEMPLATE_ERR;
	static $String* UNKNOWN_SIG_TYPE_ERR;
	static $String* DATA_CONVERSION_ERR;
	static $String* NO_TRANSLET_CLASS_ERR;
	static $String* NO_MAIN_TRANSLET_ERR;
	static $String* TRANSLET_CLASS_ERR;
	static $String* TRANSLET_OBJECT_ERR;
	static $String* ERROR_LISTENER_NULL_ERR;
	static $String* JAXP_UNKNOWN_SOURCE_ERR;
	static $String* JAXP_NO_SOURCE_ERR;
	static $String* JAXP_COMPILE_ERR;
	static $String* JAXP_INVALID_ATTR_ERR;
	static $String* JAXP_INVALID_ATTR_VALUE_ERR;
	static $String* JAXP_SET_RESULT_ERR;
	static $String* JAXP_NO_TRANSLET_ERR;
	static $String* JAXP_NO_HANDLER_ERR;
	static $String* JAXP_NO_RESULT_ERR;
	static $String* JAXP_UNKNOWN_PROP_ERR;
	static $String* SAX2DOM_ADAPTER_ERR;
	static $String* XSLTC_SOURCE_ERR;
	static $String* ER_RESULT_NULL;
	static $String* JAXP_INVALID_SET_PARAM_VALUE;
	static $String* JAXP_SET_FEATURE_NULL_NAME;
	static $String* JAXP_GET_FEATURE_NULL_NAME;
	static $String* JAXP_UNSUPPORTED_FEATURE;
	static $String* JAXP_SECUREPROCESSING_FEATURE;
	static $String* COMPILE_STDIN_ERR;
	static $String* COMPILE_USAGE_STR;
	static $String* TRANSFORM_USAGE_STR;
	static $String* STRAY_SORT_ERR;
	static $String* UNSUPPORTED_ENCODING;
	static $String* SYNTAX_ERR;
	static $String* CONSTRUCTOR_NOT_FOUND;
	static $String* NO_JAVA_FUNCT_THIS_REF;
	static $String* TYPE_CHECK_ERR;
	static $String* TYPE_CHECK_UNK_LOC_ERR;
	static $String* ILLEGAL_CMDLINE_OPTION_ERR;
	static $String* CMDLINE_OPT_MISSING_ARG_ERR;
	static $String* WARNING_PLUS_WRAPPED_MSG;
	static $String* WARNING_MSG;
	static $String* FATAL_ERR_PLUS_WRAPPED_MSG;
	static $String* FATAL_ERR_MSG;
	static $String* ERROR_PLUS_WRAPPED_MSG;
	static $String* ERROR_MSG;
	static $String* TRANSFORM_WITH_TRANSLET_STR;
	static $String* TRANSFORM_WITH_JAR_STR;
	static $String* COULD_NOT_CREATE_TRANS_FACT;
	static $String* TRANSLET_NAME_JAVA_CONFLICT;
	static $String* INVALID_QNAME_ERR;
	static $String* INVALID_NCNAME_ERR;
	static $String* INVALID_METHOD_IN_OUTPUT;
	static $String* OUTLINE_ERR_TRY_CATCH;
	static $String* OUTLINE_ERR_UNBALANCED_MARKERS;
	static $String* OUTLINE_ERR_DELETED_TARGET;
	static $String* OUTLINE_ERR_METHOD_TOO_BIG;
	static $String* DESERIALIZE_TRANSLET_ERR;
	static ::java::util::ResourceBundle* _bundle;
	static $String* ERROR_MESSAGES_KEY;
	static $String* COMPILER_ERROR_KEY;
	static $String* COMPILER_WARNING_KEY;
	static $String* RUNTIME_ERROR_KEY;
};

								} // util
							} // compiler
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("ACCESSING_XSLT_TARGET_ERR")
#pragma pop_macro("ARGUMENT_CONVERSION_ERR")
#pragma pop_macro("ATTRIBSET_UNDEF_ERR")
#pragma pop_macro("ATTR_VAL_TEMPLATE_ERR")
#pragma pop_macro("CATALOG_EXCEPTION")
#pragma pop_macro("CIRCULAR_INCLUDE_ERR")
#pragma pop_macro("CIRCULAR_VARIABLE_ERR")
#pragma pop_macro("CLASS_NOT_FOUND_ERR")
#pragma pop_macro("CMDLINE_OPT_MISSING_ARG_ERR")
#pragma pop_macro("COMPILER_ERROR_KEY")
#pragma pop_macro("COMPILER_WARNING_KEY")
#pragma pop_macro("COMPILE_STDIN_ERR")
#pragma pop_macro("COMPILE_USAGE_STR")
#pragma pop_macro("CONSTRUCTOR_NOT_FOUND")
#pragma pop_macro("COULD_NOT_CREATE_TRANS_FACT")
#pragma pop_macro("DATA_CONVERSION_ERR")
#pragma pop_macro("DESERIALIZE_TRANSLET_ERR")
#pragma pop_macro("DOCUMENT_ARG_ERR")
#pragma pop_macro("ELEMENT_PARSE_ERR")
#pragma pop_macro("ERROR_LISTENER_NULL_ERR")
#pragma pop_macro("ERROR_MESSAGES_KEY")
#pragma pop_macro("ERROR_MSG")
#pragma pop_macro("ERROR_PLUS_WRAPPED_MSG")
#pragma pop_macro("ER_RESULT_NULL")
#pragma pop_macro("FATAL_ERR_MSG")
#pragma pop_macro("FATAL_ERR_PLUS_WRAPPED_MSG")
#pragma pop_macro("FILE_ACCESS_ERR")
#pragma pop_macro("FILE_NOT_FOUND_ERR")
#pragma pop_macro("FUNCTION_RESOLVE_ERR")
#pragma pop_macro("ILLEGAL_ARG_ERR")
#pragma pop_macro("ILLEGAL_ATTRIBUTE_ERR")
#pragma pop_macro("ILLEGAL_ATTR_NAME_ERR")
#pragma pop_macro("ILLEGAL_BINARY_OP_ERR")
#pragma pop_macro("ILLEGAL_CHAR_ERR")
#pragma pop_macro("ILLEGAL_CHILD_ERR")
#pragma pop_macro("ILLEGAL_CMDLINE_OPTION_ERR")
#pragma pop_macro("ILLEGAL_ELEM_NAME_ERR")
#pragma pop_macro("ILLEGAL_PI_ERR")
#pragma pop_macro("ILLEGAL_RELAT_OP_ERR")
#pragma pop_macro("ILLEGAL_TEXT_NODE_ERR")
#pragma pop_macro("IMPORT_PRECEDE_OTHERS_ERR")
#pragma pop_macro("INTERNAL_ERR")
#pragma pop_macro("INVALID_METHOD_IN_OUTPUT")
#pragma pop_macro("INVALID_NCNAME_ERR")
#pragma pop_macro("INVALID_QNAME_ERR")
#pragma pop_macro("INVALID_URI_ERR")
#pragma pop_macro("JAXP_COMPILE_ERR")
#pragma pop_macro("JAXP_GET_FEATURE_NULL_NAME")
#pragma pop_macro("JAXP_INVALID_ATTR_ERR")
#pragma pop_macro("JAXP_INVALID_ATTR_VALUE_ERR")
#pragma pop_macro("JAXP_INVALID_SET_PARAM_VALUE")
#pragma pop_macro("JAXP_NO_HANDLER_ERR")
#pragma pop_macro("JAXP_NO_RESULT_ERR")
#pragma pop_macro("JAXP_NO_SOURCE_ERR")
#pragma pop_macro("JAXP_NO_TRANSLET_ERR")
#pragma pop_macro("JAXP_SECUREPROCESSING_FEATURE")
#pragma pop_macro("JAXP_SET_FEATURE_NULL_NAME")
#pragma pop_macro("JAXP_SET_RESULT_ERR")
#pragma pop_macro("JAXP_UNKNOWN_PROP_ERR")
#pragma pop_macro("JAXP_UNKNOWN_SOURCE_ERR")
#pragma pop_macro("JAXP_UNSUPPORTED_FEATURE")
#pragma pop_macro("KEY_USE_ATTR_ERR")
#pragma pop_macro("METHOD_NOT_FOUND_ERR")
#pragma pop_macro("MISSING_ROOT_ERR")
#pragma pop_macro("MISSING_WHEN_ERR")
#pragma pop_macro("MISSING_XSLT_TARGET_ERR")
#pragma pop_macro("MISSING_XSLT_URI_ERR")
#pragma pop_macro("MULTIPLE_OTHERWISE_ERR")
#pragma pop_macro("MULTIPLE_STYLESHEET_ERR")
#pragma pop_macro("NAMESPACE_UNDEF_ERR")
#pragma pop_macro("NEED_LITERAL_ERR")
#pragma pop_macro("NOT_IMPLEMENTED_ERR")
#pragma pop_macro("NOT_STYLESHEET_ERR")
#pragma pop_macro("NO_JAVA_FUNCT_THIS_REF")
#pragma pop_macro("NO_MAIN_TRANSLET_ERR")
#pragma pop_macro("NO_TRANSLET_CLASS_ERR")
#pragma pop_macro("OUTLINE_ERR_DELETED_TARGET")
#pragma pop_macro("OUTLINE_ERR_METHOD_TOO_BIG")
#pragma pop_macro("OUTLINE_ERR_TRY_CATCH")
#pragma pop_macro("OUTLINE_ERR_UNBALANCED_MARKERS")
#pragma pop_macro("OUTPUT_VERSION_ERR")
#pragma pop_macro("REQUIRED_ATTR_ERR")
#pragma pop_macro("RESULT_TREE_SORT_ERR")
#pragma pop_macro("RUNTIME_ERROR_KEY")
#pragma pop_macro("SAX2DOM_ADAPTER_ERR")
#pragma pop_macro("SAX_PARSER_CONFIG_ERR")
#pragma pop_macro("STRAY_ATTRIBUTE_ERR")
#pragma pop_macro("STRAY_OTHERWISE_ERR")
#pragma pop_macro("STRAY_SORT_ERR")
#pragma pop_macro("STRAY_WHEN_ERR")
#pragma pop_macro("SYMBOLS_REDEF_ERR")
#pragma pop_macro("SYNTAX_ERR")
#pragma pop_macro("TEMPLATE_REDEF_ERR")
#pragma pop_macro("TEMPLATE_UNDEF_ERR")
#pragma pop_macro("TRANSFORM_USAGE_STR")
#pragma pop_macro("TRANSFORM_WITH_JAR_STR")
#pragma pop_macro("TRANSFORM_WITH_TRANSLET_STR")
#pragma pop_macro("TRANSLET_CLASS_ERR")
#pragma pop_macro("TRANSLET_NAME_JAVA_CONFLICT")
#pragma pop_macro("TRANSLET_OBJECT_ERR")
#pragma pop_macro("TYPE_CHECK_ERR")
#pragma pop_macro("TYPE_CHECK_UNK_LOC_ERR")
#pragma pop_macro("UNKNOWN_SIG_TYPE_ERR")
#pragma pop_macro("UNNAMED_ATTRIBSET_ERR")
#pragma pop_macro("UNSUPPORTED_ENCODING")
#pragma pop_macro("UNSUPPORTED_EXT_ERR")
#pragma pop_macro("UNSUPPORTED_XSL_ERR")
#pragma pop_macro("VARIABLE_REDEF_ERR")
#pragma pop_macro("VARIABLE_UNDEF_ERR")
#pragma pop_macro("WARNING_MSG")
#pragma pop_macro("WARNING_PLUS_WRAPPED_MSG")
#pragma pop_macro("WHEN_ELEMENT_ERR")
#pragma pop_macro("XPATH_PARSER_ERR")
#pragma pop_macro("XSLTC_SOURCE_ERR")
#pragma pop_macro("XSL_VERSION_ERR")

#endif // _com_sun_org_apache_xalan_internal_xsltc_compiler_util_ErrorMsg_h_