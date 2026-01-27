#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/ErrorMsg.h>

#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Stylesheet.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/SyntaxTreeNode.h>
#include <java/lang/StringBuffer.h>
#include <java/text/MessageFormat.h>
#include <java/util/Locale.h>
#include <java/util/ResourceBundle.h>
#include <jdk/xml/internal/SecuritySupport.h>
#include <jcpp.h>

#undef ACCESSING_XSLT_TARGET_ERR
#undef ARGUMENT_CONVERSION_ERR
#undef ATTRIBSET_UNDEF_ERR
#undef ATTR_VAL_TEMPLATE_ERR
#undef CATALOG_EXCEPTION
#undef CIRCULAR_INCLUDE_ERR
#undef CIRCULAR_VARIABLE_ERR
#undef CLASS_NOT_FOUND_ERR
#undef CMDLINE_OPT_MISSING_ARG_ERR
#undef COMPILER_ERROR_KEY
#undef COMPILER_WARNING_KEY
#undef COMPILE_STDIN_ERR
#undef COMPILE_USAGE_STR
#undef CONSTRUCTOR_NOT_FOUND
#undef COULD_NOT_CREATE_TRANS_FACT
#undef DATA_CONVERSION_ERR
#undef DESERIALIZE_TRANSLET_ERR
#undef DOCUMENT_ARG_ERR
#undef ELEMENT_PARSE_ERR
#undef ERROR_LISTENER_NULL_ERR
#undef ERROR_MESSAGES_KEY
#undef ERROR_MSG
#undef ERROR_PLUS_WRAPPED_MSG
#undef ER_RESULT_NULL
#undef FATAL_ERR_MSG
#undef FATAL_ERR_PLUS_WRAPPED_MSG
#undef FILE_ACCESS_ERR
#undef FILE_NOT_FOUND_ERR
#undef FUNCTION_RESOLVE_ERR
#undef ILLEGAL_ARG_ERR
#undef ILLEGAL_ATTRIBUTE_ERR
#undef ILLEGAL_ATTR_NAME_ERR
#undef ILLEGAL_BINARY_OP_ERR
#undef ILLEGAL_CHAR_ERR
#undef ILLEGAL_CHILD_ERR
#undef ILLEGAL_CMDLINE_OPTION_ERR
#undef ILLEGAL_ELEM_NAME_ERR
#undef ILLEGAL_PI_ERR
#undef ILLEGAL_RELAT_OP_ERR
#undef ILLEGAL_TEXT_NODE_ERR
#undef IMPORT_PRECEDE_OTHERS_ERR
#undef INTERNAL_ERR
#undef INVALID_METHOD_IN_OUTPUT
#undef INVALID_NCNAME_ERR
#undef INVALID_QNAME_ERR
#undef INVALID_URI_ERR
#undef JAXP_COMPILE_ERR
#undef JAXP_GET_FEATURE_NULL_NAME
#undef JAXP_INVALID_ATTR_ERR
#undef JAXP_INVALID_ATTR_VALUE_ERR
#undef JAXP_INVALID_SET_PARAM_VALUE
#undef JAXP_NO_HANDLER_ERR
#undef JAXP_NO_RESULT_ERR
#undef JAXP_NO_SOURCE_ERR
#undef JAXP_NO_TRANSLET_ERR
#undef JAXP_SECUREPROCESSING_FEATURE
#undef JAXP_SET_FEATURE_NULL_NAME
#undef JAXP_SET_RESULT_ERR
#undef JAXP_UNKNOWN_PROP_ERR
#undef JAXP_UNKNOWN_SOURCE_ERR
#undef JAXP_UNSUPPORTED_FEATURE
#undef KEY_USE_ATTR_ERR
#undef METHOD_NOT_FOUND_ERR
#undef MISSING_ROOT_ERR
#undef MISSING_WHEN_ERR
#undef MISSING_XSLT_TARGET_ERR
#undef MISSING_XSLT_URI_ERR
#undef MULTIPLE_OTHERWISE_ERR
#undef MULTIPLE_STYLESHEET_ERR
#undef NAMESPACE_UNDEF_ERR
#undef NEED_LITERAL_ERR
#undef NOT_IMPLEMENTED_ERR
#undef NOT_STYLESHEET_ERR
#undef NO_JAVA_FUNCT_THIS_REF
#undef NO_MAIN_TRANSLET_ERR
#undef NO_TRANSLET_CLASS_ERR
#undef OUTLINE_ERR_DELETED_TARGET
#undef OUTLINE_ERR_METHOD_TOO_BIG
#undef OUTLINE_ERR_TRY_CATCH
#undef OUTLINE_ERR_UNBALANCED_MARKERS
#undef OUTPUT_VERSION_ERR
#undef REQUIRED_ATTR_ERR
#undef RESULT_TREE_SORT_ERR
#undef RUNTIME_ERROR_KEY
#undef SAX2DOM_ADAPTER_ERR
#undef SAX_PARSER_CONFIG_ERR
#undef STRAY_ATTRIBUTE_ERR
#undef STRAY_OTHERWISE_ERR
#undef STRAY_SORT_ERR
#undef STRAY_WHEN_ERR
#undef SYMBOLS_REDEF_ERR
#undef SYNTAX_ERR
#undef TEMPLATE_REDEF_ERR
#undef TEMPLATE_UNDEF_ERR
#undef TRANSFORM_USAGE_STR
#undef TRANSFORM_WITH_JAR_STR
#undef TRANSFORM_WITH_TRANSLET_STR
#undef TRANSLET_CLASS_ERR
#undef TRANSLET_NAME_JAVA_CONFLICT
#undef TRANSLET_OBJECT_ERR
#undef TYPE_CHECK_ERR
#undef TYPE_CHECK_UNK_LOC_ERR
#undef UNKNOWN_SIG_TYPE_ERR
#undef UNNAMED_ATTRIBSET_ERR
#undef UNSUPPORTED_ENCODING
#undef UNSUPPORTED_EXT_ERR
#undef UNSUPPORTED_XSL_ERR
#undef VARIABLE_REDEF_ERR
#undef VARIABLE_UNDEF_ERR
#undef WARNING_MSG
#undef WARNING_PLUS_WRAPPED_MSG
#undef WHEN_ELEMENT_ERR
#undef XPATH_PARSER_ERR
#undef XSLTC_SOURCE_ERR
#undef XSL_VERSION_ERR

using $Stylesheet = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Stylesheet;
using $SyntaxTreeNode = ::com::sun::org::apache::xalan::internal::xsltc::compiler::SyntaxTreeNode;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $StringBuffer = ::java::lang::StringBuffer;
using $MessageFormat = ::java::text::MessageFormat;
using $Locale = ::java::util::Locale;
using $ResourceBundle = ::java::util::ResourceBundle;
using $SecuritySupport = ::jdk::xml::internal::SecuritySupport;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace xsltc {
							namespace compiler {
								namespace util {

$FieldInfo _ErrorMsg_FieldInfo_[] = {
	{"_code", "Ljava/lang/String;", nullptr, $PRIVATE, $field(ErrorMsg, _code)},
	{"_line", "I", nullptr, $PRIVATE, $field(ErrorMsg, _line)},
	{"_message", "Ljava/lang/String;", nullptr, $PRIVATE, $field(ErrorMsg, _message)},
	{"_url", "Ljava/lang/String;", nullptr, $PRIVATE, $field(ErrorMsg, _url)},
	{"_params", "[Ljava/lang/Object;", nullptr, 0, $field(ErrorMsg, _params)},
	{"_isWarningError", "Z", nullptr, $PRIVATE, $field(ErrorMsg, _isWarningError)},
	{"_cause", "Ljava/lang/Throwable;", nullptr, 0, $field(ErrorMsg, _cause)},
	{"MULTIPLE_STYLESHEET_ERR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ErrorMsg, MULTIPLE_STYLESHEET_ERR)},
	{"TEMPLATE_REDEF_ERR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ErrorMsg, TEMPLATE_REDEF_ERR)},
	{"TEMPLATE_UNDEF_ERR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ErrorMsg, TEMPLATE_UNDEF_ERR)},
	{"VARIABLE_REDEF_ERR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ErrorMsg, VARIABLE_REDEF_ERR)},
	{"VARIABLE_UNDEF_ERR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ErrorMsg, VARIABLE_UNDEF_ERR)},
	{"CLASS_NOT_FOUND_ERR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ErrorMsg, CLASS_NOT_FOUND_ERR)},
	{"METHOD_NOT_FOUND_ERR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ErrorMsg, METHOD_NOT_FOUND_ERR)},
	{"ARGUMENT_CONVERSION_ERR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ErrorMsg, ARGUMENT_CONVERSION_ERR)},
	{"FILE_NOT_FOUND_ERR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ErrorMsg, FILE_NOT_FOUND_ERR)},
	{"INVALID_URI_ERR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ErrorMsg, INVALID_URI_ERR)},
	{"CATALOG_EXCEPTION", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ErrorMsg, CATALOG_EXCEPTION)},
	{"FILE_ACCESS_ERR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ErrorMsg, FILE_ACCESS_ERR)},
	{"MISSING_ROOT_ERR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ErrorMsg, MISSING_ROOT_ERR)},
	{"NAMESPACE_UNDEF_ERR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ErrorMsg, NAMESPACE_UNDEF_ERR)},
	{"FUNCTION_RESOLVE_ERR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ErrorMsg, FUNCTION_RESOLVE_ERR)},
	{"NEED_LITERAL_ERR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ErrorMsg, NEED_LITERAL_ERR)},
	{"XPATH_PARSER_ERR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ErrorMsg, XPATH_PARSER_ERR)},
	{"REQUIRED_ATTR_ERR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ErrorMsg, REQUIRED_ATTR_ERR)},
	{"ILLEGAL_CHAR_ERR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ErrorMsg, ILLEGAL_CHAR_ERR)},
	{"ILLEGAL_PI_ERR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ErrorMsg, ILLEGAL_PI_ERR)},
	{"STRAY_ATTRIBUTE_ERR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ErrorMsg, STRAY_ATTRIBUTE_ERR)},
	{"ILLEGAL_ATTRIBUTE_ERR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ErrorMsg, ILLEGAL_ATTRIBUTE_ERR)},
	{"CIRCULAR_INCLUDE_ERR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ErrorMsg, CIRCULAR_INCLUDE_ERR)},
	{"IMPORT_PRECEDE_OTHERS_ERR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ErrorMsg, IMPORT_PRECEDE_OTHERS_ERR)},
	{"RESULT_TREE_SORT_ERR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ErrorMsg, RESULT_TREE_SORT_ERR)},
	{"SYMBOLS_REDEF_ERR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ErrorMsg, SYMBOLS_REDEF_ERR)},
	{"XSL_VERSION_ERR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ErrorMsg, XSL_VERSION_ERR)},
	{"CIRCULAR_VARIABLE_ERR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ErrorMsg, CIRCULAR_VARIABLE_ERR)},
	{"ILLEGAL_BINARY_OP_ERR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ErrorMsg, ILLEGAL_BINARY_OP_ERR)},
	{"ILLEGAL_ARG_ERR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ErrorMsg, ILLEGAL_ARG_ERR)},
	{"DOCUMENT_ARG_ERR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ErrorMsg, DOCUMENT_ARG_ERR)},
	{"MISSING_WHEN_ERR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ErrorMsg, MISSING_WHEN_ERR)},
	{"MULTIPLE_OTHERWISE_ERR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ErrorMsg, MULTIPLE_OTHERWISE_ERR)},
	{"STRAY_OTHERWISE_ERR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ErrorMsg, STRAY_OTHERWISE_ERR)},
	{"STRAY_WHEN_ERR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ErrorMsg, STRAY_WHEN_ERR)},
	{"WHEN_ELEMENT_ERR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ErrorMsg, WHEN_ELEMENT_ERR)},
	{"UNNAMED_ATTRIBSET_ERR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ErrorMsg, UNNAMED_ATTRIBSET_ERR)},
	{"ILLEGAL_CHILD_ERR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ErrorMsg, ILLEGAL_CHILD_ERR)},
	{"ILLEGAL_ELEM_NAME_ERR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ErrorMsg, ILLEGAL_ELEM_NAME_ERR)},
	{"ILLEGAL_ATTR_NAME_ERR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ErrorMsg, ILLEGAL_ATTR_NAME_ERR)},
	{"ILLEGAL_TEXT_NODE_ERR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ErrorMsg, ILLEGAL_TEXT_NODE_ERR)},
	{"SAX_PARSER_CONFIG_ERR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ErrorMsg, SAX_PARSER_CONFIG_ERR)},
	{"INTERNAL_ERR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ErrorMsg, INTERNAL_ERR)},
	{"UNSUPPORTED_XSL_ERR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ErrorMsg, UNSUPPORTED_XSL_ERR)},
	{"UNSUPPORTED_EXT_ERR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ErrorMsg, UNSUPPORTED_EXT_ERR)},
	{"MISSING_XSLT_URI_ERR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ErrorMsg, MISSING_XSLT_URI_ERR)},
	{"MISSING_XSLT_TARGET_ERR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ErrorMsg, MISSING_XSLT_TARGET_ERR)},
	{"ACCESSING_XSLT_TARGET_ERR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ErrorMsg, ACCESSING_XSLT_TARGET_ERR)},
	{"NOT_IMPLEMENTED_ERR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ErrorMsg, NOT_IMPLEMENTED_ERR)},
	{"NOT_STYLESHEET_ERR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ErrorMsg, NOT_STYLESHEET_ERR)},
	{"ELEMENT_PARSE_ERR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ErrorMsg, ELEMENT_PARSE_ERR)},
	{"KEY_USE_ATTR_ERR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ErrorMsg, KEY_USE_ATTR_ERR)},
	{"OUTPUT_VERSION_ERR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ErrorMsg, OUTPUT_VERSION_ERR)},
	{"ILLEGAL_RELAT_OP_ERR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ErrorMsg, ILLEGAL_RELAT_OP_ERR)},
	{"ATTRIBSET_UNDEF_ERR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ErrorMsg, ATTRIBSET_UNDEF_ERR)},
	{"ATTR_VAL_TEMPLATE_ERR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ErrorMsg, ATTR_VAL_TEMPLATE_ERR)},
	{"UNKNOWN_SIG_TYPE_ERR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ErrorMsg, UNKNOWN_SIG_TYPE_ERR)},
	{"DATA_CONVERSION_ERR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ErrorMsg, DATA_CONVERSION_ERR)},
	{"NO_TRANSLET_CLASS_ERR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ErrorMsg, NO_TRANSLET_CLASS_ERR)},
	{"NO_MAIN_TRANSLET_ERR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ErrorMsg, NO_MAIN_TRANSLET_ERR)},
	{"TRANSLET_CLASS_ERR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ErrorMsg, TRANSLET_CLASS_ERR)},
	{"TRANSLET_OBJECT_ERR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ErrorMsg, TRANSLET_OBJECT_ERR)},
	{"ERROR_LISTENER_NULL_ERR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ErrorMsg, ERROR_LISTENER_NULL_ERR)},
	{"JAXP_UNKNOWN_SOURCE_ERR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ErrorMsg, JAXP_UNKNOWN_SOURCE_ERR)},
	{"JAXP_NO_SOURCE_ERR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ErrorMsg, JAXP_NO_SOURCE_ERR)},
	{"JAXP_COMPILE_ERR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ErrorMsg, JAXP_COMPILE_ERR)},
	{"JAXP_INVALID_ATTR_ERR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ErrorMsg, JAXP_INVALID_ATTR_ERR)},
	{"JAXP_INVALID_ATTR_VALUE_ERR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ErrorMsg, JAXP_INVALID_ATTR_VALUE_ERR)},
	{"JAXP_SET_RESULT_ERR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ErrorMsg, JAXP_SET_RESULT_ERR)},
	{"JAXP_NO_TRANSLET_ERR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ErrorMsg, JAXP_NO_TRANSLET_ERR)},
	{"JAXP_NO_HANDLER_ERR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ErrorMsg, JAXP_NO_HANDLER_ERR)},
	{"JAXP_NO_RESULT_ERR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ErrorMsg, JAXP_NO_RESULT_ERR)},
	{"JAXP_UNKNOWN_PROP_ERR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ErrorMsg, JAXP_UNKNOWN_PROP_ERR)},
	{"SAX2DOM_ADAPTER_ERR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ErrorMsg, SAX2DOM_ADAPTER_ERR)},
	{"XSLTC_SOURCE_ERR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ErrorMsg, XSLTC_SOURCE_ERR)},
	{"ER_RESULT_NULL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ErrorMsg, ER_RESULT_NULL)},
	{"JAXP_INVALID_SET_PARAM_VALUE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ErrorMsg, JAXP_INVALID_SET_PARAM_VALUE)},
	{"JAXP_SET_FEATURE_NULL_NAME", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ErrorMsg, JAXP_SET_FEATURE_NULL_NAME)},
	{"JAXP_GET_FEATURE_NULL_NAME", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ErrorMsg, JAXP_GET_FEATURE_NULL_NAME)},
	{"JAXP_UNSUPPORTED_FEATURE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ErrorMsg, JAXP_UNSUPPORTED_FEATURE)},
	{"JAXP_SECUREPROCESSING_FEATURE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ErrorMsg, JAXP_SECUREPROCESSING_FEATURE)},
	{"COMPILE_STDIN_ERR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ErrorMsg, COMPILE_STDIN_ERR)},
	{"COMPILE_USAGE_STR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ErrorMsg, COMPILE_USAGE_STR)},
	{"TRANSFORM_USAGE_STR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ErrorMsg, TRANSFORM_USAGE_STR)},
	{"STRAY_SORT_ERR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ErrorMsg, STRAY_SORT_ERR)},
	{"UNSUPPORTED_ENCODING", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ErrorMsg, UNSUPPORTED_ENCODING)},
	{"SYNTAX_ERR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ErrorMsg, SYNTAX_ERR)},
	{"CONSTRUCTOR_NOT_FOUND", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ErrorMsg, CONSTRUCTOR_NOT_FOUND)},
	{"NO_JAVA_FUNCT_THIS_REF", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ErrorMsg, NO_JAVA_FUNCT_THIS_REF)},
	{"TYPE_CHECK_ERR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ErrorMsg, TYPE_CHECK_ERR)},
	{"TYPE_CHECK_UNK_LOC_ERR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ErrorMsg, TYPE_CHECK_UNK_LOC_ERR)},
	{"ILLEGAL_CMDLINE_OPTION_ERR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ErrorMsg, ILLEGAL_CMDLINE_OPTION_ERR)},
	{"CMDLINE_OPT_MISSING_ARG_ERR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ErrorMsg, CMDLINE_OPT_MISSING_ARG_ERR)},
	{"WARNING_PLUS_WRAPPED_MSG", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ErrorMsg, WARNING_PLUS_WRAPPED_MSG)},
	{"WARNING_MSG", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ErrorMsg, WARNING_MSG)},
	{"FATAL_ERR_PLUS_WRAPPED_MSG", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ErrorMsg, FATAL_ERR_PLUS_WRAPPED_MSG)},
	{"FATAL_ERR_MSG", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ErrorMsg, FATAL_ERR_MSG)},
	{"ERROR_PLUS_WRAPPED_MSG", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ErrorMsg, ERROR_PLUS_WRAPPED_MSG)},
	{"ERROR_MSG", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ErrorMsg, ERROR_MSG)},
	{"TRANSFORM_WITH_TRANSLET_STR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ErrorMsg, TRANSFORM_WITH_TRANSLET_STR)},
	{"TRANSFORM_WITH_JAR_STR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ErrorMsg, TRANSFORM_WITH_JAR_STR)},
	{"COULD_NOT_CREATE_TRANS_FACT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ErrorMsg, COULD_NOT_CREATE_TRANS_FACT)},
	{"TRANSLET_NAME_JAVA_CONFLICT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ErrorMsg, TRANSLET_NAME_JAVA_CONFLICT)},
	{"INVALID_QNAME_ERR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ErrorMsg, INVALID_QNAME_ERR)},
	{"INVALID_NCNAME_ERR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ErrorMsg, INVALID_NCNAME_ERR)},
	{"INVALID_METHOD_IN_OUTPUT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ErrorMsg, INVALID_METHOD_IN_OUTPUT)},
	{"OUTLINE_ERR_TRY_CATCH", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ErrorMsg, OUTLINE_ERR_TRY_CATCH)},
	{"OUTLINE_ERR_UNBALANCED_MARKERS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ErrorMsg, OUTLINE_ERR_UNBALANCED_MARKERS)},
	{"OUTLINE_ERR_DELETED_TARGET", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ErrorMsg, OUTLINE_ERR_DELETED_TARGET)},
	{"OUTLINE_ERR_METHOD_TOO_BIG", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ErrorMsg, OUTLINE_ERR_METHOD_TOO_BIG)},
	{"DESERIALIZE_TRANSLET_ERR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ErrorMsg, DESERIALIZE_TRANSLET_ERR)},
	{"_bundle", "Ljava/util/ResourceBundle;", nullptr, $PRIVATE | $STATIC, $staticField(ErrorMsg, _bundle)},
	{"ERROR_MESSAGES_KEY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ErrorMsg, ERROR_MESSAGES_KEY)},
	{"COMPILER_ERROR_KEY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ErrorMsg, COMPILER_ERROR_KEY)},
	{"COMPILER_WARNING_KEY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ErrorMsg, COMPILER_WARNING_KEY)},
	{"RUNTIME_ERROR_KEY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ErrorMsg, RUNTIME_ERROR_KEY)},
	{}
};

$MethodInfo _ErrorMsg_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(ErrorMsg, init$, void, $String*)},
	{"<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(ErrorMsg, init$, void, $String*, $Throwable*)},
	{"<init>", "(Ljava/lang/String;I)V", nullptr, $PUBLIC, $method(ErrorMsg, init$, void, $String*, int32_t)},
	{"<init>", "(Ljava/lang/String;ILjava/lang/Object;)V", nullptr, $PUBLIC, $method(ErrorMsg, init$, void, $String*, int32_t, Object$*)},
	{"<init>", "(Ljava/lang/String;Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(ErrorMsg, init$, void, $String*, Object$*)},
	{"<init>", "(Ljava/lang/String;Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(ErrorMsg, init$, void, $String*, Object$*, Object$*)},
	{"<init>", "(Ljava/lang/String;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/SyntaxTreeNode;)V", nullptr, $PUBLIC, $method(ErrorMsg, init$, void, $String*, $SyntaxTreeNode*)},
	{"<init>", "(Ljava/lang/String;Ljava/lang/Object;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/SyntaxTreeNode;)V", nullptr, $PUBLIC, $method(ErrorMsg, init$, void, $String*, Object$*, $SyntaxTreeNode*)},
	{"<init>", "(Ljava/lang/String;Ljava/lang/Object;Ljava/lang/Object;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/SyntaxTreeNode;)V", nullptr, $PUBLIC, $method(ErrorMsg, init$, void, $String*, Object$*, Object$*, $SyntaxTreeNode*)},
	{"formatLine", "()Ljava/lang/String;", nullptr, $PRIVATE, $method(ErrorMsg, formatLine, $String*)},
	{"getCause", "()Ljava/lang/Throwable;", nullptr, $PUBLIC, $method(ErrorMsg, getCause, $Throwable*)},
	{"getErrorMessage", "()Ljava/lang/String;", nullptr, $PRIVATE, $method(ErrorMsg, getErrorMessage, $String*)},
	{"getFileName", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/SyntaxTreeNode;)Ljava/lang/String;", nullptr, $PRIVATE, $method(ErrorMsg, getFileName, $String*, $SyntaxTreeNode*)},
	{"isWarningError", "()Z", nullptr, $PUBLIC, $method(ErrorMsg, isWarningError, bool)},
	{"setWarningError", "(Z)V", nullptr, $PUBLIC, $method(ErrorMsg, setWarningError, void, bool)},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(ErrorMsg, toString, $String*)},
	{"toString", "(Ljava/lang/Object;)Ljava/lang/String;", nullptr, $PUBLIC, $method(ErrorMsg, toString, $String*, Object$*)},
	{"toString", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/String;", nullptr, $PUBLIC, $method(ErrorMsg, toString, $String*, Object$*, Object$*)},
	{}
};

$ClassInfo _ErrorMsg_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.org.apache.xalan.internal.xsltc.compiler.util.ErrorMsg",
	"java.lang.Object",
	nullptr,
	_ErrorMsg_FieldInfo_,
	_ErrorMsg_MethodInfo_
};

$Object* allocate$ErrorMsg($Class* clazz) {
	return $of($alloc(ErrorMsg));
}

$String* ErrorMsg::MULTIPLE_STYLESHEET_ERR = nullptr;
$String* ErrorMsg::TEMPLATE_REDEF_ERR = nullptr;
$String* ErrorMsg::TEMPLATE_UNDEF_ERR = nullptr;
$String* ErrorMsg::VARIABLE_REDEF_ERR = nullptr;
$String* ErrorMsg::VARIABLE_UNDEF_ERR = nullptr;
$String* ErrorMsg::CLASS_NOT_FOUND_ERR = nullptr;
$String* ErrorMsg::METHOD_NOT_FOUND_ERR = nullptr;
$String* ErrorMsg::ARGUMENT_CONVERSION_ERR = nullptr;
$String* ErrorMsg::FILE_NOT_FOUND_ERR = nullptr;
$String* ErrorMsg::INVALID_URI_ERR = nullptr;
$String* ErrorMsg::CATALOG_EXCEPTION = nullptr;
$String* ErrorMsg::FILE_ACCESS_ERR = nullptr;
$String* ErrorMsg::MISSING_ROOT_ERR = nullptr;
$String* ErrorMsg::NAMESPACE_UNDEF_ERR = nullptr;
$String* ErrorMsg::FUNCTION_RESOLVE_ERR = nullptr;
$String* ErrorMsg::NEED_LITERAL_ERR = nullptr;
$String* ErrorMsg::XPATH_PARSER_ERR = nullptr;
$String* ErrorMsg::REQUIRED_ATTR_ERR = nullptr;
$String* ErrorMsg::ILLEGAL_CHAR_ERR = nullptr;
$String* ErrorMsg::ILLEGAL_PI_ERR = nullptr;
$String* ErrorMsg::STRAY_ATTRIBUTE_ERR = nullptr;
$String* ErrorMsg::ILLEGAL_ATTRIBUTE_ERR = nullptr;
$String* ErrorMsg::CIRCULAR_INCLUDE_ERR = nullptr;
$String* ErrorMsg::IMPORT_PRECEDE_OTHERS_ERR = nullptr;
$String* ErrorMsg::RESULT_TREE_SORT_ERR = nullptr;
$String* ErrorMsg::SYMBOLS_REDEF_ERR = nullptr;
$String* ErrorMsg::XSL_VERSION_ERR = nullptr;
$String* ErrorMsg::CIRCULAR_VARIABLE_ERR = nullptr;
$String* ErrorMsg::ILLEGAL_BINARY_OP_ERR = nullptr;
$String* ErrorMsg::ILLEGAL_ARG_ERR = nullptr;
$String* ErrorMsg::DOCUMENT_ARG_ERR = nullptr;
$String* ErrorMsg::MISSING_WHEN_ERR = nullptr;
$String* ErrorMsg::MULTIPLE_OTHERWISE_ERR = nullptr;
$String* ErrorMsg::STRAY_OTHERWISE_ERR = nullptr;
$String* ErrorMsg::STRAY_WHEN_ERR = nullptr;
$String* ErrorMsg::WHEN_ELEMENT_ERR = nullptr;
$String* ErrorMsg::UNNAMED_ATTRIBSET_ERR = nullptr;
$String* ErrorMsg::ILLEGAL_CHILD_ERR = nullptr;
$String* ErrorMsg::ILLEGAL_ELEM_NAME_ERR = nullptr;
$String* ErrorMsg::ILLEGAL_ATTR_NAME_ERR = nullptr;
$String* ErrorMsg::ILLEGAL_TEXT_NODE_ERR = nullptr;
$String* ErrorMsg::SAX_PARSER_CONFIG_ERR = nullptr;
$String* ErrorMsg::INTERNAL_ERR = nullptr;
$String* ErrorMsg::UNSUPPORTED_XSL_ERR = nullptr;
$String* ErrorMsg::UNSUPPORTED_EXT_ERR = nullptr;
$String* ErrorMsg::MISSING_XSLT_URI_ERR = nullptr;
$String* ErrorMsg::MISSING_XSLT_TARGET_ERR = nullptr;
$String* ErrorMsg::ACCESSING_XSLT_TARGET_ERR = nullptr;
$String* ErrorMsg::NOT_IMPLEMENTED_ERR = nullptr;
$String* ErrorMsg::NOT_STYLESHEET_ERR = nullptr;
$String* ErrorMsg::ELEMENT_PARSE_ERR = nullptr;
$String* ErrorMsg::KEY_USE_ATTR_ERR = nullptr;
$String* ErrorMsg::OUTPUT_VERSION_ERR = nullptr;
$String* ErrorMsg::ILLEGAL_RELAT_OP_ERR = nullptr;
$String* ErrorMsg::ATTRIBSET_UNDEF_ERR = nullptr;
$String* ErrorMsg::ATTR_VAL_TEMPLATE_ERR = nullptr;
$String* ErrorMsg::UNKNOWN_SIG_TYPE_ERR = nullptr;
$String* ErrorMsg::DATA_CONVERSION_ERR = nullptr;
$String* ErrorMsg::NO_TRANSLET_CLASS_ERR = nullptr;
$String* ErrorMsg::NO_MAIN_TRANSLET_ERR = nullptr;
$String* ErrorMsg::TRANSLET_CLASS_ERR = nullptr;
$String* ErrorMsg::TRANSLET_OBJECT_ERR = nullptr;
$String* ErrorMsg::ERROR_LISTENER_NULL_ERR = nullptr;
$String* ErrorMsg::JAXP_UNKNOWN_SOURCE_ERR = nullptr;
$String* ErrorMsg::JAXP_NO_SOURCE_ERR = nullptr;
$String* ErrorMsg::JAXP_COMPILE_ERR = nullptr;
$String* ErrorMsg::JAXP_INVALID_ATTR_ERR = nullptr;
$String* ErrorMsg::JAXP_INVALID_ATTR_VALUE_ERR = nullptr;
$String* ErrorMsg::JAXP_SET_RESULT_ERR = nullptr;
$String* ErrorMsg::JAXP_NO_TRANSLET_ERR = nullptr;
$String* ErrorMsg::JAXP_NO_HANDLER_ERR = nullptr;
$String* ErrorMsg::JAXP_NO_RESULT_ERR = nullptr;
$String* ErrorMsg::JAXP_UNKNOWN_PROP_ERR = nullptr;
$String* ErrorMsg::SAX2DOM_ADAPTER_ERR = nullptr;
$String* ErrorMsg::XSLTC_SOURCE_ERR = nullptr;
$String* ErrorMsg::ER_RESULT_NULL = nullptr;
$String* ErrorMsg::JAXP_INVALID_SET_PARAM_VALUE = nullptr;
$String* ErrorMsg::JAXP_SET_FEATURE_NULL_NAME = nullptr;
$String* ErrorMsg::JAXP_GET_FEATURE_NULL_NAME = nullptr;
$String* ErrorMsg::JAXP_UNSUPPORTED_FEATURE = nullptr;
$String* ErrorMsg::JAXP_SECUREPROCESSING_FEATURE = nullptr;
$String* ErrorMsg::COMPILE_STDIN_ERR = nullptr;
$String* ErrorMsg::COMPILE_USAGE_STR = nullptr;
$String* ErrorMsg::TRANSFORM_USAGE_STR = nullptr;
$String* ErrorMsg::STRAY_SORT_ERR = nullptr;
$String* ErrorMsg::UNSUPPORTED_ENCODING = nullptr;
$String* ErrorMsg::SYNTAX_ERR = nullptr;
$String* ErrorMsg::CONSTRUCTOR_NOT_FOUND = nullptr;
$String* ErrorMsg::NO_JAVA_FUNCT_THIS_REF = nullptr;
$String* ErrorMsg::TYPE_CHECK_ERR = nullptr;
$String* ErrorMsg::TYPE_CHECK_UNK_LOC_ERR = nullptr;
$String* ErrorMsg::ILLEGAL_CMDLINE_OPTION_ERR = nullptr;
$String* ErrorMsg::CMDLINE_OPT_MISSING_ARG_ERR = nullptr;
$String* ErrorMsg::WARNING_PLUS_WRAPPED_MSG = nullptr;
$String* ErrorMsg::WARNING_MSG = nullptr;
$String* ErrorMsg::FATAL_ERR_PLUS_WRAPPED_MSG = nullptr;
$String* ErrorMsg::FATAL_ERR_MSG = nullptr;
$String* ErrorMsg::ERROR_PLUS_WRAPPED_MSG = nullptr;
$String* ErrorMsg::ERROR_MSG = nullptr;
$String* ErrorMsg::TRANSFORM_WITH_TRANSLET_STR = nullptr;
$String* ErrorMsg::TRANSFORM_WITH_JAR_STR = nullptr;
$String* ErrorMsg::COULD_NOT_CREATE_TRANS_FACT = nullptr;
$String* ErrorMsg::TRANSLET_NAME_JAVA_CONFLICT = nullptr;
$String* ErrorMsg::INVALID_QNAME_ERR = nullptr;
$String* ErrorMsg::INVALID_NCNAME_ERR = nullptr;
$String* ErrorMsg::INVALID_METHOD_IN_OUTPUT = nullptr;
$String* ErrorMsg::OUTLINE_ERR_TRY_CATCH = nullptr;
$String* ErrorMsg::OUTLINE_ERR_UNBALANCED_MARKERS = nullptr;
$String* ErrorMsg::OUTLINE_ERR_DELETED_TARGET = nullptr;
$String* ErrorMsg::OUTLINE_ERR_METHOD_TOO_BIG = nullptr;
$String* ErrorMsg::DESERIALIZE_TRANSLET_ERR = nullptr;
$ResourceBundle* ErrorMsg::_bundle = nullptr;
$String* ErrorMsg::ERROR_MESSAGES_KEY = nullptr;
$String* ErrorMsg::COMPILER_ERROR_KEY = nullptr;
$String* ErrorMsg::COMPILER_WARNING_KEY = nullptr;
$String* ErrorMsg::RUNTIME_ERROR_KEY = nullptr;

void ErrorMsg::init$($String* code) {
	$set(this, _message, nullptr);
	$set(this, _url, nullptr);
	$set(this, _params, nullptr);
	$set(this, _code, code);
	this->_line = 0;
}

void ErrorMsg::init$($String* code, $Throwable* e) {
	$set(this, _message, nullptr);
	$set(this, _url, nullptr);
	$set(this, _params, nullptr);
	$set(this, _code, code);
	$set(this, _message, $nc(e)->getMessage());
	this->_line = 0;
	$set(this, _cause, e);
}

void ErrorMsg::init$($String* message, int32_t line) {
	$set(this, _message, nullptr);
	$set(this, _url, nullptr);
	$set(this, _params, nullptr);
	$set(this, _code, nullptr);
	$set(this, _message, message);
	this->_line = line;
}

void ErrorMsg::init$($String* code, int32_t line, Object$* param) {
	$set(this, _message, nullptr);
	$set(this, _url, nullptr);
	$set(this, _params, nullptr);
	$set(this, _code, code);
	this->_line = line;
	$set(this, _params, $new($ObjectArray, {param}));
}

void ErrorMsg::init$($String* code, Object$* param) {
	ErrorMsg::init$(code);
	$set(this, _params, $new($ObjectArray, 1));
	$nc(this->_params)->set(0, param);
}

void ErrorMsg::init$($String* code, Object$* param1, Object$* param2) {
	ErrorMsg::init$(code);
	$set(this, _params, $new($ObjectArray, 2));
	$nc(this->_params)->set(0, param1);
	$nc(this->_params)->set(1, param2);
}

void ErrorMsg::init$($String* code, $SyntaxTreeNode* node) {
	$set(this, _message, nullptr);
	$set(this, _url, nullptr);
	$set(this, _params, nullptr);
	$set(this, _code, code);
	$set(this, _url, getFileName(node));
	this->_line = $nc(node)->getLineNumber();
}

void ErrorMsg::init$($String* code, Object$* param1, $SyntaxTreeNode* node) {
	$set(this, _message, nullptr);
	$set(this, _url, nullptr);
	$set(this, _params, nullptr);
	$set(this, _code, code);
	$set(this, _url, getFileName(node));
	this->_line = $nc(node)->getLineNumber();
	$set(this, _params, $new($ObjectArray, 1));
	$nc(this->_params)->set(0, param1);
}

void ErrorMsg::init$($String* code, Object$* param1, Object$* param2, $SyntaxTreeNode* node) {
	$set(this, _message, nullptr);
	$set(this, _url, nullptr);
	$set(this, _params, nullptr);
	$set(this, _code, code);
	$set(this, _url, getFileName(node));
	this->_line = $nc(node)->getLineNumber();
	$set(this, _params, $new($ObjectArray, 2));
	$nc(this->_params)->set(0, param1);
	$nc(this->_params)->set(1, param2);
}

$Throwable* ErrorMsg::getCause() {
	return this->_cause;
}

$String* ErrorMsg::getFileName($SyntaxTreeNode* node) {
	$var($Stylesheet, stylesheet, $nc(node)->getStylesheet());
	if (stylesheet != nullptr) {
		return stylesheet->getSystemId();
	} else {
		return nullptr;
	}
}

$String* ErrorMsg::formatLine() {
	$useLocalCurrentObjectStackCache();
	$var($StringBuffer, result, $new($StringBuffer));
	if (this->_url != nullptr) {
		result->append(this->_url);
		result->append(": "_s);
	}
	if (this->_line > 0) {
		result->append("line "_s);
		result->append($($Integer::toString(this->_line)));
		result->append(": "_s);
	}
	return result->toString();
}

$String* ErrorMsg::toString() {
	$useLocalCurrentObjectStackCache();
	$var($String, suffix, (this->_params == nullptr) ? (nullptr != this->_code ? getErrorMessage() : this->_message) : $MessageFormat::format($(getErrorMessage()), this->_params));
	return $str({$(formatLine()), suffix});
}

$String* ErrorMsg::toString(Object$* obj) {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray, params, $new($ObjectArray, 1));
	params->set(0, $($nc($of(obj))->toString()));
	$var($String, suffix, $MessageFormat::format($(getErrorMessage()), params));
	return $str({$(formatLine()), suffix});
}

$String* ErrorMsg::toString(Object$* obj0, Object$* obj1) {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray, params, $new($ObjectArray, 2));
	params->set(0, $($nc($of(obj0))->toString()));
	params->set(1, $($nc($of(obj1))->toString()));
	$var($String, suffix, $MessageFormat::format($(getErrorMessage()), params));
	return $str({$(formatLine()), suffix});
}

$String* ErrorMsg::getErrorMessage() {
	return $nc(ErrorMsg::_bundle)->getString(this->_code);
}

void ErrorMsg::setWarningError(bool flag) {
	this->_isWarningError = flag;
}

bool ErrorMsg::isWarningError() {
	return this->_isWarningError;
}

void clinit$ErrorMsg($Class* class$) {
	$assignStatic(ErrorMsg::MULTIPLE_STYLESHEET_ERR, "MULTIPLE_STYLESHEET_ERR"_s);
	$assignStatic(ErrorMsg::TEMPLATE_REDEF_ERR, "TEMPLATE_REDEF_ERR"_s);
	$assignStatic(ErrorMsg::TEMPLATE_UNDEF_ERR, "TEMPLATE_UNDEF_ERR"_s);
	$assignStatic(ErrorMsg::VARIABLE_REDEF_ERR, "VARIABLE_REDEF_ERR"_s);
	$assignStatic(ErrorMsg::VARIABLE_UNDEF_ERR, "VARIABLE_UNDEF_ERR"_s);
	$assignStatic(ErrorMsg::CLASS_NOT_FOUND_ERR, "CLASS_NOT_FOUND_ERR"_s);
	$assignStatic(ErrorMsg::METHOD_NOT_FOUND_ERR, "METHOD_NOT_FOUND_ERR"_s);
	$assignStatic(ErrorMsg::ARGUMENT_CONVERSION_ERR, "ARGUMENT_CONVERSION_ERR"_s);
	$assignStatic(ErrorMsg::FILE_NOT_FOUND_ERR, "FILE_NOT_FOUND_ERR"_s);
	$assignStatic(ErrorMsg::INVALID_URI_ERR, "INVALID_URI_ERR"_s);
	$assignStatic(ErrorMsg::CATALOG_EXCEPTION, "CATALOG_EXCEPTION"_s);
	$assignStatic(ErrorMsg::FILE_ACCESS_ERR, "FILE_ACCESS_ERR"_s);
	$assignStatic(ErrorMsg::MISSING_ROOT_ERR, "MISSING_ROOT_ERR"_s);
	$assignStatic(ErrorMsg::NAMESPACE_UNDEF_ERR, "NAMESPACE_UNDEF_ERR"_s);
	$assignStatic(ErrorMsg::FUNCTION_RESOLVE_ERR, "FUNCTION_RESOLVE_ERR"_s);
	$assignStatic(ErrorMsg::NEED_LITERAL_ERR, "NEED_LITERAL_ERR"_s);
	$assignStatic(ErrorMsg::XPATH_PARSER_ERR, "XPATH_PARSER_ERR"_s);
	$assignStatic(ErrorMsg::REQUIRED_ATTR_ERR, "REQUIRED_ATTR_ERR"_s);
	$assignStatic(ErrorMsg::ILLEGAL_CHAR_ERR, "ILLEGAL_CHAR_ERR"_s);
	$assignStatic(ErrorMsg::ILLEGAL_PI_ERR, "ILLEGAL_PI_ERR"_s);
	$assignStatic(ErrorMsg::STRAY_ATTRIBUTE_ERR, "STRAY_ATTRIBUTE_ERR"_s);
	$assignStatic(ErrorMsg::ILLEGAL_ATTRIBUTE_ERR, "ILLEGAL_ATTRIBUTE_ERR"_s);
	$assignStatic(ErrorMsg::CIRCULAR_INCLUDE_ERR, "CIRCULAR_INCLUDE_ERR"_s);
	$assignStatic(ErrorMsg::IMPORT_PRECEDE_OTHERS_ERR, "IMPORT_PRECEDE_OTHERS_ERR"_s);
	$assignStatic(ErrorMsg::RESULT_TREE_SORT_ERR, "RESULT_TREE_SORT_ERR"_s);
	$assignStatic(ErrorMsg::SYMBOLS_REDEF_ERR, "SYMBOLS_REDEF_ERR"_s);
	$assignStatic(ErrorMsg::XSL_VERSION_ERR, "XSL_VERSION_ERR"_s);
	$assignStatic(ErrorMsg::CIRCULAR_VARIABLE_ERR, "CIRCULAR_VARIABLE_ERR"_s);
	$assignStatic(ErrorMsg::ILLEGAL_BINARY_OP_ERR, "ILLEGAL_BINARY_OP_ERR"_s);
	$assignStatic(ErrorMsg::ILLEGAL_ARG_ERR, "ILLEGAL_ARG_ERR"_s);
	$assignStatic(ErrorMsg::DOCUMENT_ARG_ERR, "DOCUMENT_ARG_ERR"_s);
	$assignStatic(ErrorMsg::MISSING_WHEN_ERR, "MISSING_WHEN_ERR"_s);
	$assignStatic(ErrorMsg::MULTIPLE_OTHERWISE_ERR, "MULTIPLE_OTHERWISE_ERR"_s);
	$assignStatic(ErrorMsg::STRAY_OTHERWISE_ERR, "STRAY_OTHERWISE_ERR"_s);
	$assignStatic(ErrorMsg::STRAY_WHEN_ERR, "STRAY_WHEN_ERR"_s);
	$assignStatic(ErrorMsg::WHEN_ELEMENT_ERR, "WHEN_ELEMENT_ERR"_s);
	$assignStatic(ErrorMsg::UNNAMED_ATTRIBSET_ERR, "UNNAMED_ATTRIBSET_ERR"_s);
	$assignStatic(ErrorMsg::ILLEGAL_CHILD_ERR, "ILLEGAL_CHILD_ERR"_s);
	$assignStatic(ErrorMsg::ILLEGAL_ELEM_NAME_ERR, "ILLEGAL_ELEM_NAME_ERR"_s);
	$assignStatic(ErrorMsg::ILLEGAL_ATTR_NAME_ERR, "ILLEGAL_ATTR_NAME_ERR"_s);
	$assignStatic(ErrorMsg::ILLEGAL_TEXT_NODE_ERR, "ILLEGAL_TEXT_NODE_ERR"_s);
	$assignStatic(ErrorMsg::SAX_PARSER_CONFIG_ERR, "SAX_PARSER_CONFIG_ERR"_s);
	$assignStatic(ErrorMsg::INTERNAL_ERR, "INTERNAL_ERR"_s);
	$assignStatic(ErrorMsg::UNSUPPORTED_XSL_ERR, "UNSUPPORTED_XSL_ERR"_s);
	$assignStatic(ErrorMsg::UNSUPPORTED_EXT_ERR, "UNSUPPORTED_EXT_ERR"_s);
	$assignStatic(ErrorMsg::MISSING_XSLT_URI_ERR, "MISSING_XSLT_URI_ERR"_s);
	$assignStatic(ErrorMsg::MISSING_XSLT_TARGET_ERR, "MISSING_XSLT_TARGET_ERR"_s);
	$assignStatic(ErrorMsg::ACCESSING_XSLT_TARGET_ERR, "ACCESSING_XSLT_TARGET_ERR"_s);
	$assignStatic(ErrorMsg::NOT_IMPLEMENTED_ERR, "NOT_IMPLEMENTED_ERR"_s);
	$assignStatic(ErrorMsg::NOT_STYLESHEET_ERR, "NOT_STYLESHEET_ERR"_s);
	$assignStatic(ErrorMsg::ELEMENT_PARSE_ERR, "ELEMENT_PARSE_ERR"_s);
	$assignStatic(ErrorMsg::KEY_USE_ATTR_ERR, "KEY_USE_ATTR_ERR"_s);
	$assignStatic(ErrorMsg::OUTPUT_VERSION_ERR, "OUTPUT_VERSION_ERR"_s);
	$assignStatic(ErrorMsg::ILLEGAL_RELAT_OP_ERR, "ILLEGAL_RELAT_OP_ERR"_s);
	$assignStatic(ErrorMsg::ATTRIBSET_UNDEF_ERR, "ATTRIBSET_UNDEF_ERR"_s);
	$assignStatic(ErrorMsg::ATTR_VAL_TEMPLATE_ERR, "ATTR_VAL_TEMPLATE_ERR"_s);
	$assignStatic(ErrorMsg::UNKNOWN_SIG_TYPE_ERR, "UNKNOWN_SIG_TYPE_ERR"_s);
	$assignStatic(ErrorMsg::DATA_CONVERSION_ERR, "DATA_CONVERSION_ERR"_s);
	$assignStatic(ErrorMsg::NO_TRANSLET_CLASS_ERR, "NO_TRANSLET_CLASS_ERR"_s);
	$assignStatic(ErrorMsg::NO_MAIN_TRANSLET_ERR, "NO_MAIN_TRANSLET_ERR"_s);
	$assignStatic(ErrorMsg::TRANSLET_CLASS_ERR, "TRANSLET_CLASS_ERR"_s);
	$assignStatic(ErrorMsg::TRANSLET_OBJECT_ERR, "TRANSLET_OBJECT_ERR"_s);
	$assignStatic(ErrorMsg::ERROR_LISTENER_NULL_ERR, "ERROR_LISTENER_NULL_ERR"_s);
	$assignStatic(ErrorMsg::JAXP_UNKNOWN_SOURCE_ERR, "JAXP_UNKNOWN_SOURCE_ERR"_s);
	$assignStatic(ErrorMsg::JAXP_NO_SOURCE_ERR, "JAXP_NO_SOURCE_ERR"_s);
	$assignStatic(ErrorMsg::JAXP_COMPILE_ERR, "JAXP_COMPILE_ERR"_s);
	$assignStatic(ErrorMsg::JAXP_INVALID_ATTR_ERR, "JAXP_INVALID_ATTR_ERR"_s);
	$assignStatic(ErrorMsg::JAXP_INVALID_ATTR_VALUE_ERR, "JAXP_INVALID_ATTR_VALUE_ERR"_s);
	$assignStatic(ErrorMsg::JAXP_SET_RESULT_ERR, "JAXP_SET_RESULT_ERR"_s);
	$assignStatic(ErrorMsg::JAXP_NO_TRANSLET_ERR, "JAXP_NO_TRANSLET_ERR"_s);
	$assignStatic(ErrorMsg::JAXP_NO_HANDLER_ERR, "JAXP_NO_HANDLER_ERR"_s);
	$assignStatic(ErrorMsg::JAXP_NO_RESULT_ERR, "JAXP_NO_RESULT_ERR"_s);
	$assignStatic(ErrorMsg::JAXP_UNKNOWN_PROP_ERR, "JAXP_UNKNOWN_PROP_ERR"_s);
	$assignStatic(ErrorMsg::SAX2DOM_ADAPTER_ERR, "SAX2DOM_ADAPTER_ERR"_s);
	$assignStatic(ErrorMsg::XSLTC_SOURCE_ERR, "XSLTC_SOURCE_ERR"_s);
	$assignStatic(ErrorMsg::ER_RESULT_NULL, "ER_RESULT_NULL"_s);
	$assignStatic(ErrorMsg::JAXP_INVALID_SET_PARAM_VALUE, "JAXP_INVALID_SET_PARAM_VALUE"_s);
	$assignStatic(ErrorMsg::JAXP_SET_FEATURE_NULL_NAME, "JAXP_SET_FEATURE_NULL_NAME"_s);
	$assignStatic(ErrorMsg::JAXP_GET_FEATURE_NULL_NAME, "JAXP_GET_FEATURE_NULL_NAME"_s);
	$assignStatic(ErrorMsg::JAXP_UNSUPPORTED_FEATURE, "JAXP_UNSUPPORTED_FEATURE"_s);
	$assignStatic(ErrorMsg::JAXP_SECUREPROCESSING_FEATURE, "JAXP_SECUREPROCESSING_FEATURE"_s);
	$assignStatic(ErrorMsg::COMPILE_STDIN_ERR, "COMPILE_STDIN_ERR"_s);
	$assignStatic(ErrorMsg::COMPILE_USAGE_STR, "COMPILE_USAGE_STR"_s);
	$assignStatic(ErrorMsg::TRANSFORM_USAGE_STR, "TRANSFORM_USAGE_STR"_s);
	$assignStatic(ErrorMsg::STRAY_SORT_ERR, "STRAY_SORT_ERR"_s);
	$assignStatic(ErrorMsg::UNSUPPORTED_ENCODING, "UNSUPPORTED_ENCODING"_s);
	$assignStatic(ErrorMsg::SYNTAX_ERR, "SYNTAX_ERR"_s);
	$assignStatic(ErrorMsg::CONSTRUCTOR_NOT_FOUND, "CONSTRUCTOR_NOT_FOUND"_s);
	$assignStatic(ErrorMsg::NO_JAVA_FUNCT_THIS_REF, "NO_JAVA_FUNCT_THIS_REF"_s);
	$assignStatic(ErrorMsg::TYPE_CHECK_ERR, "TYPE_CHECK_ERR"_s);
	$assignStatic(ErrorMsg::TYPE_CHECK_UNK_LOC_ERR, "TYPE_CHECK_UNK_LOC_ERR"_s);
	$assignStatic(ErrorMsg::ILLEGAL_CMDLINE_OPTION_ERR, "ILLEGAL_CMDLINE_OPTION_ERR"_s);
	$assignStatic(ErrorMsg::CMDLINE_OPT_MISSING_ARG_ERR, "CMDLINE_OPT_MISSING_ARG_ERR"_s);
	$assignStatic(ErrorMsg::WARNING_PLUS_WRAPPED_MSG, "WARNING_PLUS_WRAPPED_MSG"_s);
	$assignStatic(ErrorMsg::WARNING_MSG, "WARNING_MSG"_s);
	$assignStatic(ErrorMsg::FATAL_ERR_PLUS_WRAPPED_MSG, "FATAL_ERR_PLUS_WRAPPED_MSG"_s);
	$assignStatic(ErrorMsg::FATAL_ERR_MSG, "FATAL_ERR_MSG"_s);
	$assignStatic(ErrorMsg::ERROR_PLUS_WRAPPED_MSG, "ERROR_PLUS_WRAPPED_MSG"_s);
	$assignStatic(ErrorMsg::ERROR_MSG, "ERROR_MSG"_s);
	$assignStatic(ErrorMsg::TRANSFORM_WITH_TRANSLET_STR, "TRANSFORM_WITH_TRANSLET_STR"_s);
	$assignStatic(ErrorMsg::TRANSFORM_WITH_JAR_STR, "TRANSFORM_WITH_JAR_STR"_s);
	$assignStatic(ErrorMsg::COULD_NOT_CREATE_TRANS_FACT, "COULD_NOT_CREATE_TRANS_FACT"_s);
	$assignStatic(ErrorMsg::TRANSLET_NAME_JAVA_CONFLICT, "TRANSLET_NAME_JAVA_CONFLICT"_s);
	$assignStatic(ErrorMsg::INVALID_QNAME_ERR, "INVALID_QNAME_ERR"_s);
	$assignStatic(ErrorMsg::INVALID_NCNAME_ERR, "INVALID_NCNAME_ERR"_s);
	$assignStatic(ErrorMsg::INVALID_METHOD_IN_OUTPUT, "INVALID_METHOD_IN_OUTPUT"_s);
	$assignStatic(ErrorMsg::OUTLINE_ERR_TRY_CATCH, "OUTLINE_ERR_TRY_CATCH"_s);
	$assignStatic(ErrorMsg::OUTLINE_ERR_UNBALANCED_MARKERS, "OUTLINE_ERR_UNBALANCED_MARKERS"_s);
	$assignStatic(ErrorMsg::OUTLINE_ERR_DELETED_TARGET, "OUTLINE_ERR_DELETED_TARGET"_s);
	$assignStatic(ErrorMsg::OUTLINE_ERR_METHOD_TOO_BIG, "OUTLINE_ERR_METHOD_TOO_BIG"_s);
	$assignStatic(ErrorMsg::DESERIALIZE_TRANSLET_ERR, "DESERIALIZE_TEMPLATES_ERR"_s);
	$assignStatic(ErrorMsg::ERROR_MESSAGES_KEY, "ERROR_MESSAGES_KEY"_s);
	$assignStatic(ErrorMsg::COMPILER_ERROR_KEY, "COMPILER_ERROR_KEY"_s);
	$assignStatic(ErrorMsg::COMPILER_WARNING_KEY, "COMPILER_WARNING_KEY"_s);
	$assignStatic(ErrorMsg::RUNTIME_ERROR_KEY, "RUNTIME_ERROR_KEY"_s);
	{
		$assignStatic(ErrorMsg::_bundle, $SecuritySupport::getResourceBundle("com.sun.org.apache.xalan.internal.xsltc.compiler.util.ErrorMessages"_s, $($Locale::getDefault())));
	}
}

ErrorMsg::ErrorMsg() {
}

$Class* ErrorMsg::load$($String* name, bool initialize) {
	$loadClass(ErrorMsg, name, initialize, &_ErrorMsg_ClassInfo_, clinit$ErrorMsg, allocate$ErrorMsg);
	return class$;
}

$Class* ErrorMsg::class$ = nullptr;

								} // util
							} // compiler
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com