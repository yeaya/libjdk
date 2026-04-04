#include <com/sun/org/apache/xpath/internal/res/XPATHErrorResources_it.h>
#include <java/util/ListResourceBundle.h>
#include <jcpp.h>

#undef BAD_CODE
#undef ERROR_HEADER
#undef ERROR_RESOURCES
#undef ERROR_STRING
#undef ER_ARG_CANNOT_BE_NULL
#undef ER_ASNODEITERATOR_NOT_SUPPORTED_XRTREEFRAGSELECTWRAPPER
#undef ER_AXES_NOT_ALLOWED
#undef ER_BOOLEAN_ARG_NO_LONGER_OPTIONAL
#undef ER_CANNOT_CALL_SETSHOULDCACHENODE
#undef ER_CANNOT_CREATE_URL
#undef ER_CANNOT_DEAL_XPATH_TYPE
#undef ER_CANNOT_WRITE_TO_EMPTYNODELISTIMPL
#undef ER_CANT_CONVERT_TO_BOOLEAN
#undef ER_CANT_CONVERT_TO_MUTABLENODELIST
#undef ER_CANT_CONVERT_TO_NODELIST
#undef ER_CANT_CONVERT_TO_NUMBER
#undef ER_CANT_CONVERT_TO_SINGLENODE
#undef ER_CANT_CONVERT_TO_STRING
#undef ER_CANT_CONVERT_TO_TYPE
#undef ER_CANT_CONVERT_XPATHRESULTTYPE_TO_NUMBER
#undef ER_CANT_GET_SNAPSHOT_LENGTH
#undef ER_CONTEXT_CAN_NOT_BE_NULL
#undef ER_CONTEXT_HAS_NO_OWNERDOC
#undef ER_COULDNOT_BE_FORMATTED_TO_NUMBER
#undef ER_COULDNOT_CREATE_XMLPROCESSORLIAISON
#undef ER_COULDNOT_FIND_ENDOP_AFTER_OPLOCATIONPATH
#undef ER_COULDNOT_FIND_FUNCTION
#undef ER_COULDNOT_GET_VAR_NAMED
#undef ER_COULD_NOT_FIND_VAR
#undef ER_COUNT_TAKES_1_ARG
#undef ER_CURRENT_NOT_ALLOWED_IN_MATCH
#undef ER_CURRENT_TAKES_NO_ARGS
#undef ER_DETACH_NOT_SUPPORTED_XRTREEFRAGSELECTWRAPPER
#undef ER_DIDNOT_FIND_XPATH_SELECT_EXP
#undef ER_DOCUMENT_REPLACED
#undef ER_DOC_MUTATED
#undef ER_DTM_CANNOT_HANDLE_NODES
#undef ER_EMPTY_EXPRESSION
#undef ER_EMPTY_XPATH_RESULT
#undef ER_ERROR_OCCURED
#undef ER_EXPECTED_BUT_FOUND
#undef ER_EXPECTED_DOUBLE_QUOTE
#undef ER_EXPECTED_LOC_PATH
#undef ER_EXPECTED_LOC_PATH_AT_END_EXPR
#undef ER_EXPECTED_LOC_STEP
#undef ER_EXPECTED_MATCH_PATTERN
#undef ER_EXPECTED_NODE_TEST
#undef ER_EXPECTED_REL_LOC_PATH
#undef ER_EXPECTED_REL_PATH_PATTERN
#undef ER_EXPECTED_SINGLE_QUOTE
#undef ER_EXPECTED_STEP_PATTERN
#undef ER_EXTENSION_FUNCTION_CANNOT_BE_INVOKED
#undef ER_EXTRA_ILLEGAL_TOKENS
#undef ER_FASTSTRINGBUFFER_CANNOT_BE_NULL
#undef ER_FEATURE_NAME_NULL
#undef ER_FEATURE_UNKNOWN
#undef ER_FOUND_COMMA_BUT_NO_FOLLOWING_ARG
#undef ER_FOUND_COMMA_BUT_NO_PRECEDING_ARG
#undef ER_FSB_CANNOT_TAKE_STRING
#undef ER_FSB_NOT_SUPPORTED_XSTRINGFORCHARS
#undef ER_FUNCTION_TOKEN_NOT_FOUND
#undef ER_GETTING_NULL_FEATURE
#undef ER_GETTING_UNKNOWN_FEATURE
#undef ER_IGNORABLE_WHITESPACE_NOT_HANDLED
#undef ER_ILLEGAL_AXIS_NAME
#undef ER_ILLEGAL_VARIABLE_REFERENCE
#undef ER_INCOMPATIBLE_TYPES
#undef ER_INCORRECT_ARG_LENGTH
#undef ER_INCORRECT_PROGRAMMER_ASSERTION
#undef ER_INVALID_UTF16_SURROGATE
#undef ER_INVALID_XPATH_TYPE
#undef ER_KEY_HAS_TOO_MANY_ARGS
#undef ER_LOCALNAME_HAS_TOO_MANY_ARGS
#undef ER_NAMESPACEAXIS_NOT_IMPLEMENTED
#undef ER_NAMESPACEURI_HAS_TOO_MANY_ARGS
#undef ER_NAME_HAS_TOO_MANY_ARGS
#undef ER_NODESETDTM_CANNOT_INDEX
#undef ER_NODESETDTM_CANNOT_ITERATE
#undef ER_NODESETDTM_NOT_MUTABLE
#undef ER_NODESET_CANNOT_INDEX
#undef ER_NODESET_CANNOT_ITERATE
#undef ER_NODESET_NOT_MUTABLE
#undef ER_NON_ITERATOR_TYPE
#undef ER_NON_SNAPSHOT_TYPE
#undef ER_NORMALIZESPACE_HAS_TOO_MANY_ARGS
#undef ER_NULL_ERROR_HANDLER
#undef ER_NULL_RESOLVER
#undef ER_NULL_XPATH_FUNCTION_RESOLVER
#undef ER_NULL_XPATH_VARIABLE_RESOLVER
#undef ER_NUMBER_HAS_TOO_MANY_ARGS
#undef ER_NUM_NOT_SUPPORTED_XRTREEFRAGSELECTWRAPPER
#undef ER_OBJECT_MODEL_EMPTY
#undef ER_OBJECT_MODEL_NULL
#undef ER_OIERROR
#undef ER_ONLY_ALLOWS
#undef ER_PARSE_NOT_SUPPORTED
#undef ER_PATTERN_LITERAL_NEEDS_BE_QUOTED
#undef ER_PREDICATE_ILLEGAL_SYNTAX
#undef ER_PREFIX_MUST_RESOLVE
#undef ER_PROBLEM_IN_DTM_NEXTSIBLING
#undef ER_PROG_ASSERT_UNKNOWN_OPCODE
#undef ER_RESOLVE_VARIABLE_RETURNS_NULL
#undef ER_RTF_NOT_SUPPORTED_XRTREEFRAGSELECTWRAPPER
#undef ER_SAX_API_NOT_HANDLED
#undef ER_SECUREPROCESSING_FEATURE
#undef ER_SETDOMFACTORY_NOT_SUPPORTED
#undef ER_SETTING_WALKER_ROOT_TO_NULL
#undef ER_SOURCE_RETURN_TYPE_CANNOT_BE_NULL
#undef ER_STRINGLENGTH_HAS_TOO_MANY_ARGS
#undef ER_STRING_HAS_TOO_MANY_ARGS
#undef ER_STR_NOT_SUPPORTED_XRTREEFRAGSELECTWRAPPER
#undef ER_TRANSLATE_TAKES_3_ARGS
#undef ER_TWO_OR_THREE
#undef ER_UNKNOWN_AXIS
#undef ER_UNKNOWN_MATCH_OPERATION
#undef ER_UNKNOWN_NODETYPE
#undef ER_UNKNOWN_OPCODE
#undef ER_UNKNOWN_STEP
#undef ER_UNPARSEDENTITYURI_TAKES_1_ARG
#undef ER_UNSUPPORTED_ENCODING
#undef ER_UNSUPPORTED_RETURN_TYPE
#undef ER_VARIABLE_ACCESSED_BEFORE_BIND
#undef ER_VAR_NOT_RESOLVABLE
#undef ER_WRONG_DOCUMENT
#undef ER_WRONG_NODETYPE
#undef ER_XERCES_CANNOT_HANDLE_NODES
#undef ER_XERCES_PARSE_ERROR
#undef ER_XERCES_PARSE_ERROR_DETAILS
#undef ER_XPATH_ERROR
#undef ER_XPATH_READOBJECT
#undef ER_XSTRINGFORCHARS_CANNOT_TAKE_STRING
#undef ER_XSTR_NOT_SUPPORTED_XRTREEFRAGSELECTWRAPPER
#undef ER_ZERO_OR_ONE
#undef FORMAT_FAILED
#undef QUERY_HEADER
#undef WARNING_HEADER
#undef WG_CANNOT_MAKE_URL_FROM
#undef WG_COULDNOT_FIND_FUNCTION
#undef WG_DONT_DO_ANYTHING_WITH_NS
#undef WG_EXPAND_ENTITIES_NOT_SUPPORTED
#undef WG_FUNCTION_TOKEN_NOT_FOUND
#undef WG_ILLEGAL_VARIABLE_REFERENCE
#undef WG_LOCALE_NAME_NOT_HANDLED
#undef WG_NEED_DERIVED_OBJECT_TO_IMPLEMENT_NODETEST
#undef WG_PROPERTY_NOT_SUPPORTED
#undef WG_QUO_NO_LONGER_DEFINED
#undef WG_SECURITY_EXCEPTION
#undef WG_UNSUPPORTED_ENCODING
#undef XML_HEADER
#undef XSL_HEADER

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ListResourceBundle = ::java::util::ListResourceBundle;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xpath {
					namespace internal {
						namespace res {

$String* XPATHErrorResources_it::ERROR0000 = nullptr;
$String* XPATHErrorResources_it::ER_CURRENT_NOT_ALLOWED_IN_MATCH = nullptr;
$String* XPATHErrorResources_it::ER_CURRENT_TAKES_NO_ARGS = nullptr;
$String* XPATHErrorResources_it::ER_DOCUMENT_REPLACED = nullptr;
$String* XPATHErrorResources_it::ER_CONTEXT_CAN_NOT_BE_NULL = nullptr;
$String* XPATHErrorResources_it::ER_CONTEXT_HAS_NO_OWNERDOC = nullptr;
$String* XPATHErrorResources_it::ER_LOCALNAME_HAS_TOO_MANY_ARGS = nullptr;
$String* XPATHErrorResources_it::ER_NAMESPACEURI_HAS_TOO_MANY_ARGS = nullptr;
$String* XPATHErrorResources_it::ER_NORMALIZESPACE_HAS_TOO_MANY_ARGS = nullptr;
$String* XPATHErrorResources_it::ER_NUMBER_HAS_TOO_MANY_ARGS = nullptr;
$String* XPATHErrorResources_it::ER_NAME_HAS_TOO_MANY_ARGS = nullptr;
$String* XPATHErrorResources_it::ER_STRING_HAS_TOO_MANY_ARGS = nullptr;
$String* XPATHErrorResources_it::ER_STRINGLENGTH_HAS_TOO_MANY_ARGS = nullptr;
$String* XPATHErrorResources_it::ER_TRANSLATE_TAKES_3_ARGS = nullptr;
$String* XPATHErrorResources_it::ER_UNPARSEDENTITYURI_TAKES_1_ARG = nullptr;
$String* XPATHErrorResources_it::ER_NAMESPACEAXIS_NOT_IMPLEMENTED = nullptr;
$String* XPATHErrorResources_it::ER_UNKNOWN_AXIS = nullptr;
$String* XPATHErrorResources_it::ER_UNKNOWN_MATCH_OPERATION = nullptr;
$String* XPATHErrorResources_it::ER_INCORRECT_ARG_LENGTH = nullptr;
$String* XPATHErrorResources_it::ER_CANT_CONVERT_TO_NUMBER = nullptr;
$String* XPATHErrorResources_it::ER_CANT_CONVERT_XPATHRESULTTYPE_TO_NUMBER = nullptr;
$String* XPATHErrorResources_it::ER_CANT_CONVERT_TO_NODELIST = nullptr;
$String* XPATHErrorResources_it::ER_CANT_CONVERT_TO_MUTABLENODELIST = nullptr;
$String* XPATHErrorResources_it::ER_CANT_CONVERT_TO_TYPE = nullptr;
$String* XPATHErrorResources_it::ER_EXPECTED_MATCH_PATTERN = nullptr;
$String* XPATHErrorResources_it::ER_COULDNOT_GET_VAR_NAMED = nullptr;
$String* XPATHErrorResources_it::ER_UNKNOWN_OPCODE = nullptr;
$String* XPATHErrorResources_it::ER_EXTRA_ILLEGAL_TOKENS = nullptr;
$String* XPATHErrorResources_it::ER_EXPECTED_DOUBLE_QUOTE = nullptr;
$String* XPATHErrorResources_it::ER_EXPECTED_SINGLE_QUOTE = nullptr;
$String* XPATHErrorResources_it::ER_EMPTY_EXPRESSION = nullptr;
$String* XPATHErrorResources_it::ER_EXPECTED_BUT_FOUND = nullptr;
$String* XPATHErrorResources_it::ER_INCORRECT_PROGRAMMER_ASSERTION = nullptr;
$String* XPATHErrorResources_it::ER_BOOLEAN_ARG_NO_LONGER_OPTIONAL = nullptr;
$String* XPATHErrorResources_it::ER_FOUND_COMMA_BUT_NO_PRECEDING_ARG = nullptr;
$String* XPATHErrorResources_it::ER_FOUND_COMMA_BUT_NO_FOLLOWING_ARG = nullptr;
$String* XPATHErrorResources_it::ER_PREDICATE_ILLEGAL_SYNTAX = nullptr;
$String* XPATHErrorResources_it::ER_ILLEGAL_AXIS_NAME = nullptr;
$String* XPATHErrorResources_it::ER_UNKNOWN_NODETYPE = nullptr;
$String* XPATHErrorResources_it::ER_PATTERN_LITERAL_NEEDS_BE_QUOTED = nullptr;
$String* XPATHErrorResources_it::ER_COULDNOT_BE_FORMATTED_TO_NUMBER = nullptr;
$String* XPATHErrorResources_it::ER_COULDNOT_CREATE_XMLPROCESSORLIAISON = nullptr;
$String* XPATHErrorResources_it::ER_DIDNOT_FIND_XPATH_SELECT_EXP = nullptr;
$String* XPATHErrorResources_it::ER_COULDNOT_FIND_ENDOP_AFTER_OPLOCATIONPATH = nullptr;
$String* XPATHErrorResources_it::ER_ERROR_OCCURED = nullptr;
$String* XPATHErrorResources_it::ER_ILLEGAL_VARIABLE_REFERENCE = nullptr;
$String* XPATHErrorResources_it::ER_AXES_NOT_ALLOWED = nullptr;
$String* XPATHErrorResources_it::ER_KEY_HAS_TOO_MANY_ARGS = nullptr;
$String* XPATHErrorResources_it::ER_COUNT_TAKES_1_ARG = nullptr;
$String* XPATHErrorResources_it::ER_COULDNOT_FIND_FUNCTION = nullptr;
$String* XPATHErrorResources_it::ER_UNSUPPORTED_ENCODING = nullptr;
$String* XPATHErrorResources_it::ER_PROBLEM_IN_DTM_NEXTSIBLING = nullptr;
$String* XPATHErrorResources_it::ER_CANNOT_WRITE_TO_EMPTYNODELISTIMPL = nullptr;
$String* XPATHErrorResources_it::ER_SETDOMFACTORY_NOT_SUPPORTED = nullptr;
$String* XPATHErrorResources_it::ER_PREFIX_MUST_RESOLVE = nullptr;
$String* XPATHErrorResources_it::ER_PARSE_NOT_SUPPORTED = nullptr;
$String* XPATHErrorResources_it::ER_SAX_API_NOT_HANDLED = nullptr;
$String* XPATHErrorResources_it::ER_IGNORABLE_WHITESPACE_NOT_HANDLED = nullptr;
$String* XPATHErrorResources_it::ER_DTM_CANNOT_HANDLE_NODES = nullptr;
$String* XPATHErrorResources_it::ER_XERCES_CANNOT_HANDLE_NODES = nullptr;
$String* XPATHErrorResources_it::ER_XERCES_PARSE_ERROR_DETAILS = nullptr;
$String* XPATHErrorResources_it::ER_XERCES_PARSE_ERROR = nullptr;
$String* XPATHErrorResources_it::ER_INVALID_UTF16_SURROGATE = nullptr;
$String* XPATHErrorResources_it::ER_OIERROR = nullptr;
$String* XPATHErrorResources_it::ER_CANNOT_CREATE_URL = nullptr;
$String* XPATHErrorResources_it::ER_XPATH_READOBJECT = nullptr;
$String* XPATHErrorResources_it::ER_FUNCTION_TOKEN_NOT_FOUND = nullptr;
$String* XPATHErrorResources_it::ER_CANNOT_DEAL_XPATH_TYPE = nullptr;
$String* XPATHErrorResources_it::ER_NODESET_NOT_MUTABLE = nullptr;
$String* XPATHErrorResources_it::ER_NODESETDTM_NOT_MUTABLE = nullptr;
$String* XPATHErrorResources_it::ER_VAR_NOT_RESOLVABLE = nullptr;
$String* XPATHErrorResources_it::ER_NULL_ERROR_HANDLER = nullptr;
$String* XPATHErrorResources_it::ER_PROG_ASSERT_UNKNOWN_OPCODE = nullptr;
$String* XPATHErrorResources_it::ER_ZERO_OR_ONE = nullptr;
$String* XPATHErrorResources_it::ER_RTF_NOT_SUPPORTED_XRTREEFRAGSELECTWRAPPER = nullptr;
$String* XPATHErrorResources_it::ER_ASNODEITERATOR_NOT_SUPPORTED_XRTREEFRAGSELECTWRAPPER = nullptr;
$String* XPATHErrorResources_it::ER_FSB_NOT_SUPPORTED_XSTRINGFORCHARS = nullptr;
$String* XPATHErrorResources_it::ER_COULD_NOT_FIND_VAR = nullptr;
$String* XPATHErrorResources_it::ER_XSTRINGFORCHARS_CANNOT_TAKE_STRING = nullptr;
$String* XPATHErrorResources_it::ER_FASTSTRINGBUFFER_CANNOT_BE_NULL = nullptr;
$String* XPATHErrorResources_it::ER_TWO_OR_THREE = nullptr;
$String* XPATHErrorResources_it::ER_VARIABLE_ACCESSED_BEFORE_BIND = nullptr;
$String* XPATHErrorResources_it::ER_FSB_CANNOT_TAKE_STRING = nullptr;
$String* XPATHErrorResources_it::ER_SETTING_WALKER_ROOT_TO_NULL = nullptr;
$String* XPATHErrorResources_it::ER_NODESETDTM_CANNOT_ITERATE = nullptr;
$String* XPATHErrorResources_it::ER_NODESET_CANNOT_ITERATE = nullptr;
$String* XPATHErrorResources_it::ER_NODESETDTM_CANNOT_INDEX = nullptr;
$String* XPATHErrorResources_it::ER_NODESET_CANNOT_INDEX = nullptr;
$String* XPATHErrorResources_it::ER_CANNOT_CALL_SETSHOULDCACHENODE = nullptr;
$String* XPATHErrorResources_it::ER_ONLY_ALLOWS = nullptr;
$String* XPATHErrorResources_it::ER_UNKNOWN_STEP = nullptr;
$String* XPATHErrorResources_it::ER_EXPECTED_REL_LOC_PATH = nullptr;
$String* XPATHErrorResources_it::ER_EXPECTED_LOC_PATH = nullptr;
$String* XPATHErrorResources_it::ER_EXPECTED_LOC_PATH_AT_END_EXPR = nullptr;
$String* XPATHErrorResources_it::ER_EXPECTED_LOC_STEP = nullptr;
$String* XPATHErrorResources_it::ER_EXPECTED_NODE_TEST = nullptr;
$String* XPATHErrorResources_it::ER_EXPECTED_STEP_PATTERN = nullptr;
$String* XPATHErrorResources_it::ER_EXPECTED_REL_PATH_PATTERN = nullptr;
$String* XPATHErrorResources_it::ER_CANT_CONVERT_TO_BOOLEAN = nullptr;
$String* XPATHErrorResources_it::ER_CANT_CONVERT_TO_SINGLENODE = nullptr;
$String* XPATHErrorResources_it::ER_CANT_GET_SNAPSHOT_LENGTH = nullptr;
$String* XPATHErrorResources_it::ER_NON_ITERATOR_TYPE = nullptr;
$String* XPATHErrorResources_it::ER_DOC_MUTATED = nullptr;
$String* XPATHErrorResources_it::ER_INVALID_XPATH_TYPE = nullptr;
$String* XPATHErrorResources_it::ER_EMPTY_XPATH_RESULT = nullptr;
$String* XPATHErrorResources_it::ER_INCOMPATIBLE_TYPES = nullptr;
$String* XPATHErrorResources_it::ER_NULL_RESOLVER = nullptr;
$String* XPATHErrorResources_it::ER_CANT_CONVERT_TO_STRING = nullptr;
$String* XPATHErrorResources_it::ER_NON_SNAPSHOT_TYPE = nullptr;
$String* XPATHErrorResources_it::ER_WRONG_DOCUMENT = nullptr;
$String* XPATHErrorResources_it::ER_WRONG_NODETYPE = nullptr;
$String* XPATHErrorResources_it::ER_XPATH_ERROR = nullptr;
$String* XPATHErrorResources_it::ER_EXTENSION_FUNCTION_CANNOT_BE_INVOKED = nullptr;
$String* XPATHErrorResources_it::ER_RESOLVE_VARIABLE_RETURNS_NULL = nullptr;
$String* XPATHErrorResources_it::ER_UNSUPPORTED_RETURN_TYPE = nullptr;
$String* XPATHErrorResources_it::ER_SOURCE_RETURN_TYPE_CANNOT_BE_NULL = nullptr;
$String* XPATHErrorResources_it::ER_ARG_CANNOT_BE_NULL = nullptr;
$String* XPATHErrorResources_it::ER_OBJECT_MODEL_NULL = nullptr;
$String* XPATHErrorResources_it::ER_OBJECT_MODEL_EMPTY = nullptr;
$String* XPATHErrorResources_it::ER_FEATURE_NAME_NULL = nullptr;
$String* XPATHErrorResources_it::ER_FEATURE_UNKNOWN = nullptr;
$String* XPATHErrorResources_it::ER_GETTING_NULL_FEATURE = nullptr;
$String* XPATHErrorResources_it::ER_GETTING_UNKNOWN_FEATURE = nullptr;
$String* XPATHErrorResources_it::ER_SECUREPROCESSING_FEATURE = nullptr;
$String* XPATHErrorResources_it::ER_NULL_XPATH_FUNCTION_RESOLVER = nullptr;
$String* XPATHErrorResources_it::ER_NULL_XPATH_VARIABLE_RESOLVER = nullptr;
$String* XPATHErrorResources_it::WG_LOCALE_NAME_NOT_HANDLED = nullptr;
$String* XPATHErrorResources_it::WG_PROPERTY_NOT_SUPPORTED = nullptr;
$String* XPATHErrorResources_it::WG_DONT_DO_ANYTHING_WITH_NS = nullptr;
$String* XPATHErrorResources_it::WG_SECURITY_EXCEPTION = nullptr;
$String* XPATHErrorResources_it::WG_QUO_NO_LONGER_DEFINED = nullptr;
$String* XPATHErrorResources_it::WG_NEED_DERIVED_OBJECT_TO_IMPLEMENT_NODETEST = nullptr;
$String* XPATHErrorResources_it::WG_FUNCTION_TOKEN_NOT_FOUND = nullptr;
$String* XPATHErrorResources_it::WG_COULDNOT_FIND_FUNCTION = nullptr;
$String* XPATHErrorResources_it::WG_CANNOT_MAKE_URL_FROM = nullptr;
$String* XPATHErrorResources_it::WG_EXPAND_ENTITIES_NOT_SUPPORTED = nullptr;
$String* XPATHErrorResources_it::WG_ILLEGAL_VARIABLE_REFERENCE = nullptr;
$String* XPATHErrorResources_it::WG_UNSUPPORTED_ENCODING = nullptr;
$String* XPATHErrorResources_it::ER_DETACH_NOT_SUPPORTED_XRTREEFRAGSELECTWRAPPER = nullptr;
$String* XPATHErrorResources_it::ER_NUM_NOT_SUPPORTED_XRTREEFRAGSELECTWRAPPER = nullptr;
$String* XPATHErrorResources_it::ER_XSTR_NOT_SUPPORTED_XRTREEFRAGSELECTWRAPPER = nullptr;
$String* XPATHErrorResources_it::ER_STR_NOT_SUPPORTED_XRTREEFRAGSELECTWRAPPER = nullptr;
$ObjectArray2* XPATHErrorResources_it::_contents = nullptr;
$String* XPATHErrorResources_it::BAD_CODE = nullptr;
$String* XPATHErrorResources_it::FORMAT_FAILED = nullptr;
$String* XPATHErrorResources_it::ERROR_RESOURCES = nullptr;
$String* XPATHErrorResources_it::ERROR_STRING = nullptr;
$String* XPATHErrorResources_it::ERROR_HEADER = nullptr;
$String* XPATHErrorResources_it::WARNING_HEADER = nullptr;
$String* XPATHErrorResources_it::XSL_HEADER = nullptr;
$String* XPATHErrorResources_it::XML_HEADER = nullptr;
$String* XPATHErrorResources_it::QUERY_HEADER = nullptr;

void XPATHErrorResources_it::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* XPATHErrorResources_it::getContents() {
	return XPATHErrorResources_it::_contents;
}

void XPATHErrorResources_it::clinit$($Class* clazz) {
	$useLocalObjectStack();
	$assignStatic(XPATHErrorResources_it::ERROR0000, "ERROR0000"_s);
	$assignStatic(XPATHErrorResources_it::ER_CURRENT_NOT_ALLOWED_IN_MATCH, "ER_CURRENT_NOT_ALLOWED_IN_MATCH"_s);
	$assignStatic(XPATHErrorResources_it::ER_CURRENT_TAKES_NO_ARGS, "ER_CURRENT_TAKES_NO_ARGS"_s);
	$assignStatic(XPATHErrorResources_it::ER_DOCUMENT_REPLACED, "ER_DOCUMENT_REPLACED"_s);
	$assignStatic(XPATHErrorResources_it::ER_CONTEXT_CAN_NOT_BE_NULL, "ER_CONTEXT_CAN_NOT_BE_NULL"_s);
	$assignStatic(XPATHErrorResources_it::ER_CONTEXT_HAS_NO_OWNERDOC, "ER_CONTEXT_HAS_NO_OWNERDOC"_s);
	$assignStatic(XPATHErrorResources_it::ER_LOCALNAME_HAS_TOO_MANY_ARGS, "ER_LOCALNAME_HAS_TOO_MANY_ARGS"_s);
	$assignStatic(XPATHErrorResources_it::ER_NAMESPACEURI_HAS_TOO_MANY_ARGS, "ER_NAMESPACEURI_HAS_TOO_MANY_ARGS"_s);
	$assignStatic(XPATHErrorResources_it::ER_NORMALIZESPACE_HAS_TOO_MANY_ARGS, "ER_NORMALIZESPACE_HAS_TOO_MANY_ARGS"_s);
	$assignStatic(XPATHErrorResources_it::ER_NUMBER_HAS_TOO_MANY_ARGS, "ER_NUMBER_HAS_TOO_MANY_ARGS"_s);
	$assignStatic(XPATHErrorResources_it::ER_NAME_HAS_TOO_MANY_ARGS, "ER_NAME_HAS_TOO_MANY_ARGS"_s);
	$assignStatic(XPATHErrorResources_it::ER_STRING_HAS_TOO_MANY_ARGS, "ER_STRING_HAS_TOO_MANY_ARGS"_s);
	$assignStatic(XPATHErrorResources_it::ER_STRINGLENGTH_HAS_TOO_MANY_ARGS, "ER_STRINGLENGTH_HAS_TOO_MANY_ARGS"_s);
	$assignStatic(XPATHErrorResources_it::ER_TRANSLATE_TAKES_3_ARGS, "ER_TRANSLATE_TAKES_3_ARGS"_s);
	$assignStatic(XPATHErrorResources_it::ER_UNPARSEDENTITYURI_TAKES_1_ARG, "ER_UNPARSEDENTITYURI_TAKES_1_ARG"_s);
	$assignStatic(XPATHErrorResources_it::ER_NAMESPACEAXIS_NOT_IMPLEMENTED, "ER_NAMESPACEAXIS_NOT_IMPLEMENTED"_s);
	$assignStatic(XPATHErrorResources_it::ER_UNKNOWN_AXIS, "ER_UNKNOWN_AXIS"_s);
	$assignStatic(XPATHErrorResources_it::ER_UNKNOWN_MATCH_OPERATION, "ER_UNKNOWN_MATCH_OPERATION"_s);
	$assignStatic(XPATHErrorResources_it::ER_INCORRECT_ARG_LENGTH, "ER_INCORRECT_ARG_LENGTH"_s);
	$assignStatic(XPATHErrorResources_it::ER_CANT_CONVERT_TO_NUMBER, "ER_CANT_CONVERT_TO_NUMBER"_s);
	$assignStatic(XPATHErrorResources_it::ER_CANT_CONVERT_XPATHRESULTTYPE_TO_NUMBER, "ER_CANT_CONVERT_XPATHRESULTTYPE_TO_NUMBER"_s);
	$assignStatic(XPATHErrorResources_it::ER_CANT_CONVERT_TO_NODELIST, "ER_CANT_CONVERT_TO_NODELIST"_s);
	$assignStatic(XPATHErrorResources_it::ER_CANT_CONVERT_TO_MUTABLENODELIST, "ER_CANT_CONVERT_TO_MUTABLENODELIST"_s);
	$assignStatic(XPATHErrorResources_it::ER_CANT_CONVERT_TO_TYPE, "ER_CANT_CONVERT_TO_TYPE"_s);
	$assignStatic(XPATHErrorResources_it::ER_EXPECTED_MATCH_PATTERN, "ER_EXPECTED_MATCH_PATTERN"_s);
	$assignStatic(XPATHErrorResources_it::ER_COULDNOT_GET_VAR_NAMED, "ER_COULDNOT_GET_VAR_NAMED"_s);
	$assignStatic(XPATHErrorResources_it::ER_UNKNOWN_OPCODE, "ER_UNKNOWN_OPCODE"_s);
	$assignStatic(XPATHErrorResources_it::ER_EXTRA_ILLEGAL_TOKENS, "ER_EXTRA_ILLEGAL_TOKENS"_s);
	$assignStatic(XPATHErrorResources_it::ER_EXPECTED_DOUBLE_QUOTE, "ER_EXPECTED_DOUBLE_QUOTE"_s);
	$assignStatic(XPATHErrorResources_it::ER_EXPECTED_SINGLE_QUOTE, "ER_EXPECTED_SINGLE_QUOTE"_s);
	$assignStatic(XPATHErrorResources_it::ER_EMPTY_EXPRESSION, "ER_EMPTY_EXPRESSION"_s);
	$assignStatic(XPATHErrorResources_it::ER_EXPECTED_BUT_FOUND, "ER_EXPECTED_BUT_FOUND"_s);
	$assignStatic(XPATHErrorResources_it::ER_INCORRECT_PROGRAMMER_ASSERTION, "ER_INCORRECT_PROGRAMMER_ASSERTION"_s);
	$assignStatic(XPATHErrorResources_it::ER_BOOLEAN_ARG_NO_LONGER_OPTIONAL, "ER_BOOLEAN_ARG_NO_LONGER_OPTIONAL"_s);
	$assignStatic(XPATHErrorResources_it::ER_FOUND_COMMA_BUT_NO_PRECEDING_ARG, "ER_FOUND_COMMA_BUT_NO_PRECEDING_ARG"_s);
	$assignStatic(XPATHErrorResources_it::ER_FOUND_COMMA_BUT_NO_FOLLOWING_ARG, "ER_FOUND_COMMA_BUT_NO_FOLLOWING_ARG"_s);
	$assignStatic(XPATHErrorResources_it::ER_PREDICATE_ILLEGAL_SYNTAX, "ER_PREDICATE_ILLEGAL_SYNTAX"_s);
	$assignStatic(XPATHErrorResources_it::ER_ILLEGAL_AXIS_NAME, "ER_ILLEGAL_AXIS_NAME"_s);
	$assignStatic(XPATHErrorResources_it::ER_UNKNOWN_NODETYPE, "ER_UNKNOWN_NODETYPE"_s);
	$assignStatic(XPATHErrorResources_it::ER_PATTERN_LITERAL_NEEDS_BE_QUOTED, "ER_PATTERN_LITERAL_NEEDS_BE_QUOTED"_s);
	$assignStatic(XPATHErrorResources_it::ER_COULDNOT_BE_FORMATTED_TO_NUMBER, "ER_COULDNOT_BE_FORMATTED_TO_NUMBER"_s);
	$assignStatic(XPATHErrorResources_it::ER_COULDNOT_CREATE_XMLPROCESSORLIAISON, "ER_COULDNOT_CREATE_XMLPROCESSORLIAISON"_s);
	$assignStatic(XPATHErrorResources_it::ER_DIDNOT_FIND_XPATH_SELECT_EXP, "ER_DIDNOT_FIND_XPATH_SELECT_EXP"_s);
	$assignStatic(XPATHErrorResources_it::ER_COULDNOT_FIND_ENDOP_AFTER_OPLOCATIONPATH, "ER_COULDNOT_FIND_ENDOP_AFTER_OPLOCATIONPATH"_s);
	$assignStatic(XPATHErrorResources_it::ER_ERROR_OCCURED, "ER_ERROR_OCCURED"_s);
	$assignStatic(XPATHErrorResources_it::ER_ILLEGAL_VARIABLE_REFERENCE, "ER_ILLEGAL_VARIABLE_REFERENCE"_s);
	$assignStatic(XPATHErrorResources_it::ER_AXES_NOT_ALLOWED, "ER_AXES_NOT_ALLOWED"_s);
	$assignStatic(XPATHErrorResources_it::ER_KEY_HAS_TOO_MANY_ARGS, "ER_KEY_HAS_TOO_MANY_ARGS"_s);
	$assignStatic(XPATHErrorResources_it::ER_COUNT_TAKES_1_ARG, "ER_COUNT_TAKES_1_ARG"_s);
	$assignStatic(XPATHErrorResources_it::ER_COULDNOT_FIND_FUNCTION, "ER_COULDNOT_FIND_FUNCTION"_s);
	$assignStatic(XPATHErrorResources_it::ER_UNSUPPORTED_ENCODING, "ER_UNSUPPORTED_ENCODING"_s);
	$assignStatic(XPATHErrorResources_it::ER_PROBLEM_IN_DTM_NEXTSIBLING, "ER_PROBLEM_IN_DTM_NEXTSIBLING"_s);
	$assignStatic(XPATHErrorResources_it::ER_CANNOT_WRITE_TO_EMPTYNODELISTIMPL, "ER_CANNOT_WRITE_TO_EMPTYNODELISTIMPL"_s);
	$assignStatic(XPATHErrorResources_it::ER_SETDOMFACTORY_NOT_SUPPORTED, "ER_SETDOMFACTORY_NOT_SUPPORTED"_s);
	$assignStatic(XPATHErrorResources_it::ER_PREFIX_MUST_RESOLVE, "ER_PREFIX_MUST_RESOLVE"_s);
	$assignStatic(XPATHErrorResources_it::ER_PARSE_NOT_SUPPORTED, "ER_PARSE_NOT_SUPPORTED"_s);
	$assignStatic(XPATHErrorResources_it::ER_SAX_API_NOT_HANDLED, "ER_SAX_API_NOT_HANDLED"_s);
	$assignStatic(XPATHErrorResources_it::ER_IGNORABLE_WHITESPACE_NOT_HANDLED, "ER_IGNORABLE_WHITESPACE_NOT_HANDLED"_s);
	$assignStatic(XPATHErrorResources_it::ER_DTM_CANNOT_HANDLE_NODES, "ER_DTM_CANNOT_HANDLE_NODES"_s);
	$assignStatic(XPATHErrorResources_it::ER_XERCES_CANNOT_HANDLE_NODES, "ER_XERCES_CANNOT_HANDLE_NODES"_s);
	$assignStatic(XPATHErrorResources_it::ER_XERCES_PARSE_ERROR_DETAILS, "ER_XERCES_PARSE_ERROR_DETAILS"_s);
	$assignStatic(XPATHErrorResources_it::ER_XERCES_PARSE_ERROR, "ER_XERCES_PARSE_ERROR"_s);
	$assignStatic(XPATHErrorResources_it::ER_INVALID_UTF16_SURROGATE, "ER_INVALID_UTF16_SURROGATE"_s);
	$assignStatic(XPATHErrorResources_it::ER_OIERROR, "ER_OIERROR"_s);
	$assignStatic(XPATHErrorResources_it::ER_CANNOT_CREATE_URL, "ER_CANNOT_CREATE_URL"_s);
	$assignStatic(XPATHErrorResources_it::ER_XPATH_READOBJECT, "ER_XPATH_READOBJECT"_s);
	$assignStatic(XPATHErrorResources_it::ER_FUNCTION_TOKEN_NOT_FOUND, "ER_FUNCTION_TOKEN_NOT_FOUND"_s);
	$assignStatic(XPATHErrorResources_it::ER_CANNOT_DEAL_XPATH_TYPE, "ER_CANNOT_DEAL_XPATH_TYPE"_s);
	$assignStatic(XPATHErrorResources_it::ER_NODESET_NOT_MUTABLE, "ER_NODESET_NOT_MUTABLE"_s);
	$assignStatic(XPATHErrorResources_it::ER_NODESETDTM_NOT_MUTABLE, "ER_NODESETDTM_NOT_MUTABLE"_s);
	$assignStatic(XPATHErrorResources_it::ER_VAR_NOT_RESOLVABLE, "ER_VAR_NOT_RESOLVABLE"_s);
	$assignStatic(XPATHErrorResources_it::ER_NULL_ERROR_HANDLER, "ER_NULL_ERROR_HANDLER"_s);
	$assignStatic(XPATHErrorResources_it::ER_PROG_ASSERT_UNKNOWN_OPCODE, "ER_PROG_ASSERT_UNKNOWN_OPCODE"_s);
	$assignStatic(XPATHErrorResources_it::ER_ZERO_OR_ONE, "ER_ZERO_OR_ONE"_s);
	$assignStatic(XPATHErrorResources_it::ER_RTF_NOT_SUPPORTED_XRTREEFRAGSELECTWRAPPER, "ER_RTF_NOT_SUPPORTED_XRTREEFRAGSELECTWRAPPER"_s);
	$assignStatic(XPATHErrorResources_it::ER_ASNODEITERATOR_NOT_SUPPORTED_XRTREEFRAGSELECTWRAPPER, "ER_ASNODEITERATOR_NOT_SUPPORTED_XRTREEFRAGSELECTWRAPPER"_s);
	$assignStatic(XPATHErrorResources_it::ER_FSB_NOT_SUPPORTED_XSTRINGFORCHARS, "ER_FSB_NOT_SUPPORTED_XSTRINGFORCHARS"_s);
	$assignStatic(XPATHErrorResources_it::ER_COULD_NOT_FIND_VAR, "ER_COULD_NOT_FIND_VAR"_s);
	$assignStatic(XPATHErrorResources_it::ER_XSTRINGFORCHARS_CANNOT_TAKE_STRING, "ER_XSTRINGFORCHARS_CANNOT_TAKE_STRING"_s);
	$assignStatic(XPATHErrorResources_it::ER_FASTSTRINGBUFFER_CANNOT_BE_NULL, "ER_FASTSTRINGBUFFER_CANNOT_BE_NULL"_s);
	$assignStatic(XPATHErrorResources_it::ER_TWO_OR_THREE, "ER_TWO_OR_THREE"_s);
	$assignStatic(XPATHErrorResources_it::ER_VARIABLE_ACCESSED_BEFORE_BIND, "ER_VARIABLE_ACCESSED_BEFORE_BIND"_s);
	$assignStatic(XPATHErrorResources_it::ER_FSB_CANNOT_TAKE_STRING, "ER_FSB_CANNOT_TAKE_STRING"_s);
	$assignStatic(XPATHErrorResources_it::ER_SETTING_WALKER_ROOT_TO_NULL, "ER_SETTING_WALKER_ROOT_TO_NULL"_s);
	$assignStatic(XPATHErrorResources_it::ER_NODESETDTM_CANNOT_ITERATE, "ER_NODESETDTM_CANNOT_ITERATE"_s);
	$assignStatic(XPATHErrorResources_it::ER_NODESET_CANNOT_ITERATE, "ER_NODESET_CANNOT_ITERATE"_s);
	$assignStatic(XPATHErrorResources_it::ER_NODESETDTM_CANNOT_INDEX, "ER_NODESETDTM_CANNOT_INDEX"_s);
	$assignStatic(XPATHErrorResources_it::ER_NODESET_CANNOT_INDEX, "ER_NODESET_CANNOT_INDEX"_s);
	$assignStatic(XPATHErrorResources_it::ER_CANNOT_CALL_SETSHOULDCACHENODE, "ER_CANNOT_CALL_SETSHOULDCACHENODE"_s);
	$assignStatic(XPATHErrorResources_it::ER_ONLY_ALLOWS, "ER_ONLY_ALLOWS"_s);
	$assignStatic(XPATHErrorResources_it::ER_UNKNOWN_STEP, "ER_UNKNOWN_STEP"_s);
	$assignStatic(XPATHErrorResources_it::ER_EXPECTED_REL_LOC_PATH, "ER_EXPECTED_REL_LOC_PATH"_s);
	$assignStatic(XPATHErrorResources_it::ER_EXPECTED_LOC_PATH, "ER_EXPECTED_LOC_PATH"_s);
	$assignStatic(XPATHErrorResources_it::ER_EXPECTED_LOC_PATH_AT_END_EXPR, "ER_EXPECTED_LOC_PATH_AT_END_EXPR"_s);
	$assignStatic(XPATHErrorResources_it::ER_EXPECTED_LOC_STEP, "ER_EXPECTED_LOC_STEP"_s);
	$assignStatic(XPATHErrorResources_it::ER_EXPECTED_NODE_TEST, "ER_EXPECTED_NODE_TEST"_s);
	$assignStatic(XPATHErrorResources_it::ER_EXPECTED_STEP_PATTERN, "ER_EXPECTED_STEP_PATTERN"_s);
	$assignStatic(XPATHErrorResources_it::ER_EXPECTED_REL_PATH_PATTERN, "ER_EXPECTED_REL_PATH_PATTERN"_s);
	$assignStatic(XPATHErrorResources_it::ER_CANT_CONVERT_TO_BOOLEAN, "ER_CANT_CONVERT_TO_BOOLEAN"_s);
	$assignStatic(XPATHErrorResources_it::ER_CANT_CONVERT_TO_SINGLENODE, "ER_CANT_CONVERT_TO_SINGLENODE"_s);
	$assignStatic(XPATHErrorResources_it::ER_CANT_GET_SNAPSHOT_LENGTH, "ER_CANT_GET_SNAPSHOT_LENGTH"_s);
	$assignStatic(XPATHErrorResources_it::ER_NON_ITERATOR_TYPE, "ER_NON_ITERATOR_TYPE"_s);
	$assignStatic(XPATHErrorResources_it::ER_DOC_MUTATED, "ER_DOC_MUTATED"_s);
	$assignStatic(XPATHErrorResources_it::ER_INVALID_XPATH_TYPE, "ER_INVALID_XPATH_TYPE"_s);
	$assignStatic(XPATHErrorResources_it::ER_EMPTY_XPATH_RESULT, "ER_EMPTY_XPATH_RESULT"_s);
	$assignStatic(XPATHErrorResources_it::ER_INCOMPATIBLE_TYPES, "ER_INCOMPATIBLE_TYPES"_s);
	$assignStatic(XPATHErrorResources_it::ER_NULL_RESOLVER, "ER_NULL_RESOLVER"_s);
	$assignStatic(XPATHErrorResources_it::ER_CANT_CONVERT_TO_STRING, "ER_CANT_CONVERT_TO_STRING"_s);
	$assignStatic(XPATHErrorResources_it::ER_NON_SNAPSHOT_TYPE, "ER_NON_SNAPSHOT_TYPE"_s);
	$assignStatic(XPATHErrorResources_it::ER_WRONG_DOCUMENT, "ER_WRONG_DOCUMENT"_s);
	$assignStatic(XPATHErrorResources_it::ER_WRONG_NODETYPE, "ER_WRONG_NODETYPE"_s);
	$assignStatic(XPATHErrorResources_it::ER_XPATH_ERROR, "ER_XPATH_ERROR"_s);
	$assignStatic(XPATHErrorResources_it::ER_EXTENSION_FUNCTION_CANNOT_BE_INVOKED, "ER_EXTENSION_FUNCTION_CANNOT_BE_INVOKED"_s);
	$assignStatic(XPATHErrorResources_it::ER_RESOLVE_VARIABLE_RETURNS_NULL, "ER_RESOLVE_VARIABLE_RETURNS_NULL"_s);
	$assignStatic(XPATHErrorResources_it::ER_UNSUPPORTED_RETURN_TYPE, "ER_UNSUPPORTED_RETURN_TYPE"_s);
	$assignStatic(XPATHErrorResources_it::ER_SOURCE_RETURN_TYPE_CANNOT_BE_NULL, "ER_SOURCE_RETURN_TYPE_CANNOT_BE_NULL"_s);
	$assignStatic(XPATHErrorResources_it::ER_ARG_CANNOT_BE_NULL, "ER_ARG_CANNOT_BE_NULL"_s);
	$assignStatic(XPATHErrorResources_it::ER_OBJECT_MODEL_NULL, "ER_OBJECT_MODEL_NULL"_s);
	$assignStatic(XPATHErrorResources_it::ER_OBJECT_MODEL_EMPTY, "ER_OBJECT_MODEL_EMPTY"_s);
	$assignStatic(XPATHErrorResources_it::ER_FEATURE_NAME_NULL, "ER_FEATURE_NAME_NULL"_s);
	$assignStatic(XPATHErrorResources_it::ER_FEATURE_UNKNOWN, "ER_FEATURE_UNKNOWN"_s);
	$assignStatic(XPATHErrorResources_it::ER_GETTING_NULL_FEATURE, "ER_GETTING_NULL_FEATURE"_s);
	$assignStatic(XPATHErrorResources_it::ER_GETTING_UNKNOWN_FEATURE, "ER_GETTING_UNKNOWN_FEATURE"_s);
	$assignStatic(XPATHErrorResources_it::ER_SECUREPROCESSING_FEATURE, "ER_SECUREPROCESSING_FEATURE"_s);
	$assignStatic(XPATHErrorResources_it::ER_NULL_XPATH_FUNCTION_RESOLVER, "ER_NULL_XPATH_FUNCTION_RESOLVER"_s);
	$assignStatic(XPATHErrorResources_it::ER_NULL_XPATH_VARIABLE_RESOLVER, "ER_NULL_XPATH_VARIABLE_RESOLVER"_s);
	$assignStatic(XPATHErrorResources_it::WG_LOCALE_NAME_NOT_HANDLED, "WG_LOCALE_NAME_NOT_HANDLED"_s);
	$assignStatic(XPATHErrorResources_it::WG_PROPERTY_NOT_SUPPORTED, "WG_PROPERTY_NOT_SUPPORTED"_s);
	$assignStatic(XPATHErrorResources_it::WG_DONT_DO_ANYTHING_WITH_NS, "WG_DONT_DO_ANYTHING_WITH_NS"_s);
	$assignStatic(XPATHErrorResources_it::WG_SECURITY_EXCEPTION, "WG_SECURITY_EXCEPTION"_s);
	$assignStatic(XPATHErrorResources_it::WG_QUO_NO_LONGER_DEFINED, "WG_QUO_NO_LONGER_DEFINED"_s);
	$assignStatic(XPATHErrorResources_it::WG_NEED_DERIVED_OBJECT_TO_IMPLEMENT_NODETEST, "WG_NEED_DERIVED_OBJECT_TO_IMPLEMENT_NODETEST"_s);
	$assignStatic(XPATHErrorResources_it::WG_FUNCTION_TOKEN_NOT_FOUND, "WG_FUNCTION_TOKEN_NOT_FOUND"_s);
	$assignStatic(XPATHErrorResources_it::WG_COULDNOT_FIND_FUNCTION, "WG_COULDNOT_FIND_FUNCTION"_s);
	$assignStatic(XPATHErrorResources_it::WG_CANNOT_MAKE_URL_FROM, "WG_CANNOT_MAKE_URL_FROM"_s);
	$assignStatic(XPATHErrorResources_it::WG_EXPAND_ENTITIES_NOT_SUPPORTED, "WG_EXPAND_ENTITIES_NOT_SUPPORTED"_s);
	$assignStatic(XPATHErrorResources_it::WG_ILLEGAL_VARIABLE_REFERENCE, "WG_ILLEGAL_VARIABLE_REFERENCE"_s);
	$assignStatic(XPATHErrorResources_it::WG_UNSUPPORTED_ENCODING, "WG_UNSUPPORTED_ENCODING"_s);
	$assignStatic(XPATHErrorResources_it::ER_DETACH_NOT_SUPPORTED_XRTREEFRAGSELECTWRAPPER, "ER_DETACH_NOT_SUPPORTED_XRTREEFRAGSELECTWRAPPER"_s);
	$assignStatic(XPATHErrorResources_it::ER_NUM_NOT_SUPPORTED_XRTREEFRAGSELECTWRAPPER, "ER_NUM_NOT_SUPPORTED_XRTREEFRAGSELECTWRAPPER"_s);
	$assignStatic(XPATHErrorResources_it::ER_XSTR_NOT_SUPPORTED_XRTREEFRAGSELECTWRAPPER, "ER_XSTR_NOT_SUPPORTED_XRTREEFRAGSELECTWRAPPER"_s);
	$assignStatic(XPATHErrorResources_it::ER_STR_NOT_SUPPORTED_XRTREEFRAGSELECTWRAPPER, "ER_STR_NOT_SUPPORTED_XRTREEFRAGSELECTWRAPPER"_s);
	$assignStatic(XPATHErrorResources_it::BAD_CODE, "BAD_CODE"_s);
	$assignStatic(XPATHErrorResources_it::FORMAT_FAILED, "FORMAT_FAILED"_s);
	$assignStatic(XPATHErrorResources_it::ERROR_RESOURCES, "com.sun.org.apache.xpath.internal.res.XPATHErrorResources"_s);
	$assignStatic(XPATHErrorResources_it::ERROR_STRING, "#error"_s);
	$assignStatic(XPATHErrorResources_it::ERROR_HEADER, "Error: "_s);
	$assignStatic(XPATHErrorResources_it::WARNING_HEADER, "Warning: "_s);
	$assignStatic(XPATHErrorResources_it::XSL_HEADER, "XSL "_s);
	$assignStatic(XPATHErrorResources_it::XML_HEADER, "XML "_s);
	$assignStatic(XPATHErrorResources_it::QUERY_HEADER, "PATTERN "_s);
	$assignStatic(XPATHErrorResources_it::_contents, $new($ObjectArray2, {
		$$new($ObjectArray, {
			"ERROR0000"_s,
			"{0}"_s
		}),
		$$new($ObjectArray, {
			XPATHErrorResources_it::ER_CURRENT_NOT_ALLOWED_IN_MATCH,
			u"La funzione current() non è consentita in un pattern di corrispondenza."_s
		}),
		$$new($ObjectArray, {
			XPATHErrorResources_it::ER_CURRENT_TAKES_NO_ARGS,
			"La funzione current() non accetta argomenti."_s
		}),
		$$new($ObjectArray, {
			XPATHErrorResources_it::ER_DOCUMENT_REPLACED,
			u"L\'implementazione della funzione document() è stata sostituita da com.sun.org.apache.xalan.internal.xslt.FuncDocument."_s
		}),
		$$new($ObjectArray, {
			XPATHErrorResources_it::ER_CONTEXT_CAN_NOT_BE_NULL,
			u"Il contesto non può essere nullo quando l\'operazione dipende dal contesto."_s
		}),
		$$new($ObjectArray, {
			XPATHErrorResources_it::ER_CONTEXT_HAS_NO_OWNERDOC,
			"il contesto non dispone di un documento proprietario."_s
		}),
		$$new($ObjectArray, {
			XPATHErrorResources_it::ER_LOCALNAME_HAS_TOO_MANY_ARGS,
			"local-name() contiene troppi argomenti."_s
		}),
		$$new($ObjectArray, {
			XPATHErrorResources_it::ER_NAMESPACEURI_HAS_TOO_MANY_ARGS,
			"namespace-uri() contiene troppi argomenti."_s
		}),
		$$new($ObjectArray, {
			XPATHErrorResources_it::ER_NORMALIZESPACE_HAS_TOO_MANY_ARGS,
			"normalize-space() contiene troppi argomenti."_s
		}),
		$$new($ObjectArray, {
			XPATHErrorResources_it::ER_NUMBER_HAS_TOO_MANY_ARGS,
			"number() contiene troppi argomenti."_s
		}),
		$$new($ObjectArray, {
			XPATHErrorResources_it::ER_NAME_HAS_TOO_MANY_ARGS,
			"name() contiene troppi argomenti."_s
		}),
		$$new($ObjectArray, {
			XPATHErrorResources_it::ER_STRING_HAS_TOO_MANY_ARGS,
			"string() contiene troppi argomenti."_s
		}),
		$$new($ObjectArray, {
			XPATHErrorResources_it::ER_STRINGLENGTH_HAS_TOO_MANY_ARGS,
			"string-length() contiene troppi argomenti."_s
		}),
		$$new($ObjectArray, {
			XPATHErrorResources_it::ER_TRANSLATE_TAKES_3_ARGS,
			"La funzione translate() ha tre argomenti."_s
		}),
		$$new($ObjectArray, {
			XPATHErrorResources_it::ER_UNPARSEDENTITYURI_TAKES_1_ARG,
			"La funzione unparsed-entity-uri deve avere un solo argomento."_s
		}),
		$$new($ObjectArray, {
			XPATHErrorResources_it::ER_NAMESPACEAXIS_NOT_IMPLEMENTED,
			u"l\'asse dello spazio di nomi non è ancora implementato."_s
		}),
		$$new($ObjectArray, {
			XPATHErrorResources_it::ER_UNKNOWN_AXIS,
			"asse sconosciuto: {0}"_s
		}),
		$$new($ObjectArray, {
			XPATHErrorResources_it::ER_UNKNOWN_MATCH_OPERATION,
			"operazione di corrispondenza sconosciuta."_s
		}),
		$$new($ObjectArray, {
			XPATHErrorResources_it::ER_INCORRECT_ARG_LENGTH,
			u"La lunghezza degli argomenti del testo del nodo processing-instruction() è errata."_s
		}),
		$$new($ObjectArray, {
			XPATHErrorResources_it::ER_CANT_CONVERT_TO_NUMBER,
			"Impossibile convertire {0} in un numero"_s
		}),
		$$new($ObjectArray, {
			XPATHErrorResources_it::ER_CANT_CONVERT_TO_NODELIST,
			"Impossibile convertire {0} in NodeList."_s
		}),
		$$new($ObjectArray, {
			XPATHErrorResources_it::ER_CANT_CONVERT_TO_MUTABLENODELIST,
			"Impossibile convertire {0} in NodeSetDTM."_s
		}),
		$$new($ObjectArray, {
			XPATHErrorResources_it::ER_CANT_CONVERT_TO_TYPE,
			"Impossibile convertire {0} in type#{1}"_s
		}),
		$$new($ObjectArray, {
			XPATHErrorResources_it::ER_EXPECTED_MATCH_PATTERN,
			u"È previsto un pattern di corrispondenza in getMatchScore."_s
		}),
		$$new($ObjectArray, {
			XPATHErrorResources_it::ER_COULDNOT_GET_VAR_NAMED,
			"Impossibile recuperare la variabile denominata {0}"_s
		}),
		$$new($ObjectArray, {
			XPATHErrorResources_it::ER_UNKNOWN_OPCODE,
			"ERRORE. Codice di operazione sconosciuto: {0}"_s
		}),
		$$new($ObjectArray, {
			XPATHErrorResources_it::ER_EXTRA_ILLEGAL_TOKENS,
			"Esistono altri token non validi: {0}"_s
		}),
		$$new($ObjectArray, {
			XPATHErrorResources_it::ER_EXPECTED_DOUBLE_QUOTE,
			"valore non tra apici... sono previste le virgolette."_s
		}),
		$$new($ObjectArray, {
			XPATHErrorResources_it::ER_EXPECTED_SINGLE_QUOTE,
			u"valore non tra apici... è previsto un apice."_s
		}),
		$$new($ObjectArray, {
			XPATHErrorResources_it::ER_EMPTY_EXPRESSION,
			"Espressione vuota."_s
		}),
		$$new($ObjectArray, {
			XPATHErrorResources_it::ER_EXPECTED_BUT_FOUND,
			"Previsto {0}, trovato {1}."_s
		}),
		$$new($ObjectArray, {
			XPATHErrorResources_it::ER_INCORRECT_PROGRAMMER_ASSERTION,
			u"L\'\'asserzione del programmatore è errata - {0}"_s
		}),
		$$new($ObjectArray, {
			XPATHErrorResources_it::ER_BOOLEAN_ARG_NO_LONGER_OPTIONAL,
			u"L\'argomento boolean(...) non è più facoltativo nella bozza XPath 19990709."_s
		}),
		$$new($ObjectArray, {
			XPATHErrorResources_it::ER_FOUND_COMMA_BUT_NO_PRECEDING_ARG,
			u"È stata trovata la virgola (\',\'), ma non l\'argomento che la precede."_s
		}),
		$$new($ObjectArray, {
			XPATHErrorResources_it::ER_FOUND_COMMA_BUT_NO_FOLLOWING_ARG,
			u"È stata trovata la virgola (\',\'), ma non l\'argomento che la segue."_s
		}),
		$$new($ObjectArray, {
			XPATHErrorResources_it::ER_PREDICATE_ILLEGAL_SYNTAX,
			u"\'..[predicate]\' o \'.[predicate]\' è una sintassi non valida.  Utilizzare \'self::node()[predicate]\'."_s
		}),
		$$new($ObjectArray, {
			XPATHErrorResources_it::ER_ILLEGAL_AXIS_NAME,
			"nome asse non valido: {0}"_s
		}),
		$$new($ObjectArray, {
			XPATHErrorResources_it::ER_UNKNOWN_NODETYPE,
			"Tipo di nodo sconosciuto: {0}"_s
		}),
		$$new($ObjectArray, {
			XPATHErrorResources_it::ER_PATTERN_LITERAL_NEEDS_BE_QUOTED,
			"Il valore del pattern ({0}) deve essere compreso tra apici."_s
		}),
		$$new($ObjectArray, {
			XPATHErrorResources_it::ER_COULDNOT_BE_FORMATTED_TO_NUMBER,
			"Impossibile formattare {0} in un numero."_s
		}),
		$$new($ObjectArray, {
			XPATHErrorResources_it::ER_COULDNOT_CREATE_XMLPROCESSORLIAISON,
			"Impossibile creare la relazione TransformerFactory XML {0}"_s
		}),
		$$new($ObjectArray, {
			XPATHErrorResources_it::ER_DIDNOT_FIND_XPATH_SELECT_EXP,
			u"Errore. L\'espressione di selezione dell\'xpath (-select) non è stata trovata."_s
		}),
		$$new($ObjectArray, {
			XPATHErrorResources_it::ER_COULDNOT_FIND_ENDOP_AFTER_OPLOCATIONPATH,
			"ERRORE. Impossibile trovare ENDOP dopo OP_LOCATIONPATH."_s
		}),
		$$new($ObjectArray, {
			XPATHErrorResources_it::ER_ERROR_OCCURED,
			u"Si è verificato un errore."_s
		}),
		$$new($ObjectArray, {
			XPATHErrorResources_it::ER_ILLEGAL_VARIABLE_REFERENCE,
			u"Il valore di VariableReference specificato per la variabile è fuori contesto o senza definizione. Nome = {0}"_s
		}),
		$$new($ObjectArray, {
			XPATHErrorResources_it::ER_AXES_NOT_ALLOWED,
			"Solo gli assi child:: e attribute:: sono consentiti nei pattern di corrispondenza. Assi errati = {0}"_s
		}),
		$$new($ObjectArray, {
			XPATHErrorResources_it::ER_KEY_HAS_TOO_MANY_ARGS,
			"key() contiene un numero di argomenti errato."_s
		}),
		$$new($ObjectArray, {
			XPATHErrorResources_it::ER_COUNT_TAKES_1_ARG,
			"La funzione count deve avere un solo argomento."_s
		}),
		$$new($ObjectArray, {
			XPATHErrorResources_it::ER_COULDNOT_FIND_FUNCTION,
			"Impossibile trovare la funzione {0}"_s
		}),
		$$new($ObjectArray, {
			XPATHErrorResources_it::ER_UNSUPPORTED_ENCODING,
			"Codifica non supportata: {0}"_s
		}),
		$$new($ObjectArray, {
			XPATHErrorResources_it::ER_PROBLEM_IN_DTM_NEXTSIBLING,
			u"Si è verificato un problema in DTM in getNextSibling... Tentativo di recupero in corso."_s
		}),
		$$new($ObjectArray, {
			XPATHErrorResources_it::ER_CANNOT_WRITE_TO_EMPTYNODELISTIMPL,
			"Errore del programmatore: impossibile scrivere EmptyNodeList."_s
		}),
		$$new($ObjectArray, {
			XPATHErrorResources_it::ER_SETDOMFACTORY_NOT_SUPPORTED,
			"setDOMFactory non supportato da XPathContext"_s
		}),
		$$new($ObjectArray, {
			XPATHErrorResources_it::ER_PREFIX_MUST_RESOLVE,
			"Il prefisso deve essere risolto in uno spazio di nomi: {0}"_s
		}),
		$$new($ObjectArray, {
			XPATHErrorResources_it::ER_PARSE_NOT_SUPPORTED,
			"analisi (origine InputSource) non supportata in XPathContext. Impossibile aprire {0}."_s
		}),
		$$new($ObjectArray, {
			XPATHErrorResources_it::ER_SAX_API_NOT_HANDLED,
			"Caratteri API SAX (char ch[]... non gestiti da DTM."_s
		}),
		$$new($ObjectArray, {
			XPATHErrorResources_it::ER_IGNORABLE_WHITESPACE_NOT_HANDLED,
			"ignorableWhitespace(char ch[]... non gestito da DTM."_s
		}),
		$$new($ObjectArray, {
			XPATHErrorResources_it::ER_DTM_CANNOT_HANDLE_NODES,
			u"DTMLiaison non può gestire i nodi di tipo {0}"_s
		}),
		$$new($ObjectArray, {
			XPATHErrorResources_it::ER_XERCES_CANNOT_HANDLE_NODES,
			u"DOM2Helper non può gestire i nodi di tipo {0}"_s
		}),
		$$new($ObjectArray, {
			XPATHErrorResources_it::ER_XERCES_PARSE_ERROR_DETAILS,
			"Errore DOM2Helper.parse: SystemID - {0} Riga - {1}"_s
		}),
		$$new($ObjectArray, {
			XPATHErrorResources_it::ER_XERCES_PARSE_ERROR,
			"Errore DOM2Helper.parse"_s
		}),
		$$new($ObjectArray, {
			XPATHErrorResources_it::ER_INVALID_UTF16_SURROGATE,
			"Rilevato surrogato UTF-16 non valido: {0}?"_s
		}),
		$$new($ObjectArray, {
			XPATHErrorResources_it::ER_OIERROR,
			"Errore IO"_s
		}),
		$$new($ObjectArray, {
			XPATHErrorResources_it::ER_CANNOT_CREATE_URL,
			"Impossibile creare l\'\'URL per {0}"_s
		}),
		$$new($ObjectArray, {
			XPATHErrorResources_it::ER_XPATH_READOBJECT,
			"In XPath.readObject: {0}"_s
		}),
		$$new($ObjectArray, {
			XPATHErrorResources_it::ER_FUNCTION_TOKEN_NOT_FOUND,
			"token di funzione non trovato."_s
		}),
		$$new($ObjectArray, {
			XPATHErrorResources_it::ER_CANNOT_DEAL_XPATH_TYPE,
			"Impossibile utilizzare il tipo XPath: {0}"_s
		}),
		$$new($ObjectArray, {
			XPATHErrorResources_it::ER_NODESET_NOT_MUTABLE,
			"Impossibile modificare questo NodeSet"_s
		}),
		$$new($ObjectArray, {
			XPATHErrorResources_it::ER_NODESETDTM_NOT_MUTABLE,
			"Impossibile modificare questo NodeSetDTM"_s
		}),
		$$new($ObjectArray, {
			XPATHErrorResources_it::ER_VAR_NOT_RESOLVABLE,
			"Impossibile risolvere la variabile: {0}"_s
		}),
		$$new($ObjectArray, {
			XPATHErrorResources_it::ER_NULL_ERROR_HANDLER,
			"Handler degli errori nullo"_s
		}),
		$$new($ObjectArray, {
			XPATHErrorResources_it::ER_PROG_ASSERT_UNKNOWN_OPCODE,
			"Asserzione del programmatore: opcode {0} sconosciuto"_s
		}),
		$$new($ObjectArray, {
			XPATHErrorResources_it::ER_ZERO_OR_ONE,
			"0 o 1"_s
		}),
		$$new($ObjectArray, {
			XPATHErrorResources_it::ER_RTF_NOT_SUPPORTED_XRTREEFRAGSELECTWRAPPER,
			"rtf() non supportato da XRTreeFragSelectWrapper"_s
		}),
		$$new($ObjectArray, {
			XPATHErrorResources_it::ER_RTF_NOT_SUPPORTED_XRTREEFRAGSELECTWRAPPER,
			"asNodeIterator() non supportato da XRTreeFragSelectWrapper"_s
		}),
		$$new($ObjectArray, {
			XPATHErrorResources_it::ER_DETACH_NOT_SUPPORTED_XRTREEFRAGSELECTWRAPPER,
			"detach() non supportato da XRTreeFragSelectWrapper"_s
		}),
		$$new($ObjectArray, {
			XPATHErrorResources_it::ER_NUM_NOT_SUPPORTED_XRTREEFRAGSELECTWRAPPER,
			"num() non supportato da XRTreeFragSelectWrapper"_s
		}),
		$$new($ObjectArray, {
			XPATHErrorResources_it::ER_XSTR_NOT_SUPPORTED_XRTREEFRAGSELECTWRAPPER,
			"xstr() non supportato da XRTreeFragSelectWrapper"_s
		}),
		$$new($ObjectArray, {
			XPATHErrorResources_it::ER_STR_NOT_SUPPORTED_XRTREEFRAGSELECTWRAPPER,
			"str() non supportato da XRTreeFragSelectWrapper"_s
		}),
		$$new($ObjectArray, {
			XPATHErrorResources_it::ER_FSB_NOT_SUPPORTED_XSTRINGFORCHARS,
			"fsb() non supportato per XStringForChars"_s
		}),
		$$new($ObjectArray, {
			XPATHErrorResources_it::ER_COULD_NOT_FIND_VAR,
			"Impossibile trovare la variabile con nome {0}"_s
		}),
		$$new($ObjectArray, {
			XPATHErrorResources_it::ER_XSTRINGFORCHARS_CANNOT_TAKE_STRING,
			u"XStringForChars non può avere una stringa per un argomento"_s
		}),
		$$new($ObjectArray, {
			XPATHErrorResources_it::ER_FASTSTRINGBUFFER_CANNOT_BE_NULL,
			u"L\'argomento FastStringBuffer non può essere nullo"_s
		}),
		$$new($ObjectArray, {
			XPATHErrorResources_it::ER_TWO_OR_THREE,
			"2 o 3"_s
		}),
		$$new($ObjectArray, {
			XPATHErrorResources_it::ER_VARIABLE_ACCESSED_BEFORE_BIND,
			"Accesso alla variabile eseguito prima che fosse associata."_s
		}),
		$$new($ObjectArray, {
			XPATHErrorResources_it::ER_FSB_CANNOT_TAKE_STRING,
			u"XStringForFSB non può avere una stringa per un argomento"_s
		}),
		$$new($ObjectArray, {
			XPATHErrorResources_it::ER_SETTING_WALKER_ROOT_TO_NULL,
			"\n !!!! Errore. Si sta impostando radice di un walker su un valore nullo."_s
		}),
		$$new($ObjectArray, {
			XPATHErrorResources_it::ER_NODESETDTM_CANNOT_ITERATE,
			u"Questo NodeSetDTM non può eseguire un\'iterazione a un nodo precedente."_s
		}),
		$$new($ObjectArray, {
			XPATHErrorResources_it::ER_NODESET_CANNOT_ITERATE,
			u"Questo NodeSet non può eseguire un\'iterazione a un nodo precedente."_s
		}),
		$$new($ObjectArray, {
			XPATHErrorResources_it::ER_NODESETDTM_CANNOT_INDEX,
			u"Questo NodeSetDTM non può eseguire l\'indicizzazione o il conteggio delle funzioni."_s
		}),
		$$new($ObjectArray, {
			XPATHErrorResources_it::ER_NODESET_CANNOT_INDEX,
			u"Questo NodeSet non può eseguire l\'indicizzazione o il conteggio delle funzioni."_s
		}),
		$$new($ObjectArray, {
			XPATHErrorResources_it::ER_CANNOT_CALL_SETSHOULDCACHENODE,
			"Impossibile richiamare setShouldCacheNodes dopo aver richiamato nextNode."_s
		}),
		$$new($ObjectArray, {
			XPATHErrorResources_it::ER_ONLY_ALLOWS,
			"{0} consente solo {1} argomenti"_s
		}),
		$$new($ObjectArray, {
			XPATHErrorResources_it::ER_UNKNOWN_STEP,
			"Asserzione del programmatore in getNextStepPos: stepType {0} sconosciuto"_s
		}),
		$$new($ObjectArray, {
			XPATHErrorResources_it::ER_EXPECTED_REL_LOC_PATH,
			u"È previsto un percorso di posizione relativa dopo il token \'/\' o \'//\'."_s
		}),
		$$new($ObjectArray, {
			XPATHErrorResources_it::ER_EXPECTED_LOC_PATH,
			u"È previsto un percorso di posizione, ma è stato trovato il seguente token:  {0}"_s
		}),
		$$new($ObjectArray, {
			XPATHErrorResources_it::ER_EXPECTED_LOC_PATH_AT_END_EXPR,
			u"È previsto un percorso di posizione, ma è stata trovata la fine dell\'espressione XPath."_s
		}),
		$$new($ObjectArray, {
			XPATHErrorResources_it::ER_EXPECTED_LOC_STEP,
			u"È previsto un passo di posizione dopo il token \'/\' o \'//\'."_s
		}),
		$$new($ObjectArray, {
			XPATHErrorResources_it::ER_EXPECTED_NODE_TEST,
			u"È previsto un test del nodo che corrisponda a NCName:* o a QName."_s
		}),
		$$new($ObjectArray, {
			XPATHErrorResources_it::ER_EXPECTED_STEP_PATTERN,
			u"È previsto un pattern di passo, ma è stato trovato \'/\'."_s
		}),
		$$new($ObjectArray, {
			XPATHErrorResources_it::ER_EXPECTED_REL_PATH_PATTERN,
			u"È previsto un pattern di percorso relativo."_s
		}),
		$$new($ObjectArray, {
			XPATHErrorResources_it::ER_CANT_CONVERT_TO_BOOLEAN,
			u"XPathResult dell\'\'espressione XPath \'\'{0}\'\' a un valore di XPathResultType pari a {1} che non può essere convertito in un valore booleano."_s
		}),
		$$new($ObjectArray, {
			XPATHErrorResources_it::ER_CANT_CONVERT_TO_SINGLENODE,
			u"XPathResult dell\'\'espressione XPath \'\'{0}\'\' a un valore di XPathResultType pari a {1} che non può essere convertito in un nodo singolo. Il metodo getSingleNodeValue è valido solo per i tipi ANY_UNORDERED_NODE_TYPE e FIRST_ORDERED_NODE_TYPE."_s
		}),
		$$new($ObjectArray, {
			XPATHErrorResources_it::ER_CANT_GET_SNAPSHOT_LENGTH,
			u"Impossibile richiamare il metodo getSnapshotLength nell\'\'XPathResult dell\'\'espressione XPath \'\'{0}\'\' poiché il valore di XPathResultType è {1}. Questo metodo è valido solo per i tipi UNORDERED_NODE_SNAPSHOT_TYPE e ORDERED_NODE_SNAPSHOT_TYPE."_s
		}),
		$$new($ObjectArray, {
			XPATHErrorResources_it::ER_NON_ITERATOR_TYPE,
			u"Impossibile richiamare il metodo iterateNext nell\'\'XPathResult dell\'\'espressione XPath \'\'{0}\'\' poiché il valore di XPathResultType è {1}. Questo metodo è valido solo per i tipi UNORDERED_NODE_ITERATOR_TYPE e ORDERED_NODE_ITERATOR_TYPE."_s
		}),
		$$new($ObjectArray, {
			XPATHErrorResources_it::ER_DOC_MUTATED,
			u"Il documento è cambiato da quando è stato restituito l\'ultimo risultato. L\'iteratore non è valido."_s
		}),
		$$new($ObjectArray, {
			XPATHErrorResources_it::ER_INVALID_XPATH_TYPE,
			"Tipo di argomento XPath non valido: {0}"_s
		}),
		$$new($ObjectArray, {
			XPATHErrorResources_it::ER_EMPTY_XPATH_RESULT,
			"Oggetto risultati XPath vuoto"_s
		}),
		$$new($ObjectArray, {
			XPATHErrorResources_it::ER_INCOMPATIBLE_TYPES,
			u"XPathResult dell\'\'espressione XPath \'\'{0}\'\' a un valore di XPathResultType pari a {1} che non può essere convertito forzatamente nel valore XPathResultType {2}."_s
		}),
		$$new($ObjectArray, {
			XPATHErrorResources_it::ER_NULL_RESOLVER,
			"Impossibile risolvere il prefisso con un resolver di prefissi nullo."_s
		}),
		$$new($ObjectArray, {
			XPATHErrorResources_it::ER_CANT_CONVERT_TO_STRING,
			u"XPathResult dell\'\'espressione XPath \'\'{0}\'\' a un valore di XPathResultType pari a {1} che non può essere convertito in una stringa."_s
		}),
		$$new($ObjectArray, {
			XPATHErrorResources_it::ER_NON_SNAPSHOT_TYPE,
			u"Impossibile richiamare il metodo snapshotItem nell\'\'XPathResult dell\'\'espressione XPath \'\'{0}\'\' poiché il valore di XPathResultType è {1}. Questo metodo è valido solo per i tipi UNORDERED_NODE_SNAPSHOT_TYPE e ORDERED_NODE_SNAPSHOT_TYPE."_s
		}),
		$$new($ObjectArray, {
			XPATHErrorResources_it::ER_WRONG_DOCUMENT,
			"Il nodo di contesto non appartiene al documento associato a questo XPathEvaluator."_s
		}),
		$$new($ObjectArray, {
			XPATHErrorResources_it::ER_WRONG_NODETYPE,
			u"Il tipo di nodo di contesto non è supportato."_s
		}),
		$$new($ObjectArray, {
			XPATHErrorResources_it::ER_XPATH_ERROR,
			"Errore sconosciuto nell\'XPath."_s
		}),
		$$new($ObjectArray, {
			XPATHErrorResources_it::ER_CANT_CONVERT_XPATHRESULTTYPE_TO_NUMBER,
			u"XPathResult dell\'\'espressione XPath \'\'{0}\'\' a un valore di XPathResultType pari a {1} che non può essere convertito in un numero."_s
		}),
		$$new($ObjectArray, {
			XPATHErrorResources_it::ER_EXTENSION_FUNCTION_CANNOT_BE_INVOKED,
			u"Impossibile richiamare la funzione di estensione \'\'{0}\'\' se la funzione XMLConstants.FEATURE_SECURE_PROCESSING è impostata su true."_s
		}),
		$$new($ObjectArray, {
			XPATHErrorResources_it::ER_RESOLVE_VARIABLE_RETURNS_NULL,
			"resolveVariable per la variabile {0} ha restituito un valore nullo"_s
		}),
		$$new($ObjectArray, {
			XPATHErrorResources_it::ER_UNSUPPORTED_RETURN_TYPE,
			"Tipo restituito non supportato: {0}"_s
		}),
		$$new($ObjectArray, {
			XPATHErrorResources_it::ER_SOURCE_RETURN_TYPE_CANNOT_BE_NULL,
			u"Il tipo di origine e/o restituito non può essere nullo"_s
		}),
		$$new($ObjectArray, {
			XPATHErrorResources_it::ER_SOURCE_RETURN_TYPE_CANNOT_BE_NULL,
			u"Il tipo di origine e/o restituito non può essere nullo"_s
		}),
		$$new($ObjectArray, {
			XPATHErrorResources_it::ER_ARG_CANNOT_BE_NULL,
			u"L\'\'argomento {0} non può essere nullo"_s
		}),
		$$new($ObjectArray, {
			XPATHErrorResources_it::ER_OBJECT_MODEL_NULL,
			u"{0}#isObjectModelSupported( String objectModel ) non può essere richiamato se objectModel == null"_s
		}),
		$$new($ObjectArray, {
			XPATHErrorResources_it::ER_OBJECT_MODEL_EMPTY,
			u"{0}#isObjectModelSupported( String objectModel ) non può essere richiamato se objectModel == \"\""_s
		}),
		$$new($ObjectArray, {
			XPATHErrorResources_it::ER_FEATURE_NAME_NULL,
			"Tentativo di impostare una funzione con nome nullo: {0}#setFeature( null, {1})"_s
		}),
		$$new($ObjectArray, {
			XPATHErrorResources_it::ER_FEATURE_UNKNOWN,
			"Tentativo di impostare la funzione sconosciuta \"{0}\":{1}#setFeature({0},{2})"_s
		}),
		$$new($ObjectArray, {
			XPATHErrorResources_it::ER_GETTING_NULL_FEATURE,
			"Tentativo di recuperare una funzione con nome nullo: {0}#getFeature(null)"_s
		}),
		$$new($ObjectArray, {
			XPATHErrorResources_it::ER_GETTING_UNKNOWN_FEATURE,
			"Tentativo di recuperare la funzione sconosciuta \"{0}\":{1}#getFeature({0})"_s
		}),
		$$new($ObjectArray, {
			XPATHErrorResources_it::ER_SECUREPROCESSING_FEATURE,
			u"FEATURE_SECURE_PROCESSING: impossibile impostare la funzione su false se è presente Security Manager: {1}#setFeature({0},{2})"_s
		}),
		$$new($ObjectArray, {
			XPATHErrorResources_it::ER_NULL_XPATH_FUNCTION_RESOLVER,
			"Tentativo di impostare un valore  nullo per XPathFunctionResolver:{0}#setXPathFunctionResolver(null)"_s
		}),
		$$new($ObjectArray, {
			XPATHErrorResources_it::ER_NULL_XPATH_VARIABLE_RESOLVER,
			"Tentativo di impostare un valore  nullo per XPathVariableResolver:{0}#setXPathVariableResolver(null)"_s
		}),
		$$new($ObjectArray, {
			XPATHErrorResources_it::WG_LOCALE_NAME_NOT_HANDLED,
			u"il nome di impostazioni nazionali nella funzione format-number non è ancora gestito."_s
		}),
		$$new($ObjectArray, {
			XPATHErrorResources_it::WG_PROPERTY_NOT_SUPPORTED,
			u"Proprietà XSL non supportata: {0}"_s
		}),
		$$new($ObjectArray, {
			XPATHErrorResources_it::WG_DONT_DO_ANYTHING_WITH_NS,
			u"Non effettuare alcuna operazione sullo spazio di nomi {0} nella proprietà: {1}"_s
		}),
		$$new($ObjectArray, {
			XPATHErrorResources_it::WG_SECURITY_EXCEPTION,
			u"SecurityException nel tentativo di accedere alla proprietà di sistema XSL {0}"_s
		}),
		$$new($ObjectArray, {
			XPATHErrorResources_it::WG_QUO_NO_LONGER_DEFINED,
			u"Sintassi obsoleta: quo(...) non è più definito nell\'XPath."_s
		}),
		$$new($ObjectArray, {
			XPATHErrorResources_it::WG_NEED_DERIVED_OBJECT_TO_IMPLEMENT_NODETEST,
			"L\'XPath richiede un oggetto derivato che implementi nodeTest."_s
		}),
		$$new($ObjectArray, {
			XPATHErrorResources_it::WG_FUNCTION_TOKEN_NOT_FOUND,
			"token di funzione non trovato."_s
		}),
		$$new($ObjectArray, {
			XPATHErrorResources_it::WG_COULDNOT_FIND_FUNCTION,
			"Impossibile trovare la funzione {0}"_s
		}),
		$$new($ObjectArray, {
			XPATHErrorResources_it::WG_CANNOT_MAKE_URL_FROM,
			"Impossibile creare un URL da {0}"_s
		}),
		$$new($ObjectArray, {
			XPATHErrorResources_it::WG_EXPAND_ENTITIES_NOT_SUPPORTED,
			"Opzione -E non supportata per il parser DTM"_s
		}),
		$$new($ObjectArray, {
			XPATHErrorResources_it::WG_ILLEGAL_VARIABLE_REFERENCE,
			u"Il valore di VariableReference specificato per la variabile è fuori contesto o senza definizione. Nome = {0}"_s
		}),
		$$new($ObjectArray, {
			XPATHErrorResources_it::WG_UNSUPPORTED_ENCODING,
			"Codifica non supportata: {0}"_s
		}),
		$$new($ObjectArray, {
			"ui_language"_s,
			"it"_s
		}),
		$$new($ObjectArray, {
			"help_language"_s,
			"it"_s
		}),
		$$new($ObjectArray, {
			"language"_s,
			"it"_s
		}),
		$$new($ObjectArray, {
			"BAD_CODE"_s,
			"Parametro per createMessage fuori limite"_s
		}),
		$$new($ObjectArray, {
			"FORMAT_FAILED"_s,
			"Eccezione durante la chiamata messageFormat"_s
		}),
		$$new($ObjectArray, {
			"version"_s,
			">>>>>>> Versione Xalan "_s
		}),
		$$new($ObjectArray, {
			"version2"_s,
			"<<<<<<<"_s
		}),
		$$new($ObjectArray, {
			"yes"_s,
			u"sì"_s
		}),
		$$new($ObjectArray, {
			"line"_s,
			"N. riga"_s
		}),
		$$new($ObjectArray, {
			"column"_s,
			"N. colonna"_s
		}),
		$$new($ObjectArray, {
			"xsldone"_s,
			"XSLProcessor: operazione completata"_s
		}),
		$$new($ObjectArray, {
			"xpath_option"_s,
			"opzioni xpath: "_s
		}),
		$$new($ObjectArray, {
			"optionIN"_s,
			"   [-in inputXMLURL]"_s
		}),
		$$new($ObjectArray, {
			"optionSelect"_s,
			"   [-select xpath expression]"_s
		}),
		$$new($ObjectArray, {
			"optionMatch"_s,
			"   [-match match pattern (per la diagnostica delle corrispondenze)]"_s
		}),
		$$new($ObjectArray, {
			"optionAnyExpr"_s,
			u"In alternativa, un\'espressione xpath eseguirà il dump della diagnostica."_s
		}),
		$$new($ObjectArray, {
			"noParsermsg1"_s,
			"Processo XSL non riuscito."_s
		}),
		$$new($ObjectArray, {
			"noParsermsg2"_s,
			"** Impossibile trovare il parser **"_s
		}),
		$$new($ObjectArray, {
			"noParsermsg3"_s,
			"Controllare il classpath."_s
		}),
		$$new($ObjectArray, {
			"noParsermsg4"_s,
			u"Se non è disponibile un parser XML di IBM per Java, è possibile scaricarlo da"_s
		}),
		$$new($ObjectArray, {
			"noParsermsg5"_s,
			"AlphaWorks di IBM: http://www.alphaworks.ibm.com/formula/xml"_s
		}),
		$$new($ObjectArray, {
			"gtone"_s,
			">1"_s
		}),
		$$new($ObjectArray, {
			"zero"_s,
			"0"_s
		}),
		$$new($ObjectArray, {
			"one"_s,
			"1"_s
		}),
		$$new($ObjectArray, {
			"two"_s,
			"2"_s
		}),
		$$new($ObjectArray, {
			"three"_s,
			"3"_s
		})
	}));
}

XPATHErrorResources_it::XPATHErrorResources_it() {
}

$Class* XPATHErrorResources_it::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"ERROR0000", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_it, ERROR0000)},
		{"ER_CURRENT_NOT_ALLOWED_IN_MATCH", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_it, ER_CURRENT_NOT_ALLOWED_IN_MATCH)},
		{"ER_CURRENT_TAKES_NO_ARGS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_it, ER_CURRENT_TAKES_NO_ARGS)},
		{"ER_DOCUMENT_REPLACED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_it, ER_DOCUMENT_REPLACED)},
		{"ER_CONTEXT_CAN_NOT_BE_NULL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_it, ER_CONTEXT_CAN_NOT_BE_NULL)},
		{"ER_CONTEXT_HAS_NO_OWNERDOC", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_it, ER_CONTEXT_HAS_NO_OWNERDOC)},
		{"ER_LOCALNAME_HAS_TOO_MANY_ARGS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_it, ER_LOCALNAME_HAS_TOO_MANY_ARGS)},
		{"ER_NAMESPACEURI_HAS_TOO_MANY_ARGS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_it, ER_NAMESPACEURI_HAS_TOO_MANY_ARGS)},
		{"ER_NORMALIZESPACE_HAS_TOO_MANY_ARGS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_it, ER_NORMALIZESPACE_HAS_TOO_MANY_ARGS)},
		{"ER_NUMBER_HAS_TOO_MANY_ARGS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_it, ER_NUMBER_HAS_TOO_MANY_ARGS)},
		{"ER_NAME_HAS_TOO_MANY_ARGS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_it, ER_NAME_HAS_TOO_MANY_ARGS)},
		{"ER_STRING_HAS_TOO_MANY_ARGS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_it, ER_STRING_HAS_TOO_MANY_ARGS)},
		{"ER_STRINGLENGTH_HAS_TOO_MANY_ARGS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_it, ER_STRINGLENGTH_HAS_TOO_MANY_ARGS)},
		{"ER_TRANSLATE_TAKES_3_ARGS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_it, ER_TRANSLATE_TAKES_3_ARGS)},
		{"ER_UNPARSEDENTITYURI_TAKES_1_ARG", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_it, ER_UNPARSEDENTITYURI_TAKES_1_ARG)},
		{"ER_NAMESPACEAXIS_NOT_IMPLEMENTED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_it, ER_NAMESPACEAXIS_NOT_IMPLEMENTED)},
		{"ER_UNKNOWN_AXIS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_it, ER_UNKNOWN_AXIS)},
		{"ER_UNKNOWN_MATCH_OPERATION", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_it, ER_UNKNOWN_MATCH_OPERATION)},
		{"ER_INCORRECT_ARG_LENGTH", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_it, ER_INCORRECT_ARG_LENGTH)},
		{"ER_CANT_CONVERT_TO_NUMBER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_it, ER_CANT_CONVERT_TO_NUMBER)},
		{"ER_CANT_CONVERT_XPATHRESULTTYPE_TO_NUMBER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_it, ER_CANT_CONVERT_XPATHRESULTTYPE_TO_NUMBER)},
		{"ER_CANT_CONVERT_TO_NODELIST", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_it, ER_CANT_CONVERT_TO_NODELIST)},
		{"ER_CANT_CONVERT_TO_MUTABLENODELIST", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_it, ER_CANT_CONVERT_TO_MUTABLENODELIST)},
		{"ER_CANT_CONVERT_TO_TYPE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_it, ER_CANT_CONVERT_TO_TYPE)},
		{"ER_EXPECTED_MATCH_PATTERN", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_it, ER_EXPECTED_MATCH_PATTERN)},
		{"ER_COULDNOT_GET_VAR_NAMED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_it, ER_COULDNOT_GET_VAR_NAMED)},
		{"ER_UNKNOWN_OPCODE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_it, ER_UNKNOWN_OPCODE)},
		{"ER_EXTRA_ILLEGAL_TOKENS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_it, ER_EXTRA_ILLEGAL_TOKENS)},
		{"ER_EXPECTED_DOUBLE_QUOTE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_it, ER_EXPECTED_DOUBLE_QUOTE)},
		{"ER_EXPECTED_SINGLE_QUOTE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_it, ER_EXPECTED_SINGLE_QUOTE)},
		{"ER_EMPTY_EXPRESSION", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_it, ER_EMPTY_EXPRESSION)},
		{"ER_EXPECTED_BUT_FOUND", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_it, ER_EXPECTED_BUT_FOUND)},
		{"ER_INCORRECT_PROGRAMMER_ASSERTION", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_it, ER_INCORRECT_PROGRAMMER_ASSERTION)},
		{"ER_BOOLEAN_ARG_NO_LONGER_OPTIONAL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_it, ER_BOOLEAN_ARG_NO_LONGER_OPTIONAL)},
		{"ER_FOUND_COMMA_BUT_NO_PRECEDING_ARG", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_it, ER_FOUND_COMMA_BUT_NO_PRECEDING_ARG)},
		{"ER_FOUND_COMMA_BUT_NO_FOLLOWING_ARG", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_it, ER_FOUND_COMMA_BUT_NO_FOLLOWING_ARG)},
		{"ER_PREDICATE_ILLEGAL_SYNTAX", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_it, ER_PREDICATE_ILLEGAL_SYNTAX)},
		{"ER_ILLEGAL_AXIS_NAME", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_it, ER_ILLEGAL_AXIS_NAME)},
		{"ER_UNKNOWN_NODETYPE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_it, ER_UNKNOWN_NODETYPE)},
		{"ER_PATTERN_LITERAL_NEEDS_BE_QUOTED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_it, ER_PATTERN_LITERAL_NEEDS_BE_QUOTED)},
		{"ER_COULDNOT_BE_FORMATTED_TO_NUMBER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_it, ER_COULDNOT_BE_FORMATTED_TO_NUMBER)},
		{"ER_COULDNOT_CREATE_XMLPROCESSORLIAISON", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_it, ER_COULDNOT_CREATE_XMLPROCESSORLIAISON)},
		{"ER_DIDNOT_FIND_XPATH_SELECT_EXP", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_it, ER_DIDNOT_FIND_XPATH_SELECT_EXP)},
		{"ER_COULDNOT_FIND_ENDOP_AFTER_OPLOCATIONPATH", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_it, ER_COULDNOT_FIND_ENDOP_AFTER_OPLOCATIONPATH)},
		{"ER_ERROR_OCCURED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_it, ER_ERROR_OCCURED)},
		{"ER_ILLEGAL_VARIABLE_REFERENCE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_it, ER_ILLEGAL_VARIABLE_REFERENCE)},
		{"ER_AXES_NOT_ALLOWED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_it, ER_AXES_NOT_ALLOWED)},
		{"ER_KEY_HAS_TOO_MANY_ARGS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_it, ER_KEY_HAS_TOO_MANY_ARGS)},
		{"ER_COUNT_TAKES_1_ARG", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_it, ER_COUNT_TAKES_1_ARG)},
		{"ER_COULDNOT_FIND_FUNCTION", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_it, ER_COULDNOT_FIND_FUNCTION)},
		{"ER_UNSUPPORTED_ENCODING", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_it, ER_UNSUPPORTED_ENCODING)},
		{"ER_PROBLEM_IN_DTM_NEXTSIBLING", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_it, ER_PROBLEM_IN_DTM_NEXTSIBLING)},
		{"ER_CANNOT_WRITE_TO_EMPTYNODELISTIMPL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_it, ER_CANNOT_WRITE_TO_EMPTYNODELISTIMPL)},
		{"ER_SETDOMFACTORY_NOT_SUPPORTED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_it, ER_SETDOMFACTORY_NOT_SUPPORTED)},
		{"ER_PREFIX_MUST_RESOLVE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_it, ER_PREFIX_MUST_RESOLVE)},
		{"ER_PARSE_NOT_SUPPORTED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_it, ER_PARSE_NOT_SUPPORTED)},
		{"ER_SAX_API_NOT_HANDLED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_it, ER_SAX_API_NOT_HANDLED)},
		{"ER_IGNORABLE_WHITESPACE_NOT_HANDLED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_it, ER_IGNORABLE_WHITESPACE_NOT_HANDLED)},
		{"ER_DTM_CANNOT_HANDLE_NODES", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_it, ER_DTM_CANNOT_HANDLE_NODES)},
		{"ER_XERCES_CANNOT_HANDLE_NODES", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_it, ER_XERCES_CANNOT_HANDLE_NODES)},
		{"ER_XERCES_PARSE_ERROR_DETAILS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_it, ER_XERCES_PARSE_ERROR_DETAILS)},
		{"ER_XERCES_PARSE_ERROR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_it, ER_XERCES_PARSE_ERROR)},
		{"ER_INVALID_UTF16_SURROGATE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_it, ER_INVALID_UTF16_SURROGATE)},
		{"ER_OIERROR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_it, ER_OIERROR)},
		{"ER_CANNOT_CREATE_URL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_it, ER_CANNOT_CREATE_URL)},
		{"ER_XPATH_READOBJECT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_it, ER_XPATH_READOBJECT)},
		{"ER_FUNCTION_TOKEN_NOT_FOUND", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_it, ER_FUNCTION_TOKEN_NOT_FOUND)},
		{"ER_CANNOT_DEAL_XPATH_TYPE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_it, ER_CANNOT_DEAL_XPATH_TYPE)},
		{"ER_NODESET_NOT_MUTABLE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_it, ER_NODESET_NOT_MUTABLE)},
		{"ER_NODESETDTM_NOT_MUTABLE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_it, ER_NODESETDTM_NOT_MUTABLE)},
		{"ER_VAR_NOT_RESOLVABLE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_it, ER_VAR_NOT_RESOLVABLE)},
		{"ER_NULL_ERROR_HANDLER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_it, ER_NULL_ERROR_HANDLER)},
		{"ER_PROG_ASSERT_UNKNOWN_OPCODE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_it, ER_PROG_ASSERT_UNKNOWN_OPCODE)},
		{"ER_ZERO_OR_ONE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_it, ER_ZERO_OR_ONE)},
		{"ER_RTF_NOT_SUPPORTED_XRTREEFRAGSELECTWRAPPER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_it, ER_RTF_NOT_SUPPORTED_XRTREEFRAGSELECTWRAPPER)},
		{"ER_ASNODEITERATOR_NOT_SUPPORTED_XRTREEFRAGSELECTWRAPPER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_it, ER_ASNODEITERATOR_NOT_SUPPORTED_XRTREEFRAGSELECTWRAPPER)},
		{"ER_FSB_NOT_SUPPORTED_XSTRINGFORCHARS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_it, ER_FSB_NOT_SUPPORTED_XSTRINGFORCHARS)},
		{"ER_COULD_NOT_FIND_VAR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_it, ER_COULD_NOT_FIND_VAR)},
		{"ER_XSTRINGFORCHARS_CANNOT_TAKE_STRING", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_it, ER_XSTRINGFORCHARS_CANNOT_TAKE_STRING)},
		{"ER_FASTSTRINGBUFFER_CANNOT_BE_NULL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_it, ER_FASTSTRINGBUFFER_CANNOT_BE_NULL)},
		{"ER_TWO_OR_THREE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_it, ER_TWO_OR_THREE)},
		{"ER_VARIABLE_ACCESSED_BEFORE_BIND", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_it, ER_VARIABLE_ACCESSED_BEFORE_BIND)},
		{"ER_FSB_CANNOT_TAKE_STRING", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_it, ER_FSB_CANNOT_TAKE_STRING)},
		{"ER_SETTING_WALKER_ROOT_TO_NULL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_it, ER_SETTING_WALKER_ROOT_TO_NULL)},
		{"ER_NODESETDTM_CANNOT_ITERATE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_it, ER_NODESETDTM_CANNOT_ITERATE)},
		{"ER_NODESET_CANNOT_ITERATE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_it, ER_NODESET_CANNOT_ITERATE)},
		{"ER_NODESETDTM_CANNOT_INDEX", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_it, ER_NODESETDTM_CANNOT_INDEX)},
		{"ER_NODESET_CANNOT_INDEX", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_it, ER_NODESET_CANNOT_INDEX)},
		{"ER_CANNOT_CALL_SETSHOULDCACHENODE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_it, ER_CANNOT_CALL_SETSHOULDCACHENODE)},
		{"ER_ONLY_ALLOWS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_it, ER_ONLY_ALLOWS)},
		{"ER_UNKNOWN_STEP", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_it, ER_UNKNOWN_STEP)},
		{"ER_EXPECTED_REL_LOC_PATH", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_it, ER_EXPECTED_REL_LOC_PATH)},
		{"ER_EXPECTED_LOC_PATH", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_it, ER_EXPECTED_LOC_PATH)},
		{"ER_EXPECTED_LOC_PATH_AT_END_EXPR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_it, ER_EXPECTED_LOC_PATH_AT_END_EXPR)},
		{"ER_EXPECTED_LOC_STEP", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_it, ER_EXPECTED_LOC_STEP)},
		{"ER_EXPECTED_NODE_TEST", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_it, ER_EXPECTED_NODE_TEST)},
		{"ER_EXPECTED_STEP_PATTERN", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_it, ER_EXPECTED_STEP_PATTERN)},
		{"ER_EXPECTED_REL_PATH_PATTERN", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_it, ER_EXPECTED_REL_PATH_PATTERN)},
		{"ER_CANT_CONVERT_TO_BOOLEAN", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_it, ER_CANT_CONVERT_TO_BOOLEAN)},
		{"ER_CANT_CONVERT_TO_SINGLENODE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_it, ER_CANT_CONVERT_TO_SINGLENODE)},
		{"ER_CANT_GET_SNAPSHOT_LENGTH", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_it, ER_CANT_GET_SNAPSHOT_LENGTH)},
		{"ER_NON_ITERATOR_TYPE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_it, ER_NON_ITERATOR_TYPE)},
		{"ER_DOC_MUTATED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_it, ER_DOC_MUTATED)},
		{"ER_INVALID_XPATH_TYPE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_it, ER_INVALID_XPATH_TYPE)},
		{"ER_EMPTY_XPATH_RESULT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_it, ER_EMPTY_XPATH_RESULT)},
		{"ER_INCOMPATIBLE_TYPES", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_it, ER_INCOMPATIBLE_TYPES)},
		{"ER_NULL_RESOLVER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_it, ER_NULL_RESOLVER)},
		{"ER_CANT_CONVERT_TO_STRING", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_it, ER_CANT_CONVERT_TO_STRING)},
		{"ER_NON_SNAPSHOT_TYPE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_it, ER_NON_SNAPSHOT_TYPE)},
		{"ER_WRONG_DOCUMENT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_it, ER_WRONG_DOCUMENT)},
		{"ER_WRONG_NODETYPE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_it, ER_WRONG_NODETYPE)},
		{"ER_XPATH_ERROR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_it, ER_XPATH_ERROR)},
		{"ER_EXTENSION_FUNCTION_CANNOT_BE_INVOKED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_it, ER_EXTENSION_FUNCTION_CANNOT_BE_INVOKED)},
		{"ER_RESOLVE_VARIABLE_RETURNS_NULL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_it, ER_RESOLVE_VARIABLE_RETURNS_NULL)},
		{"ER_UNSUPPORTED_RETURN_TYPE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_it, ER_UNSUPPORTED_RETURN_TYPE)},
		{"ER_SOURCE_RETURN_TYPE_CANNOT_BE_NULL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_it, ER_SOURCE_RETURN_TYPE_CANNOT_BE_NULL)},
		{"ER_ARG_CANNOT_BE_NULL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_it, ER_ARG_CANNOT_BE_NULL)},
		{"ER_OBJECT_MODEL_NULL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_it, ER_OBJECT_MODEL_NULL)},
		{"ER_OBJECT_MODEL_EMPTY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_it, ER_OBJECT_MODEL_EMPTY)},
		{"ER_FEATURE_NAME_NULL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_it, ER_FEATURE_NAME_NULL)},
		{"ER_FEATURE_UNKNOWN", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_it, ER_FEATURE_UNKNOWN)},
		{"ER_GETTING_NULL_FEATURE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_it, ER_GETTING_NULL_FEATURE)},
		{"ER_GETTING_UNKNOWN_FEATURE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_it, ER_GETTING_UNKNOWN_FEATURE)},
		{"ER_SECUREPROCESSING_FEATURE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_it, ER_SECUREPROCESSING_FEATURE)},
		{"ER_NULL_XPATH_FUNCTION_RESOLVER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_it, ER_NULL_XPATH_FUNCTION_RESOLVER)},
		{"ER_NULL_XPATH_VARIABLE_RESOLVER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_it, ER_NULL_XPATH_VARIABLE_RESOLVER)},
		{"WG_LOCALE_NAME_NOT_HANDLED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_it, WG_LOCALE_NAME_NOT_HANDLED)},
		{"WG_PROPERTY_NOT_SUPPORTED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_it, WG_PROPERTY_NOT_SUPPORTED)},
		{"WG_DONT_DO_ANYTHING_WITH_NS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_it, WG_DONT_DO_ANYTHING_WITH_NS)},
		{"WG_SECURITY_EXCEPTION", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_it, WG_SECURITY_EXCEPTION)},
		{"WG_QUO_NO_LONGER_DEFINED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_it, WG_QUO_NO_LONGER_DEFINED)},
		{"WG_NEED_DERIVED_OBJECT_TO_IMPLEMENT_NODETEST", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_it, WG_NEED_DERIVED_OBJECT_TO_IMPLEMENT_NODETEST)},
		{"WG_FUNCTION_TOKEN_NOT_FOUND", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_it, WG_FUNCTION_TOKEN_NOT_FOUND)},
		{"WG_COULDNOT_FIND_FUNCTION", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_it, WG_COULDNOT_FIND_FUNCTION)},
		{"WG_CANNOT_MAKE_URL_FROM", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_it, WG_CANNOT_MAKE_URL_FROM)},
		{"WG_EXPAND_ENTITIES_NOT_SUPPORTED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_it, WG_EXPAND_ENTITIES_NOT_SUPPORTED)},
		{"WG_ILLEGAL_VARIABLE_REFERENCE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_it, WG_ILLEGAL_VARIABLE_REFERENCE)},
		{"WG_UNSUPPORTED_ENCODING", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_it, WG_UNSUPPORTED_ENCODING)},
		{"ER_DETACH_NOT_SUPPORTED_XRTREEFRAGSELECTWRAPPER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_it, ER_DETACH_NOT_SUPPORTED_XRTREEFRAGSELECTWRAPPER)},
		{"ER_NUM_NOT_SUPPORTED_XRTREEFRAGSELECTWRAPPER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_it, ER_NUM_NOT_SUPPORTED_XRTREEFRAGSELECTWRAPPER)},
		{"ER_XSTR_NOT_SUPPORTED_XRTREEFRAGSELECTWRAPPER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_it, ER_XSTR_NOT_SUPPORTED_XRTREEFRAGSELECTWRAPPER)},
		{"ER_STR_NOT_SUPPORTED_XRTREEFRAGSELECTWRAPPER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_it, ER_STR_NOT_SUPPORTED_XRTREEFRAGSELECTWRAPPER)},
		{"_contents", "[[Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XPATHErrorResources_it, _contents)},
		{"BAD_CODE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_it, BAD_CODE)},
		{"FORMAT_FAILED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_it, FORMAT_FAILED)},
		{"ERROR_RESOURCES", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_it, ERROR_RESOURCES)},
		{"ERROR_STRING", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_it, ERROR_STRING)},
		{"ERROR_HEADER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_it, ERROR_HEADER)},
		{"WARNING_HEADER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_it, WARNING_HEADER)},
		{"XSL_HEADER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_it, XSL_HEADER)},
		{"XML_HEADER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_it, XML_HEADER)},
		{"QUERY_HEADER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_it, QUERY_HEADER)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(XPATHErrorResources_it, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(XPATHErrorResources_it, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.org.apache.xpath.internal.res.XPATHErrorResources_it",
		"java.util.ListResourceBundle",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(XPATHErrorResources_it, name, initialize, &classInfo$$, XPATHErrorResources_it::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(XPATHErrorResources_it);
	});
	return class$;
}

$Class* XPATHErrorResources_it::class$ = nullptr;

						} // res
					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com