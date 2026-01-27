#include <com/sun/org/apache/xpath/internal/res/XPATHErrorResources_sv.h>

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

$FieldInfo _XPATHErrorResources_sv_FieldInfo_[] = {
	{"ERROR0000", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_sv, ERROR0000)},
	{"ER_CURRENT_NOT_ALLOWED_IN_MATCH", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_sv, ER_CURRENT_NOT_ALLOWED_IN_MATCH)},
	{"ER_CURRENT_TAKES_NO_ARGS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_sv, ER_CURRENT_TAKES_NO_ARGS)},
	{"ER_DOCUMENT_REPLACED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_sv, ER_DOCUMENT_REPLACED)},
	{"ER_CONTEXT_CAN_NOT_BE_NULL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_sv, ER_CONTEXT_CAN_NOT_BE_NULL)},
	{"ER_CONTEXT_HAS_NO_OWNERDOC", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_sv, ER_CONTEXT_HAS_NO_OWNERDOC)},
	{"ER_LOCALNAME_HAS_TOO_MANY_ARGS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_sv, ER_LOCALNAME_HAS_TOO_MANY_ARGS)},
	{"ER_NAMESPACEURI_HAS_TOO_MANY_ARGS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_sv, ER_NAMESPACEURI_HAS_TOO_MANY_ARGS)},
	{"ER_NORMALIZESPACE_HAS_TOO_MANY_ARGS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_sv, ER_NORMALIZESPACE_HAS_TOO_MANY_ARGS)},
	{"ER_NUMBER_HAS_TOO_MANY_ARGS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_sv, ER_NUMBER_HAS_TOO_MANY_ARGS)},
	{"ER_NAME_HAS_TOO_MANY_ARGS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_sv, ER_NAME_HAS_TOO_MANY_ARGS)},
	{"ER_STRING_HAS_TOO_MANY_ARGS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_sv, ER_STRING_HAS_TOO_MANY_ARGS)},
	{"ER_STRINGLENGTH_HAS_TOO_MANY_ARGS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_sv, ER_STRINGLENGTH_HAS_TOO_MANY_ARGS)},
	{"ER_TRANSLATE_TAKES_3_ARGS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_sv, ER_TRANSLATE_TAKES_3_ARGS)},
	{"ER_UNPARSEDENTITYURI_TAKES_1_ARG", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_sv, ER_UNPARSEDENTITYURI_TAKES_1_ARG)},
	{"ER_NAMESPACEAXIS_NOT_IMPLEMENTED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_sv, ER_NAMESPACEAXIS_NOT_IMPLEMENTED)},
	{"ER_UNKNOWN_AXIS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_sv, ER_UNKNOWN_AXIS)},
	{"ER_UNKNOWN_MATCH_OPERATION", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_sv, ER_UNKNOWN_MATCH_OPERATION)},
	{"ER_INCORRECT_ARG_LENGTH", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_sv, ER_INCORRECT_ARG_LENGTH)},
	{"ER_CANT_CONVERT_TO_NUMBER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_sv, ER_CANT_CONVERT_TO_NUMBER)},
	{"ER_CANT_CONVERT_XPATHRESULTTYPE_TO_NUMBER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_sv, ER_CANT_CONVERT_XPATHRESULTTYPE_TO_NUMBER)},
	{"ER_CANT_CONVERT_TO_NODELIST", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_sv, ER_CANT_CONVERT_TO_NODELIST)},
	{"ER_CANT_CONVERT_TO_MUTABLENODELIST", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_sv, ER_CANT_CONVERT_TO_MUTABLENODELIST)},
	{"ER_CANT_CONVERT_TO_TYPE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_sv, ER_CANT_CONVERT_TO_TYPE)},
	{"ER_EXPECTED_MATCH_PATTERN", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_sv, ER_EXPECTED_MATCH_PATTERN)},
	{"ER_COULDNOT_GET_VAR_NAMED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_sv, ER_COULDNOT_GET_VAR_NAMED)},
	{"ER_UNKNOWN_OPCODE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_sv, ER_UNKNOWN_OPCODE)},
	{"ER_EXTRA_ILLEGAL_TOKENS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_sv, ER_EXTRA_ILLEGAL_TOKENS)},
	{"ER_EXPECTED_DOUBLE_QUOTE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_sv, ER_EXPECTED_DOUBLE_QUOTE)},
	{"ER_EXPECTED_SINGLE_QUOTE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_sv, ER_EXPECTED_SINGLE_QUOTE)},
	{"ER_EMPTY_EXPRESSION", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_sv, ER_EMPTY_EXPRESSION)},
	{"ER_EXPECTED_BUT_FOUND", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_sv, ER_EXPECTED_BUT_FOUND)},
	{"ER_INCORRECT_PROGRAMMER_ASSERTION", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_sv, ER_INCORRECT_PROGRAMMER_ASSERTION)},
	{"ER_BOOLEAN_ARG_NO_LONGER_OPTIONAL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_sv, ER_BOOLEAN_ARG_NO_LONGER_OPTIONAL)},
	{"ER_FOUND_COMMA_BUT_NO_PRECEDING_ARG", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_sv, ER_FOUND_COMMA_BUT_NO_PRECEDING_ARG)},
	{"ER_FOUND_COMMA_BUT_NO_FOLLOWING_ARG", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_sv, ER_FOUND_COMMA_BUT_NO_FOLLOWING_ARG)},
	{"ER_PREDICATE_ILLEGAL_SYNTAX", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_sv, ER_PREDICATE_ILLEGAL_SYNTAX)},
	{"ER_ILLEGAL_AXIS_NAME", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_sv, ER_ILLEGAL_AXIS_NAME)},
	{"ER_UNKNOWN_NODETYPE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_sv, ER_UNKNOWN_NODETYPE)},
	{"ER_PATTERN_LITERAL_NEEDS_BE_QUOTED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_sv, ER_PATTERN_LITERAL_NEEDS_BE_QUOTED)},
	{"ER_COULDNOT_BE_FORMATTED_TO_NUMBER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_sv, ER_COULDNOT_BE_FORMATTED_TO_NUMBER)},
	{"ER_COULDNOT_CREATE_XMLPROCESSORLIAISON", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_sv, ER_COULDNOT_CREATE_XMLPROCESSORLIAISON)},
	{"ER_DIDNOT_FIND_XPATH_SELECT_EXP", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_sv, ER_DIDNOT_FIND_XPATH_SELECT_EXP)},
	{"ER_COULDNOT_FIND_ENDOP_AFTER_OPLOCATIONPATH", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_sv, ER_COULDNOT_FIND_ENDOP_AFTER_OPLOCATIONPATH)},
	{"ER_ERROR_OCCURED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_sv, ER_ERROR_OCCURED)},
	{"ER_ILLEGAL_VARIABLE_REFERENCE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_sv, ER_ILLEGAL_VARIABLE_REFERENCE)},
	{"ER_AXES_NOT_ALLOWED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_sv, ER_AXES_NOT_ALLOWED)},
	{"ER_KEY_HAS_TOO_MANY_ARGS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_sv, ER_KEY_HAS_TOO_MANY_ARGS)},
	{"ER_COUNT_TAKES_1_ARG", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_sv, ER_COUNT_TAKES_1_ARG)},
	{"ER_COULDNOT_FIND_FUNCTION", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_sv, ER_COULDNOT_FIND_FUNCTION)},
	{"ER_UNSUPPORTED_ENCODING", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_sv, ER_UNSUPPORTED_ENCODING)},
	{"ER_PROBLEM_IN_DTM_NEXTSIBLING", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_sv, ER_PROBLEM_IN_DTM_NEXTSIBLING)},
	{"ER_CANNOT_WRITE_TO_EMPTYNODELISTIMPL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_sv, ER_CANNOT_WRITE_TO_EMPTYNODELISTIMPL)},
	{"ER_SETDOMFACTORY_NOT_SUPPORTED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_sv, ER_SETDOMFACTORY_NOT_SUPPORTED)},
	{"ER_PREFIX_MUST_RESOLVE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_sv, ER_PREFIX_MUST_RESOLVE)},
	{"ER_PARSE_NOT_SUPPORTED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_sv, ER_PARSE_NOT_SUPPORTED)},
	{"ER_SAX_API_NOT_HANDLED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_sv, ER_SAX_API_NOT_HANDLED)},
	{"ER_IGNORABLE_WHITESPACE_NOT_HANDLED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_sv, ER_IGNORABLE_WHITESPACE_NOT_HANDLED)},
	{"ER_DTM_CANNOT_HANDLE_NODES", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_sv, ER_DTM_CANNOT_HANDLE_NODES)},
	{"ER_XERCES_CANNOT_HANDLE_NODES", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_sv, ER_XERCES_CANNOT_HANDLE_NODES)},
	{"ER_XERCES_PARSE_ERROR_DETAILS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_sv, ER_XERCES_PARSE_ERROR_DETAILS)},
	{"ER_XERCES_PARSE_ERROR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_sv, ER_XERCES_PARSE_ERROR)},
	{"ER_INVALID_UTF16_SURROGATE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_sv, ER_INVALID_UTF16_SURROGATE)},
	{"ER_OIERROR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_sv, ER_OIERROR)},
	{"ER_CANNOT_CREATE_URL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_sv, ER_CANNOT_CREATE_URL)},
	{"ER_XPATH_READOBJECT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_sv, ER_XPATH_READOBJECT)},
	{"ER_FUNCTION_TOKEN_NOT_FOUND", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_sv, ER_FUNCTION_TOKEN_NOT_FOUND)},
	{"ER_CANNOT_DEAL_XPATH_TYPE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_sv, ER_CANNOT_DEAL_XPATH_TYPE)},
	{"ER_NODESET_NOT_MUTABLE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_sv, ER_NODESET_NOT_MUTABLE)},
	{"ER_NODESETDTM_NOT_MUTABLE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_sv, ER_NODESETDTM_NOT_MUTABLE)},
	{"ER_VAR_NOT_RESOLVABLE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_sv, ER_VAR_NOT_RESOLVABLE)},
	{"ER_NULL_ERROR_HANDLER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_sv, ER_NULL_ERROR_HANDLER)},
	{"ER_PROG_ASSERT_UNKNOWN_OPCODE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_sv, ER_PROG_ASSERT_UNKNOWN_OPCODE)},
	{"ER_ZERO_OR_ONE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_sv, ER_ZERO_OR_ONE)},
	{"ER_RTF_NOT_SUPPORTED_XRTREEFRAGSELECTWRAPPER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_sv, ER_RTF_NOT_SUPPORTED_XRTREEFRAGSELECTWRAPPER)},
	{"ER_ASNODEITERATOR_NOT_SUPPORTED_XRTREEFRAGSELECTWRAPPER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_sv, ER_ASNODEITERATOR_NOT_SUPPORTED_XRTREEFRAGSELECTWRAPPER)},
	{"ER_FSB_NOT_SUPPORTED_XSTRINGFORCHARS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_sv, ER_FSB_NOT_SUPPORTED_XSTRINGFORCHARS)},
	{"ER_COULD_NOT_FIND_VAR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_sv, ER_COULD_NOT_FIND_VAR)},
	{"ER_XSTRINGFORCHARS_CANNOT_TAKE_STRING", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_sv, ER_XSTRINGFORCHARS_CANNOT_TAKE_STRING)},
	{"ER_FASTSTRINGBUFFER_CANNOT_BE_NULL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_sv, ER_FASTSTRINGBUFFER_CANNOT_BE_NULL)},
	{"ER_TWO_OR_THREE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_sv, ER_TWO_OR_THREE)},
	{"ER_VARIABLE_ACCESSED_BEFORE_BIND", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_sv, ER_VARIABLE_ACCESSED_BEFORE_BIND)},
	{"ER_FSB_CANNOT_TAKE_STRING", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_sv, ER_FSB_CANNOT_TAKE_STRING)},
	{"ER_SETTING_WALKER_ROOT_TO_NULL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_sv, ER_SETTING_WALKER_ROOT_TO_NULL)},
	{"ER_NODESETDTM_CANNOT_ITERATE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_sv, ER_NODESETDTM_CANNOT_ITERATE)},
	{"ER_NODESET_CANNOT_ITERATE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_sv, ER_NODESET_CANNOT_ITERATE)},
	{"ER_NODESETDTM_CANNOT_INDEX", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_sv, ER_NODESETDTM_CANNOT_INDEX)},
	{"ER_NODESET_CANNOT_INDEX", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_sv, ER_NODESET_CANNOT_INDEX)},
	{"ER_CANNOT_CALL_SETSHOULDCACHENODE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_sv, ER_CANNOT_CALL_SETSHOULDCACHENODE)},
	{"ER_ONLY_ALLOWS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_sv, ER_ONLY_ALLOWS)},
	{"ER_UNKNOWN_STEP", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_sv, ER_UNKNOWN_STEP)},
	{"ER_EXPECTED_REL_LOC_PATH", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_sv, ER_EXPECTED_REL_LOC_PATH)},
	{"ER_EXPECTED_LOC_PATH", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_sv, ER_EXPECTED_LOC_PATH)},
	{"ER_EXPECTED_LOC_PATH_AT_END_EXPR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_sv, ER_EXPECTED_LOC_PATH_AT_END_EXPR)},
	{"ER_EXPECTED_LOC_STEP", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_sv, ER_EXPECTED_LOC_STEP)},
	{"ER_EXPECTED_NODE_TEST", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_sv, ER_EXPECTED_NODE_TEST)},
	{"ER_EXPECTED_STEP_PATTERN", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_sv, ER_EXPECTED_STEP_PATTERN)},
	{"ER_EXPECTED_REL_PATH_PATTERN", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_sv, ER_EXPECTED_REL_PATH_PATTERN)},
	{"ER_CANT_CONVERT_TO_BOOLEAN", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_sv, ER_CANT_CONVERT_TO_BOOLEAN)},
	{"ER_CANT_CONVERT_TO_SINGLENODE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_sv, ER_CANT_CONVERT_TO_SINGLENODE)},
	{"ER_CANT_GET_SNAPSHOT_LENGTH", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_sv, ER_CANT_GET_SNAPSHOT_LENGTH)},
	{"ER_NON_ITERATOR_TYPE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_sv, ER_NON_ITERATOR_TYPE)},
	{"ER_DOC_MUTATED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_sv, ER_DOC_MUTATED)},
	{"ER_INVALID_XPATH_TYPE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_sv, ER_INVALID_XPATH_TYPE)},
	{"ER_EMPTY_XPATH_RESULT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_sv, ER_EMPTY_XPATH_RESULT)},
	{"ER_INCOMPATIBLE_TYPES", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_sv, ER_INCOMPATIBLE_TYPES)},
	{"ER_NULL_RESOLVER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_sv, ER_NULL_RESOLVER)},
	{"ER_CANT_CONVERT_TO_STRING", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_sv, ER_CANT_CONVERT_TO_STRING)},
	{"ER_NON_SNAPSHOT_TYPE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_sv, ER_NON_SNAPSHOT_TYPE)},
	{"ER_WRONG_DOCUMENT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_sv, ER_WRONG_DOCUMENT)},
	{"ER_WRONG_NODETYPE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_sv, ER_WRONG_NODETYPE)},
	{"ER_XPATH_ERROR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_sv, ER_XPATH_ERROR)},
	{"ER_EXTENSION_FUNCTION_CANNOT_BE_INVOKED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_sv, ER_EXTENSION_FUNCTION_CANNOT_BE_INVOKED)},
	{"ER_RESOLVE_VARIABLE_RETURNS_NULL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_sv, ER_RESOLVE_VARIABLE_RETURNS_NULL)},
	{"ER_UNSUPPORTED_RETURN_TYPE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_sv, ER_UNSUPPORTED_RETURN_TYPE)},
	{"ER_SOURCE_RETURN_TYPE_CANNOT_BE_NULL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_sv, ER_SOURCE_RETURN_TYPE_CANNOT_BE_NULL)},
	{"ER_ARG_CANNOT_BE_NULL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_sv, ER_ARG_CANNOT_BE_NULL)},
	{"ER_OBJECT_MODEL_NULL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_sv, ER_OBJECT_MODEL_NULL)},
	{"ER_OBJECT_MODEL_EMPTY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_sv, ER_OBJECT_MODEL_EMPTY)},
	{"ER_FEATURE_NAME_NULL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_sv, ER_FEATURE_NAME_NULL)},
	{"ER_FEATURE_UNKNOWN", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_sv, ER_FEATURE_UNKNOWN)},
	{"ER_GETTING_NULL_FEATURE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_sv, ER_GETTING_NULL_FEATURE)},
	{"ER_GETTING_UNKNOWN_FEATURE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_sv, ER_GETTING_UNKNOWN_FEATURE)},
	{"ER_SECUREPROCESSING_FEATURE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_sv, ER_SECUREPROCESSING_FEATURE)},
	{"ER_NULL_XPATH_FUNCTION_RESOLVER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_sv, ER_NULL_XPATH_FUNCTION_RESOLVER)},
	{"ER_NULL_XPATH_VARIABLE_RESOLVER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_sv, ER_NULL_XPATH_VARIABLE_RESOLVER)},
	{"WG_LOCALE_NAME_NOT_HANDLED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_sv, WG_LOCALE_NAME_NOT_HANDLED)},
	{"WG_PROPERTY_NOT_SUPPORTED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_sv, WG_PROPERTY_NOT_SUPPORTED)},
	{"WG_DONT_DO_ANYTHING_WITH_NS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_sv, WG_DONT_DO_ANYTHING_WITH_NS)},
	{"WG_SECURITY_EXCEPTION", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_sv, WG_SECURITY_EXCEPTION)},
	{"WG_QUO_NO_LONGER_DEFINED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_sv, WG_QUO_NO_LONGER_DEFINED)},
	{"WG_NEED_DERIVED_OBJECT_TO_IMPLEMENT_NODETEST", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_sv, WG_NEED_DERIVED_OBJECT_TO_IMPLEMENT_NODETEST)},
	{"WG_FUNCTION_TOKEN_NOT_FOUND", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_sv, WG_FUNCTION_TOKEN_NOT_FOUND)},
	{"WG_COULDNOT_FIND_FUNCTION", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_sv, WG_COULDNOT_FIND_FUNCTION)},
	{"WG_CANNOT_MAKE_URL_FROM", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_sv, WG_CANNOT_MAKE_URL_FROM)},
	{"WG_EXPAND_ENTITIES_NOT_SUPPORTED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_sv, WG_EXPAND_ENTITIES_NOT_SUPPORTED)},
	{"WG_ILLEGAL_VARIABLE_REFERENCE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_sv, WG_ILLEGAL_VARIABLE_REFERENCE)},
	{"WG_UNSUPPORTED_ENCODING", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_sv, WG_UNSUPPORTED_ENCODING)},
	{"ER_DETACH_NOT_SUPPORTED_XRTREEFRAGSELECTWRAPPER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_sv, ER_DETACH_NOT_SUPPORTED_XRTREEFRAGSELECTWRAPPER)},
	{"ER_NUM_NOT_SUPPORTED_XRTREEFRAGSELECTWRAPPER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_sv, ER_NUM_NOT_SUPPORTED_XRTREEFRAGSELECTWRAPPER)},
	{"ER_XSTR_NOT_SUPPORTED_XRTREEFRAGSELECTWRAPPER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_sv, ER_XSTR_NOT_SUPPORTED_XRTREEFRAGSELECTWRAPPER)},
	{"ER_STR_NOT_SUPPORTED_XRTREEFRAGSELECTWRAPPER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_sv, ER_STR_NOT_SUPPORTED_XRTREEFRAGSELECTWRAPPER)},
	{"_contents", "[[Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XPATHErrorResources_sv, _contents)},
	{"BAD_CODE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_sv, BAD_CODE)},
	{"FORMAT_FAILED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_sv, FORMAT_FAILED)},
	{"ERROR_RESOURCES", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_sv, ERROR_RESOURCES)},
	{"ERROR_STRING", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_sv, ERROR_STRING)},
	{"ERROR_HEADER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_sv, ERROR_HEADER)},
	{"WARNING_HEADER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_sv, WARNING_HEADER)},
	{"XSL_HEADER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_sv, XSL_HEADER)},
	{"XML_HEADER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_sv, XML_HEADER)},
	{"QUERY_HEADER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPATHErrorResources_sv, QUERY_HEADER)},
	{}
};

$MethodInfo _XPATHErrorResources_sv_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(XPATHErrorResources_sv, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(XPATHErrorResources_sv, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _XPATHErrorResources_sv_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xpath.internal.res.XPATHErrorResources_sv",
	"java.util.ListResourceBundle",
	nullptr,
	_XPATHErrorResources_sv_FieldInfo_,
	_XPATHErrorResources_sv_MethodInfo_
};

$Object* allocate$XPATHErrorResources_sv($Class* clazz) {
	return $of($alloc(XPATHErrorResources_sv));
}

$String* XPATHErrorResources_sv::ERROR0000 = nullptr;
$String* XPATHErrorResources_sv::ER_CURRENT_NOT_ALLOWED_IN_MATCH = nullptr;
$String* XPATHErrorResources_sv::ER_CURRENT_TAKES_NO_ARGS = nullptr;
$String* XPATHErrorResources_sv::ER_DOCUMENT_REPLACED = nullptr;
$String* XPATHErrorResources_sv::ER_CONTEXT_CAN_NOT_BE_NULL = nullptr;
$String* XPATHErrorResources_sv::ER_CONTEXT_HAS_NO_OWNERDOC = nullptr;
$String* XPATHErrorResources_sv::ER_LOCALNAME_HAS_TOO_MANY_ARGS = nullptr;
$String* XPATHErrorResources_sv::ER_NAMESPACEURI_HAS_TOO_MANY_ARGS = nullptr;
$String* XPATHErrorResources_sv::ER_NORMALIZESPACE_HAS_TOO_MANY_ARGS = nullptr;
$String* XPATHErrorResources_sv::ER_NUMBER_HAS_TOO_MANY_ARGS = nullptr;
$String* XPATHErrorResources_sv::ER_NAME_HAS_TOO_MANY_ARGS = nullptr;
$String* XPATHErrorResources_sv::ER_STRING_HAS_TOO_MANY_ARGS = nullptr;
$String* XPATHErrorResources_sv::ER_STRINGLENGTH_HAS_TOO_MANY_ARGS = nullptr;
$String* XPATHErrorResources_sv::ER_TRANSLATE_TAKES_3_ARGS = nullptr;
$String* XPATHErrorResources_sv::ER_UNPARSEDENTITYURI_TAKES_1_ARG = nullptr;
$String* XPATHErrorResources_sv::ER_NAMESPACEAXIS_NOT_IMPLEMENTED = nullptr;
$String* XPATHErrorResources_sv::ER_UNKNOWN_AXIS = nullptr;
$String* XPATHErrorResources_sv::ER_UNKNOWN_MATCH_OPERATION = nullptr;
$String* XPATHErrorResources_sv::ER_INCORRECT_ARG_LENGTH = nullptr;
$String* XPATHErrorResources_sv::ER_CANT_CONVERT_TO_NUMBER = nullptr;
$String* XPATHErrorResources_sv::ER_CANT_CONVERT_XPATHRESULTTYPE_TO_NUMBER = nullptr;
$String* XPATHErrorResources_sv::ER_CANT_CONVERT_TO_NODELIST = nullptr;
$String* XPATHErrorResources_sv::ER_CANT_CONVERT_TO_MUTABLENODELIST = nullptr;
$String* XPATHErrorResources_sv::ER_CANT_CONVERT_TO_TYPE = nullptr;
$String* XPATHErrorResources_sv::ER_EXPECTED_MATCH_PATTERN = nullptr;
$String* XPATHErrorResources_sv::ER_COULDNOT_GET_VAR_NAMED = nullptr;
$String* XPATHErrorResources_sv::ER_UNKNOWN_OPCODE = nullptr;
$String* XPATHErrorResources_sv::ER_EXTRA_ILLEGAL_TOKENS = nullptr;
$String* XPATHErrorResources_sv::ER_EXPECTED_DOUBLE_QUOTE = nullptr;
$String* XPATHErrorResources_sv::ER_EXPECTED_SINGLE_QUOTE = nullptr;
$String* XPATHErrorResources_sv::ER_EMPTY_EXPRESSION = nullptr;
$String* XPATHErrorResources_sv::ER_EXPECTED_BUT_FOUND = nullptr;
$String* XPATHErrorResources_sv::ER_INCORRECT_PROGRAMMER_ASSERTION = nullptr;
$String* XPATHErrorResources_sv::ER_BOOLEAN_ARG_NO_LONGER_OPTIONAL = nullptr;
$String* XPATHErrorResources_sv::ER_FOUND_COMMA_BUT_NO_PRECEDING_ARG = nullptr;
$String* XPATHErrorResources_sv::ER_FOUND_COMMA_BUT_NO_FOLLOWING_ARG = nullptr;
$String* XPATHErrorResources_sv::ER_PREDICATE_ILLEGAL_SYNTAX = nullptr;
$String* XPATHErrorResources_sv::ER_ILLEGAL_AXIS_NAME = nullptr;
$String* XPATHErrorResources_sv::ER_UNKNOWN_NODETYPE = nullptr;
$String* XPATHErrorResources_sv::ER_PATTERN_LITERAL_NEEDS_BE_QUOTED = nullptr;
$String* XPATHErrorResources_sv::ER_COULDNOT_BE_FORMATTED_TO_NUMBER = nullptr;
$String* XPATHErrorResources_sv::ER_COULDNOT_CREATE_XMLPROCESSORLIAISON = nullptr;
$String* XPATHErrorResources_sv::ER_DIDNOT_FIND_XPATH_SELECT_EXP = nullptr;
$String* XPATHErrorResources_sv::ER_COULDNOT_FIND_ENDOP_AFTER_OPLOCATIONPATH = nullptr;
$String* XPATHErrorResources_sv::ER_ERROR_OCCURED = nullptr;
$String* XPATHErrorResources_sv::ER_ILLEGAL_VARIABLE_REFERENCE = nullptr;
$String* XPATHErrorResources_sv::ER_AXES_NOT_ALLOWED = nullptr;
$String* XPATHErrorResources_sv::ER_KEY_HAS_TOO_MANY_ARGS = nullptr;
$String* XPATHErrorResources_sv::ER_COUNT_TAKES_1_ARG = nullptr;
$String* XPATHErrorResources_sv::ER_COULDNOT_FIND_FUNCTION = nullptr;
$String* XPATHErrorResources_sv::ER_UNSUPPORTED_ENCODING = nullptr;
$String* XPATHErrorResources_sv::ER_PROBLEM_IN_DTM_NEXTSIBLING = nullptr;
$String* XPATHErrorResources_sv::ER_CANNOT_WRITE_TO_EMPTYNODELISTIMPL = nullptr;
$String* XPATHErrorResources_sv::ER_SETDOMFACTORY_NOT_SUPPORTED = nullptr;
$String* XPATHErrorResources_sv::ER_PREFIX_MUST_RESOLVE = nullptr;
$String* XPATHErrorResources_sv::ER_PARSE_NOT_SUPPORTED = nullptr;
$String* XPATHErrorResources_sv::ER_SAX_API_NOT_HANDLED = nullptr;
$String* XPATHErrorResources_sv::ER_IGNORABLE_WHITESPACE_NOT_HANDLED = nullptr;
$String* XPATHErrorResources_sv::ER_DTM_CANNOT_HANDLE_NODES = nullptr;
$String* XPATHErrorResources_sv::ER_XERCES_CANNOT_HANDLE_NODES = nullptr;
$String* XPATHErrorResources_sv::ER_XERCES_PARSE_ERROR_DETAILS = nullptr;
$String* XPATHErrorResources_sv::ER_XERCES_PARSE_ERROR = nullptr;
$String* XPATHErrorResources_sv::ER_INVALID_UTF16_SURROGATE = nullptr;
$String* XPATHErrorResources_sv::ER_OIERROR = nullptr;
$String* XPATHErrorResources_sv::ER_CANNOT_CREATE_URL = nullptr;
$String* XPATHErrorResources_sv::ER_XPATH_READOBJECT = nullptr;
$String* XPATHErrorResources_sv::ER_FUNCTION_TOKEN_NOT_FOUND = nullptr;
$String* XPATHErrorResources_sv::ER_CANNOT_DEAL_XPATH_TYPE = nullptr;
$String* XPATHErrorResources_sv::ER_NODESET_NOT_MUTABLE = nullptr;
$String* XPATHErrorResources_sv::ER_NODESETDTM_NOT_MUTABLE = nullptr;
$String* XPATHErrorResources_sv::ER_VAR_NOT_RESOLVABLE = nullptr;
$String* XPATHErrorResources_sv::ER_NULL_ERROR_HANDLER = nullptr;
$String* XPATHErrorResources_sv::ER_PROG_ASSERT_UNKNOWN_OPCODE = nullptr;
$String* XPATHErrorResources_sv::ER_ZERO_OR_ONE = nullptr;
$String* XPATHErrorResources_sv::ER_RTF_NOT_SUPPORTED_XRTREEFRAGSELECTWRAPPER = nullptr;
$String* XPATHErrorResources_sv::ER_ASNODEITERATOR_NOT_SUPPORTED_XRTREEFRAGSELECTWRAPPER = nullptr;
$String* XPATHErrorResources_sv::ER_FSB_NOT_SUPPORTED_XSTRINGFORCHARS = nullptr;
$String* XPATHErrorResources_sv::ER_COULD_NOT_FIND_VAR = nullptr;
$String* XPATHErrorResources_sv::ER_XSTRINGFORCHARS_CANNOT_TAKE_STRING = nullptr;
$String* XPATHErrorResources_sv::ER_FASTSTRINGBUFFER_CANNOT_BE_NULL = nullptr;
$String* XPATHErrorResources_sv::ER_TWO_OR_THREE = nullptr;
$String* XPATHErrorResources_sv::ER_VARIABLE_ACCESSED_BEFORE_BIND = nullptr;
$String* XPATHErrorResources_sv::ER_FSB_CANNOT_TAKE_STRING = nullptr;
$String* XPATHErrorResources_sv::ER_SETTING_WALKER_ROOT_TO_NULL = nullptr;
$String* XPATHErrorResources_sv::ER_NODESETDTM_CANNOT_ITERATE = nullptr;
$String* XPATHErrorResources_sv::ER_NODESET_CANNOT_ITERATE = nullptr;
$String* XPATHErrorResources_sv::ER_NODESETDTM_CANNOT_INDEX = nullptr;
$String* XPATHErrorResources_sv::ER_NODESET_CANNOT_INDEX = nullptr;
$String* XPATHErrorResources_sv::ER_CANNOT_CALL_SETSHOULDCACHENODE = nullptr;
$String* XPATHErrorResources_sv::ER_ONLY_ALLOWS = nullptr;
$String* XPATHErrorResources_sv::ER_UNKNOWN_STEP = nullptr;
$String* XPATHErrorResources_sv::ER_EXPECTED_REL_LOC_PATH = nullptr;
$String* XPATHErrorResources_sv::ER_EXPECTED_LOC_PATH = nullptr;
$String* XPATHErrorResources_sv::ER_EXPECTED_LOC_PATH_AT_END_EXPR = nullptr;
$String* XPATHErrorResources_sv::ER_EXPECTED_LOC_STEP = nullptr;
$String* XPATHErrorResources_sv::ER_EXPECTED_NODE_TEST = nullptr;
$String* XPATHErrorResources_sv::ER_EXPECTED_STEP_PATTERN = nullptr;
$String* XPATHErrorResources_sv::ER_EXPECTED_REL_PATH_PATTERN = nullptr;
$String* XPATHErrorResources_sv::ER_CANT_CONVERT_TO_BOOLEAN = nullptr;
$String* XPATHErrorResources_sv::ER_CANT_CONVERT_TO_SINGLENODE = nullptr;
$String* XPATHErrorResources_sv::ER_CANT_GET_SNAPSHOT_LENGTH = nullptr;
$String* XPATHErrorResources_sv::ER_NON_ITERATOR_TYPE = nullptr;
$String* XPATHErrorResources_sv::ER_DOC_MUTATED = nullptr;
$String* XPATHErrorResources_sv::ER_INVALID_XPATH_TYPE = nullptr;
$String* XPATHErrorResources_sv::ER_EMPTY_XPATH_RESULT = nullptr;
$String* XPATHErrorResources_sv::ER_INCOMPATIBLE_TYPES = nullptr;
$String* XPATHErrorResources_sv::ER_NULL_RESOLVER = nullptr;
$String* XPATHErrorResources_sv::ER_CANT_CONVERT_TO_STRING = nullptr;
$String* XPATHErrorResources_sv::ER_NON_SNAPSHOT_TYPE = nullptr;
$String* XPATHErrorResources_sv::ER_WRONG_DOCUMENT = nullptr;
$String* XPATHErrorResources_sv::ER_WRONG_NODETYPE = nullptr;
$String* XPATHErrorResources_sv::ER_XPATH_ERROR = nullptr;
$String* XPATHErrorResources_sv::ER_EXTENSION_FUNCTION_CANNOT_BE_INVOKED = nullptr;
$String* XPATHErrorResources_sv::ER_RESOLVE_VARIABLE_RETURNS_NULL = nullptr;
$String* XPATHErrorResources_sv::ER_UNSUPPORTED_RETURN_TYPE = nullptr;
$String* XPATHErrorResources_sv::ER_SOURCE_RETURN_TYPE_CANNOT_BE_NULL = nullptr;
$String* XPATHErrorResources_sv::ER_ARG_CANNOT_BE_NULL = nullptr;
$String* XPATHErrorResources_sv::ER_OBJECT_MODEL_NULL = nullptr;
$String* XPATHErrorResources_sv::ER_OBJECT_MODEL_EMPTY = nullptr;
$String* XPATHErrorResources_sv::ER_FEATURE_NAME_NULL = nullptr;
$String* XPATHErrorResources_sv::ER_FEATURE_UNKNOWN = nullptr;
$String* XPATHErrorResources_sv::ER_GETTING_NULL_FEATURE = nullptr;
$String* XPATHErrorResources_sv::ER_GETTING_UNKNOWN_FEATURE = nullptr;
$String* XPATHErrorResources_sv::ER_SECUREPROCESSING_FEATURE = nullptr;
$String* XPATHErrorResources_sv::ER_NULL_XPATH_FUNCTION_RESOLVER = nullptr;
$String* XPATHErrorResources_sv::ER_NULL_XPATH_VARIABLE_RESOLVER = nullptr;
$String* XPATHErrorResources_sv::WG_LOCALE_NAME_NOT_HANDLED = nullptr;
$String* XPATHErrorResources_sv::WG_PROPERTY_NOT_SUPPORTED = nullptr;
$String* XPATHErrorResources_sv::WG_DONT_DO_ANYTHING_WITH_NS = nullptr;
$String* XPATHErrorResources_sv::WG_SECURITY_EXCEPTION = nullptr;
$String* XPATHErrorResources_sv::WG_QUO_NO_LONGER_DEFINED = nullptr;
$String* XPATHErrorResources_sv::WG_NEED_DERIVED_OBJECT_TO_IMPLEMENT_NODETEST = nullptr;
$String* XPATHErrorResources_sv::WG_FUNCTION_TOKEN_NOT_FOUND = nullptr;
$String* XPATHErrorResources_sv::WG_COULDNOT_FIND_FUNCTION = nullptr;
$String* XPATHErrorResources_sv::WG_CANNOT_MAKE_URL_FROM = nullptr;
$String* XPATHErrorResources_sv::WG_EXPAND_ENTITIES_NOT_SUPPORTED = nullptr;
$String* XPATHErrorResources_sv::WG_ILLEGAL_VARIABLE_REFERENCE = nullptr;
$String* XPATHErrorResources_sv::WG_UNSUPPORTED_ENCODING = nullptr;
$String* XPATHErrorResources_sv::ER_DETACH_NOT_SUPPORTED_XRTREEFRAGSELECTWRAPPER = nullptr;
$String* XPATHErrorResources_sv::ER_NUM_NOT_SUPPORTED_XRTREEFRAGSELECTWRAPPER = nullptr;
$String* XPATHErrorResources_sv::ER_XSTR_NOT_SUPPORTED_XRTREEFRAGSELECTWRAPPER = nullptr;
$String* XPATHErrorResources_sv::ER_STR_NOT_SUPPORTED_XRTREEFRAGSELECTWRAPPER = nullptr;
$ObjectArray2* XPATHErrorResources_sv::_contents = nullptr;
$String* XPATHErrorResources_sv::BAD_CODE = nullptr;
$String* XPATHErrorResources_sv::FORMAT_FAILED = nullptr;
$String* XPATHErrorResources_sv::ERROR_RESOURCES = nullptr;
$String* XPATHErrorResources_sv::ERROR_STRING = nullptr;
$String* XPATHErrorResources_sv::ERROR_HEADER = nullptr;
$String* XPATHErrorResources_sv::WARNING_HEADER = nullptr;
$String* XPATHErrorResources_sv::XSL_HEADER = nullptr;
$String* XPATHErrorResources_sv::XML_HEADER = nullptr;
$String* XPATHErrorResources_sv::QUERY_HEADER = nullptr;

void XPATHErrorResources_sv::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* XPATHErrorResources_sv::getContents() {
	return XPATHErrorResources_sv::_contents;
}

void clinit$XPATHErrorResources_sv($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(XPATHErrorResources_sv::ERROR0000, "ERROR0000"_s);
	$assignStatic(XPATHErrorResources_sv::ER_CURRENT_NOT_ALLOWED_IN_MATCH, "ER_CURRENT_NOT_ALLOWED_IN_MATCH"_s);
	$assignStatic(XPATHErrorResources_sv::ER_CURRENT_TAKES_NO_ARGS, "ER_CURRENT_TAKES_NO_ARGS"_s);
	$assignStatic(XPATHErrorResources_sv::ER_DOCUMENT_REPLACED, "ER_DOCUMENT_REPLACED"_s);
	$assignStatic(XPATHErrorResources_sv::ER_CONTEXT_CAN_NOT_BE_NULL, "ER_CONTEXT_CAN_NOT_BE_NULL"_s);
	$assignStatic(XPATHErrorResources_sv::ER_CONTEXT_HAS_NO_OWNERDOC, "ER_CONTEXT_HAS_NO_OWNERDOC"_s);
	$assignStatic(XPATHErrorResources_sv::ER_LOCALNAME_HAS_TOO_MANY_ARGS, "ER_LOCALNAME_HAS_TOO_MANY_ARGS"_s);
	$assignStatic(XPATHErrorResources_sv::ER_NAMESPACEURI_HAS_TOO_MANY_ARGS, "ER_NAMESPACEURI_HAS_TOO_MANY_ARGS"_s);
	$assignStatic(XPATHErrorResources_sv::ER_NORMALIZESPACE_HAS_TOO_MANY_ARGS, "ER_NORMALIZESPACE_HAS_TOO_MANY_ARGS"_s);
	$assignStatic(XPATHErrorResources_sv::ER_NUMBER_HAS_TOO_MANY_ARGS, "ER_NUMBER_HAS_TOO_MANY_ARGS"_s);
	$assignStatic(XPATHErrorResources_sv::ER_NAME_HAS_TOO_MANY_ARGS, "ER_NAME_HAS_TOO_MANY_ARGS"_s);
	$assignStatic(XPATHErrorResources_sv::ER_STRING_HAS_TOO_MANY_ARGS, "ER_STRING_HAS_TOO_MANY_ARGS"_s);
	$assignStatic(XPATHErrorResources_sv::ER_STRINGLENGTH_HAS_TOO_MANY_ARGS, "ER_STRINGLENGTH_HAS_TOO_MANY_ARGS"_s);
	$assignStatic(XPATHErrorResources_sv::ER_TRANSLATE_TAKES_3_ARGS, "ER_TRANSLATE_TAKES_3_ARGS"_s);
	$assignStatic(XPATHErrorResources_sv::ER_UNPARSEDENTITYURI_TAKES_1_ARG, "ER_UNPARSEDENTITYURI_TAKES_1_ARG"_s);
	$assignStatic(XPATHErrorResources_sv::ER_NAMESPACEAXIS_NOT_IMPLEMENTED, "ER_NAMESPACEAXIS_NOT_IMPLEMENTED"_s);
	$assignStatic(XPATHErrorResources_sv::ER_UNKNOWN_AXIS, "ER_UNKNOWN_AXIS"_s);
	$assignStatic(XPATHErrorResources_sv::ER_UNKNOWN_MATCH_OPERATION, "ER_UNKNOWN_MATCH_OPERATION"_s);
	$assignStatic(XPATHErrorResources_sv::ER_INCORRECT_ARG_LENGTH, "ER_INCORRECT_ARG_LENGTH"_s);
	$assignStatic(XPATHErrorResources_sv::ER_CANT_CONVERT_TO_NUMBER, "ER_CANT_CONVERT_TO_NUMBER"_s);
	$assignStatic(XPATHErrorResources_sv::ER_CANT_CONVERT_XPATHRESULTTYPE_TO_NUMBER, "ER_CANT_CONVERT_XPATHRESULTTYPE_TO_NUMBER"_s);
	$assignStatic(XPATHErrorResources_sv::ER_CANT_CONVERT_TO_NODELIST, "ER_CANT_CONVERT_TO_NODELIST"_s);
	$assignStatic(XPATHErrorResources_sv::ER_CANT_CONVERT_TO_MUTABLENODELIST, "ER_CANT_CONVERT_TO_MUTABLENODELIST"_s);
	$assignStatic(XPATHErrorResources_sv::ER_CANT_CONVERT_TO_TYPE, "ER_CANT_CONVERT_TO_TYPE"_s);
	$assignStatic(XPATHErrorResources_sv::ER_EXPECTED_MATCH_PATTERN, "ER_EXPECTED_MATCH_PATTERN"_s);
	$assignStatic(XPATHErrorResources_sv::ER_COULDNOT_GET_VAR_NAMED, "ER_COULDNOT_GET_VAR_NAMED"_s);
	$assignStatic(XPATHErrorResources_sv::ER_UNKNOWN_OPCODE, "ER_UNKNOWN_OPCODE"_s);
	$assignStatic(XPATHErrorResources_sv::ER_EXTRA_ILLEGAL_TOKENS, "ER_EXTRA_ILLEGAL_TOKENS"_s);
	$assignStatic(XPATHErrorResources_sv::ER_EXPECTED_DOUBLE_QUOTE, "ER_EXPECTED_DOUBLE_QUOTE"_s);
	$assignStatic(XPATHErrorResources_sv::ER_EXPECTED_SINGLE_QUOTE, "ER_EXPECTED_SINGLE_QUOTE"_s);
	$assignStatic(XPATHErrorResources_sv::ER_EMPTY_EXPRESSION, "ER_EMPTY_EXPRESSION"_s);
	$assignStatic(XPATHErrorResources_sv::ER_EXPECTED_BUT_FOUND, "ER_EXPECTED_BUT_FOUND"_s);
	$assignStatic(XPATHErrorResources_sv::ER_INCORRECT_PROGRAMMER_ASSERTION, "ER_INCORRECT_PROGRAMMER_ASSERTION"_s);
	$assignStatic(XPATHErrorResources_sv::ER_BOOLEAN_ARG_NO_LONGER_OPTIONAL, "ER_BOOLEAN_ARG_NO_LONGER_OPTIONAL"_s);
	$assignStatic(XPATHErrorResources_sv::ER_FOUND_COMMA_BUT_NO_PRECEDING_ARG, "ER_FOUND_COMMA_BUT_NO_PRECEDING_ARG"_s);
	$assignStatic(XPATHErrorResources_sv::ER_FOUND_COMMA_BUT_NO_FOLLOWING_ARG, "ER_FOUND_COMMA_BUT_NO_FOLLOWING_ARG"_s);
	$assignStatic(XPATHErrorResources_sv::ER_PREDICATE_ILLEGAL_SYNTAX, "ER_PREDICATE_ILLEGAL_SYNTAX"_s);
	$assignStatic(XPATHErrorResources_sv::ER_ILLEGAL_AXIS_NAME, "ER_ILLEGAL_AXIS_NAME"_s);
	$assignStatic(XPATHErrorResources_sv::ER_UNKNOWN_NODETYPE, "ER_UNKNOWN_NODETYPE"_s);
	$assignStatic(XPATHErrorResources_sv::ER_PATTERN_LITERAL_NEEDS_BE_QUOTED, "ER_PATTERN_LITERAL_NEEDS_BE_QUOTED"_s);
	$assignStatic(XPATHErrorResources_sv::ER_COULDNOT_BE_FORMATTED_TO_NUMBER, "ER_COULDNOT_BE_FORMATTED_TO_NUMBER"_s);
	$assignStatic(XPATHErrorResources_sv::ER_COULDNOT_CREATE_XMLPROCESSORLIAISON, "ER_COULDNOT_CREATE_XMLPROCESSORLIAISON"_s);
	$assignStatic(XPATHErrorResources_sv::ER_DIDNOT_FIND_XPATH_SELECT_EXP, "ER_DIDNOT_FIND_XPATH_SELECT_EXP"_s);
	$assignStatic(XPATHErrorResources_sv::ER_COULDNOT_FIND_ENDOP_AFTER_OPLOCATIONPATH, "ER_COULDNOT_FIND_ENDOP_AFTER_OPLOCATIONPATH"_s);
	$assignStatic(XPATHErrorResources_sv::ER_ERROR_OCCURED, "ER_ERROR_OCCURED"_s);
	$assignStatic(XPATHErrorResources_sv::ER_ILLEGAL_VARIABLE_REFERENCE, "ER_ILLEGAL_VARIABLE_REFERENCE"_s);
	$assignStatic(XPATHErrorResources_sv::ER_AXES_NOT_ALLOWED, "ER_AXES_NOT_ALLOWED"_s);
	$assignStatic(XPATHErrorResources_sv::ER_KEY_HAS_TOO_MANY_ARGS, "ER_KEY_HAS_TOO_MANY_ARGS"_s);
	$assignStatic(XPATHErrorResources_sv::ER_COUNT_TAKES_1_ARG, "ER_COUNT_TAKES_1_ARG"_s);
	$assignStatic(XPATHErrorResources_sv::ER_COULDNOT_FIND_FUNCTION, "ER_COULDNOT_FIND_FUNCTION"_s);
	$assignStatic(XPATHErrorResources_sv::ER_UNSUPPORTED_ENCODING, "ER_UNSUPPORTED_ENCODING"_s);
	$assignStatic(XPATHErrorResources_sv::ER_PROBLEM_IN_DTM_NEXTSIBLING, "ER_PROBLEM_IN_DTM_NEXTSIBLING"_s);
	$assignStatic(XPATHErrorResources_sv::ER_CANNOT_WRITE_TO_EMPTYNODELISTIMPL, "ER_CANNOT_WRITE_TO_EMPTYNODELISTIMPL"_s);
	$assignStatic(XPATHErrorResources_sv::ER_SETDOMFACTORY_NOT_SUPPORTED, "ER_SETDOMFACTORY_NOT_SUPPORTED"_s);
	$assignStatic(XPATHErrorResources_sv::ER_PREFIX_MUST_RESOLVE, "ER_PREFIX_MUST_RESOLVE"_s);
	$assignStatic(XPATHErrorResources_sv::ER_PARSE_NOT_SUPPORTED, "ER_PARSE_NOT_SUPPORTED"_s);
	$assignStatic(XPATHErrorResources_sv::ER_SAX_API_NOT_HANDLED, "ER_SAX_API_NOT_HANDLED"_s);
	$assignStatic(XPATHErrorResources_sv::ER_IGNORABLE_WHITESPACE_NOT_HANDLED, "ER_IGNORABLE_WHITESPACE_NOT_HANDLED"_s);
	$assignStatic(XPATHErrorResources_sv::ER_DTM_CANNOT_HANDLE_NODES, "ER_DTM_CANNOT_HANDLE_NODES"_s);
	$assignStatic(XPATHErrorResources_sv::ER_XERCES_CANNOT_HANDLE_NODES, "ER_XERCES_CANNOT_HANDLE_NODES"_s);
	$assignStatic(XPATHErrorResources_sv::ER_XERCES_PARSE_ERROR_DETAILS, "ER_XERCES_PARSE_ERROR_DETAILS"_s);
	$assignStatic(XPATHErrorResources_sv::ER_XERCES_PARSE_ERROR, "ER_XERCES_PARSE_ERROR"_s);
	$assignStatic(XPATHErrorResources_sv::ER_INVALID_UTF16_SURROGATE, "ER_INVALID_UTF16_SURROGATE"_s);
	$assignStatic(XPATHErrorResources_sv::ER_OIERROR, "ER_OIERROR"_s);
	$assignStatic(XPATHErrorResources_sv::ER_CANNOT_CREATE_URL, "ER_CANNOT_CREATE_URL"_s);
	$assignStatic(XPATHErrorResources_sv::ER_XPATH_READOBJECT, "ER_XPATH_READOBJECT"_s);
	$assignStatic(XPATHErrorResources_sv::ER_FUNCTION_TOKEN_NOT_FOUND, "ER_FUNCTION_TOKEN_NOT_FOUND"_s);
	$assignStatic(XPATHErrorResources_sv::ER_CANNOT_DEAL_XPATH_TYPE, "ER_CANNOT_DEAL_XPATH_TYPE"_s);
	$assignStatic(XPATHErrorResources_sv::ER_NODESET_NOT_MUTABLE, "ER_NODESET_NOT_MUTABLE"_s);
	$assignStatic(XPATHErrorResources_sv::ER_NODESETDTM_NOT_MUTABLE, "ER_NODESETDTM_NOT_MUTABLE"_s);
	$assignStatic(XPATHErrorResources_sv::ER_VAR_NOT_RESOLVABLE, "ER_VAR_NOT_RESOLVABLE"_s);
	$assignStatic(XPATHErrorResources_sv::ER_NULL_ERROR_HANDLER, "ER_NULL_ERROR_HANDLER"_s);
	$assignStatic(XPATHErrorResources_sv::ER_PROG_ASSERT_UNKNOWN_OPCODE, "ER_PROG_ASSERT_UNKNOWN_OPCODE"_s);
	$assignStatic(XPATHErrorResources_sv::ER_ZERO_OR_ONE, "ER_ZERO_OR_ONE"_s);
	$assignStatic(XPATHErrorResources_sv::ER_RTF_NOT_SUPPORTED_XRTREEFRAGSELECTWRAPPER, "ER_RTF_NOT_SUPPORTED_XRTREEFRAGSELECTWRAPPER"_s);
	$assignStatic(XPATHErrorResources_sv::ER_ASNODEITERATOR_NOT_SUPPORTED_XRTREEFRAGSELECTWRAPPER, "ER_ASNODEITERATOR_NOT_SUPPORTED_XRTREEFRAGSELECTWRAPPER"_s);
	$assignStatic(XPATHErrorResources_sv::ER_FSB_NOT_SUPPORTED_XSTRINGFORCHARS, "ER_FSB_NOT_SUPPORTED_XSTRINGFORCHARS"_s);
	$assignStatic(XPATHErrorResources_sv::ER_COULD_NOT_FIND_VAR, "ER_COULD_NOT_FIND_VAR"_s);
	$assignStatic(XPATHErrorResources_sv::ER_XSTRINGFORCHARS_CANNOT_TAKE_STRING, "ER_XSTRINGFORCHARS_CANNOT_TAKE_STRING"_s);
	$assignStatic(XPATHErrorResources_sv::ER_FASTSTRINGBUFFER_CANNOT_BE_NULL, "ER_FASTSTRINGBUFFER_CANNOT_BE_NULL"_s);
	$assignStatic(XPATHErrorResources_sv::ER_TWO_OR_THREE, "ER_TWO_OR_THREE"_s);
	$assignStatic(XPATHErrorResources_sv::ER_VARIABLE_ACCESSED_BEFORE_BIND, "ER_VARIABLE_ACCESSED_BEFORE_BIND"_s);
	$assignStatic(XPATHErrorResources_sv::ER_FSB_CANNOT_TAKE_STRING, "ER_FSB_CANNOT_TAKE_STRING"_s);
	$assignStatic(XPATHErrorResources_sv::ER_SETTING_WALKER_ROOT_TO_NULL, "ER_SETTING_WALKER_ROOT_TO_NULL"_s);
	$assignStatic(XPATHErrorResources_sv::ER_NODESETDTM_CANNOT_ITERATE, "ER_NODESETDTM_CANNOT_ITERATE"_s);
	$assignStatic(XPATHErrorResources_sv::ER_NODESET_CANNOT_ITERATE, "ER_NODESET_CANNOT_ITERATE"_s);
	$assignStatic(XPATHErrorResources_sv::ER_NODESETDTM_CANNOT_INDEX, "ER_NODESETDTM_CANNOT_INDEX"_s);
	$assignStatic(XPATHErrorResources_sv::ER_NODESET_CANNOT_INDEX, "ER_NODESET_CANNOT_INDEX"_s);
	$assignStatic(XPATHErrorResources_sv::ER_CANNOT_CALL_SETSHOULDCACHENODE, "ER_CANNOT_CALL_SETSHOULDCACHENODE"_s);
	$assignStatic(XPATHErrorResources_sv::ER_ONLY_ALLOWS, "ER_ONLY_ALLOWS"_s);
	$assignStatic(XPATHErrorResources_sv::ER_UNKNOWN_STEP, "ER_UNKNOWN_STEP"_s);
	$assignStatic(XPATHErrorResources_sv::ER_EXPECTED_REL_LOC_PATH, "ER_EXPECTED_REL_LOC_PATH"_s);
	$assignStatic(XPATHErrorResources_sv::ER_EXPECTED_LOC_PATH, "ER_EXPECTED_LOC_PATH"_s);
	$assignStatic(XPATHErrorResources_sv::ER_EXPECTED_LOC_PATH_AT_END_EXPR, "ER_EXPECTED_LOC_PATH_AT_END_EXPR"_s);
	$assignStatic(XPATHErrorResources_sv::ER_EXPECTED_LOC_STEP, "ER_EXPECTED_LOC_STEP"_s);
	$assignStatic(XPATHErrorResources_sv::ER_EXPECTED_NODE_TEST, "ER_EXPECTED_NODE_TEST"_s);
	$assignStatic(XPATHErrorResources_sv::ER_EXPECTED_STEP_PATTERN, "ER_EXPECTED_STEP_PATTERN"_s);
	$assignStatic(XPATHErrorResources_sv::ER_EXPECTED_REL_PATH_PATTERN, "ER_EXPECTED_REL_PATH_PATTERN"_s);
	$assignStatic(XPATHErrorResources_sv::ER_CANT_CONVERT_TO_BOOLEAN, "ER_CANT_CONVERT_TO_BOOLEAN"_s);
	$assignStatic(XPATHErrorResources_sv::ER_CANT_CONVERT_TO_SINGLENODE, "ER_CANT_CONVERT_TO_SINGLENODE"_s);
	$assignStatic(XPATHErrorResources_sv::ER_CANT_GET_SNAPSHOT_LENGTH, "ER_CANT_GET_SNAPSHOT_LENGTH"_s);
	$assignStatic(XPATHErrorResources_sv::ER_NON_ITERATOR_TYPE, "ER_NON_ITERATOR_TYPE"_s);
	$assignStatic(XPATHErrorResources_sv::ER_DOC_MUTATED, "ER_DOC_MUTATED"_s);
	$assignStatic(XPATHErrorResources_sv::ER_INVALID_XPATH_TYPE, "ER_INVALID_XPATH_TYPE"_s);
	$assignStatic(XPATHErrorResources_sv::ER_EMPTY_XPATH_RESULT, "ER_EMPTY_XPATH_RESULT"_s);
	$assignStatic(XPATHErrorResources_sv::ER_INCOMPATIBLE_TYPES, "ER_INCOMPATIBLE_TYPES"_s);
	$assignStatic(XPATHErrorResources_sv::ER_NULL_RESOLVER, "ER_NULL_RESOLVER"_s);
	$assignStatic(XPATHErrorResources_sv::ER_CANT_CONVERT_TO_STRING, "ER_CANT_CONVERT_TO_STRING"_s);
	$assignStatic(XPATHErrorResources_sv::ER_NON_SNAPSHOT_TYPE, "ER_NON_SNAPSHOT_TYPE"_s);
	$assignStatic(XPATHErrorResources_sv::ER_WRONG_DOCUMENT, "ER_WRONG_DOCUMENT"_s);
	$assignStatic(XPATHErrorResources_sv::ER_WRONG_NODETYPE, "ER_WRONG_NODETYPE"_s);
	$assignStatic(XPATHErrorResources_sv::ER_XPATH_ERROR, "ER_XPATH_ERROR"_s);
	$assignStatic(XPATHErrorResources_sv::ER_EXTENSION_FUNCTION_CANNOT_BE_INVOKED, "ER_EXTENSION_FUNCTION_CANNOT_BE_INVOKED"_s);
	$assignStatic(XPATHErrorResources_sv::ER_RESOLVE_VARIABLE_RETURNS_NULL, "ER_RESOLVE_VARIABLE_RETURNS_NULL"_s);
	$assignStatic(XPATHErrorResources_sv::ER_UNSUPPORTED_RETURN_TYPE, "ER_UNSUPPORTED_RETURN_TYPE"_s);
	$assignStatic(XPATHErrorResources_sv::ER_SOURCE_RETURN_TYPE_CANNOT_BE_NULL, "ER_SOURCE_RETURN_TYPE_CANNOT_BE_NULL"_s);
	$assignStatic(XPATHErrorResources_sv::ER_ARG_CANNOT_BE_NULL, "ER_ARG_CANNOT_BE_NULL"_s);
	$assignStatic(XPATHErrorResources_sv::ER_OBJECT_MODEL_NULL, "ER_OBJECT_MODEL_NULL"_s);
	$assignStatic(XPATHErrorResources_sv::ER_OBJECT_MODEL_EMPTY, "ER_OBJECT_MODEL_EMPTY"_s);
	$assignStatic(XPATHErrorResources_sv::ER_FEATURE_NAME_NULL, "ER_FEATURE_NAME_NULL"_s);
	$assignStatic(XPATHErrorResources_sv::ER_FEATURE_UNKNOWN, "ER_FEATURE_UNKNOWN"_s);
	$assignStatic(XPATHErrorResources_sv::ER_GETTING_NULL_FEATURE, "ER_GETTING_NULL_FEATURE"_s);
	$assignStatic(XPATHErrorResources_sv::ER_GETTING_UNKNOWN_FEATURE, "ER_GETTING_UNKNOWN_FEATURE"_s);
	$assignStatic(XPATHErrorResources_sv::ER_SECUREPROCESSING_FEATURE, "ER_SECUREPROCESSING_FEATURE"_s);
	$assignStatic(XPATHErrorResources_sv::ER_NULL_XPATH_FUNCTION_RESOLVER, "ER_NULL_XPATH_FUNCTION_RESOLVER"_s);
	$assignStatic(XPATHErrorResources_sv::ER_NULL_XPATH_VARIABLE_RESOLVER, "ER_NULL_XPATH_VARIABLE_RESOLVER"_s);
	$assignStatic(XPATHErrorResources_sv::WG_LOCALE_NAME_NOT_HANDLED, "WG_LOCALE_NAME_NOT_HANDLED"_s);
	$assignStatic(XPATHErrorResources_sv::WG_PROPERTY_NOT_SUPPORTED, "WG_PROPERTY_NOT_SUPPORTED"_s);
	$assignStatic(XPATHErrorResources_sv::WG_DONT_DO_ANYTHING_WITH_NS, "WG_DONT_DO_ANYTHING_WITH_NS"_s);
	$assignStatic(XPATHErrorResources_sv::WG_SECURITY_EXCEPTION, "WG_SECURITY_EXCEPTION"_s);
	$assignStatic(XPATHErrorResources_sv::WG_QUO_NO_LONGER_DEFINED, "WG_QUO_NO_LONGER_DEFINED"_s);
	$assignStatic(XPATHErrorResources_sv::WG_NEED_DERIVED_OBJECT_TO_IMPLEMENT_NODETEST, "WG_NEED_DERIVED_OBJECT_TO_IMPLEMENT_NODETEST"_s);
	$assignStatic(XPATHErrorResources_sv::WG_FUNCTION_TOKEN_NOT_FOUND, "WG_FUNCTION_TOKEN_NOT_FOUND"_s);
	$assignStatic(XPATHErrorResources_sv::WG_COULDNOT_FIND_FUNCTION, "WG_COULDNOT_FIND_FUNCTION"_s);
	$assignStatic(XPATHErrorResources_sv::WG_CANNOT_MAKE_URL_FROM, "WG_CANNOT_MAKE_URL_FROM"_s);
	$assignStatic(XPATHErrorResources_sv::WG_EXPAND_ENTITIES_NOT_SUPPORTED, "WG_EXPAND_ENTITIES_NOT_SUPPORTED"_s);
	$assignStatic(XPATHErrorResources_sv::WG_ILLEGAL_VARIABLE_REFERENCE, "WG_ILLEGAL_VARIABLE_REFERENCE"_s);
	$assignStatic(XPATHErrorResources_sv::WG_UNSUPPORTED_ENCODING, "WG_UNSUPPORTED_ENCODING"_s);
	$assignStatic(XPATHErrorResources_sv::ER_DETACH_NOT_SUPPORTED_XRTREEFRAGSELECTWRAPPER, "ER_DETACH_NOT_SUPPORTED_XRTREEFRAGSELECTWRAPPER"_s);
	$assignStatic(XPATHErrorResources_sv::ER_NUM_NOT_SUPPORTED_XRTREEFRAGSELECTWRAPPER, "ER_NUM_NOT_SUPPORTED_XRTREEFRAGSELECTWRAPPER"_s);
	$assignStatic(XPATHErrorResources_sv::ER_XSTR_NOT_SUPPORTED_XRTREEFRAGSELECTWRAPPER, "ER_XSTR_NOT_SUPPORTED_XRTREEFRAGSELECTWRAPPER"_s);
	$assignStatic(XPATHErrorResources_sv::ER_STR_NOT_SUPPORTED_XRTREEFRAGSELECTWRAPPER, "ER_STR_NOT_SUPPORTED_XRTREEFRAGSELECTWRAPPER"_s);
	$assignStatic(XPATHErrorResources_sv::BAD_CODE, "BAD_CODE"_s);
	$assignStatic(XPATHErrorResources_sv::FORMAT_FAILED, "FORMAT_FAILED"_s);
	$assignStatic(XPATHErrorResources_sv::ERROR_RESOURCES, "com.sun.org.apache.xpath.internal.res.XPATHErrorResources"_s);
	$assignStatic(XPATHErrorResources_sv::ERROR_STRING, "#error"_s);
	$assignStatic(XPATHErrorResources_sv::ERROR_HEADER, "Error: "_s);
	$assignStatic(XPATHErrorResources_sv::WARNING_HEADER, "Warning: "_s);
	$assignStatic(XPATHErrorResources_sv::XSL_HEADER, "XSL "_s);
	$assignStatic(XPATHErrorResources_sv::XML_HEADER, "XML "_s);
	$assignStatic(XPATHErrorResources_sv::QUERY_HEADER, "PATTERN "_s);
	$assignStatic(XPATHErrorResources_sv::_contents, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("ERROR0000"_s),
			$of("{0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_sv::ER_CURRENT_NOT_ALLOWED_IN_MATCH),
			$of(u"Funktionen current() är inte tillåten i ett matchningsmönster!"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_sv::ER_CURRENT_TAKES_NO_ARGS),
			$of("Funktionen current() tar inte emot argument!"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_sv::ER_DOCUMENT_REPLACED),
			$of("Implementeringen av funktionen document() har inte ersatts av com.sun.org.apache.xalan.internal.xslt.FuncDocument!"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_sv::ER_CONTEXT_CAN_NOT_BE_NULL),
			$of(u"Kontexten kan inte vara null när åtgärden är kontextberoende."_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_sv::ER_CONTEXT_HAS_NO_OWNERDOC),
			$of(u"context har inget ägardokument!"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_sv::ER_LOCALNAME_HAS_TOO_MANY_ARGS),
			$of(u"local-name() har för många argument."_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_sv::ER_NAMESPACEURI_HAS_TOO_MANY_ARGS),
			$of(u"namespace-uri() har för många argument."_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_sv::ER_NORMALIZESPACE_HAS_TOO_MANY_ARGS),
			$of(u"normalize-space() har för många argument."_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_sv::ER_NUMBER_HAS_TOO_MANY_ARGS),
			$of(u"number() har för många argument."_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_sv::ER_NAME_HAS_TOO_MANY_ARGS),
			$of(u"name() har för många argument."_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_sv::ER_STRING_HAS_TOO_MANY_ARGS),
			$of(u"string() har för många argument."_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_sv::ER_STRINGLENGTH_HAS_TOO_MANY_ARGS),
			$of(u"string-length() har för många argument."_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_sv::ER_TRANSLATE_TAKES_3_ARGS),
			$of("Funktionen translate() tar emot tre argument!"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_sv::ER_UNPARSEDENTITYURI_TAKES_1_ARG),
			$of("Funktionen unparsed-entity-uri borde ta emot ett argument!"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_sv::ER_NAMESPACEAXIS_NOT_IMPLEMENTED),
			$of(u"namnrymdsaxeln är inte implementerad än!"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_sv::ER_UNKNOWN_AXIS),
			$of(u"okänd axel: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_sv::ER_UNKNOWN_MATCH_OPERATION),
			$of(u"okänd matchningsåtgärd!"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_sv::ER_INCORRECT_ARG_LENGTH),
			$of(u"Felaktig argumentlängd på nodtest för processing-instruction()!"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_sv::ER_CANT_CONVERT_TO_NUMBER),
			$of("Kan inte konvertera {0} till ett tal"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_sv::ER_CANT_CONVERT_TO_NODELIST),
			$of("Kan inte konvertera {0} till NodeList!"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_sv::ER_CANT_CONVERT_TO_MUTABLENODELIST),
			$of("Kan inte konvertera {0} till NodeSetDTM!"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_sv::ER_CANT_CONVERT_TO_TYPE),
			$of("Kan inte konvertera {0} till type#{1}"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_sv::ER_EXPECTED_MATCH_PATTERN),
			$of(u"Förväntat matchningsmönster i getMatchScore!"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_sv::ER_COULDNOT_GET_VAR_NAMED),
			$of(u"Kunde inte hämta variabeln {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_sv::ER_UNKNOWN_OPCODE),
			$of(u"FEL! Okänd op-kod: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_sv::ER_EXTRA_ILLEGAL_TOKENS),
			$of(u"Extra otillåtna tecken: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_sv::ER_EXPECTED_DOUBLE_QUOTE),
			$of(u"Litteral omges av fel sorts citattecken... dubbla citattecken förväntade!"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_sv::ER_EXPECTED_SINGLE_QUOTE),
			$of(u"Litteral omges av fel sorts citattecken... enkla citattecken förväntade!"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_sv::ER_EMPTY_EXPRESSION),
			$of("Tomt uttryck!"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_sv::ER_EXPECTED_BUT_FOUND),
			$of(u"Förväntade {0}, men hittade: {1}"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_sv::ER_INCORRECT_PROGRAMMER_ASSERTION),
			$of(u"Programmerarens utsaga är inte korrekt! - {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_sv::ER_BOOLEAN_ARG_NO_LONGER_OPTIONAL),
			$of(u"Argumentet boolean(...) är inte längre valfritt med 19990709 XPath-utkast."_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_sv::ER_FOUND_COMMA_BUT_NO_PRECEDING_ARG),
			$of(u"Hittade \',\' utan föregående argument!"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_sv::ER_FOUND_COMMA_BUT_NO_FOLLOWING_ARG),
			$of(u"Hittade \',\' utan efterföljande argument!"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_sv::ER_PREDICATE_ILLEGAL_SYNTAX),
			$of(u"\'..[predikat]\' eller \'.[predikat]\' är otillåten syntax. Använd \'self::node()[predikat]\' istället."_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_sv::ER_ILLEGAL_AXIS_NAME),
			$of(u"otillåtet axelnamn: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_sv::ER_UNKNOWN_NODETYPE),
			$of(u"Okänd nodtyp: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_sv::ER_PATTERN_LITERAL_NEEDS_BE_QUOTED),
			$of(u"Mönsterlitteralen ({0}) måste omges av citattecken!"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_sv::ER_COULDNOT_BE_FORMATTED_TO_NUMBER),
			$of("{0} kunde inte formateras till ett tal!"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_sv::ER_COULDNOT_CREATE_XMLPROCESSORLIAISON),
			$of("Kunde inte skapa XML TransformerFactory Liaison: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_sv::ER_DIDNOT_FIND_XPATH_SELECT_EXP),
			$of("Fel! Hittade inte xpath select-uttryck (-select)."_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_sv::ER_COULDNOT_FIND_ENDOP_AFTER_OPLOCATIONPATH),
			$of("FEL! Hittade inte ENDOP efter OP_LOCATIONPATH"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_sv::ER_ERROR_OCCURED),
			$of(u"Ett fel har inträffat!"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_sv::ER_ILLEGAL_VARIABLE_REFERENCE),
			$of(u"VariableReference angiven för variabel som är utanför kontext eller som saknar definition! Namn = {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_sv::ER_AXES_NOT_ALLOWED),
			$of(u"Endast underordnade:: och attribut::-axlar är tillåtna i matchningsmönster! Regelvidriga axlar = {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_sv::ER_KEY_HAS_TOO_MANY_ARGS),
			$of("key() har felaktigt antal argument."_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_sv::ER_COUNT_TAKES_1_ARG),
			$of("Funktionen count borde ta emot ett argument!"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_sv::ER_COULDNOT_FIND_FUNCTION),
			$of("Hittade inte funktionen: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_sv::ER_UNSUPPORTED_ENCODING),
			$of(u"Kodning utan stöd: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_sv::ER_PROBLEM_IN_DTM_NEXTSIBLING),
			$of(u"Problem inträffade i DTM i getNextSibling... försöker återskapa"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_sv::ER_CANNOT_WRITE_TO_EMPTYNODELISTIMPL),
			$of("Programmerarfel: kan inte skriva till EmptyNodeList."_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_sv::ER_SETDOMFACTORY_NOT_SUPPORTED),
			$of(u"setDOMFactory stöds inte i XPathContext!"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_sv::ER_PREFIX_MUST_RESOLVE),
			$of(u"Prefix måste matchas till en namnrymd: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_sv::ER_PARSE_NOT_SUPPORTED),
			$of(u"tolkning (InputSource-källa) stöds inte i XPathContext! Kan inte öppna {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_sv::ER_SAX_API_NOT_HANDLED),
			$of("SAX API-tecken(char ch[]... hanteras inte av DTM!"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_sv::ER_IGNORABLE_WHITESPACE_NOT_HANDLED),
			$of("ignorableWhitespace(char ch[]... hanteras inte av DTM!"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_sv::ER_DTM_CANNOT_HANDLE_NODES),
			$of("DTMLiaison kan inte hantera noder av typ {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_sv::ER_XERCES_CANNOT_HANDLE_NODES),
			$of("DOM2Helper kan inte hantera noder av typ {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_sv::ER_XERCES_PARSE_ERROR_DETAILS),
			$of("Fel i DOM2Helper.parse: SystemID - {0} rad - {1}"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_sv::ER_XERCES_PARSE_ERROR),
			$of("Fel i DOM2Helper.parse"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_sv::ER_INVALID_UTF16_SURROGATE),
			$of(u"Ogiltigt UTF-16-surrogat upptäckt: {0} ?"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_sv::ER_OIERROR),
			$of("IO-fel"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_sv::ER_CANNOT_CREATE_URL),
			$of(u"Kan inte skapa URL för: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_sv::ER_XPATH_READOBJECT),
			$of("I XPath.readObject: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_sv::ER_FUNCTION_TOKEN_NOT_FOUND),
			$of("funktionstecken hittades inte."_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_sv::ER_CANNOT_DEAL_XPATH_TYPE),
			$of("Kan inte hantera XPath-typ: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_sv::ER_NODESET_NOT_MUTABLE),
			$of(u"Detta NodeSet är oföränderligt"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_sv::ER_NODESETDTM_NOT_MUTABLE),
			$of(u"Detta NodeSetDTM är oföränderligt"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_sv::ER_VAR_NOT_RESOLVABLE),
			$of("Variabeln kan inte matchas: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_sv::ER_NULL_ERROR_HANDLER),
			$of(u"Felhanterare med värde null"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_sv::ER_PROG_ASSERT_UNKNOWN_OPCODE),
			$of(u"Programmerarens utsaga: okänd op-kod: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_sv::ER_ZERO_OR_ONE),
			$of("0 eller 1"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_sv::ER_RTF_NOT_SUPPORTED_XRTREEFRAGSELECTWRAPPER),
			$of(u"rtf() stöds inte av XRTreeFragSelectWrapper"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_sv::ER_RTF_NOT_SUPPORTED_XRTREEFRAGSELECTWRAPPER),
			$of(u"asNodeIterator() stöds inte av XRTreeFragSelectWrapper"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_sv::ER_DETACH_NOT_SUPPORTED_XRTREEFRAGSELECTWRAPPER),
			$of(u"detach() stöds inte av XRTreeFragSelectWrapper"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_sv::ER_NUM_NOT_SUPPORTED_XRTREEFRAGSELECTWRAPPER),
			$of(u"num() stöds inte av XRTreeFragSelectWrapper"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_sv::ER_XSTR_NOT_SUPPORTED_XRTREEFRAGSELECTWRAPPER),
			$of(u"xstr() stöds inte av XRTreeFragSelectWrapper"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_sv::ER_STR_NOT_SUPPORTED_XRTREEFRAGSELECTWRAPPER),
			$of(u"str() stöds inte av XRTreeFragSelectWrapper"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_sv::ER_FSB_NOT_SUPPORTED_XSTRINGFORCHARS),
			$of(u"fsb() stöds inte för XStringForChars"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_sv::ER_COULD_NOT_FIND_VAR),
			$of("Hittade inte variabel med namnet {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_sv::ER_XSTRINGFORCHARS_CANNOT_TAKE_STRING),
			$of(u"XStringForChars kan inte ta emot en sträng för argument"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_sv::ER_FASTSTRINGBUFFER_CANNOT_BE_NULL),
			$of(u"FastStringBuffer-argumentet får inte vara null"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_sv::ER_TWO_OR_THREE),
			$of("2 eller 3"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_sv::ER_VARIABLE_ACCESSED_BEFORE_BIND),
			$of(u"Åtkomst till variabel innan den är bunden!"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_sv::ER_FSB_CANNOT_TAKE_STRING),
			$of(u"XStringForFSB kan inte ta emot en sträng för argument!"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_sv::ER_SETTING_WALKER_ROOT_TO_NULL),
			$of(u"\n !!!! Fel! Anger roten för en \'\'walker\'\' som null!!!"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_sv::ER_NODESETDTM_CANNOT_ITERATE),
			$of("Detta NodeSetDTM kan inte iterera till en tidigare nod!"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_sv::ER_NODESET_CANNOT_ITERATE),
			$of("Detta NodeSet kan inte iterera till en tidigare nod!"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_sv::ER_NODESETDTM_CANNOT_INDEX),
			$of(u"Detta NodeSetDTM kan inte utföra funktioner som indexerar eller räknar!"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_sv::ER_NODESET_CANNOT_INDEX),
			$of(u"Detta NodeSet kan inte utföra funktioner som indexerar eller räknar!"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_sv::ER_CANNOT_CALL_SETSHOULDCACHENODE),
			$of("Kan inte anropa setShouldCacheNodes efter anropat nextNode!"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_sv::ER_ONLY_ALLOWS),
			$of(u"{0} tillåter endast {1} argument"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_sv::ER_UNKNOWN_STEP),
			$of(u"Programmerarens utsaga i getNextStepPos: okänt stepType: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_sv::ER_EXPECTED_REL_LOC_PATH),
			$of(u"En relativ sökväg förväntades efter tecknet \'/\' eller \'//\'."_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_sv::ER_EXPECTED_LOC_PATH),
			$of(u"En sökväg förväntades, men följande tecken påträffades: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_sv::ER_EXPECTED_LOC_PATH_AT_END_EXPR),
			$of(u"En sökväg förväntades, men slutet av XPath-uttrycket hittades istället."_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_sv::ER_EXPECTED_LOC_STEP),
			$of(u"Ett platssteg förväntades efter tecknet \'/\' eller \'//\'."_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_sv::ER_EXPECTED_NODE_TEST),
			$of(u"Ett nodtest som matchar antingen NCName:* eller QName förväntades."_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_sv::ER_EXPECTED_STEP_PATTERN),
			$of(u"Ett stegmönster förväntades, men \'/\' påträffades."_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_sv::ER_EXPECTED_REL_PATH_PATTERN),
			$of(u"Ett mönster för relativ sökväg förväntades."_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_sv::ER_CANT_CONVERT_TO_BOOLEAN),
			$of(u"XPathResult i XPath-uttrycket \'\'{0}\'\' innehåller XPathResultType {1} som inte kan konverteras till booleskt värde."_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_sv::ER_CANT_CONVERT_TO_SINGLENODE),
			$of(u"XPathResult i XPath-uttrycket \'\'{0}\'\' innehåller XPathResultType {1} som inte kan konverteras till enskild nod. Metoden getSingleNodeValue används endast till typ ANY_UNORDERED_NODE_TYPE och FIRST_ORDERED_NODE_TYPE."_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_sv::ER_CANT_GET_SNAPSHOT_LENGTH),
			$of(u"Metoden getSnapshotLength kan inte anropas vid XPathResult från XPath-uttrycket \'\'{0}\'\' eftersom XPathResultType är {1}. Metoden används endast till typ UNORDERED_NODE_SNAPSHOT_TYPE och ORDERED_NODE_SNAPSHOT_TYPE."_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_sv::ER_NON_ITERATOR_TYPE),
			$of(u"Metoden iterateNext kan inte anropas vid XPathResult från XPath-uttrycket \'\'{0}\'\' eftersom XPathResultType är {1}. Metoden används endast till typ UNORDERED_NODE_ITERATOR_TYPE och ORDERED_NODE_ITERATOR_TYPE."_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_sv::ER_DOC_MUTATED),
			$of(u"Dokumentet har muterats sedan resultatet genererades. Iteratorn är ogiltig."_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_sv::ER_INVALID_XPATH_TYPE),
			$of("Ogiltigt XPath-typargument: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_sv::ER_EMPTY_XPATH_RESULT),
			$of("Tomt XPath-resultatobjekt"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_sv::ER_INCOMPATIBLE_TYPES),
			$of(u"XPathResult i XPath-uttrycket \'\'{0}\'\' innehåller XPathResultType {1} som inte kan tvingas till angiven XPathResultType {2}."_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_sv::ER_NULL_RESOLVER),
			$of(u"Kan inte matcha prefix med prefixmatchning som är null."_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_sv::ER_CANT_CONVERT_TO_STRING),
			$of(u"XPathResult i XPath-uttrycket \'\'{0}\'\' innehåller XPathResultType {1} som inte kan konverteras till en sträng."_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_sv::ER_NON_SNAPSHOT_TYPE),
			$of(u"Metoden snapshotItem kan inte anropas vid XPathResult från XPath-uttrycket \'\'{0}\'\' eftersom XPathResultType är {1}. Metoden används endast till typ UNORDERED_NODE_SNAPSHOT_TYPE och ORDERED_NODE_SNAPSHOT_TYPE."_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_sv::ER_WRONG_DOCUMENT),
			$of(u"Kontextnoden tillhör inte dokumentet som är bundet till denna XPathEvaluator."_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_sv::ER_WRONG_NODETYPE),
			$of(u"Kontextnodtypen stöds inte."_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_sv::ER_XPATH_ERROR),
			$of(u"Okänt fel i XPath."_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_sv::ER_CANT_CONVERT_XPATHRESULTTYPE_TO_NUMBER),
			$of(u"XPathResult i XPath-uttrycket \'\'{0}\'\' innehåller XPathResultType {1} som inte kan konverteras till ett tal."_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_sv::ER_EXTENSION_FUNCTION_CANNOT_BE_INVOKED),
			$of(u"Tilläggsfunktion: \'\'{0}\'\' kan inte anropas om funktionen XMLConstants.FEATURE_SECURE_PROCESSING anges som true."_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_sv::ER_RESOLVE_VARIABLE_RETURNS_NULL),
			$of(u"resolveVariable för variabeln {0} returnerar null"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_sv::ER_UNSUPPORTED_RETURN_TYPE),
			$of(u"Det finns inget stöd för returtypen: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_sv::ER_SOURCE_RETURN_TYPE_CANNOT_BE_NULL),
			$of(u"Källa och/eller returtyp får inte vara null"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_sv::ER_SOURCE_RETURN_TYPE_CANNOT_BE_NULL),
			$of(u"Källa och/eller returtyp får inte vara null"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_sv::ER_ARG_CANNOT_BE_NULL),
			$of("Argumentet {0} kan inte vara null"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_sv::ER_OBJECT_MODEL_NULL),
			$of("{0}#isObjectModelSupported( String objectModel ) kan inte anropas med objectModel == null"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_sv::ER_OBJECT_MODEL_EMPTY),
			$of("{0}#isObjectModelSupported( String objectModel ) kan inte anropas med objectModel == \"\""_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_sv::ER_FEATURE_NAME_NULL),
			$of(u"Försöker ange en funktion med null-namn: {0}#setFeature( null, {1})"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_sv::ER_FEATURE_UNKNOWN),
			$of(u"Försöker ange en okänd funktion \"{0}\":{1}#setFeature({0},{2})"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_sv::ER_GETTING_NULL_FEATURE),
			$of(u"Försöker hämta en funktion med null-namn: {0}#getFeature(null)"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_sv::ER_GETTING_UNKNOWN_FEATURE),
			$of(u"Försöker hämta en okänd funktion \"{0}\":{1}#getFeature({0})"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_sv::ER_SECUREPROCESSING_FEATURE),
			$of(u"FEATURE_SECURE_PROCESSING: Kan inte ange funktionen som false om säkerhetshanteraren används: {1}#setFeature({0},{2})"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_sv::ER_NULL_XPATH_FUNCTION_RESOLVER),
			$of(u"Försöker ange nullvärde för XPathFunctionResolver:{0}#setXPathFunctionResolver(null)"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_sv::ER_NULL_XPATH_VARIABLE_RESOLVER),
			$of(u"Försöker ange nullvärde för XPathVariableResolver:{0}#setXPathVariableResolver(null)"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_sv::WG_LOCALE_NAME_NOT_HANDLED),
			$of(u"språkkonventionsnamnet i funktionen format-number har ännu inte hanterats!"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_sv::WG_PROPERTY_NOT_SUPPORTED),
			$of(u"XSL-egenskapen stöds inte: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_sv::WG_DONT_DO_ANYTHING_WITH_NS),
			$of(u"Gör för närvarande inte någonting med namnrymden {0} i egenskap: {1}"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_sv::WG_SECURITY_EXCEPTION),
			$of(u"SecurityException vid försök att få åtkomst till XSL-systemegenskap: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_sv::WG_QUO_NO_LONGER_DEFINED),
			$of(u"Gammal syntax: quo(...) definieras inte längre i XPath."_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_sv::WG_NEED_DERIVED_OBJECT_TO_IMPLEMENT_NODETEST),
			$of(u"XPath behöver ett härledningsobjekt för att implementera nodeTest!"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_sv::WG_FUNCTION_TOKEN_NOT_FOUND),
			$of("funktionstecken hittades inte."_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_sv::WG_COULDNOT_FIND_FUNCTION),
			$of("Hittade inte funktionen: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_sv::WG_CANNOT_MAKE_URL_FROM),
			$of(u"Kan inte skapa URL från: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_sv::WG_EXPAND_ENTITIES_NOT_SUPPORTED),
			$of(u"Alternativet -E stöds inte i DTM-parser"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_sv::WG_ILLEGAL_VARIABLE_REFERENCE),
			$of(u"VariableReference angiven för variabel som är utanför kontext eller som saknar definition! Namn = {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XPATHErrorResources_sv::WG_UNSUPPORTED_ENCODING),
			$of(u"Kodning utan stöd: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("ui_language"_s),
			$of("en"_s)
		}),
		$$new($ObjectArray, {
			$of("help_language"_s),
			$of("en"_s)
		}),
		$$new($ObjectArray, {
			$of("language"_s),
			$of("en"_s)
		}),
		$$new($ObjectArray, {
			$of("BAD_CODE"_s),
			$of(u"Parameter för createMessage ligger utanför gränsvärdet"_s)
		}),
		$$new($ObjectArray, {
			$of("FORMAT_FAILED"_s),
			$of(u"Undantag utlöst vid messageFormat-anrop"_s)
		}),
		$$new($ObjectArray, {
			$of("version"_s),
			$of(">>>>>>> Xalan version "_s)
		}),
		$$new($ObjectArray, {
			$of("version2"_s),
			$of("<<<<<<<"_s)
		}),
		$$new($ObjectArray, {
			$of("yes"_s),
			$of("ja"_s)
		}),
		$$new($ObjectArray, {
			$of("line"_s),
			$of("Rad nr"_s)
		}),
		$$new($ObjectArray, {
			$of("column"_s),
			$of("Kolumn nr"_s)
		}),
		$$new($ObjectArray, {
			$of("xsldone"_s),
			$of(u"XSLProcessor: utförd"_s)
		}),
		$$new($ObjectArray, {
			$of("xpath_option"_s),
			$of("xpath-alternativ: "_s)
		}),
		$$new($ObjectArray, {
			$of("optionIN"_s),
			$of("   [-in inputXMLURL]"_s)
		}),
		$$new($ObjectArray, {
			$of("optionSelect"_s),
			$of("   [-select xpath-uttryck]"_s)
		}),
		$$new($ObjectArray, {
			$of("optionMatch"_s),
			$of(u"   [-match matchningsmönster (för matchningsdiagnostik)]"_s)
		}),
		$$new($ObjectArray, {
			$of("optionAnyExpr"_s),
			$of("Eller bara ett xpath-uttryck skapar en diagnostikdump"_s)
		}),
		$$new($ObjectArray, {
			$of("noParsermsg1"_s),
			$of(u"XSL-processen utfördes inte."_s)
		}),
		$$new($ObjectArray, {
			$of("noParsermsg2"_s),
			$of("** Hittade inte parser **"_s)
		}),
		$$new($ObjectArray, {
			$of("noParsermsg3"_s),
			$of(u"Kontrollera klassökvägen."_s)
		}),
		$$new($ObjectArray, {
			$of("noParsermsg4"_s),
			$of(u"Om du inte har IBMs XML Parser för Java kan du ladda ned den från"_s)
		}),
		$$new($ObjectArray, {
			$of("noParsermsg5"_s),
			$of("IBMs AlphaWorks: http://www.alphaworks.ibm.com/formula/xml"_s)
		}),
		$$new($ObjectArray, {
			$of("gtone"_s),
			$of(">1"_s)
		}),
		$$new($ObjectArray, {
			$of("zero"_s),
			$of("0"_s)
		}),
		$$new($ObjectArray, {
			$of("one"_s),
			$of("1"_s)
		}),
		$$new($ObjectArray, {
			$of("two"_s),
			$of("2"_s)
		}),
		$$new($ObjectArray, {
			$of("three"_s),
			$of("3"_s)
		})
	}));
}

XPATHErrorResources_sv::XPATHErrorResources_sv() {
}

$Class* XPATHErrorResources_sv::load$($String* name, bool initialize) {
	$loadClass(XPATHErrorResources_sv, name, initialize, &_XPATHErrorResources_sv_ClassInfo_, clinit$XPATHErrorResources_sv, allocate$XPATHErrorResources_sv);
	return class$;
}

$Class* XPATHErrorResources_sv::class$ = nullptr;

						} // res
					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com