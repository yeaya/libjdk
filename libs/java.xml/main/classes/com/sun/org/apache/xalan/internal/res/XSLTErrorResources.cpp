#include <com/sun/org/apache/xalan/internal/res/XSLTErrorResources.h>
#include <java/util/ListResourceBundle.h>
#include <jcpp.h>

#undef BAD_CODE
#undef ER_ARG_LITERAL
#undef ER_ASSERT_NO_TEMPLATE_PARENT
#undef ER_ASSERT_REDUNDENT_EXPR_ELIMINATOR
#undef ER_ATTRIB_VALUE_NOT_FOUND
#undef ER_ATTRIB_VALUE_NOT_RECOGNIZED
#undef ER_ATTR_NOT_ALLOWED
#undef ER_BAD_STYLESHEET_URL
#undef ER_BAD_VALUE
#undef ER_BAD_VAL_ON_LEVEL_ATTRIB
#undef ER_BAD_XSLSORT_USE
#undef ER_BUFFER_SIZE_LESSTHAN_ZERO
#undef ER_CALL_TO_EXT_FAILED
#undef ER_CANNOT_ADD
#undef ER_CANNOT_BUILD_FORMATTERLISTENER_IN_REDIRECT
#undef ER_CANNOT_CALL_PARSE
#undef ER_CANNOT_CMPL_EXTENSN
#undef ER_CANNOT_CREATE_EXTENSN
#undef ER_CANNOT_FIND_SAX1_DRIVER
#undef ER_CANNOT_INIT_BSFMGR
#undef ER_CANNOT_INIT_DEFAULT_TEMPLATES
#undef ER_CANNOT_MIX_XERCESDOM
#undef ER_CANNOT_SERIALIZE_XSLPROCESSOR
#undef ER_CANNOT_TRANSFORM_SOURCE_TYPE
#undef ER_CANNOT_TRANSFORM_TO_RESULT_TYPE
#undef ER_CANT_CREATE_ITEM
#undef ER_CANT_CREATE_URL
#undef ER_CANT_HAVE_CONTENT_AND_SELECT
#undef ER_CANT_RESOLVE_NAME_AVT
#undef ER_CANT_RESOLVE_NSPREFIX
#undef ER_CANT_RESOLVE_PREFIX_OF_NON_PREFIX_RESOLVER
#undef ER_CANT_USE_DTM_FOR_INPUT
#undef ER_CANT_USE_DTM_FOR_OUTPUT
#undef ER_CAN_ONLY_OUTPUT_TO_ELEMENT
#undef ER_CHARS_NOT_ALLOWED
#undef ER_CHOOSE_REQUIRES_WHEN
#undef ER_CLASS_NOT_FOUND_FOR_OPTION
#undef ER_COULDNT_FIND_FRAGMENT
#undef ER_COULDNT_PARSE_DOC
#undef ER_COULD_NOT_CREATE_TRACELISTENER
#undef ER_COULD_NOT_CREATE_XML_PROC_LIAISON
#undef ER_COULD_NOT_FIND_EXTERN_SCRIPT
#undef ER_COULD_NOT_LOAD_RESOURCE
#undef ER_CURRENCY_SIGN_ILLEGAL
#undef ER_DEFAULTSPACE_NOT_SUPPORTED
#undef ER_DOCUMENT_FUNCTION_INVALID_IN_STYLESHEET_DOM
#undef ER_DUPLICATE_GLOBAL_VAR
#undef ER_DUPLICATE_NAMED_TEMPLATE
#undef ER_DUPLICATE_VAR
#undef ER_ELEMENT_NAME_METHOD_STATIC
#undef ER_ELEMTEMPLATEELEM_ERR
#undef ER_ELEM_CONTENT_NOT_ALLOWED
#undef ER_ENCODING_NOT_SUPPORTED
#undef ER_ERRORLISTENER
#undef ER_EXTENSION_ELEMENT_NOT_ALLOWED_IN_SECURE_PROCESSING
#undef ER_EXTENSION_FUNC_UNKNOWN
#undef ER_FAILED_CALLING_METHOD
#undef ER_FAILED_CREATING_ELEMLITRSLT
#undef ER_FAILED_CREATING_ELEMTMPL
#undef ER_FAILED_PROCESS_STYLESHEET
#undef ER_FEATURE
#undef ER_FILE_CANNOT_BE_NULL
#undef ER_FILE_NOT_FOUND
#undef ER_FOREACH_NEED_MATCH_OR_NAME_ATTRIB
#undef ER_FUNCTION_NOT_FOUND
#undef ER_FUNCTION_NOT_SUPPORTED
#undef ER_GET_FEATURE_NULL_NAME
#undef ER_ILLEGAL_ATTRIB
#undef ER_ILLEGAL_ATTRIBUTE
#undef ER_ILLEGAL_ATTRIBUTE_VALUE
#undef ER_ILLEGAL_DOMSOURCE_INPUT
#undef ER_ILLEGAL_VALUE
#undef ER_ILLEGAL_XMLSPACE_VALUE
#undef ER_IMPORTING_ITSELF
#undef ER_IMPORTS_AS_FIRST_ELEM
#undef ER_INDENTRESULT_NOT_SUPPORTED
#undef ER_INPUT_CANNOT_BE_NULL
#undef ER_INSTANCE_MTHD_CALL_REQUIRES
#undef ER_INVALID_CONTEXT_PASSED
#undef ER_INVALID_DRIVER
#undef ER_INVALID_DRIVER_NAME
#undef ER_INVALID_ELEMENT_NAME
#undef ER_INVALID_KEY_CALL
#undef ER_INVALID_NAMESPACE_URI_VALUE_FOR_RESULT_PREFIX
#undef ER_INVALID_NAMESPACE_URI_VALUE_FOR_RESULT_PREFIX_FOR_DEFAULT
#undef ER_INVALID_OPTION
#undef ER_INVALID_PREFIX
#undef ER_INVALID_PREFIX_IN_EXCLUDERESULTPREFIX
#undef ER_INVALID_SET_PARAM_VALUE
#undef ER_INVALID_UTF16_SURROGATE
#undef ER_IN_ELEMTEMPLATEELEM_READOBJECT
#undef ER_IOEXCEPTION
#undef ER_KEY_REQUIRES_MATCH_ATTRIB
#undef ER_KEY_REQUIRES_NAME_ATTRIB
#undef ER_KEY_REQUIRES_USE_ATTRIB
#undef ER_MALFORMED_FORMAT_STRING
#undef ER_MISPLACED_XSLOTHERWISE
#undef ER_MISPLACED_XSLWHEN
#undef ER_MISSING_ARG_FOR_OPTION
#undef ER_MISSING_CONTAINER_ELEMENT_COMPONENT
#undef ER_MISSING_LANG_ATTRIB
#undef ER_MISSING_NS_URI
#undef ER_MISSING_PREFIX_ATTRIB
#undef ER_MORE_MATCH_CONSTRUCTOR
#undef ER_MORE_MATCH_ELEMENT
#undef ER_MORE_MATCH_METHOD
#undef ER_MUST_HAVE_TEST_ATTRIB
#undef ER_NAMESPACE_CONTEXT_NULL_NAMESPACE
#undef ER_NAMESPACE_CONTEXT_NULL_PREFIX
#undef ER_NEED_MATCH_ATTRIB
#undef ER_NEED_NAME_ATTRIB
#undef ER_NEED_NAME_OR_MATCH_ATTRIB
#undef ER_NEED_SELECT_ATTRIB
#undef ER_NEED_TEST_ATTRIB
#undef ER_NODE_NOT_ELEMENT
#undef ER_NONWHITESPACE_NOT_ALLOWED_IN_POSITION
#undef ER_NOT_ALLOWED_INSIDE_STYLESHEET
#undef ER_NOT_ALLOWED_INSIDE_TEMPLATE
#undef ER_NOT_ALLOWED_IN_POSITION
#undef ER_NOT_SUCCESSFUL
#undef ER_NOT_SUPPORTED
#undef ER_NO_APPLY_IMPORT_IN_FOR_EACH
#undef ER_NO_ATTRIB_SET
#undef ER_NO_CLONE_OF_DOCUMENT_FRAG
#undef ER_NO_CONTEXT_OWNERDOC
#undef ER_NO_CURLYBRACE
#undef ER_NO_DRIVER_NAME
#undef ER_NO_DRIVER_NAME_SPECIFIED
#undef ER_NO_HREF_ATTRIB
#undef ER_NO_INPUT_STYLESHEET
#undef ER_NO_NAMESPACE_DECL
#undef ER_NO_NAME_ATTRIB
#undef ER_NO_OUTPUT_SPECIFIED
#undef ER_NO_OWNERDOC
#undef ER_NO_PARENT_FOR_FILTER
#undef ER_NO_SELECT_EXPRESSION
#undef ER_NO_STYLESHEETROOT
#undef ER_NO_STYLESHEET_IN_MEDIA
#undef ER_NO_STYLESHEET_PI
#undef ER_NO_URL
#undef ER_NO_URL_SPECIFIED
#undef ER_NO_XSLKEY_DECLARATION
#undef ER_NULL_CHILD
#undef ER_NULL_CONTENT_HANDLER
#undef ER_NULL_DTD_HANDLER
#undef ER_NULL_ENTITY_RESOLVER
#undef ER_NULL_ERROR_HANDLER
#undef ER_NULL_SOURCENODE_APPLYIMPORTS
#undef ER_NULL_SOURCENODE_HANDLEAPPLYTEMPLATES
#undef ER_NULL_URI_NAMESPACE
#undef ER_NUMBER_TOO_BIG
#undef ER_ONE_OR_TWO
#undef ER_OUTPUT_PROPERTY_NOT_RECOGNIZED
#undef ER_PARSER_ARG_CANNOT_BE_NULL
#undef ER_PARSER_PROPERTY_NOT_SPECIFIED
#undef ER_POOLSIZE_LESS_THAN_ONE
#undef ER_POOL_EXISTS
#undef ER_POOL_SIZE_LESSTHAN_ONE
#undef ER_PREFIX_MUST_RESOLVE
#undef ER_PROCESSFROMNODE_FAILED
#undef ER_PROCESSINCLUDE_ERROR
#undef ER_PROCESSINGINSTRUCTION_NAME_CANT_BE_XML
#undef ER_PROCESSINGINSTRUCTION_NOTVALID_NCNAME
#undef ER_PROCESSOR_ERROR
#undef ER_PROCESSSTYLESHEET_NOT_SUCCESSFUL
#undef ER_PROCESS_ERROR
#undef ER_PROCESS_NOT_SUCCESSFUL
#undef ER_PROPERTY
#undef ER_PROPERTY_VALUE_BOOLEAN
#undef ER_REDIRECT_COULDNT_GET_FILENAME
#undef ER_REFERENCING_ITSELF
#undef ER_REQUIRED_ELEM_NOT_FOUND
#undef ER_REQUIRES_ATTRIB
#undef ER_REQUIRES_ELEMENTS_ATTRIB
#undef ER_RESOURCE_COULD_NOT_FIND
#undef ER_RESOURCE_COULD_NOT_LOAD
#undef ER_RESULTNS_NOT_SUPPORTED
#undef ER_RESULT_COULD_NOT_BE_SET
#undef ER_RESULT_NULL
#undef ER_SAX1_DRIVER_NOT_IMPLEMENT_PARSER
#undef ER_SAX1_DRIVER_NOT_INSTANTIATED
#undef ER_SAX1_DRIVER_NOT_LOADED
#undef ER_SAX_EXCEPTION
#undef ER_SET_FEATURE_NULL_NAME
#undef ER_SOURCE_CANNOT_BE_NULL
#undef ER_STYLESHEET_DIRECTED_TERMINATION
#undef ER_STYLESHEET_INCLUDES_ITSELF
#undef ER_STYLESHEET_REQUIRES_VERSION_ATTRIB
#undef ER_TEMPLATES_NEED_MATCH_OR_NAME_ATTRIB
#undef ER_TEMPLATE_NAME_MATCH
#undef ER_TEMPLATE_NOT_FOUND
#undef ER_TOO_MANY_LISTENERS
#undef ER_TWO_OR_THREE
#undef ER_UNIMPLNODE_ERROR
#undef ER_UNKNOWN_ERROR_CALLING_EXTENSION
#undef ER_UNKNOWN_EXT_NS_PREFIX
#undef ER_UNKNOWN_XSL_ELEM
#undef ER_UNSUPPORTED_FEATURE
#undef ER_URI_CANNOT_BE_NULL
#undef ER_VALUE_SHOULD_BE_NUMBER
#undef ER_VALUE_SHOULD_EQUAL
#undef ER_XMLSPACE_ILLEGAL_VAL
#undef ER_XMLSPACE_ILLEGAL_VALUE
#undef ER_XPATH_RESOLVER_NEGATIVE_ARITY
#undef ER_XPATH_RESOLVER_NULL_QNAME
#undef ER_XSLATTRSET_USED_ITSELF
#undef ER_XSLFUNCTIONS_UNSUPPORTED
#undef ER_XSLOTHERWISE_NOT_PARENTED_BY_XSLCHOOSE
#undef ER_XSLT_ERROR
#undef ER_XSLWHEN_NOT_PARENTED_BY_XSLCHOOSE
#undef FORMAT_FAILED
#undef INVALID_BOOLEAN
#undef INVALID_ENUM
#undef INVALID_NCNAME
#undef INVALID_NMTOKEN
#undef INVALID_NUMBER
#undef INVALID_QNAME
#undef INVALID_TCHAR
#undef NO_MODIFICATION_ALLOWED_ERR
#undef WG_ATTRIB_NOT_HANDLED
#undef WG_ATTR_TEMPLATE
#undef WG_CANNOT_FIND_COLLATOR
#undef WG_CANNOT_LOAD_REQUESTED_DOC
#undef WG_CANNOT_MAKE_URL_FROM
#undef WG_CONFLICT_BETWEEN_XSLSTRIPSPACE_AND_XSLPRESERVESPACE
#undef WG_COULD_NOT_RESOLVE_PREFIX
#undef WG_COUNT_ATTRIB_MATCHES_NO_ANCESTOR
#undef WG_EMPTY_SECOND_ARG
#undef WG_ENCODING_NOT_SUPPORTED_USING_JAVA
#undef WG_ENCODING_NOT_SUPPORTED_USING_UTF8
#undef WG_EXPR_ATTRIB_CHANGED_TO_SELECT
#undef WG_FOUND_CURLYBRACE
#undef WG_FUNCTIONS_SHOULD_USE_URL
#undef WG_ILLEGAL_ATTRIBUTE
#undef WG_ILLEGAL_ATTRIBUTE_NAME
#undef WG_ILLEGAL_ATTRIBUTE_POSITION
#undef WG_ILLEGAL_ATTRIBUTE_VALUE
#undef WG_LOCALE_NOT_FOUND
#undef WG_NO_DECIMALFORMAT_DECLARATION
#undef WG_NO_LOCALE_IN_FORMATNUMBER
#undef WG_OLD_XSLT_NS
#undef WG_ONE_DEFAULT_XSLDECIMALFORMAT_ALLOWED
#undef WG_PARSING_AND_PREPARING
#undef WG_PROCESSINGINSTRUCTION_NAME_CANT_BE_XML
#undef WG_PROCESSINGINSTRUCTION_NOTVALID_NCNAME
#undef WG_SPECIFICITY_CONFLICTS
#undef WG_STYLESHEET_REQUIRES_VERSION_ATTRIB
#undef WG_XSLDECIMALFORMAT_NAMES_MUST_BE_UNIQUE

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ListResourceBundle = ::java::util::ListResourceBundle;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace res {

$String* XSLTErrorResources::ER_INVALID_NAMESPACE_URI_VALUE_FOR_RESULT_PREFIX = nullptr;
$String* XSLTErrorResources::ER_INVALID_NAMESPACE_URI_VALUE_FOR_RESULT_PREFIX_FOR_DEFAULT = nullptr;
$String* XSLTErrorResources::ER_NO_CURLYBRACE = nullptr;
$String* XSLTErrorResources::ER_FUNCTION_NOT_SUPPORTED = nullptr;
$String* XSLTErrorResources::ER_ILLEGAL_ATTRIBUTE = nullptr;
$String* XSLTErrorResources::ER_NULL_SOURCENODE_APPLYIMPORTS = nullptr;
$String* XSLTErrorResources::ER_CANNOT_ADD = nullptr;
$String* XSLTErrorResources::ER_NULL_SOURCENODE_HANDLEAPPLYTEMPLATES = nullptr;
$String* XSLTErrorResources::ER_NO_NAME_ATTRIB = nullptr;
$String* XSLTErrorResources::ER_TEMPLATE_NOT_FOUND = nullptr;
$String* XSLTErrorResources::ER_CANT_RESOLVE_NAME_AVT = nullptr;
$String* XSLTErrorResources::ER_REQUIRES_ATTRIB = nullptr;
$String* XSLTErrorResources::ER_MUST_HAVE_TEST_ATTRIB = nullptr;
$String* XSLTErrorResources::ER_BAD_VAL_ON_LEVEL_ATTRIB = nullptr;
$String* XSLTErrorResources::ER_PROCESSINGINSTRUCTION_NAME_CANT_BE_XML = nullptr;
$String* XSLTErrorResources::ER_PROCESSINGINSTRUCTION_NOTVALID_NCNAME = nullptr;
$String* XSLTErrorResources::ER_NEED_MATCH_ATTRIB = nullptr;
$String* XSLTErrorResources::ER_NEED_NAME_OR_MATCH_ATTRIB = nullptr;
$String* XSLTErrorResources::ER_CANT_RESOLVE_NSPREFIX = nullptr;
$String* XSLTErrorResources::ER_ILLEGAL_VALUE = nullptr;
$String* XSLTErrorResources::ER_NO_OWNERDOC = nullptr;
$String* XSLTErrorResources::ER_ELEMTEMPLATEELEM_ERR = nullptr;
$String* XSLTErrorResources::ER_NULL_CHILD = nullptr;
$String* XSLTErrorResources::ER_NEED_SELECT_ATTRIB = nullptr;
$String* XSLTErrorResources::ER_NEED_TEST_ATTRIB = nullptr;
$String* XSLTErrorResources::ER_NEED_NAME_ATTRIB = nullptr;
$String* XSLTErrorResources::ER_NO_CONTEXT_OWNERDOC = nullptr;
$String* XSLTErrorResources::ER_COULD_NOT_CREATE_XML_PROC_LIAISON = nullptr;
$String* XSLTErrorResources::ER_PROCESS_NOT_SUCCESSFUL = nullptr;
$String* XSLTErrorResources::ER_NOT_SUCCESSFUL = nullptr;
$String* XSLTErrorResources::ER_ENCODING_NOT_SUPPORTED = nullptr;
$String* XSLTErrorResources::ER_COULD_NOT_CREATE_TRACELISTENER = nullptr;
$String* XSLTErrorResources::ER_KEY_REQUIRES_NAME_ATTRIB = nullptr;
$String* XSLTErrorResources::ER_KEY_REQUIRES_MATCH_ATTRIB = nullptr;
$String* XSLTErrorResources::ER_KEY_REQUIRES_USE_ATTRIB = nullptr;
$String* XSLTErrorResources::ER_REQUIRES_ELEMENTS_ATTRIB = nullptr;
$String* XSLTErrorResources::ER_MISSING_PREFIX_ATTRIB = nullptr;
$String* XSLTErrorResources::ER_BAD_STYLESHEET_URL = nullptr;
$String* XSLTErrorResources::ER_FILE_NOT_FOUND = nullptr;
$String* XSLTErrorResources::ER_IOEXCEPTION = nullptr;
$String* XSLTErrorResources::ER_NO_HREF_ATTRIB = nullptr;
$String* XSLTErrorResources::ER_STYLESHEET_INCLUDES_ITSELF = nullptr;
$String* XSLTErrorResources::ER_PROCESSINCLUDE_ERROR = nullptr;
$String* XSLTErrorResources::ER_MISSING_LANG_ATTRIB = nullptr;
$String* XSLTErrorResources::ER_MISSING_CONTAINER_ELEMENT_COMPONENT = nullptr;
$String* XSLTErrorResources::ER_CAN_ONLY_OUTPUT_TO_ELEMENT = nullptr;
$String* XSLTErrorResources::ER_PROCESS_ERROR = nullptr;
$String* XSLTErrorResources::ER_UNIMPLNODE_ERROR = nullptr;
$String* XSLTErrorResources::ER_NO_SELECT_EXPRESSION = nullptr;
$String* XSLTErrorResources::ER_CANNOT_SERIALIZE_XSLPROCESSOR = nullptr;
$String* XSLTErrorResources::ER_NO_INPUT_STYLESHEET = nullptr;
$String* XSLTErrorResources::ER_FAILED_PROCESS_STYLESHEET = nullptr;
$String* XSLTErrorResources::ER_COULDNT_PARSE_DOC = nullptr;
$String* XSLTErrorResources::ER_COULDNT_FIND_FRAGMENT = nullptr;
$String* XSLTErrorResources::ER_NODE_NOT_ELEMENT = nullptr;
$String* XSLTErrorResources::ER_FOREACH_NEED_MATCH_OR_NAME_ATTRIB = nullptr;
$String* XSLTErrorResources::ER_TEMPLATES_NEED_MATCH_OR_NAME_ATTRIB = nullptr;
$String* XSLTErrorResources::ER_NO_CLONE_OF_DOCUMENT_FRAG = nullptr;
$String* XSLTErrorResources::ER_CANT_CREATE_ITEM = nullptr;
$String* XSLTErrorResources::ER_XMLSPACE_ILLEGAL_VALUE = nullptr;
$String* XSLTErrorResources::ER_NO_XSLKEY_DECLARATION = nullptr;
$String* XSLTErrorResources::ER_CANT_CREATE_URL = nullptr;
$String* XSLTErrorResources::ER_XSLFUNCTIONS_UNSUPPORTED = nullptr;
$String* XSLTErrorResources::ER_PROCESSOR_ERROR = nullptr;
$String* XSLTErrorResources::ER_NOT_ALLOWED_INSIDE_STYLESHEET = nullptr;
$String* XSLTErrorResources::ER_RESULTNS_NOT_SUPPORTED = nullptr;
$String* XSLTErrorResources::ER_DEFAULTSPACE_NOT_SUPPORTED = nullptr;
$String* XSLTErrorResources::ER_INDENTRESULT_NOT_SUPPORTED = nullptr;
$String* XSLTErrorResources::ER_ILLEGAL_ATTRIB = nullptr;
$String* XSLTErrorResources::ER_UNKNOWN_XSL_ELEM = nullptr;
$String* XSLTErrorResources::ER_BAD_XSLSORT_USE = nullptr;
$String* XSLTErrorResources::ER_MISPLACED_XSLWHEN = nullptr;
$String* XSLTErrorResources::ER_XSLWHEN_NOT_PARENTED_BY_XSLCHOOSE = nullptr;
$String* XSLTErrorResources::ER_MISPLACED_XSLOTHERWISE = nullptr;
$String* XSLTErrorResources::ER_XSLOTHERWISE_NOT_PARENTED_BY_XSLCHOOSE = nullptr;
$String* XSLTErrorResources::ER_NOT_ALLOWED_INSIDE_TEMPLATE = nullptr;
$String* XSLTErrorResources::ER_UNKNOWN_EXT_NS_PREFIX = nullptr;
$String* XSLTErrorResources::ER_IMPORTS_AS_FIRST_ELEM = nullptr;
$String* XSLTErrorResources::ER_IMPORTING_ITSELF = nullptr;
$String* XSLTErrorResources::ER_XMLSPACE_ILLEGAL_VAL = nullptr;
$String* XSLTErrorResources::ER_PROCESSSTYLESHEET_NOT_SUCCESSFUL = nullptr;
$String* XSLTErrorResources::ER_SAX_EXCEPTION = nullptr;
$String* XSLTErrorResources::ER_XSLT_ERROR = nullptr;
$String* XSLTErrorResources::ER_CURRENCY_SIGN_ILLEGAL = nullptr;
$String* XSLTErrorResources::ER_DOCUMENT_FUNCTION_INVALID_IN_STYLESHEET_DOM = nullptr;
$String* XSLTErrorResources::ER_CANT_RESOLVE_PREFIX_OF_NON_PREFIX_RESOLVER = nullptr;
$String* XSLTErrorResources::ER_REDIRECT_COULDNT_GET_FILENAME = nullptr;
$String* XSLTErrorResources::ER_CANNOT_BUILD_FORMATTERLISTENER_IN_REDIRECT = nullptr;
$String* XSLTErrorResources::ER_INVALID_PREFIX_IN_EXCLUDERESULTPREFIX = nullptr;
$String* XSLTErrorResources::ER_MISSING_NS_URI = nullptr;
$String* XSLTErrorResources::ER_MISSING_ARG_FOR_OPTION = nullptr;
$String* XSLTErrorResources::ER_INVALID_OPTION = nullptr;
$String* XSLTErrorResources::ER_MALFORMED_FORMAT_STRING = nullptr;
$String* XSLTErrorResources::ER_STYLESHEET_REQUIRES_VERSION_ATTRIB = nullptr;
$String* XSLTErrorResources::ER_ILLEGAL_ATTRIBUTE_VALUE = nullptr;
$String* XSLTErrorResources::ER_CHOOSE_REQUIRES_WHEN = nullptr;
$String* XSLTErrorResources::ER_NO_APPLY_IMPORT_IN_FOR_EACH = nullptr;
$String* XSLTErrorResources::ER_CANT_USE_DTM_FOR_OUTPUT = nullptr;
$String* XSLTErrorResources::ER_CANT_USE_DTM_FOR_INPUT = nullptr;
$String* XSLTErrorResources::ER_CALL_TO_EXT_FAILED = nullptr;
$String* XSLTErrorResources::ER_PREFIX_MUST_RESOLVE = nullptr;
$String* XSLTErrorResources::ER_INVALID_UTF16_SURROGATE = nullptr;
$String* XSLTErrorResources::ER_XSLATTRSET_USED_ITSELF = nullptr;
$String* XSLTErrorResources::ER_CANNOT_MIX_XERCESDOM = nullptr;
$String* XSLTErrorResources::ER_TOO_MANY_LISTENERS = nullptr;
$String* XSLTErrorResources::ER_IN_ELEMTEMPLATEELEM_READOBJECT = nullptr;
$String* XSLTErrorResources::ER_DUPLICATE_NAMED_TEMPLATE = nullptr;
$String* XSLTErrorResources::ER_INVALID_KEY_CALL = nullptr;
$String* XSLTErrorResources::ER_REFERENCING_ITSELF = nullptr;
$String* XSLTErrorResources::ER_ILLEGAL_DOMSOURCE_INPUT = nullptr;
$String* XSLTErrorResources::ER_CLASS_NOT_FOUND_FOR_OPTION = nullptr;
$String* XSLTErrorResources::ER_REQUIRED_ELEM_NOT_FOUND = nullptr;
$String* XSLTErrorResources::ER_INPUT_CANNOT_BE_NULL = nullptr;
$String* XSLTErrorResources::ER_URI_CANNOT_BE_NULL = nullptr;
$String* XSLTErrorResources::ER_FILE_CANNOT_BE_NULL = nullptr;
$String* XSLTErrorResources::ER_SOURCE_CANNOT_BE_NULL = nullptr;
$String* XSLTErrorResources::ER_CANNOT_INIT_BSFMGR = nullptr;
$String* XSLTErrorResources::ER_CANNOT_CMPL_EXTENSN = nullptr;
$String* XSLTErrorResources::ER_CANNOT_CREATE_EXTENSN = nullptr;
$String* XSLTErrorResources::ER_INSTANCE_MTHD_CALL_REQUIRES = nullptr;
$String* XSLTErrorResources::ER_INVALID_ELEMENT_NAME = nullptr;
$String* XSLTErrorResources::ER_ELEMENT_NAME_METHOD_STATIC = nullptr;
$String* XSLTErrorResources::ER_EXTENSION_FUNC_UNKNOWN = nullptr;
$String* XSLTErrorResources::ER_MORE_MATCH_CONSTRUCTOR = nullptr;
$String* XSLTErrorResources::ER_MORE_MATCH_METHOD = nullptr;
$String* XSLTErrorResources::ER_MORE_MATCH_ELEMENT = nullptr;
$String* XSLTErrorResources::ER_INVALID_CONTEXT_PASSED = nullptr;
$String* XSLTErrorResources::ER_POOL_EXISTS = nullptr;
$String* XSLTErrorResources::ER_NO_DRIVER_NAME = nullptr;
$String* XSLTErrorResources::ER_NO_URL = nullptr;
$String* XSLTErrorResources::ER_POOL_SIZE_LESSTHAN_ONE = nullptr;
$String* XSLTErrorResources::ER_INVALID_DRIVER = nullptr;
$String* XSLTErrorResources::ER_NO_STYLESHEETROOT = nullptr;
$String* XSLTErrorResources::ER_ILLEGAL_XMLSPACE_VALUE = nullptr;
$String* XSLTErrorResources::ER_PROCESSFROMNODE_FAILED = nullptr;
$String* XSLTErrorResources::ER_RESOURCE_COULD_NOT_LOAD = nullptr;
$String* XSLTErrorResources::ER_BUFFER_SIZE_LESSTHAN_ZERO = nullptr;
$String* XSLTErrorResources::ER_UNKNOWN_ERROR_CALLING_EXTENSION = nullptr;
$String* XSLTErrorResources::ER_NO_NAMESPACE_DECL = nullptr;
$String* XSLTErrorResources::ER_ELEM_CONTENT_NOT_ALLOWED = nullptr;
$String* XSLTErrorResources::ER_STYLESHEET_DIRECTED_TERMINATION = nullptr;
$String* XSLTErrorResources::ER_ONE_OR_TWO = nullptr;
$String* XSLTErrorResources::ER_TWO_OR_THREE = nullptr;
$String* XSLTErrorResources::ER_COULD_NOT_LOAD_RESOURCE = nullptr;
$String* XSLTErrorResources::ER_CANNOT_INIT_DEFAULT_TEMPLATES = nullptr;
$String* XSLTErrorResources::ER_RESULT_NULL = nullptr;
$String* XSLTErrorResources::ER_RESULT_COULD_NOT_BE_SET = nullptr;
$String* XSLTErrorResources::ER_NO_OUTPUT_SPECIFIED = nullptr;
$String* XSLTErrorResources::ER_CANNOT_TRANSFORM_TO_RESULT_TYPE = nullptr;
$String* XSLTErrorResources::ER_CANNOT_TRANSFORM_SOURCE_TYPE = nullptr;
$String* XSLTErrorResources::ER_NULL_CONTENT_HANDLER = nullptr;
$String* XSLTErrorResources::ER_NULL_ERROR_HANDLER = nullptr;
$String* XSLTErrorResources::ER_CANNOT_CALL_PARSE = nullptr;
$String* XSLTErrorResources::ER_NO_PARENT_FOR_FILTER = nullptr;
$String* XSLTErrorResources::ER_NO_STYLESHEET_IN_MEDIA = nullptr;
$String* XSLTErrorResources::ER_NO_STYLESHEET_PI = nullptr;
$String* XSLTErrorResources::ER_NOT_SUPPORTED = nullptr;
$String* XSLTErrorResources::ER_PROPERTY_VALUE_BOOLEAN = nullptr;
$String* XSLTErrorResources::ER_COULD_NOT_FIND_EXTERN_SCRIPT = nullptr;
$String* XSLTErrorResources::ER_RESOURCE_COULD_NOT_FIND = nullptr;
$String* XSLTErrorResources::ER_OUTPUT_PROPERTY_NOT_RECOGNIZED = nullptr;
$String* XSLTErrorResources::ER_FAILED_CREATING_ELEMLITRSLT = nullptr;
$String* XSLTErrorResources::ER_VALUE_SHOULD_BE_NUMBER = nullptr;
$String* XSLTErrorResources::ER_VALUE_SHOULD_EQUAL = nullptr;
$String* XSLTErrorResources::ER_FAILED_CALLING_METHOD = nullptr;
$String* XSLTErrorResources::ER_FAILED_CREATING_ELEMTMPL = nullptr;
$String* XSLTErrorResources::ER_CHARS_NOT_ALLOWED = nullptr;
$String* XSLTErrorResources::ER_ATTR_NOT_ALLOWED = nullptr;
$String* XSLTErrorResources::ER_BAD_VALUE = nullptr;
$String* XSLTErrorResources::ER_ATTRIB_VALUE_NOT_FOUND = nullptr;
$String* XSLTErrorResources::ER_ATTRIB_VALUE_NOT_RECOGNIZED = nullptr;
$String* XSLTErrorResources::ER_NULL_URI_NAMESPACE = nullptr;
$String* XSLTErrorResources::ER_NUMBER_TOO_BIG = nullptr;
$String* XSLTErrorResources::ER_CANNOT_FIND_SAX1_DRIVER = nullptr;
$String* XSLTErrorResources::ER_SAX1_DRIVER_NOT_LOADED = nullptr;
$String* XSLTErrorResources::ER_SAX1_DRIVER_NOT_INSTANTIATED = nullptr;
$String* XSLTErrorResources::ER_SAX1_DRIVER_NOT_IMPLEMENT_PARSER = nullptr;
$String* XSLTErrorResources::ER_PARSER_PROPERTY_NOT_SPECIFIED = nullptr;
$String* XSLTErrorResources::ER_PARSER_ARG_CANNOT_BE_NULL = nullptr;
$String* XSLTErrorResources::ER_FEATURE = nullptr;
$String* XSLTErrorResources::ER_PROPERTY = nullptr;
$String* XSLTErrorResources::ER_NULL_ENTITY_RESOLVER = nullptr;
$String* XSLTErrorResources::ER_NULL_DTD_HANDLER = nullptr;
$String* XSLTErrorResources::ER_NO_DRIVER_NAME_SPECIFIED = nullptr;
$String* XSLTErrorResources::ER_NO_URL_SPECIFIED = nullptr;
$String* XSLTErrorResources::ER_POOLSIZE_LESS_THAN_ONE = nullptr;
$String* XSLTErrorResources::ER_INVALID_DRIVER_NAME = nullptr;
$String* XSLTErrorResources::ER_ERRORLISTENER = nullptr;
$String* XSLTErrorResources::ER_ASSERT_NO_TEMPLATE_PARENT = nullptr;
$String* XSLTErrorResources::ER_ASSERT_REDUNDENT_EXPR_ELIMINATOR = nullptr;
$String* XSLTErrorResources::ER_NOT_ALLOWED_IN_POSITION = nullptr;
$String* XSLTErrorResources::ER_NONWHITESPACE_NOT_ALLOWED_IN_POSITION = nullptr;
$String* XSLTErrorResources::ER_NAMESPACE_CONTEXT_NULL_NAMESPACE = nullptr;
$String* XSLTErrorResources::ER_NAMESPACE_CONTEXT_NULL_PREFIX = nullptr;
$String* XSLTErrorResources::ER_XPATH_RESOLVER_NULL_QNAME = nullptr;
$String* XSLTErrorResources::ER_XPATH_RESOLVER_NEGATIVE_ARITY = nullptr;
$String* XSLTErrorResources::INVALID_TCHAR = nullptr;
$String* XSLTErrorResources::INVALID_QNAME = nullptr;
$String* XSLTErrorResources::INVALID_ENUM = nullptr;
$String* XSLTErrorResources::INVALID_NMTOKEN = nullptr;
$String* XSLTErrorResources::INVALID_NCNAME = nullptr;
$String* XSLTErrorResources::INVALID_BOOLEAN = nullptr;
$String* XSLTErrorResources::INVALID_NUMBER = nullptr;
$String* XSLTErrorResources::ER_ARG_LITERAL = nullptr;
$String* XSLTErrorResources::ER_DUPLICATE_GLOBAL_VAR = nullptr;
$String* XSLTErrorResources::ER_DUPLICATE_VAR = nullptr;
$String* XSLTErrorResources::ER_TEMPLATE_NAME_MATCH = nullptr;
$String* XSLTErrorResources::ER_INVALID_PREFIX = nullptr;
$String* XSLTErrorResources::ER_NO_ATTRIB_SET = nullptr;
$String* XSLTErrorResources::ER_FUNCTION_NOT_FOUND = nullptr;
$String* XSLTErrorResources::ER_CANT_HAVE_CONTENT_AND_SELECT = nullptr;
$String* XSLTErrorResources::ER_INVALID_SET_PARAM_VALUE = nullptr;
$String* XSLTErrorResources::ER_SET_FEATURE_NULL_NAME = nullptr;
$String* XSLTErrorResources::ER_GET_FEATURE_NULL_NAME = nullptr;
$String* XSLTErrorResources::ER_UNSUPPORTED_FEATURE = nullptr;
$String* XSLTErrorResources::ER_EXTENSION_ELEMENT_NOT_ALLOWED_IN_SECURE_PROCESSING = nullptr;
$String* XSLTErrorResources::WG_FOUND_CURLYBRACE = nullptr;
$String* XSLTErrorResources::WG_COUNT_ATTRIB_MATCHES_NO_ANCESTOR = nullptr;
$String* XSLTErrorResources::WG_EXPR_ATTRIB_CHANGED_TO_SELECT = nullptr;
$String* XSLTErrorResources::WG_NO_LOCALE_IN_FORMATNUMBER = nullptr;
$String* XSLTErrorResources::WG_LOCALE_NOT_FOUND = nullptr;
$String* XSLTErrorResources::WG_CANNOT_MAKE_URL_FROM = nullptr;
$String* XSLTErrorResources::WG_CANNOT_LOAD_REQUESTED_DOC = nullptr;
$String* XSLTErrorResources::WG_CANNOT_FIND_COLLATOR = nullptr;
$String* XSLTErrorResources::WG_FUNCTIONS_SHOULD_USE_URL = nullptr;
$String* XSLTErrorResources::WG_ENCODING_NOT_SUPPORTED_USING_UTF8 = nullptr;
$String* XSLTErrorResources::WG_ENCODING_NOT_SUPPORTED_USING_JAVA = nullptr;
$String* XSLTErrorResources::WG_SPECIFICITY_CONFLICTS = nullptr;
$String* XSLTErrorResources::WG_PARSING_AND_PREPARING = nullptr;
$String* XSLTErrorResources::WG_ATTR_TEMPLATE = nullptr;
$String* XSLTErrorResources::WG_CONFLICT_BETWEEN_XSLSTRIPSPACE_AND_XSLPRESERVESPACE = nullptr;
$String* XSLTErrorResources::WG_ATTRIB_NOT_HANDLED = nullptr;
$String* XSLTErrorResources::WG_NO_DECIMALFORMAT_DECLARATION = nullptr;
$String* XSLTErrorResources::WG_OLD_XSLT_NS = nullptr;
$String* XSLTErrorResources::WG_ONE_DEFAULT_XSLDECIMALFORMAT_ALLOWED = nullptr;
$String* XSLTErrorResources::WG_XSLDECIMALFORMAT_NAMES_MUST_BE_UNIQUE = nullptr;
$String* XSLTErrorResources::WG_ILLEGAL_ATTRIBUTE = nullptr;
$String* XSLTErrorResources::WG_COULD_NOT_RESOLVE_PREFIX = nullptr;
$String* XSLTErrorResources::WG_STYLESHEET_REQUIRES_VERSION_ATTRIB = nullptr;
$String* XSLTErrorResources::WG_ILLEGAL_ATTRIBUTE_NAME = nullptr;
$String* XSLTErrorResources::WG_ILLEGAL_ATTRIBUTE_VALUE = nullptr;
$String* XSLTErrorResources::WG_EMPTY_SECOND_ARG = nullptr;
$String* XSLTErrorResources::WG_PROCESSINGINSTRUCTION_NAME_CANT_BE_XML = nullptr;
$String* XSLTErrorResources::WG_PROCESSINGINSTRUCTION_NOTVALID_NCNAME = nullptr;
$String* XSLTErrorResources::WG_ILLEGAL_ATTRIBUTE_POSITION = nullptr;
$String* XSLTErrorResources::NO_MODIFICATION_ALLOWED_ERR = nullptr;
$String* XSLTErrorResources::BAD_CODE = nullptr;
$String* XSLTErrorResources::FORMAT_FAILED = nullptr;

void XSLTErrorResources::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* XSLTErrorResources::getContents() {
	$useLocalObjectStack();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			"ER0000"_s,
			"{0}"_s
		}),
		$$new($ObjectArray, {
			XSLTErrorResources::ER_NO_CURLYBRACE,
			"Error: Can not have \'{\' within expression"_s
		}),
		$$new($ObjectArray, {
			XSLTErrorResources::ER_ILLEGAL_ATTRIBUTE,
			"{0} has an illegal attribute: {1}"_s
		}),
		$$new($ObjectArray, {
			XSLTErrorResources::ER_NULL_SOURCENODE_APPLYIMPORTS,
			"sourceNode is null in xsl:apply-imports!"_s
		}),
		$$new($ObjectArray, {
			XSLTErrorResources::ER_CANNOT_ADD,
			"Can not add {0} to {1}"_s
		}),
		$$new($ObjectArray, {
			XSLTErrorResources::ER_NULL_SOURCENODE_HANDLEAPPLYTEMPLATES,
			"sourceNode is null in handleApplyTemplatesInstruction!"_s
		}),
		$$new($ObjectArray, {
			XSLTErrorResources::ER_NO_NAME_ATTRIB,
			"{0} must have a name attribute."_s
		}),
		$$new($ObjectArray, {
			XSLTErrorResources::ER_TEMPLATE_NOT_FOUND,
			"Could not find template named: {0}"_s
		}),
		$$new($ObjectArray, {
			XSLTErrorResources::ER_CANT_RESOLVE_NAME_AVT,
			"Could not resolve name AVT in xsl:call-template."_s
		}),
		$$new($ObjectArray, {
			XSLTErrorResources::ER_REQUIRES_ATTRIB,
			"{0} requires attribute: {1}"_s
		}),
		$$new($ObjectArray, {
			XSLTErrorResources::ER_MUST_HAVE_TEST_ATTRIB,
			"{0} must have a \'\'test\'\' attribute."_s
		}),
		$$new($ObjectArray, {
			XSLTErrorResources::ER_BAD_VAL_ON_LEVEL_ATTRIB,
			"Bad value on level attribute: {0}"_s
		}),
		$$new($ObjectArray, {
			XSLTErrorResources::ER_PROCESSINGINSTRUCTION_NAME_CANT_BE_XML,
			"processing-instruction name can not be \'xml\'"_s
		}),
		$$new($ObjectArray, {
			XSLTErrorResources::ER_PROCESSINGINSTRUCTION_NOTVALID_NCNAME,
			"processing-instruction name must be a valid NCName: {0}"_s
		}),
		$$new($ObjectArray, {
			XSLTErrorResources::ER_NEED_MATCH_ATTRIB,
			"{0} must have a match attribute if it has a mode."_s
		}),
		$$new($ObjectArray, {
			XSLTErrorResources::ER_NEED_NAME_OR_MATCH_ATTRIB,
			"{0} requires either a name or a match attribute."_s
		}),
		$$new($ObjectArray, {
			XSLTErrorResources::ER_CANT_RESOLVE_NSPREFIX,
			"Can not resolve namespace prefix: {0}"_s
		}),
		$$new($ObjectArray, {
			XSLTErrorResources::ER_ILLEGAL_VALUE,
			"xml:space has an illegal value: {0}"_s
		}),
		$$new($ObjectArray, {
			XSLTErrorResources::ER_NO_OWNERDOC,
			"Child node does not have an owner document!"_s
		}),
		$$new($ObjectArray, {
			XSLTErrorResources::ER_ELEMTEMPLATEELEM_ERR,
			"ElemTemplateElement error: {0}"_s
		}),
		$$new($ObjectArray, {
			XSLTErrorResources::ER_NULL_CHILD,
			"Trying to add a null child!"_s
		}),
		$$new($ObjectArray, {
			XSLTErrorResources::ER_NEED_SELECT_ATTRIB,
			"{0} requires a select attribute."_s
		}),
		$$new($ObjectArray, {
			XSLTErrorResources::ER_NEED_TEST_ATTRIB,
			"xsl:when must have a \'test\' attribute."_s
		}),
		$$new($ObjectArray, {
			XSLTErrorResources::ER_NEED_NAME_ATTRIB,
			"xsl:with-param must have a \'name\' attribute."_s
		}),
		$$new($ObjectArray, {
			XSLTErrorResources::ER_NO_CONTEXT_OWNERDOC,
			"context does not have an owner document!"_s
		}),
		$$new($ObjectArray, {
			XSLTErrorResources::ER_COULD_NOT_CREATE_XML_PROC_LIAISON,
			"Could not create XML TransformerFactory Liaison: {0}"_s
		}),
		$$new($ObjectArray, {
			XSLTErrorResources::ER_PROCESS_NOT_SUCCESSFUL,
			"Xalan: Process was not successful."_s
		}),
		$$new($ObjectArray, {
			XSLTErrorResources::ER_NOT_SUCCESSFUL,
			"Xalan: was not successful."_s
		}),
		$$new($ObjectArray, {
			XSLTErrorResources::ER_ENCODING_NOT_SUPPORTED,
			"Encoding not supported: {0}"_s
		}),
		$$new($ObjectArray, {
			XSLTErrorResources::ER_COULD_NOT_CREATE_TRACELISTENER,
			"Could not create TraceListener: {0}"_s
		}),
		$$new($ObjectArray, {
			XSLTErrorResources::ER_KEY_REQUIRES_NAME_ATTRIB,
			"xsl:key requires a \'name\' attribute!"_s
		}),
		$$new($ObjectArray, {
			XSLTErrorResources::ER_KEY_REQUIRES_MATCH_ATTRIB,
			"xsl:key requires a \'match\' attribute!"_s
		}),
		$$new($ObjectArray, {
			XSLTErrorResources::ER_KEY_REQUIRES_USE_ATTRIB,
			"xsl:key requires a \'use\' attribute!"_s
		}),
		$$new($ObjectArray, {
			XSLTErrorResources::ER_REQUIRES_ELEMENTS_ATTRIB,
			"(StylesheetHandler) {0} requires an \'\'elements\'\' attribute!"_s
		}),
		$$new($ObjectArray, {
			XSLTErrorResources::ER_MISSING_PREFIX_ATTRIB,
			"(StylesheetHandler) {0} attribute \'\'prefix\'\' is missing"_s
		}),
		$$new($ObjectArray, {
			XSLTErrorResources::ER_BAD_STYLESHEET_URL,
			"Stylesheet URL is bad: {0}"_s
		}),
		$$new($ObjectArray, {
			XSLTErrorResources::ER_FILE_NOT_FOUND,
			"Stylesheet file was not found: {0}"_s
		}),
		$$new($ObjectArray, {
			XSLTErrorResources::ER_IOEXCEPTION,
			"Had IO Exception with stylesheet file: {0}"_s
		}),
		$$new($ObjectArray, {
			XSLTErrorResources::ER_NO_HREF_ATTRIB,
			"(StylesheetHandler) Could not find href attribute for {0}"_s
		}),
		$$new($ObjectArray, {
			XSLTErrorResources::ER_STYLESHEET_INCLUDES_ITSELF,
			"(StylesheetHandler) {0} is directly or indirectly including itself!"_s
		}),
		$$new($ObjectArray, {
			XSLTErrorResources::ER_PROCESSINCLUDE_ERROR,
			"StylesheetHandler.processInclude error, {0}"_s
		}),
		$$new($ObjectArray, {
			XSLTErrorResources::ER_MISSING_LANG_ATTRIB,
			"(StylesheetHandler) {0} attribute \'\'lang\'\' is missing"_s
		}),
		$$new($ObjectArray, {
			XSLTErrorResources::ER_MISSING_CONTAINER_ELEMENT_COMPONENT,
			"(StylesheetHandler) misplaced {0} element?? Missing container element \'\'component\'\'"_s
		}),
		$$new($ObjectArray, {
			XSLTErrorResources::ER_CAN_ONLY_OUTPUT_TO_ELEMENT,
			"Can only output to an Element, DocumentFragment, Document, or PrintWriter."_s
		}),
		$$new($ObjectArray, {
			XSLTErrorResources::ER_PROCESS_ERROR,
			"StylesheetRoot.process error"_s
		}),
		$$new($ObjectArray, {
			XSLTErrorResources::ER_UNIMPLNODE_ERROR,
			"UnImplNode error: {0}"_s
		}),
		$$new($ObjectArray, {
			XSLTErrorResources::ER_NO_SELECT_EXPRESSION,
			"Error! Did not find xpath select expression (-select)."_s
		}),
		$$new($ObjectArray, {
			XSLTErrorResources::ER_CANNOT_SERIALIZE_XSLPROCESSOR,
			"Can not serialize an XSLProcessor!"_s
		}),
		$$new($ObjectArray, {
			XSLTErrorResources::ER_NO_INPUT_STYLESHEET,
			"Stylesheet input was not specified!"_s
		}),
		$$new($ObjectArray, {
			XSLTErrorResources::ER_FAILED_PROCESS_STYLESHEET,
			"Failed to process stylesheet!"_s
		}),
		$$new($ObjectArray, {
			XSLTErrorResources::ER_COULDNT_PARSE_DOC,
			"Could not parse {0} document!"_s
		}),
		$$new($ObjectArray, {
			XSLTErrorResources::ER_COULDNT_FIND_FRAGMENT,
			"Could not find fragment: {0}"_s
		}),
		$$new($ObjectArray, {
			XSLTErrorResources::ER_NODE_NOT_ELEMENT,
			"Node pointed to by fragment identifier was not an element: {0}"_s
		}),
		$$new($ObjectArray, {
			XSLTErrorResources::ER_FOREACH_NEED_MATCH_OR_NAME_ATTRIB,
			"for-each must have either a match or name attribute"_s
		}),
		$$new($ObjectArray, {
			XSLTErrorResources::ER_TEMPLATES_NEED_MATCH_OR_NAME_ATTRIB,
			"templates must have either a match or name attribute"_s
		}),
		$$new($ObjectArray, {
			XSLTErrorResources::ER_NO_CLONE_OF_DOCUMENT_FRAG,
			"No clone of a document fragment!"_s
		}),
		$$new($ObjectArray, {
			XSLTErrorResources::ER_CANT_CREATE_ITEM,
			"Can not create item in result tree: {0}"_s
		}),
		$$new($ObjectArray, {
			XSLTErrorResources::ER_XMLSPACE_ILLEGAL_VALUE,
			"xml:space in the source XML has an illegal value: {0}"_s
		}),
		$$new($ObjectArray, {
			XSLTErrorResources::ER_NO_XSLKEY_DECLARATION,
			"There is no xsl:key declaration for {0}!"_s
		}),
		$$new($ObjectArray, {
			XSLTErrorResources::ER_CANT_CREATE_URL,
			"Error! Cannot create url for: {0}"_s
		}),
		$$new($ObjectArray, {
			XSLTErrorResources::ER_XSLFUNCTIONS_UNSUPPORTED,
			"xsl:functions is unsupported"_s
		}),
		$$new($ObjectArray, {
			XSLTErrorResources::ER_PROCESSOR_ERROR,
			"XSLT TransformerFactory Error"_s
		}),
		$$new($ObjectArray, {
			XSLTErrorResources::ER_NOT_ALLOWED_INSIDE_STYLESHEET,
			"(StylesheetHandler) {0} not allowed inside a stylesheet!"_s
		}),
		$$new($ObjectArray, {
			XSLTErrorResources::ER_RESULTNS_NOT_SUPPORTED,
			"result-ns no longer supported!  Use xsl:output instead."_s
		}),
		$$new($ObjectArray, {
			XSLTErrorResources::ER_DEFAULTSPACE_NOT_SUPPORTED,
			"default-space no longer supported!  Use xsl:strip-space or xsl:preserve-space instead."_s
		}),
		$$new($ObjectArray, {
			XSLTErrorResources::ER_INDENTRESULT_NOT_SUPPORTED,
			"indent-result no longer supported!  Use xsl:output instead."_s
		}),
		$$new($ObjectArray, {
			XSLTErrorResources::ER_ILLEGAL_ATTRIB,
			"(StylesheetHandler) {0} has an illegal attribute: {1}"_s
		}),
		$$new($ObjectArray, {
			XSLTErrorResources::ER_UNKNOWN_XSL_ELEM,
			"Unknown XSL element: {0}"_s
		}),
		$$new($ObjectArray, {
			XSLTErrorResources::ER_BAD_XSLSORT_USE,
			"(StylesheetHandler) xsl:sort can only be used with xsl:apply-templates or xsl:for-each."_s
		}),
		$$new($ObjectArray, {
			XSLTErrorResources::ER_MISPLACED_XSLWHEN,
			"(StylesheetHandler) misplaced xsl:when!"_s
		}),
		$$new($ObjectArray, {
			XSLTErrorResources::ER_XSLWHEN_NOT_PARENTED_BY_XSLCHOOSE,
			"(StylesheetHandler) xsl:when not parented by xsl:choose!"_s
		}),
		$$new($ObjectArray, {
			XSLTErrorResources::ER_MISPLACED_XSLOTHERWISE,
			"(StylesheetHandler) misplaced xsl:otherwise!"_s
		}),
		$$new($ObjectArray, {
			XSLTErrorResources::ER_XSLOTHERWISE_NOT_PARENTED_BY_XSLCHOOSE,
			"(StylesheetHandler) xsl:otherwise not parented by xsl:choose!"_s
		}),
		$$new($ObjectArray, {
			XSLTErrorResources::ER_NOT_ALLOWED_INSIDE_TEMPLATE,
			"(StylesheetHandler) {0} is not allowed inside a template!"_s
		}),
		$$new($ObjectArray, {
			XSLTErrorResources::ER_UNKNOWN_EXT_NS_PREFIX,
			"(StylesheetHandler) {0} extension namespace prefix {1} unknown"_s
		}),
		$$new($ObjectArray, {
			XSLTErrorResources::ER_IMPORTS_AS_FIRST_ELEM,
			"(StylesheetHandler) Imports can only occur as the first elements in the stylesheet!"_s
		}),
		$$new($ObjectArray, {
			XSLTErrorResources::ER_IMPORTING_ITSELF,
			"(StylesheetHandler) {0} is directly or indirectly importing itself!"_s
		}),
		$$new($ObjectArray, {
			XSLTErrorResources::ER_XMLSPACE_ILLEGAL_VAL,
			"(StylesheetHandler) xml:space has an illegal value: {0}"_s
		}),
		$$new($ObjectArray, {
			XSLTErrorResources::ER_PROCESSSTYLESHEET_NOT_SUCCESSFUL,
			"processStylesheet not succesfull!"_s
		}),
		$$new($ObjectArray, {
			XSLTErrorResources::ER_SAX_EXCEPTION,
			"SAX Exception"_s
		}),
		$$new($ObjectArray, {
			XSLTErrorResources::ER_FUNCTION_NOT_SUPPORTED,
			"Function not supported!"_s
		}),
		$$new($ObjectArray, {
			XSLTErrorResources::ER_XSLT_ERROR,
			"XSLT Error"_s
		}),
		$$new($ObjectArray, {
			XSLTErrorResources::ER_CURRENCY_SIGN_ILLEGAL,
			"currency sign is not allowed in format pattern string"_s
		}),
		$$new($ObjectArray, {
			XSLTErrorResources::ER_DOCUMENT_FUNCTION_INVALID_IN_STYLESHEET_DOM,
			"Document function not supported in Stylesheet DOM!"_s
		}),
		$$new($ObjectArray, {
			XSLTErrorResources::ER_CANT_RESOLVE_PREFIX_OF_NON_PREFIX_RESOLVER,
			"Can\'t resolve prefix of non-Prefix resolver!"_s
		}),
		$$new($ObjectArray, {
			XSLTErrorResources::ER_REDIRECT_COULDNT_GET_FILENAME,
			"Redirect extension: Could not get filename - file or select attribute must return vald string."_s
		}),
		$$new($ObjectArray, {
			XSLTErrorResources::ER_CANNOT_BUILD_FORMATTERLISTENER_IN_REDIRECT,
			"Can not build FormatterListener in Redirect extension!"_s
		}),
		$$new($ObjectArray, {
			XSLTErrorResources::ER_INVALID_PREFIX_IN_EXCLUDERESULTPREFIX,
			"Prefix in exclude-result-prefixes is not valid: {0}"_s
		}),
		$$new($ObjectArray, {
			XSLTErrorResources::ER_MISSING_NS_URI,
			"Missing namespace URI for specified prefix"_s
		}),
		$$new($ObjectArray, {
			XSLTErrorResources::ER_MISSING_ARG_FOR_OPTION,
			"Missing argument for option: {0}"_s
		}),
		$$new($ObjectArray, {
			XSLTErrorResources::ER_INVALID_OPTION,
			"Invalid option: {0}"_s
		}),
		$$new($ObjectArray, {
			XSLTErrorResources::ER_MALFORMED_FORMAT_STRING,
			"Malformed format string: {0}"_s
		}),
		$$new($ObjectArray, {
			XSLTErrorResources::ER_STYLESHEET_REQUIRES_VERSION_ATTRIB,
			"xsl:stylesheet requires a \'version\' attribute!"_s
		}),
		$$new($ObjectArray, {
			XSLTErrorResources::ER_ILLEGAL_ATTRIBUTE_VALUE,
			"Attribute: {0} has an illegal value: {1}"_s
		}),
		$$new($ObjectArray, {
			XSLTErrorResources::ER_CHOOSE_REQUIRES_WHEN,
			"xsl:choose requires an xsl:when"_s
		}),
		$$new($ObjectArray, {
			XSLTErrorResources::ER_NO_APPLY_IMPORT_IN_FOR_EACH,
			"xsl:apply-imports not allowed in a xsl:for-each"_s
		}),
		$$new($ObjectArray, {
			XSLTErrorResources::ER_CANT_USE_DTM_FOR_OUTPUT,
			"Cannot use a DTMLiaison for an output DOM node... pass a com.sun.org.apache.xpath.internal.DOM2Helper instead!"_s
		}),
		$$new($ObjectArray, {
			XSLTErrorResources::ER_CANT_USE_DTM_FOR_INPUT,
			"Cannot use a DTMLiaison for a input DOM node... pass a com.sun.org.apache.xpath.internal.DOM2Helper instead!"_s
		}),
		$$new($ObjectArray, {
			XSLTErrorResources::ER_CALL_TO_EXT_FAILED,
			"Call to extension element failed: {0}"_s
		}),
		$$new($ObjectArray, {
			XSLTErrorResources::ER_PREFIX_MUST_RESOLVE,
			"Prefix must resolve to a namespace: {0}"_s
		}),
		$$new($ObjectArray, {
			XSLTErrorResources::ER_INVALID_UTF16_SURROGATE,
			"Invalid UTF-16 surrogate detected: {0} ?"_s
		}),
		$$new($ObjectArray, {
			XSLTErrorResources::ER_XSLATTRSET_USED_ITSELF,
			"xsl:attribute-set {0} used itself, which will cause an infinite loop."_s
		}),
		$$new($ObjectArray, {
			XSLTErrorResources::ER_CANNOT_MIX_XERCESDOM,
			"Can not mix non Xerces-DOM input with Xerces-DOM output!"_s
		}),
		$$new($ObjectArray, {
			XSLTErrorResources::ER_TOO_MANY_LISTENERS,
			"addTraceListenersToStylesheet - TooManyListenersException"_s
		}),
		$$new($ObjectArray, {
			XSLTErrorResources::ER_IN_ELEMTEMPLATEELEM_READOBJECT,
			"In ElemTemplateElement.readObject: {0}"_s
		}),
		$$new($ObjectArray, {
			XSLTErrorResources::ER_DUPLICATE_NAMED_TEMPLATE,
			"Found more than one template named: {0}"_s
		}),
		$$new($ObjectArray, {
			XSLTErrorResources::ER_INVALID_KEY_CALL,
			"Invalid function call: recursive key() calls are not allowed"_s
		}),
		$$new($ObjectArray, {
			XSLTErrorResources::ER_REFERENCING_ITSELF,
			"Variable {0} is directly or indirectly referencing itself!"_s
		}),
		$$new($ObjectArray, {
			XSLTErrorResources::ER_ILLEGAL_DOMSOURCE_INPUT,
			"The input node can not be null for a DOMSource for newTemplates!"_s
		}),
		$$new($ObjectArray, {
			XSLTErrorResources::ER_CLASS_NOT_FOUND_FOR_OPTION,
			"Class file not found for option {0}"_s
		}),
		$$new($ObjectArray, {
			XSLTErrorResources::ER_REQUIRED_ELEM_NOT_FOUND,
			"Required Element not found: {0}"_s
		}),
		$$new($ObjectArray, {
			XSLTErrorResources::ER_INPUT_CANNOT_BE_NULL,
			"InputStream cannot be null"_s
		}),
		$$new($ObjectArray, {
			XSLTErrorResources::ER_URI_CANNOT_BE_NULL,
			"URI cannot be null"_s
		}),
		$$new($ObjectArray, {
			XSLTErrorResources::ER_FILE_CANNOT_BE_NULL,
			"File cannot be null"_s
		}),
		$$new($ObjectArray, {
			XSLTErrorResources::ER_SOURCE_CANNOT_BE_NULL,
			"InputSource cannot be null"_s
		}),
		$$new($ObjectArray, {
			XSLTErrorResources::ER_CANNOT_INIT_BSFMGR,
			"Could not initialize BSF Manager"_s
		}),
		$$new($ObjectArray, {
			XSLTErrorResources::ER_CANNOT_CMPL_EXTENSN,
			"Could not compile extension"_s
		}),
		$$new($ObjectArray, {
			XSLTErrorResources::ER_CANNOT_CREATE_EXTENSN,
			"Could not create extension: {0} because of: {1}"_s
		}),
		$$new($ObjectArray, {
			XSLTErrorResources::ER_INSTANCE_MTHD_CALL_REQUIRES,
			"Instance method call to method {0} requires an Object instance as first argument"_s
		}),
		$$new($ObjectArray, {
			XSLTErrorResources::ER_INVALID_ELEMENT_NAME,
			"Invalid element name specified {0}"_s
		}),
		$$new($ObjectArray, {
			XSLTErrorResources::ER_ELEMENT_NAME_METHOD_STATIC,
			"Element name method must be static {0}"_s
		}),
		$$new($ObjectArray, {
			XSLTErrorResources::ER_EXTENSION_FUNC_UNKNOWN,
			"Extension function {0} : {1} is unknown"_s
		}),
		$$new($ObjectArray, {
			XSLTErrorResources::ER_MORE_MATCH_CONSTRUCTOR,
			"More than one best match for constructor for {0}"_s
		}),
		$$new($ObjectArray, {
			XSLTErrorResources::ER_MORE_MATCH_METHOD,
			"More than one best match for method {0}"_s
		}),
		$$new($ObjectArray, {
			XSLTErrorResources::ER_MORE_MATCH_ELEMENT,
			"More than one best match for element method {0}"_s
		}),
		$$new($ObjectArray, {
			XSLTErrorResources::ER_INVALID_CONTEXT_PASSED,
			"Invalid context passed to evaluate {0}"_s
		}),
		$$new($ObjectArray, {
			XSLTErrorResources::ER_POOL_EXISTS,
			"Pool already exists"_s
		}),
		$$new($ObjectArray, {
			XSLTErrorResources::ER_NO_DRIVER_NAME,
			"No driver Name specified"_s
		}),
		$$new($ObjectArray, {
			XSLTErrorResources::ER_NO_URL,
			"No URL specified"_s
		}),
		$$new($ObjectArray, {
			XSLTErrorResources::ER_POOL_SIZE_LESSTHAN_ONE,
			"Pool size is less than one!"_s
		}),
		$$new($ObjectArray, {
			XSLTErrorResources::ER_INVALID_DRIVER,
			"Invalid driver name specified!"_s
		}),
		$$new($ObjectArray, {
			XSLTErrorResources::ER_NO_STYLESHEETROOT,
			"Did not find the stylesheet root!"_s
		}),
		$$new($ObjectArray, {
			XSLTErrorResources::ER_ILLEGAL_XMLSPACE_VALUE,
			"Illegal value for xml:space"_s
		}),
		$$new($ObjectArray, {
			XSLTErrorResources::ER_PROCESSFROMNODE_FAILED,
			"processFromNode failed"_s
		}),
		$$new($ObjectArray, {
			XSLTErrorResources::ER_RESOURCE_COULD_NOT_LOAD,
			"The resource [ {0} ] could not load: {1} \n {2} \t {3}"_s
		}),
		$$new($ObjectArray, {
			XSLTErrorResources::ER_BUFFER_SIZE_LESSTHAN_ZERO,
			"Buffer size <=0"_s
		}),
		$$new($ObjectArray, {
			XSLTErrorResources::ER_UNKNOWN_ERROR_CALLING_EXTENSION,
			"Unknown error when calling extension"_s
		}),
		$$new($ObjectArray, {
			XSLTErrorResources::ER_NO_NAMESPACE_DECL,
			"Prefix {0} does not have a corresponding namespace declaration"_s
		}),
		$$new($ObjectArray, {
			XSLTErrorResources::ER_ELEM_CONTENT_NOT_ALLOWED,
			"Element content not allowed for lang=javaclass {0}"_s
		}),
		$$new($ObjectArray, {
			XSLTErrorResources::ER_STYLESHEET_DIRECTED_TERMINATION,
			"Stylesheet directed termination"_s
		}),
		$$new($ObjectArray, {
			XSLTErrorResources::ER_ONE_OR_TWO,
			"1 or 2"_s
		}),
		$$new($ObjectArray, {
			XSLTErrorResources::ER_TWO_OR_THREE,
			"2 or 3"_s
		}),
		$$new($ObjectArray, {
			XSLTErrorResources::ER_COULD_NOT_LOAD_RESOURCE,
			"Could not load {0} (check CLASSPATH), now using just the defaults"_s
		}),
		$$new($ObjectArray, {
			XSLTErrorResources::ER_CANNOT_INIT_DEFAULT_TEMPLATES,
			"Cannot initialize default templates"_s
		}),
		$$new($ObjectArray, {
			XSLTErrorResources::ER_RESULT_NULL,
			"Result should not be null"_s
		}),
		$$new($ObjectArray, {
			XSLTErrorResources::ER_RESULT_COULD_NOT_BE_SET,
			"Result could not be set"_s
		}),
		$$new($ObjectArray, {
			XSLTErrorResources::ER_NO_OUTPUT_SPECIFIED,
			"No output specified"_s
		}),
		$$new($ObjectArray, {
			XSLTErrorResources::ER_CANNOT_TRANSFORM_TO_RESULT_TYPE,
			"Can\'\'t transform to a Result of type {0}"_s
		}),
		$$new($ObjectArray, {
			XSLTErrorResources::ER_CANNOT_TRANSFORM_SOURCE_TYPE,
			"Can\'\'t transform a Source of type {0}"_s
		}),
		$$new($ObjectArray, {
			XSLTErrorResources::ER_NULL_CONTENT_HANDLER,
			"Null content handler"_s
		}),
		$$new($ObjectArray, {
			XSLTErrorResources::ER_NULL_ERROR_HANDLER,
			"Null error handler"_s
		}),
		$$new($ObjectArray, {
			XSLTErrorResources::ER_CANNOT_CALL_PARSE,
			"parse can not be called if the ContentHandler has not been set"_s
		}),
		$$new($ObjectArray, {
			XSLTErrorResources::ER_NO_PARENT_FOR_FILTER,
			"No parent for filter"_s
		}),
		$$new($ObjectArray, {
			XSLTErrorResources::ER_NO_STYLESHEET_IN_MEDIA,
			"No stylesheet found in: {0}, media= {1}"_s
		}),
		$$new($ObjectArray, {
			XSLTErrorResources::ER_NO_STYLESHEET_PI,
			"No xml-stylesheet PI found in: {0}"_s
		}),
		$$new($ObjectArray, {
			XSLTErrorResources::ER_NOT_SUPPORTED,
			"Not supported: {0}"_s
		}),
		$$new($ObjectArray, {
			XSLTErrorResources::ER_PROPERTY_VALUE_BOOLEAN,
			"Value for property {0} should be a Boolean instance"_s
		}),
		$$new($ObjectArray, {
			XSLTErrorResources::ER_COULD_NOT_FIND_EXTERN_SCRIPT,
			"Could not get to external script at {0}"_s
		}),
		$$new($ObjectArray, {
			XSLTErrorResources::ER_RESOURCE_COULD_NOT_FIND,
			"The resource [ {0} ] could not be found.\n {1}"_s
		}),
		$$new($ObjectArray, {
			XSLTErrorResources::ER_OUTPUT_PROPERTY_NOT_RECOGNIZED,
			"Output property not recognized: {0}"_s
		}),
		$$new($ObjectArray, {
			XSLTErrorResources::ER_FAILED_CREATING_ELEMLITRSLT,
			"Failed creating ElemLiteralResult instance"_s
		}),
		$$new($ObjectArray, {
			XSLTErrorResources::ER_VALUE_SHOULD_BE_NUMBER,
			"Value for {0} should contain a parsable number"_s
		}),
		$$new($ObjectArray, {
			XSLTErrorResources::ER_VALUE_SHOULD_EQUAL,
			"Value for {0} should equal yes or no"_s
		}),
		$$new($ObjectArray, {
			XSLTErrorResources::ER_FAILED_CALLING_METHOD,
			"Failed calling {0} method"_s
		}),
		$$new($ObjectArray, {
			XSLTErrorResources::ER_FAILED_CREATING_ELEMTMPL,
			"Failed creating ElemTemplateElement instance"_s
		}),
		$$new($ObjectArray, {
			XSLTErrorResources::ER_CHARS_NOT_ALLOWED,
			"Characters are not allowed at this point in the document"_s
		}),
		$$new($ObjectArray, {
			XSLTErrorResources::ER_ATTR_NOT_ALLOWED,
			"\"{0}\" attribute is not allowed on the {1} element!"_s
		}),
		$$new($ObjectArray, {
			XSLTErrorResources::ER_BAD_VALUE,
			"{0} bad value {1} "_s
		}),
		$$new($ObjectArray, {
			XSLTErrorResources::ER_ATTRIB_VALUE_NOT_FOUND,
			"{0} attribute value not found "_s
		}),
		$$new($ObjectArray, {
			XSLTErrorResources::ER_ATTRIB_VALUE_NOT_RECOGNIZED,
			"{0} attribute value not recognized "_s
		}),
		$$new($ObjectArray, {
			XSLTErrorResources::ER_NULL_URI_NAMESPACE,
			"Attempting to generate a namespace prefix with a null URI"_s
		}),
		$$new($ObjectArray, {
			XSLTErrorResources::ER_NUMBER_TOO_BIG,
			"Attempting to format a number bigger than the largest Long integer"_s
		}),
		$$new($ObjectArray, {
			XSLTErrorResources::ER_CANNOT_FIND_SAX1_DRIVER,
			"Cannot find SAX1 driver class {0}"_s
		}),
		$$new($ObjectArray, {
			XSLTErrorResources::ER_SAX1_DRIVER_NOT_LOADED,
			"SAX1 driver class {0} found but cannot be loaded"_s
		}),
		$$new($ObjectArray, {
			XSLTErrorResources::ER_SAX1_DRIVER_NOT_INSTANTIATED,
			"SAX1 driver class {0} loaded but cannot be instantiated"_s
		}),
		$$new($ObjectArray, {
			XSLTErrorResources::ER_SAX1_DRIVER_NOT_IMPLEMENT_PARSER,
			"SAX1 driver class {0} does not implement org.xml.sax.Parser"_s
		}),
		$$new($ObjectArray, {
			XSLTErrorResources::ER_PARSER_PROPERTY_NOT_SPECIFIED,
			"System property org.xml.sax.parser not specified"_s
		}),
		$$new($ObjectArray, {
			XSLTErrorResources::ER_PARSER_ARG_CANNOT_BE_NULL,
			"Parser argument must not be null"_s
		}),
		$$new($ObjectArray, {
			XSLTErrorResources::ER_FEATURE,
			"Feature: {0}"_s
		}),
		$$new($ObjectArray, {
			XSLTErrorResources::ER_PROPERTY,
			"Property: {0}"_s
		}),
		$$new($ObjectArray, {
			XSLTErrorResources::ER_NULL_ENTITY_RESOLVER,
			"Null entity resolver"_s
		}),
		$$new($ObjectArray, {
			XSLTErrorResources::ER_NULL_DTD_HANDLER,
			"Null DTD handler"_s
		}),
		$$new($ObjectArray, {
			XSLTErrorResources::ER_NO_DRIVER_NAME_SPECIFIED,
			"No Driver Name Specified!"_s
		}),
		$$new($ObjectArray, {
			XSLTErrorResources::ER_NO_URL_SPECIFIED,
			"No URL Specified!"_s
		}),
		$$new($ObjectArray, {
			XSLTErrorResources::ER_POOLSIZE_LESS_THAN_ONE,
			"Pool size is less than 1!"_s
		}),
		$$new($ObjectArray, {
			XSLTErrorResources::ER_INVALID_DRIVER_NAME,
			"Invalid Driver Name Specified!"_s
		}),
		$$new($ObjectArray, {
			XSLTErrorResources::ER_ERRORLISTENER,
			"ErrorListener"_s
		}),
		$$new($ObjectArray, {
			XSLTErrorResources::ER_ASSERT_NO_TEMPLATE_PARENT,
			"Programmer\'s error! The expression has no ElemTemplateElement parent!"_s
		}),
		$$new($ObjectArray, {
			XSLTErrorResources::ER_ASSERT_REDUNDENT_EXPR_ELIMINATOR,
			"Programmer\'\'s assertion in RedundentExprEliminator: {0}"_s
		}),
		$$new($ObjectArray, {
			XSLTErrorResources::ER_NOT_ALLOWED_IN_POSITION,
			"{0} is not allowed in this position in the stylesheet!"_s
		}),
		$$new($ObjectArray, {
			XSLTErrorResources::ER_NONWHITESPACE_NOT_ALLOWED_IN_POSITION,
			"Non-whitespace text is not allowed in this position in the stylesheet!"_s
		}),
		$$new($ObjectArray, {
			XSLTErrorResources::INVALID_TCHAR,
			"Illegal value: {1} used for CHAR attribute: {0}.  An attribute of type CHAR must be only 1 character!"_s
		}),
		$$new($ObjectArray, {
			XSLTErrorResources::INVALID_QNAME,
			"Illegal value: {1} used for QNAME attribute: {0}"_s
		}),
		$$new($ObjectArray, {
			XSLTErrorResources::INVALID_ENUM,
			"Illegal value: {1} used for ENUM attribute: {0}.  Valid values are: {2}."_s
		}),
		$$new($ObjectArray, {
			XSLTErrorResources::INVALID_NMTOKEN,
			"Illegal value: {1} used for NMTOKEN attribute: {0} "_s
		}),
		$$new($ObjectArray, {
			XSLTErrorResources::INVALID_NCNAME,
			"Illegal value: {1} used for NCNAME attribute: {0} "_s
		}),
		$$new($ObjectArray, {
			XSLTErrorResources::INVALID_BOOLEAN,
			"Illegal value: {1} used for boolean attribute: {0} "_s
		}),
		$$new($ObjectArray, {
			XSLTErrorResources::INVALID_NUMBER,
			"Illegal value: {1} used for number attribute: {0} "_s
		}),
		$$new($ObjectArray, {
			XSLTErrorResources::ER_ARG_LITERAL,
			"Argument to {0} in match pattern must be a literal."_s
		}),
		$$new($ObjectArray, {
			XSLTErrorResources::ER_DUPLICATE_GLOBAL_VAR,
			"Duplicate global variable declaration."_s
		}),
		$$new($ObjectArray, {
			XSLTErrorResources::ER_DUPLICATE_VAR,
			"Duplicate variable declaration."_s
		}),
		$$new($ObjectArray, {
			XSLTErrorResources::ER_TEMPLATE_NAME_MATCH,
			"xsl:template must have a name or match attribute (or both)"_s
		}),
		$$new($ObjectArray, {
			XSLTErrorResources::ER_INVALID_PREFIX,
			"Prefix in exclude-result-prefixes is not valid: {0}"_s
		}),
		$$new($ObjectArray, {
			XSLTErrorResources::ER_NO_ATTRIB_SET,
			"attribute-set named {0} does not exist"_s
		}),
		$$new($ObjectArray, {
			XSLTErrorResources::ER_FUNCTION_NOT_FOUND,
			"The function named {0} does not exist"_s
		}),
		$$new($ObjectArray, {
			XSLTErrorResources::ER_CANT_HAVE_CONTENT_AND_SELECT,
			"The {0} element must not have both content and a select attribute."_s
		}),
		$$new($ObjectArray, {
			XSLTErrorResources::ER_INVALID_SET_PARAM_VALUE,
			"The value of param {0} must be a valid Java Object"_s
		}),
		$$new($ObjectArray, {
			XSLTErrorResources::ER_INVALID_NAMESPACE_URI_VALUE_FOR_RESULT_PREFIX_FOR_DEFAULT,
			"The result-prefix attribute of an xsl:namespace-alias element has the value \'#default\', but there is no declaration of the default namespace in scope for the element"_s
		}),
		$$new($ObjectArray, {
			XSLTErrorResources::ER_INVALID_NAMESPACE_URI_VALUE_FOR_RESULT_PREFIX,
			"The result-prefix attribute of an xsl:namespace-alias element has the value \'\'{0}\'\', but there is no namespace declaration for the prefix \'\'{0}\'\' in scope for the element."_s
		}),
		$$new($ObjectArray, {
			XSLTErrorResources::ER_SET_FEATURE_NULL_NAME,
			"The feature name cannot be null in TransformerFactory.setFeature(String name, boolean value)."_s
		}),
		$$new($ObjectArray, {
			XSLTErrorResources::ER_GET_FEATURE_NULL_NAME,
			"The feature name cannot be null in TransformerFactory.getFeature(String name)."_s
		}),
		$$new($ObjectArray, {
			XSLTErrorResources::ER_UNSUPPORTED_FEATURE,
			"Cannot set the feature \'\'{0}\'\' on this TransformerFactory."_s
		}),
		$$new($ObjectArray, {
			XSLTErrorResources::ER_EXTENSION_ELEMENT_NOT_ALLOWED_IN_SECURE_PROCESSING,
			"Use of the extension element \'\'{0}\'\' is not allowed when the secure processing feature is set to true."_s
		}),
		$$new($ObjectArray, {
			XSLTErrorResources::ER_NAMESPACE_CONTEXT_NULL_NAMESPACE,
			"Cannot get the prefix for a null namespace uri."_s
		}),
		$$new($ObjectArray, {
			XSLTErrorResources::ER_NAMESPACE_CONTEXT_NULL_PREFIX,
			"Cannot get the namespace uri for null prefix."_s
		}),
		$$new($ObjectArray, {
			XSLTErrorResources::ER_XPATH_RESOLVER_NULL_QNAME,
			"The function name cannot be null."_s
		}),
		$$new($ObjectArray, {
			XSLTErrorResources::ER_XPATH_RESOLVER_NEGATIVE_ARITY,
			"The arity cannot be negative."_s
		}),
		$$new($ObjectArray, {
			XSLTErrorResources::WG_FOUND_CURLYBRACE,
			"Found \'}\' but no attribute template open!"_s
		}),
		$$new($ObjectArray, {
			XSLTErrorResources::WG_COUNT_ATTRIB_MATCHES_NO_ANCESTOR,
			"Warning: count attribute does not match an ancestor in xsl:number! Target = {0}"_s
		}),
		$$new($ObjectArray, {
			XSLTErrorResources::WG_EXPR_ATTRIB_CHANGED_TO_SELECT,
			"Old syntax: The name of the \'expr\' attribute has been changed to \'select\'."_s
		}),
		$$new($ObjectArray, {
			XSLTErrorResources::WG_NO_LOCALE_IN_FORMATNUMBER,
			"Xalan doesn\'t yet handle the locale name in the format-number function."_s
		}),
		$$new($ObjectArray, {
			XSLTErrorResources::WG_LOCALE_NOT_FOUND,
			"Warning: Could not find locale for xml:lang={0}"_s
		}),
		$$new($ObjectArray, {
			XSLTErrorResources::WG_CANNOT_MAKE_URL_FROM,
			"Can not make URL from: {0}"_s
		}),
		$$new($ObjectArray, {
			XSLTErrorResources::WG_CANNOT_LOAD_REQUESTED_DOC,
			"Can not load requested doc: {0}"_s
		}),
		$$new($ObjectArray, {
			XSLTErrorResources::WG_CANNOT_FIND_COLLATOR,
			"Could not find Collator for <sort xml:lang={0}"_s
		}),
		$$new($ObjectArray, {
			XSLTErrorResources::WG_FUNCTIONS_SHOULD_USE_URL,
			"Old syntax: the functions instruction should use a url of {0}"_s
		}),
		$$new($ObjectArray, {
			XSLTErrorResources::WG_ENCODING_NOT_SUPPORTED_USING_UTF8,
			"encoding not supported: {0}, using UTF-8"_s
		}),
		$$new($ObjectArray, {
			XSLTErrorResources::WG_ENCODING_NOT_SUPPORTED_USING_JAVA,
			"encoding not supported: {0}, using Java {1}"_s
		}),
		$$new($ObjectArray, {
			XSLTErrorResources::WG_SPECIFICITY_CONFLICTS,
			"Specificity conflicts found: {0} Last found in stylesheet will be used."_s
		}),
		$$new($ObjectArray, {
			XSLTErrorResources::WG_PARSING_AND_PREPARING,
			"========= Parsing and preparing {0} =========="_s
		}),
		$$new($ObjectArray, {
			XSLTErrorResources::WG_ATTR_TEMPLATE,
			"Attr Template, {0}"_s
		}),
		$$new($ObjectArray, {
			XSLTErrorResources::WG_CONFLICT_BETWEEN_XSLSTRIPSPACE_AND_XSLPRESERVESPACE,
			"Match conflict between xsl:strip-space and xsl:preserve-space"_s
		}),
		$$new($ObjectArray, {
			XSLTErrorResources::WG_ATTRIB_NOT_HANDLED,
			"Xalan does not yet handle the {0} attribute!"_s
		}),
		$$new($ObjectArray, {
			XSLTErrorResources::WG_NO_DECIMALFORMAT_DECLARATION,
			"No declaration found for decimal format: {0}"_s
		}),
		$$new($ObjectArray, {
			XSLTErrorResources::WG_OLD_XSLT_NS,
			"Missing or incorrect XSLT Namespace. "_s
		}),
		$$new($ObjectArray, {
			XSLTErrorResources::WG_ONE_DEFAULT_XSLDECIMALFORMAT_ALLOWED,
			"Only one default xsl:decimal-format declaration is allowed."_s
		}),
		$$new($ObjectArray, {
			XSLTErrorResources::WG_XSLDECIMALFORMAT_NAMES_MUST_BE_UNIQUE,
			"xsl:decimal-format names must be unique. Name \"{0}\" has been duplicated."_s
		}),
		$$new($ObjectArray, {
			XSLTErrorResources::WG_ILLEGAL_ATTRIBUTE,
			"{0} has an illegal attribute: {1}"_s
		}),
		$$new($ObjectArray, {
			XSLTErrorResources::WG_COULD_NOT_RESOLVE_PREFIX,
			"Could not resolve namespace prefix: {0}. The node will be ignored."_s
		}),
		$$new($ObjectArray, {
			XSLTErrorResources::WG_STYLESHEET_REQUIRES_VERSION_ATTRIB,
			"xsl:stylesheet requires a \'version\' attribute!"_s
		}),
		$$new($ObjectArray, {
			XSLTErrorResources::WG_ILLEGAL_ATTRIBUTE_NAME,
			"Illegal attribute name: {0}"_s
		}),
		$$new($ObjectArray, {
			XSLTErrorResources::WG_ILLEGAL_ATTRIBUTE_VALUE,
			"Illegal value used for attribute {0}: {1}"_s
		}),
		$$new($ObjectArray, {
			XSLTErrorResources::WG_EMPTY_SECOND_ARG,
			"Resulting nodeset from second argument of document function is empty. Return an empty node-set."_s
		}),
		$$new($ObjectArray, {
			XSLTErrorResources::WG_PROCESSINGINSTRUCTION_NAME_CANT_BE_XML,
			"The value of the \'name\' attribute of xsl:processing-instruction name must not be \'xml\'"_s
		}),
		$$new($ObjectArray, {
			XSLTErrorResources::WG_PROCESSINGINSTRUCTION_NOTVALID_NCNAME,
			"The value of the \'\'name\'\' attribute of xsl:processing-instruction must be a valid NCName: {0}"_s
		}),
		$$new($ObjectArray, {
			XSLTErrorResources::WG_ILLEGAL_ATTRIBUTE_POSITION,
			"Cannot add attribute {0} after child nodes or before an element is produced.  Attribute will be ignored."_s
		}),
		$$new($ObjectArray, {
			XSLTErrorResources::NO_MODIFICATION_ALLOWED_ERR,
			"An attempt is made to modify an object where modifications are not allowed."_s
		}),
		$$new($ObjectArray, {
			"ui_language"_s,
			"en"_s
		}),
		$$new($ObjectArray, {
			"help_language"_s,
			"en"_s
		}),
		$$new($ObjectArray, {
			"language"_s,
			"en"_s
		}),
		$$new($ObjectArray, {
			"BAD_CODE"_s,
			"Parameter to createMessage was out of bounds"_s
		}),
		$$new($ObjectArray, {
			"FORMAT_FAILED"_s,
			"Exception thrown during messageFormat call"_s
		}),
		$$new($ObjectArray, {
			"version"_s,
			">>>>>>> Xalan Version "_s
		}),
		$$new($ObjectArray, {
			"version2"_s,
			"<<<<<<<"_s
		}),
		$$new($ObjectArray, {
			"yes"_s,
			"yes"_s
		}),
		$$new($ObjectArray, {
			"line"_s,
			"Line #"_s
		}),
		$$new($ObjectArray, {
			"column"_s,
			"Column #"_s
		}),
		$$new($ObjectArray, {
			"xsldone"_s,
			"XSLProcessor: done"_s
		}),
		$$new($ObjectArray, {
			"xslProc_option"_s,
			"Xalan-J command line Process class options:"_s
		}),
		$$new($ObjectArray, {
			"xslProc_option"_s,
			"Xalan-J command line Process class options:"_s
		}),
		$$new($ObjectArray, {
			"xslProc_invalid_xsltc_option"_s,
			"The option {0} is not supported in XSLTC mode."_s
		}),
		$$new($ObjectArray, {
			"xslProc_invalid_xalan_option"_s,
			"The option {0} can only be used with -XSLTC."_s
		}),
		$$new($ObjectArray, {
			"xslProc_no_input"_s,
			"Error: No stylesheet or input xml is specified. Run this command without any option for usage instructions."_s
		}),
		$$new($ObjectArray, {
			"xslProc_common_options"_s,
			"-Common Options-"_s
		}),
		$$new($ObjectArray, {
			"xslProc_xalan_options"_s,
			"-Options for Xalan-"_s
		}),
		$$new($ObjectArray, {
			"xslProc_xsltc_options"_s,
			"-Options for XSLTC-"_s
		}),
		$$new($ObjectArray, {
			"xslProc_return_to_continue"_s,
			"(press <return> to continue)"_s
		}),
		$$new($ObjectArray, {
			"optionXSLTC"_s,
			"   [-XSLTC (use XSLTC for transformation)]"_s
		}),
		$$new($ObjectArray, {
			"optionIN"_s,
			"   [-IN inputXMLURL]"_s
		}),
		$$new($ObjectArray, {
			"optionXSL"_s,
			"   [-XSL XSLTransformationURL]"_s
		}),
		$$new($ObjectArray, {
			"optionOUT"_s,
			"   [-OUT outputFileName]"_s
		}),
		$$new($ObjectArray, {
			"optionLXCIN"_s,
			"   [-LXCIN compiledStylesheetFileNameIn]"_s
		}),
		$$new($ObjectArray, {
			"optionLXCOUT"_s,
			"   [-LXCOUT compiledStylesheetFileNameOutOut]"_s
		}),
		$$new($ObjectArray, {
			"optionPARSER"_s,
			"   [-PARSER fully qualified class name of parser liaison]"_s
		}),
		$$new($ObjectArray, {
			"optionE"_s,
			"   [-E (Do not expand entity refs)]"_s
		}),
		$$new($ObjectArray, {
			"optionV"_s,
			"   [-E (Do not expand entity refs)]"_s
		}),
		$$new($ObjectArray, {
			"optionQC"_s,
			"   [-QC (Quiet Pattern Conflicts Warnings)]"_s
		}),
		$$new($ObjectArray, {
			"optionQ"_s,
			"   [-Q  (Quiet Mode)]"_s
		}),
		$$new($ObjectArray, {
			"optionLF"_s,
			"   [-LF (Use linefeeds only on output {default is CR/LF})]"_s
		}),
		$$new($ObjectArray, {
			"optionCR"_s,
			"   [-CR (Use carriage returns only on output {default is CR/LF})]"_s
		}),
		$$new($ObjectArray, {
			"optionESCAPE"_s,
			"   [-ESCAPE (Which characters to escape {default is <>&\"\'\\r\\n}]"_s
		}),
		$$new($ObjectArray, {
			"optionINDENT"_s,
			"   [-INDENT (Control how many spaces to indent {default is 0})]"_s
		}),
		$$new($ObjectArray, {
			"optionTT"_s,
			"   [-TT (Trace the templates as they are being called.)]"_s
		}),
		$$new($ObjectArray, {
			"optionTG"_s,
			"   [-TG (Trace each generation event.)]"_s
		}),
		$$new($ObjectArray, {
			"optionTS"_s,
			"   [-TS (Trace each selection event.)]"_s
		}),
		$$new($ObjectArray, {
			"optionTTC"_s,
			"   [-TTC (Trace the template children as they are being processed.)]"_s
		}),
		$$new($ObjectArray, {
			"optionTCLASS"_s,
			"   [-TCLASS (TraceListener class for trace extensions.)]"_s
		}),
		$$new($ObjectArray, {
			"optionVALIDATE"_s,
			"   [-VALIDATE (Set whether validation occurs.  Validation is off by default.)]"_s
		}),
		$$new($ObjectArray, {
			"optionEDUMP"_s,
			"   [-EDUMP {optional filename} (Do stackdump on error.)]"_s
		}),
		$$new($ObjectArray, {
			"optionXML"_s,
			"   [-XML (Use XML formatter and add XML header.)]"_s
		}),
		$$new($ObjectArray, {
			"optionTEXT"_s,
			"   [-TEXT (Use simple Text formatter.)]"_s
		}),
		$$new($ObjectArray, {
			"optionHTML"_s,
			"   [-HTML (Use HTML formatter.)]"_s
		}),
		$$new($ObjectArray, {
			"optionPARAM"_s,
			"   [-PARAM name expression (Set a stylesheet parameter)]"_s
		}),
		$$new($ObjectArray, {
			"noParsermsg1"_s,
			"XSL Process was not successful."_s
		}),
		$$new($ObjectArray, {
			"noParsermsg2"_s,
			"** Could not find parser **"_s
		}),
		$$new($ObjectArray, {
			"noParsermsg3"_s,
			"Please check your classpath."_s
		}),
		$$new($ObjectArray, {
			"noParsermsg4"_s,
			"If you don\'t have IBM\'s XML Parser for Java, you can download it from"_s
		}),
		$$new($ObjectArray, {
			"noParsermsg5"_s,
			"IBM\'s AlphaWorks: http://www.alphaworks.ibm.com/formula/xml"_s
		}),
		$$new($ObjectArray, {
			"optionURIRESOLVER"_s,
			"   [-URIRESOLVER full class name (URIResolver to be used to resolve URIs)]"_s
		}),
		$$new($ObjectArray, {
			"optionENTITYRESOLVER"_s,
			"   [-ENTITYRESOLVER full class name (EntityResolver to be used to resolve entities)]"_s
		}),
		$$new($ObjectArray, {
			"optionCONTENTHANDLER"_s,
			"   [-CONTENTHANDLER full class name (ContentHandler to be used to serialize output)]"_s
		}),
		$$new($ObjectArray, {
			"optionLINENUMBERS"_s,
			"   [-L use line numbers for source document]"_s
		}),
		$$new($ObjectArray, {
			"optionSECUREPROCESSING"_s,
			"   [-SECURE (set the secure processing feature to true.)]"_s
		}),
		$$new($ObjectArray, {
			"optionMEDIA"_s,
			"   [-MEDIA mediaType (use media attribute to find stylesheet associated with a document.)]"_s
		}),
		$$new($ObjectArray, {
			"optionFLAVOR"_s,
			"   [-FLAVOR flavorName (Explicitly use s2s=SAX or d2d=DOM to do transform.)] "_s
		}),
		$$new($ObjectArray, {
			"optionDIAG"_s,
			"   [-DIAG (Print overall milliseconds transform took.)]"_s
		}),
		$$new($ObjectArray, {
			"optionINCREMENTAL"_s,
			"   [-INCREMENTAL (request incremental DTM construction by setting http://xml.apache.org/xalan/features/incremental true.)]"_s
		}),
		$$new($ObjectArray, {
			"optionNOOPTIMIMIZE"_s,
			"   [-NOOPTIMIMIZE (request no stylesheet optimization processing by setting http://xml.apache.org/xalan/features/optimize false.)]"_s
		}),
		$$new($ObjectArray, {
			"optionRL"_s,
			"   [-RL recursionlimit (assert numeric limit on stylesheet recursion depth.)]"_s
		}),
		$$new($ObjectArray, {
			"optionXO"_s,
			"   [-XO [transletName] (assign the name to the generated translet)]"_s
		}),
		$$new($ObjectArray, {
			"optionXD"_s,
			"   [-XD destinationDirectory (specify a destination directory for translet)]"_s
		}),
		$$new($ObjectArray, {
			"optionXJ"_s,
			"   [-XJ jarfile (packages translet classes into a jar file of name <jarfile>)]"_s
		}),
		$$new($ObjectArray, {
			"optionXP"_s,
			"   [-XP package (specifies a package name prefix for all generated translet classes)]"_s
		}),
		$$new($ObjectArray, {
			"optionXN"_s,
			"   [-XN (enables template inlining)]"_s
		}),
		$$new($ObjectArray, {
			"optionXX"_s,
			"   [-XX (turns on additional debugging message output)]"_s
		}),
		$$new($ObjectArray, {
			"optionXT"_s,
			"   [-XT (use translet to transform if possible)]"_s
		}),
		$$new($ObjectArray, {
			"diagTiming"_s,
			" --------- Transform of {0} via {1} took {2} ms"_s
		}),
		$$new($ObjectArray, {
			"recursionTooDeep"_s,
			"Template nesting too deep. nesting = {0}, template {1} {2}"_s
		}),
		$$new($ObjectArray, {
			"nameIs"_s,
			"name is"_s
		}),
		$$new($ObjectArray, {
			"matchPatternIs"_s,
			"match pattern is"_s
		})
	});
}

XSLTErrorResources::XSLTErrorResources() {
}

void XSLTErrorResources::clinit$($Class* clazz) {
	$assignStatic(XSLTErrorResources::ER_INVALID_NAMESPACE_URI_VALUE_FOR_RESULT_PREFIX, "ER_INVALID_SET_NAMESPACE_URI_VALUE_FOR_RESULT_PREFIX"_s);
	$assignStatic(XSLTErrorResources::ER_INVALID_NAMESPACE_URI_VALUE_FOR_RESULT_PREFIX_FOR_DEFAULT, "ER_INVALID_NAMESPACE_URI_VALUE_FOR_RESULT_PREFIX_FOR_DEFAULT"_s);
	$assignStatic(XSLTErrorResources::ER_NO_CURLYBRACE, "ER_NO_CURLYBRACE"_s);
	$assignStatic(XSLTErrorResources::ER_FUNCTION_NOT_SUPPORTED, "ER_FUNCTION_NOT_SUPPORTED"_s);
	$assignStatic(XSLTErrorResources::ER_ILLEGAL_ATTRIBUTE, "ER_ILLEGAL_ATTRIBUTE"_s);
	$assignStatic(XSLTErrorResources::ER_NULL_SOURCENODE_APPLYIMPORTS, "ER_NULL_SOURCENODE_APPLYIMPORTS"_s);
	$assignStatic(XSLTErrorResources::ER_CANNOT_ADD, "ER_CANNOT_ADD"_s);
	$assignStatic(XSLTErrorResources::ER_NULL_SOURCENODE_HANDLEAPPLYTEMPLATES, "ER_NULL_SOURCENODE_HANDLEAPPLYTEMPLATES"_s);
	$assignStatic(XSLTErrorResources::ER_NO_NAME_ATTRIB, "ER_NO_NAME_ATTRIB"_s);
	$assignStatic(XSLTErrorResources::ER_TEMPLATE_NOT_FOUND, "ER_TEMPLATE_NOT_FOUND"_s);
	$assignStatic(XSLTErrorResources::ER_CANT_RESOLVE_NAME_AVT, "ER_CANT_RESOLVE_NAME_AVT"_s);
	$assignStatic(XSLTErrorResources::ER_REQUIRES_ATTRIB, "ER_REQUIRES_ATTRIB"_s);
	$assignStatic(XSLTErrorResources::ER_MUST_HAVE_TEST_ATTRIB, "ER_MUST_HAVE_TEST_ATTRIB"_s);
	$assignStatic(XSLTErrorResources::ER_BAD_VAL_ON_LEVEL_ATTRIB, "ER_BAD_VAL_ON_LEVEL_ATTRIB"_s);
	$assignStatic(XSLTErrorResources::ER_PROCESSINGINSTRUCTION_NAME_CANT_BE_XML, "ER_PROCESSINGINSTRUCTION_NAME_CANT_BE_XML"_s);
	$assignStatic(XSLTErrorResources::ER_PROCESSINGINSTRUCTION_NOTVALID_NCNAME, "ER_PROCESSINGINSTRUCTION_NOTVALID_NCNAME"_s);
	$assignStatic(XSLTErrorResources::ER_NEED_MATCH_ATTRIB, "ER_NEED_MATCH_ATTRIB"_s);
	$assignStatic(XSLTErrorResources::ER_NEED_NAME_OR_MATCH_ATTRIB, "ER_NEED_NAME_OR_MATCH_ATTRIB"_s);
	$assignStatic(XSLTErrorResources::ER_CANT_RESOLVE_NSPREFIX, "ER_CANT_RESOLVE_NSPREFIX"_s);
	$assignStatic(XSLTErrorResources::ER_ILLEGAL_VALUE, "ER_ILLEGAL_VALUE"_s);
	$assignStatic(XSLTErrorResources::ER_NO_OWNERDOC, "ER_NO_OWNERDOC"_s);
	$assignStatic(XSLTErrorResources::ER_ELEMTEMPLATEELEM_ERR, "ER_ELEMTEMPLATEELEM_ERR"_s);
	$assignStatic(XSLTErrorResources::ER_NULL_CHILD, "ER_NULL_CHILD"_s);
	$assignStatic(XSLTErrorResources::ER_NEED_SELECT_ATTRIB, "ER_NEED_SELECT_ATTRIB"_s);
	$assignStatic(XSLTErrorResources::ER_NEED_TEST_ATTRIB, "ER_NEED_TEST_ATTRIB"_s);
	$assignStatic(XSLTErrorResources::ER_NEED_NAME_ATTRIB, "ER_NEED_NAME_ATTRIB"_s);
	$assignStatic(XSLTErrorResources::ER_NO_CONTEXT_OWNERDOC, "ER_NO_CONTEXT_OWNERDOC"_s);
	$assignStatic(XSLTErrorResources::ER_COULD_NOT_CREATE_XML_PROC_LIAISON, "ER_COULD_NOT_CREATE_XML_PROC_LIAISON"_s);
	$assignStatic(XSLTErrorResources::ER_PROCESS_NOT_SUCCESSFUL, "ER_PROCESS_NOT_SUCCESSFUL"_s);
	$assignStatic(XSLTErrorResources::ER_NOT_SUCCESSFUL, "ER_NOT_SUCCESSFUL"_s);
	$assignStatic(XSLTErrorResources::ER_ENCODING_NOT_SUPPORTED, "ER_ENCODING_NOT_SUPPORTED"_s);
	$assignStatic(XSLTErrorResources::ER_COULD_NOT_CREATE_TRACELISTENER, "ER_COULD_NOT_CREATE_TRACELISTENER"_s);
	$assignStatic(XSLTErrorResources::ER_KEY_REQUIRES_NAME_ATTRIB, "ER_KEY_REQUIRES_NAME_ATTRIB"_s);
	$assignStatic(XSLTErrorResources::ER_KEY_REQUIRES_MATCH_ATTRIB, "ER_KEY_REQUIRES_MATCH_ATTRIB"_s);
	$assignStatic(XSLTErrorResources::ER_KEY_REQUIRES_USE_ATTRIB, "ER_KEY_REQUIRES_USE_ATTRIB"_s);
	$assignStatic(XSLTErrorResources::ER_REQUIRES_ELEMENTS_ATTRIB, "ER_REQUIRES_ELEMENTS_ATTRIB"_s);
	$assignStatic(XSLTErrorResources::ER_MISSING_PREFIX_ATTRIB, "ER_MISSING_PREFIX_ATTRIB"_s);
	$assignStatic(XSLTErrorResources::ER_BAD_STYLESHEET_URL, "ER_BAD_STYLESHEET_URL"_s);
	$assignStatic(XSLTErrorResources::ER_FILE_NOT_FOUND, "ER_FILE_NOT_FOUND"_s);
	$assignStatic(XSLTErrorResources::ER_IOEXCEPTION, "ER_IOEXCEPTION"_s);
	$assignStatic(XSLTErrorResources::ER_NO_HREF_ATTRIB, "ER_NO_HREF_ATTRIB"_s);
	$assignStatic(XSLTErrorResources::ER_STYLESHEET_INCLUDES_ITSELF, "ER_STYLESHEET_INCLUDES_ITSELF"_s);
	$assignStatic(XSLTErrorResources::ER_PROCESSINCLUDE_ERROR, "ER_PROCESSINCLUDE_ERROR"_s);
	$assignStatic(XSLTErrorResources::ER_MISSING_LANG_ATTRIB, "ER_MISSING_LANG_ATTRIB"_s);
	$assignStatic(XSLTErrorResources::ER_MISSING_CONTAINER_ELEMENT_COMPONENT, "ER_MISSING_CONTAINER_ELEMENT_COMPONENT"_s);
	$assignStatic(XSLTErrorResources::ER_CAN_ONLY_OUTPUT_TO_ELEMENT, "ER_CAN_ONLY_OUTPUT_TO_ELEMENT"_s);
	$assignStatic(XSLTErrorResources::ER_PROCESS_ERROR, "ER_PROCESS_ERROR"_s);
	$assignStatic(XSLTErrorResources::ER_UNIMPLNODE_ERROR, "ER_UNIMPLNODE_ERROR"_s);
	$assignStatic(XSLTErrorResources::ER_NO_SELECT_EXPRESSION, "ER_NO_SELECT_EXPRESSION"_s);
	$assignStatic(XSLTErrorResources::ER_CANNOT_SERIALIZE_XSLPROCESSOR, "ER_CANNOT_SERIALIZE_XSLPROCESSOR"_s);
	$assignStatic(XSLTErrorResources::ER_NO_INPUT_STYLESHEET, "ER_NO_INPUT_STYLESHEET"_s);
	$assignStatic(XSLTErrorResources::ER_FAILED_PROCESS_STYLESHEET, "ER_FAILED_PROCESS_STYLESHEET"_s);
	$assignStatic(XSLTErrorResources::ER_COULDNT_PARSE_DOC, "ER_COULDNT_PARSE_DOC"_s);
	$assignStatic(XSLTErrorResources::ER_COULDNT_FIND_FRAGMENT, "ER_COULDNT_FIND_FRAGMENT"_s);
	$assignStatic(XSLTErrorResources::ER_NODE_NOT_ELEMENT, "ER_NODE_NOT_ELEMENT"_s);
	$assignStatic(XSLTErrorResources::ER_FOREACH_NEED_MATCH_OR_NAME_ATTRIB, "ER_FOREACH_NEED_MATCH_OR_NAME_ATTRIB"_s);
	$assignStatic(XSLTErrorResources::ER_TEMPLATES_NEED_MATCH_OR_NAME_ATTRIB, "ER_TEMPLATES_NEED_MATCH_OR_NAME_ATTRIB"_s);
	$assignStatic(XSLTErrorResources::ER_NO_CLONE_OF_DOCUMENT_FRAG, "ER_NO_CLONE_OF_DOCUMENT_FRAG"_s);
	$assignStatic(XSLTErrorResources::ER_CANT_CREATE_ITEM, "ER_CANT_CREATE_ITEM"_s);
	$assignStatic(XSLTErrorResources::ER_XMLSPACE_ILLEGAL_VALUE, "ER_XMLSPACE_ILLEGAL_VALUE"_s);
	$assignStatic(XSLTErrorResources::ER_NO_XSLKEY_DECLARATION, "ER_NO_XSLKEY_DECLARATION"_s);
	$assignStatic(XSLTErrorResources::ER_CANT_CREATE_URL, "ER_CANT_CREATE_URL"_s);
	$assignStatic(XSLTErrorResources::ER_XSLFUNCTIONS_UNSUPPORTED, "ER_XSLFUNCTIONS_UNSUPPORTED"_s);
	$assignStatic(XSLTErrorResources::ER_PROCESSOR_ERROR, "ER_PROCESSOR_ERROR"_s);
	$assignStatic(XSLTErrorResources::ER_NOT_ALLOWED_INSIDE_STYLESHEET, "ER_NOT_ALLOWED_INSIDE_STYLESHEET"_s);
	$assignStatic(XSLTErrorResources::ER_RESULTNS_NOT_SUPPORTED, "ER_RESULTNS_NOT_SUPPORTED"_s);
	$assignStatic(XSLTErrorResources::ER_DEFAULTSPACE_NOT_SUPPORTED, "ER_DEFAULTSPACE_NOT_SUPPORTED"_s);
	$assignStatic(XSLTErrorResources::ER_INDENTRESULT_NOT_SUPPORTED, "ER_INDENTRESULT_NOT_SUPPORTED"_s);
	$assignStatic(XSLTErrorResources::ER_ILLEGAL_ATTRIB, "ER_ILLEGAL_ATTRIB"_s);
	$assignStatic(XSLTErrorResources::ER_UNKNOWN_XSL_ELEM, "ER_UNKNOWN_XSL_ELEM"_s);
	$assignStatic(XSLTErrorResources::ER_BAD_XSLSORT_USE, "ER_BAD_XSLSORT_USE"_s);
	$assignStatic(XSLTErrorResources::ER_MISPLACED_XSLWHEN, "ER_MISPLACED_XSLWHEN"_s);
	$assignStatic(XSLTErrorResources::ER_XSLWHEN_NOT_PARENTED_BY_XSLCHOOSE, "ER_XSLWHEN_NOT_PARENTED_BY_XSLCHOOSE"_s);
	$assignStatic(XSLTErrorResources::ER_MISPLACED_XSLOTHERWISE, "ER_MISPLACED_XSLOTHERWISE"_s);
	$assignStatic(XSLTErrorResources::ER_XSLOTHERWISE_NOT_PARENTED_BY_XSLCHOOSE, "ER_XSLOTHERWISE_NOT_PARENTED_BY_XSLCHOOSE"_s);
	$assignStatic(XSLTErrorResources::ER_NOT_ALLOWED_INSIDE_TEMPLATE, "ER_NOT_ALLOWED_INSIDE_TEMPLATE"_s);
	$assignStatic(XSLTErrorResources::ER_UNKNOWN_EXT_NS_PREFIX, "ER_UNKNOWN_EXT_NS_PREFIX"_s);
	$assignStatic(XSLTErrorResources::ER_IMPORTS_AS_FIRST_ELEM, "ER_IMPORTS_AS_FIRST_ELEM"_s);
	$assignStatic(XSLTErrorResources::ER_IMPORTING_ITSELF, "ER_IMPORTING_ITSELF"_s);
	$assignStatic(XSLTErrorResources::ER_XMLSPACE_ILLEGAL_VAL, "ER_XMLSPACE_ILLEGAL_VAL"_s);
	$assignStatic(XSLTErrorResources::ER_PROCESSSTYLESHEET_NOT_SUCCESSFUL, "ER_PROCESSSTYLESHEET_NOT_SUCCESSFUL"_s);
	$assignStatic(XSLTErrorResources::ER_SAX_EXCEPTION, "ER_SAX_EXCEPTION"_s);
	$assignStatic(XSLTErrorResources::ER_XSLT_ERROR, "ER_XSLT_ERROR"_s);
	$assignStatic(XSLTErrorResources::ER_CURRENCY_SIGN_ILLEGAL, "ER_CURRENCY_SIGN_ILLEGAL"_s);
	$assignStatic(XSLTErrorResources::ER_DOCUMENT_FUNCTION_INVALID_IN_STYLESHEET_DOM, "ER_DOCUMENT_FUNCTION_INVALID_IN_STYLESHEET_DOM"_s);
	$assignStatic(XSLTErrorResources::ER_CANT_RESOLVE_PREFIX_OF_NON_PREFIX_RESOLVER, "ER_CANT_RESOLVE_PREFIX_OF_NON_PREFIX_RESOLVER"_s);
	$assignStatic(XSLTErrorResources::ER_REDIRECT_COULDNT_GET_FILENAME, "ER_REDIRECT_COULDNT_GET_FILENAME"_s);
	$assignStatic(XSLTErrorResources::ER_CANNOT_BUILD_FORMATTERLISTENER_IN_REDIRECT, "ER_CANNOT_BUILD_FORMATTERLISTENER_IN_REDIRECT"_s);
	$assignStatic(XSLTErrorResources::ER_INVALID_PREFIX_IN_EXCLUDERESULTPREFIX, "ER_INVALID_PREFIX_IN_EXCLUDERESULTPREFIX"_s);
	$assignStatic(XSLTErrorResources::ER_MISSING_NS_URI, "ER_MISSING_NS_URI"_s);
	$assignStatic(XSLTErrorResources::ER_MISSING_ARG_FOR_OPTION, "ER_MISSING_ARG_FOR_OPTION"_s);
	$assignStatic(XSLTErrorResources::ER_INVALID_OPTION, "ER_INVALID_OPTION"_s);
	$assignStatic(XSLTErrorResources::ER_MALFORMED_FORMAT_STRING, "ER_MALFORMED_FORMAT_STRING"_s);
	$assignStatic(XSLTErrorResources::ER_STYLESHEET_REQUIRES_VERSION_ATTRIB, "ER_STYLESHEET_REQUIRES_VERSION_ATTRIB"_s);
	$assignStatic(XSLTErrorResources::ER_ILLEGAL_ATTRIBUTE_VALUE, "ER_ILLEGAL_ATTRIBUTE_VALUE"_s);
	$assignStatic(XSLTErrorResources::ER_CHOOSE_REQUIRES_WHEN, "ER_CHOOSE_REQUIRES_WHEN"_s);
	$assignStatic(XSLTErrorResources::ER_NO_APPLY_IMPORT_IN_FOR_EACH, "ER_NO_APPLY_IMPORT_IN_FOR_EACH"_s);
	$assignStatic(XSLTErrorResources::ER_CANT_USE_DTM_FOR_OUTPUT, "ER_CANT_USE_DTM_FOR_OUTPUT"_s);
	$assignStatic(XSLTErrorResources::ER_CANT_USE_DTM_FOR_INPUT, "ER_CANT_USE_DTM_FOR_INPUT"_s);
	$assignStatic(XSLTErrorResources::ER_CALL_TO_EXT_FAILED, "ER_CALL_TO_EXT_FAILED"_s);
	$assignStatic(XSLTErrorResources::ER_PREFIX_MUST_RESOLVE, "ER_PREFIX_MUST_RESOLVE"_s);
	$assignStatic(XSLTErrorResources::ER_INVALID_UTF16_SURROGATE, "ER_INVALID_UTF16_SURROGATE"_s);
	$assignStatic(XSLTErrorResources::ER_XSLATTRSET_USED_ITSELF, "ER_XSLATTRSET_USED_ITSELF"_s);
	$assignStatic(XSLTErrorResources::ER_CANNOT_MIX_XERCESDOM, "ER_CANNOT_MIX_XERCESDOM"_s);
	$assignStatic(XSLTErrorResources::ER_TOO_MANY_LISTENERS, "ER_TOO_MANY_LISTENERS"_s);
	$assignStatic(XSLTErrorResources::ER_IN_ELEMTEMPLATEELEM_READOBJECT, "ER_IN_ELEMTEMPLATEELEM_READOBJECT"_s);
	$assignStatic(XSLTErrorResources::ER_DUPLICATE_NAMED_TEMPLATE, "ER_DUPLICATE_NAMED_TEMPLATE"_s);
	$assignStatic(XSLTErrorResources::ER_INVALID_KEY_CALL, "ER_INVALID_KEY_CALL"_s);
	$assignStatic(XSLTErrorResources::ER_REFERENCING_ITSELF, "ER_REFERENCING_ITSELF"_s);
	$assignStatic(XSLTErrorResources::ER_ILLEGAL_DOMSOURCE_INPUT, "ER_ILLEGAL_DOMSOURCE_INPUT"_s);
	$assignStatic(XSLTErrorResources::ER_CLASS_NOT_FOUND_FOR_OPTION, "ER_CLASS_NOT_FOUND_FOR_OPTION"_s);
	$assignStatic(XSLTErrorResources::ER_REQUIRED_ELEM_NOT_FOUND, "ER_REQUIRED_ELEM_NOT_FOUND"_s);
	$assignStatic(XSLTErrorResources::ER_INPUT_CANNOT_BE_NULL, "ER_INPUT_CANNOT_BE_NULL"_s);
	$assignStatic(XSLTErrorResources::ER_URI_CANNOT_BE_NULL, "ER_URI_CANNOT_BE_NULL"_s);
	$assignStatic(XSLTErrorResources::ER_FILE_CANNOT_BE_NULL, "ER_FILE_CANNOT_BE_NULL"_s);
	$assignStatic(XSLTErrorResources::ER_SOURCE_CANNOT_BE_NULL, "ER_SOURCE_CANNOT_BE_NULL"_s);
	$assignStatic(XSLTErrorResources::ER_CANNOT_INIT_BSFMGR, "ER_CANNOT_INIT_BSFMGR"_s);
	$assignStatic(XSLTErrorResources::ER_CANNOT_CMPL_EXTENSN, "ER_CANNOT_CMPL_EXTENSN"_s);
	$assignStatic(XSLTErrorResources::ER_CANNOT_CREATE_EXTENSN, "ER_CANNOT_CREATE_EXTENSN"_s);
	$assignStatic(XSLTErrorResources::ER_INSTANCE_MTHD_CALL_REQUIRES, "ER_INSTANCE_MTHD_CALL_REQUIRES"_s);
	$assignStatic(XSLTErrorResources::ER_INVALID_ELEMENT_NAME, "ER_INVALID_ELEMENT_NAME"_s);
	$assignStatic(XSLTErrorResources::ER_ELEMENT_NAME_METHOD_STATIC, "ER_ELEMENT_NAME_METHOD_STATIC"_s);
	$assignStatic(XSLTErrorResources::ER_EXTENSION_FUNC_UNKNOWN, "ER_EXTENSION_FUNC_UNKNOWN"_s);
	$assignStatic(XSLTErrorResources::ER_MORE_MATCH_CONSTRUCTOR, "ER_MORE_MATCH_CONSTRUCTOR"_s);
	$assignStatic(XSLTErrorResources::ER_MORE_MATCH_METHOD, "ER_MORE_MATCH_METHOD"_s);
	$assignStatic(XSLTErrorResources::ER_MORE_MATCH_ELEMENT, "ER_MORE_MATCH_ELEMENT"_s);
	$assignStatic(XSLTErrorResources::ER_INVALID_CONTEXT_PASSED, "ER_INVALID_CONTEXT_PASSED"_s);
	$assignStatic(XSLTErrorResources::ER_POOL_EXISTS, "ER_POOL_EXISTS"_s);
	$assignStatic(XSLTErrorResources::ER_NO_DRIVER_NAME, "ER_NO_DRIVER_NAME"_s);
	$assignStatic(XSLTErrorResources::ER_NO_URL, "ER_NO_URL"_s);
	$assignStatic(XSLTErrorResources::ER_POOL_SIZE_LESSTHAN_ONE, "ER_POOL_SIZE_LESSTHAN_ONE"_s);
	$assignStatic(XSLTErrorResources::ER_INVALID_DRIVER, "ER_INVALID_DRIVER"_s);
	$assignStatic(XSLTErrorResources::ER_NO_STYLESHEETROOT, "ER_NO_STYLESHEETROOT"_s);
	$assignStatic(XSLTErrorResources::ER_ILLEGAL_XMLSPACE_VALUE, "ER_ILLEGAL_XMLSPACE_VALUE"_s);
	$assignStatic(XSLTErrorResources::ER_PROCESSFROMNODE_FAILED, "ER_PROCESSFROMNODE_FAILED"_s);
	$assignStatic(XSLTErrorResources::ER_RESOURCE_COULD_NOT_LOAD, "ER_RESOURCE_COULD_NOT_LOAD"_s);
	$assignStatic(XSLTErrorResources::ER_BUFFER_SIZE_LESSTHAN_ZERO, "ER_BUFFER_SIZE_LESSTHAN_ZERO"_s);
	$assignStatic(XSLTErrorResources::ER_UNKNOWN_ERROR_CALLING_EXTENSION, "ER_UNKNOWN_ERROR_CALLING_EXTENSION"_s);
	$assignStatic(XSLTErrorResources::ER_NO_NAMESPACE_DECL, "ER_NO_NAMESPACE_DECL"_s);
	$assignStatic(XSLTErrorResources::ER_ELEM_CONTENT_NOT_ALLOWED, "ER_ELEM_CONTENT_NOT_ALLOWED"_s);
	$assignStatic(XSLTErrorResources::ER_STYLESHEET_DIRECTED_TERMINATION, "ER_STYLESHEET_DIRECTED_TERMINATION"_s);
	$assignStatic(XSLTErrorResources::ER_ONE_OR_TWO, "ER_ONE_OR_TWO"_s);
	$assignStatic(XSLTErrorResources::ER_TWO_OR_THREE, "ER_TWO_OR_THREE"_s);
	$assignStatic(XSLTErrorResources::ER_COULD_NOT_LOAD_RESOURCE, "ER_COULD_NOT_LOAD_RESOURCE"_s);
	$assignStatic(XSLTErrorResources::ER_CANNOT_INIT_DEFAULT_TEMPLATES, "ER_CANNOT_INIT_DEFAULT_TEMPLATES"_s);
	$assignStatic(XSLTErrorResources::ER_RESULT_NULL, "ER_RESULT_NULL"_s);
	$assignStatic(XSLTErrorResources::ER_RESULT_COULD_NOT_BE_SET, "ER_RESULT_COULD_NOT_BE_SET"_s);
	$assignStatic(XSLTErrorResources::ER_NO_OUTPUT_SPECIFIED, "ER_NO_OUTPUT_SPECIFIED"_s);
	$assignStatic(XSLTErrorResources::ER_CANNOT_TRANSFORM_TO_RESULT_TYPE, "ER_CANNOT_TRANSFORM_TO_RESULT_TYPE"_s);
	$assignStatic(XSLTErrorResources::ER_CANNOT_TRANSFORM_SOURCE_TYPE, "ER_CANNOT_TRANSFORM_SOURCE_TYPE"_s);
	$assignStatic(XSLTErrorResources::ER_NULL_CONTENT_HANDLER, "ER_NULL_CONTENT_HANDLER"_s);
	$assignStatic(XSLTErrorResources::ER_NULL_ERROR_HANDLER, "ER_NULL_ERROR_HANDLER"_s);
	$assignStatic(XSLTErrorResources::ER_CANNOT_CALL_PARSE, "ER_CANNOT_CALL_PARSE"_s);
	$assignStatic(XSLTErrorResources::ER_NO_PARENT_FOR_FILTER, "ER_NO_PARENT_FOR_FILTER"_s);
	$assignStatic(XSLTErrorResources::ER_NO_STYLESHEET_IN_MEDIA, "ER_NO_STYLESHEET_IN_MEDIA"_s);
	$assignStatic(XSLTErrorResources::ER_NO_STYLESHEET_PI, "ER_NO_STYLESHEET_PI"_s);
	$assignStatic(XSLTErrorResources::ER_NOT_SUPPORTED, "ER_NOT_SUPPORTED"_s);
	$assignStatic(XSLTErrorResources::ER_PROPERTY_VALUE_BOOLEAN, "ER_PROPERTY_VALUE_BOOLEAN"_s);
	$assignStatic(XSLTErrorResources::ER_COULD_NOT_FIND_EXTERN_SCRIPT, "ER_COULD_NOT_FIND_EXTERN_SCRIPT"_s);
	$assignStatic(XSLTErrorResources::ER_RESOURCE_COULD_NOT_FIND, "ER_RESOURCE_COULD_NOT_FIND"_s);
	$assignStatic(XSLTErrorResources::ER_OUTPUT_PROPERTY_NOT_RECOGNIZED, "ER_OUTPUT_PROPERTY_NOT_RECOGNIZED"_s);
	$assignStatic(XSLTErrorResources::ER_FAILED_CREATING_ELEMLITRSLT, "ER_FAILED_CREATING_ELEMLITRSLT"_s);
	$assignStatic(XSLTErrorResources::ER_VALUE_SHOULD_BE_NUMBER, "ER_VALUE_SHOULD_BE_NUMBER"_s);
	$assignStatic(XSLTErrorResources::ER_VALUE_SHOULD_EQUAL, "ER_VALUE_SHOULD_EQUAL"_s);
	$assignStatic(XSLTErrorResources::ER_FAILED_CALLING_METHOD, "ER_FAILED_CALLING_METHOD"_s);
	$assignStatic(XSLTErrorResources::ER_FAILED_CREATING_ELEMTMPL, "ER_FAILED_CREATING_ELEMTMPL"_s);
	$assignStatic(XSLTErrorResources::ER_CHARS_NOT_ALLOWED, "ER_CHARS_NOT_ALLOWED"_s);
	$assignStatic(XSLTErrorResources::ER_ATTR_NOT_ALLOWED, "ER_ATTR_NOT_ALLOWED"_s);
	$assignStatic(XSLTErrorResources::ER_BAD_VALUE, "ER_BAD_VALUE"_s);
	$assignStatic(XSLTErrorResources::ER_ATTRIB_VALUE_NOT_FOUND, "ER_ATTRIB_VALUE_NOT_FOUND"_s);
	$assignStatic(XSLTErrorResources::ER_ATTRIB_VALUE_NOT_RECOGNIZED, "ER_ATTRIB_VALUE_NOT_RECOGNIZED"_s);
	$assignStatic(XSLTErrorResources::ER_NULL_URI_NAMESPACE, "ER_NULL_URI_NAMESPACE"_s);
	$assignStatic(XSLTErrorResources::ER_NUMBER_TOO_BIG, "ER_NUMBER_TOO_BIG"_s);
	$assignStatic(XSLTErrorResources::ER_CANNOT_FIND_SAX1_DRIVER, "ER_CANNOT_FIND_SAX1_DRIVER"_s);
	$assignStatic(XSLTErrorResources::ER_SAX1_DRIVER_NOT_LOADED, "ER_SAX1_DRIVER_NOT_LOADED"_s);
	$assignStatic(XSLTErrorResources::ER_SAX1_DRIVER_NOT_INSTANTIATED, "ER_SAX1_DRIVER_NOT_INSTANTIATED"_s);
	$assignStatic(XSLTErrorResources::ER_SAX1_DRIVER_NOT_IMPLEMENT_PARSER, "ER_SAX1_DRIVER_NOT_IMPLEMENT_PARSER"_s);
	$assignStatic(XSLTErrorResources::ER_PARSER_PROPERTY_NOT_SPECIFIED, "ER_PARSER_PROPERTY_NOT_SPECIFIED"_s);
	$assignStatic(XSLTErrorResources::ER_PARSER_ARG_CANNOT_BE_NULL, "ER_PARSER_ARG_CANNOT_BE_NULL"_s);
	$assignStatic(XSLTErrorResources::ER_FEATURE, "ER_FEATURE"_s);
	$assignStatic(XSLTErrorResources::ER_PROPERTY, "ER_PROPERTY"_s);
	$assignStatic(XSLTErrorResources::ER_NULL_ENTITY_RESOLVER, "ER_NULL_ENTITY_RESOLVER"_s);
	$assignStatic(XSLTErrorResources::ER_NULL_DTD_HANDLER, "ER_NULL_DTD_HANDLER"_s);
	$assignStatic(XSLTErrorResources::ER_NO_DRIVER_NAME_SPECIFIED, "ER_NO_DRIVER_NAME_SPECIFIED"_s);
	$assignStatic(XSLTErrorResources::ER_NO_URL_SPECIFIED, "ER_NO_URL_SPECIFIED"_s);
	$assignStatic(XSLTErrorResources::ER_POOLSIZE_LESS_THAN_ONE, "ER_POOLSIZE_LESS_THAN_ONE"_s);
	$assignStatic(XSLTErrorResources::ER_INVALID_DRIVER_NAME, "ER_INVALID_DRIVER_NAME"_s);
	$assignStatic(XSLTErrorResources::ER_ERRORLISTENER, "ER_ERRORLISTENER"_s);
	$assignStatic(XSLTErrorResources::ER_ASSERT_NO_TEMPLATE_PARENT, "ER_ASSERT_NO_TEMPLATE_PARENT"_s);
	$assignStatic(XSLTErrorResources::ER_ASSERT_REDUNDENT_EXPR_ELIMINATOR, "ER_ASSERT_REDUNDENT_EXPR_ELIMINATOR"_s);
	$assignStatic(XSLTErrorResources::ER_NOT_ALLOWED_IN_POSITION, "ER_NOT_ALLOWED_IN_POSITION"_s);
	$assignStatic(XSLTErrorResources::ER_NONWHITESPACE_NOT_ALLOWED_IN_POSITION, "ER_NONWHITESPACE_NOT_ALLOWED_IN_POSITION"_s);
	$assignStatic(XSLTErrorResources::ER_NAMESPACE_CONTEXT_NULL_NAMESPACE, "ER_NAMESPACE_CONTEXT_NULL_NAMESPACE"_s);
	$assignStatic(XSLTErrorResources::ER_NAMESPACE_CONTEXT_NULL_PREFIX, "ER_NAMESPACE_CONTEXT_NULL_PREFIX"_s);
	$assignStatic(XSLTErrorResources::ER_XPATH_RESOLVER_NULL_QNAME, "ER_XPATH_RESOLVER_NULL_QNAME"_s);
	$assignStatic(XSLTErrorResources::ER_XPATH_RESOLVER_NEGATIVE_ARITY, "ER_XPATH_RESOLVER_NEGATIVE_ARITY"_s);
	$assignStatic(XSLTErrorResources::INVALID_TCHAR, "INVALID_TCHAR"_s);
	$assignStatic(XSLTErrorResources::INVALID_QNAME, "INVALID_QNAME"_s);
	$assignStatic(XSLTErrorResources::INVALID_ENUM, "INVALID_ENUM"_s);
	$assignStatic(XSLTErrorResources::INVALID_NMTOKEN, "INVALID_NMTOKEN"_s);
	$assignStatic(XSLTErrorResources::INVALID_NCNAME, "INVALID_NCNAME"_s);
	$assignStatic(XSLTErrorResources::INVALID_BOOLEAN, "INVALID_BOOLEAN"_s);
	$assignStatic(XSLTErrorResources::INVALID_NUMBER, "INVALID_NUMBER"_s);
	$assignStatic(XSLTErrorResources::ER_ARG_LITERAL, "ER_ARG_LITERAL"_s);
	$assignStatic(XSLTErrorResources::ER_DUPLICATE_GLOBAL_VAR, "ER_DUPLICATE_GLOBAL_VAR"_s);
	$assignStatic(XSLTErrorResources::ER_DUPLICATE_VAR, "ER_DUPLICATE_VAR"_s);
	$assignStatic(XSLTErrorResources::ER_TEMPLATE_NAME_MATCH, "ER_TEMPLATE_NAME_MATCH"_s);
	$assignStatic(XSLTErrorResources::ER_INVALID_PREFIX, "ER_INVALID_PREFIX"_s);
	$assignStatic(XSLTErrorResources::ER_NO_ATTRIB_SET, "ER_NO_ATTRIB_SET"_s);
	$assignStatic(XSLTErrorResources::ER_FUNCTION_NOT_FOUND, "ER_FUNCTION_NOT_FOUND"_s);
	$assignStatic(XSLTErrorResources::ER_CANT_HAVE_CONTENT_AND_SELECT, "ER_CANT_HAVE_CONTENT_AND_SELECT"_s);
	$assignStatic(XSLTErrorResources::ER_INVALID_SET_PARAM_VALUE, "ER_INVALID_SET_PARAM_VALUE"_s);
	$assignStatic(XSLTErrorResources::ER_SET_FEATURE_NULL_NAME, "ER_SET_FEATURE_NULL_NAME"_s);
	$assignStatic(XSLTErrorResources::ER_GET_FEATURE_NULL_NAME, "ER_GET_FEATURE_NULL_NAME"_s);
	$assignStatic(XSLTErrorResources::ER_UNSUPPORTED_FEATURE, "ER_UNSUPPORTED_FEATURE"_s);
	$assignStatic(XSLTErrorResources::ER_EXTENSION_ELEMENT_NOT_ALLOWED_IN_SECURE_PROCESSING, "ER_EXTENSION_ELEMENT_NOT_ALLOWED_IN_SECURE_PROCESSING"_s);
	$assignStatic(XSLTErrorResources::WG_FOUND_CURLYBRACE, "WG_FOUND_CURLYBRACE"_s);
	$assignStatic(XSLTErrorResources::WG_COUNT_ATTRIB_MATCHES_NO_ANCESTOR, "WG_COUNT_ATTRIB_MATCHES_NO_ANCESTOR"_s);
	$assignStatic(XSLTErrorResources::WG_EXPR_ATTRIB_CHANGED_TO_SELECT, "WG_EXPR_ATTRIB_CHANGED_TO_SELECT"_s);
	$assignStatic(XSLTErrorResources::WG_NO_LOCALE_IN_FORMATNUMBER, "WG_NO_LOCALE_IN_FORMATNUMBER"_s);
	$assignStatic(XSLTErrorResources::WG_LOCALE_NOT_FOUND, "WG_LOCALE_NOT_FOUND"_s);
	$assignStatic(XSLTErrorResources::WG_CANNOT_MAKE_URL_FROM, "WG_CANNOT_MAKE_URL_FROM"_s);
	$assignStatic(XSLTErrorResources::WG_CANNOT_LOAD_REQUESTED_DOC, "WG_CANNOT_LOAD_REQUESTED_DOC"_s);
	$assignStatic(XSLTErrorResources::WG_CANNOT_FIND_COLLATOR, "WG_CANNOT_FIND_COLLATOR"_s);
	$assignStatic(XSLTErrorResources::WG_FUNCTIONS_SHOULD_USE_URL, "WG_FUNCTIONS_SHOULD_USE_URL"_s);
	$assignStatic(XSLTErrorResources::WG_ENCODING_NOT_SUPPORTED_USING_UTF8, "WG_ENCODING_NOT_SUPPORTED_USING_UTF8"_s);
	$assignStatic(XSLTErrorResources::WG_ENCODING_NOT_SUPPORTED_USING_JAVA, "WG_ENCODING_NOT_SUPPORTED_USING_JAVA"_s);
	$assignStatic(XSLTErrorResources::WG_SPECIFICITY_CONFLICTS, "WG_SPECIFICITY_CONFLICTS"_s);
	$assignStatic(XSLTErrorResources::WG_PARSING_AND_PREPARING, "WG_PARSING_AND_PREPARING"_s);
	$assignStatic(XSLTErrorResources::WG_ATTR_TEMPLATE, "WG_ATTR_TEMPLATE"_s);
	$assignStatic(XSLTErrorResources::WG_CONFLICT_BETWEEN_XSLSTRIPSPACE_AND_XSLPRESERVESPACE, "WG_CONFLICT_BETWEEN_XSLSTRIPSPACE_AND_XSLPRESERVESP"_s);
	$assignStatic(XSLTErrorResources::WG_ATTRIB_NOT_HANDLED, "WG_ATTRIB_NOT_HANDLED"_s);
	$assignStatic(XSLTErrorResources::WG_NO_DECIMALFORMAT_DECLARATION, "WG_NO_DECIMALFORMAT_DECLARATION"_s);
	$assignStatic(XSLTErrorResources::WG_OLD_XSLT_NS, "WG_OLD_XSLT_NS"_s);
	$assignStatic(XSLTErrorResources::WG_ONE_DEFAULT_XSLDECIMALFORMAT_ALLOWED, "WG_ONE_DEFAULT_XSLDECIMALFORMAT_ALLOWED"_s);
	$assignStatic(XSLTErrorResources::WG_XSLDECIMALFORMAT_NAMES_MUST_BE_UNIQUE, "WG_XSLDECIMALFORMAT_NAMES_MUST_BE_UNIQUE"_s);
	$assignStatic(XSLTErrorResources::WG_ILLEGAL_ATTRIBUTE, "WG_ILLEGAL_ATTRIBUTE"_s);
	$assignStatic(XSLTErrorResources::WG_COULD_NOT_RESOLVE_PREFIX, "WG_COULD_NOT_RESOLVE_PREFIX"_s);
	$assignStatic(XSLTErrorResources::WG_STYLESHEET_REQUIRES_VERSION_ATTRIB, "WG_STYLESHEET_REQUIRES_VERSION_ATTRIB"_s);
	$assignStatic(XSLTErrorResources::WG_ILLEGAL_ATTRIBUTE_NAME, "WG_ILLEGAL_ATTRIBUTE_NAME"_s);
	$assignStatic(XSLTErrorResources::WG_ILLEGAL_ATTRIBUTE_VALUE, "WG_ILLEGAL_ATTRIBUTE_VALUE"_s);
	$assignStatic(XSLTErrorResources::WG_EMPTY_SECOND_ARG, "WG_EMPTY_SECOND_ARG"_s);
	$assignStatic(XSLTErrorResources::WG_PROCESSINGINSTRUCTION_NAME_CANT_BE_XML, "WG_PROCESSINGINSTRUCTION_NAME_CANT_BE_XML"_s);
	$assignStatic(XSLTErrorResources::WG_PROCESSINGINSTRUCTION_NOTVALID_NCNAME, "WG_PROCESSINGINSTRUCTION_NOTVALID_NCNAME"_s);
	$assignStatic(XSLTErrorResources::WG_ILLEGAL_ATTRIBUTE_POSITION, "WG_ILLEGAL_ATTRIBUTE_POSITION"_s);
	$assignStatic(XSLTErrorResources::NO_MODIFICATION_ALLOWED_ERR, "NO_MODIFICATION_ALLOWED_ERR"_s);
	$assignStatic(XSLTErrorResources::BAD_CODE, "BAD_CODE"_s);
	$assignStatic(XSLTErrorResources::FORMAT_FAILED, "FORMAT_FAILED"_s);
}

$Class* XSLTErrorResources::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"ER_INVALID_NAMESPACE_URI_VALUE_FOR_RESULT_PREFIX", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources, ER_INVALID_NAMESPACE_URI_VALUE_FOR_RESULT_PREFIX)},
		{"ER_INVALID_NAMESPACE_URI_VALUE_FOR_RESULT_PREFIX_FOR_DEFAULT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources, ER_INVALID_NAMESPACE_URI_VALUE_FOR_RESULT_PREFIX_FOR_DEFAULT)},
		{"ER_NO_CURLYBRACE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources, ER_NO_CURLYBRACE)},
		{"ER_FUNCTION_NOT_SUPPORTED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources, ER_FUNCTION_NOT_SUPPORTED)},
		{"ER_ILLEGAL_ATTRIBUTE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources, ER_ILLEGAL_ATTRIBUTE)},
		{"ER_NULL_SOURCENODE_APPLYIMPORTS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources, ER_NULL_SOURCENODE_APPLYIMPORTS)},
		{"ER_CANNOT_ADD", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources, ER_CANNOT_ADD)},
		{"ER_NULL_SOURCENODE_HANDLEAPPLYTEMPLATES", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources, ER_NULL_SOURCENODE_HANDLEAPPLYTEMPLATES)},
		{"ER_NO_NAME_ATTRIB", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources, ER_NO_NAME_ATTRIB)},
		{"ER_TEMPLATE_NOT_FOUND", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources, ER_TEMPLATE_NOT_FOUND)},
		{"ER_CANT_RESOLVE_NAME_AVT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources, ER_CANT_RESOLVE_NAME_AVT)},
		{"ER_REQUIRES_ATTRIB", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources, ER_REQUIRES_ATTRIB)},
		{"ER_MUST_HAVE_TEST_ATTRIB", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources, ER_MUST_HAVE_TEST_ATTRIB)},
		{"ER_BAD_VAL_ON_LEVEL_ATTRIB", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources, ER_BAD_VAL_ON_LEVEL_ATTRIB)},
		{"ER_PROCESSINGINSTRUCTION_NAME_CANT_BE_XML", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources, ER_PROCESSINGINSTRUCTION_NAME_CANT_BE_XML)},
		{"ER_PROCESSINGINSTRUCTION_NOTVALID_NCNAME", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources, ER_PROCESSINGINSTRUCTION_NOTVALID_NCNAME)},
		{"ER_NEED_MATCH_ATTRIB", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources, ER_NEED_MATCH_ATTRIB)},
		{"ER_NEED_NAME_OR_MATCH_ATTRIB", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources, ER_NEED_NAME_OR_MATCH_ATTRIB)},
		{"ER_CANT_RESOLVE_NSPREFIX", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources, ER_CANT_RESOLVE_NSPREFIX)},
		{"ER_ILLEGAL_VALUE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources, ER_ILLEGAL_VALUE)},
		{"ER_NO_OWNERDOC", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources, ER_NO_OWNERDOC)},
		{"ER_ELEMTEMPLATEELEM_ERR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources, ER_ELEMTEMPLATEELEM_ERR)},
		{"ER_NULL_CHILD", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources, ER_NULL_CHILD)},
		{"ER_NEED_SELECT_ATTRIB", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources, ER_NEED_SELECT_ATTRIB)},
		{"ER_NEED_TEST_ATTRIB", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources, ER_NEED_TEST_ATTRIB)},
		{"ER_NEED_NAME_ATTRIB", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources, ER_NEED_NAME_ATTRIB)},
		{"ER_NO_CONTEXT_OWNERDOC", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources, ER_NO_CONTEXT_OWNERDOC)},
		{"ER_COULD_NOT_CREATE_XML_PROC_LIAISON", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources, ER_COULD_NOT_CREATE_XML_PROC_LIAISON)},
		{"ER_PROCESS_NOT_SUCCESSFUL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources, ER_PROCESS_NOT_SUCCESSFUL)},
		{"ER_NOT_SUCCESSFUL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources, ER_NOT_SUCCESSFUL)},
		{"ER_ENCODING_NOT_SUPPORTED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources, ER_ENCODING_NOT_SUPPORTED)},
		{"ER_COULD_NOT_CREATE_TRACELISTENER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources, ER_COULD_NOT_CREATE_TRACELISTENER)},
		{"ER_KEY_REQUIRES_NAME_ATTRIB", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources, ER_KEY_REQUIRES_NAME_ATTRIB)},
		{"ER_KEY_REQUIRES_MATCH_ATTRIB", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources, ER_KEY_REQUIRES_MATCH_ATTRIB)},
		{"ER_KEY_REQUIRES_USE_ATTRIB", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources, ER_KEY_REQUIRES_USE_ATTRIB)},
		{"ER_REQUIRES_ELEMENTS_ATTRIB", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources, ER_REQUIRES_ELEMENTS_ATTRIB)},
		{"ER_MISSING_PREFIX_ATTRIB", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources, ER_MISSING_PREFIX_ATTRIB)},
		{"ER_BAD_STYLESHEET_URL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources, ER_BAD_STYLESHEET_URL)},
		{"ER_FILE_NOT_FOUND", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources, ER_FILE_NOT_FOUND)},
		{"ER_IOEXCEPTION", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources, ER_IOEXCEPTION)},
		{"ER_NO_HREF_ATTRIB", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources, ER_NO_HREF_ATTRIB)},
		{"ER_STYLESHEET_INCLUDES_ITSELF", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources, ER_STYLESHEET_INCLUDES_ITSELF)},
		{"ER_PROCESSINCLUDE_ERROR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources, ER_PROCESSINCLUDE_ERROR)},
		{"ER_MISSING_LANG_ATTRIB", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources, ER_MISSING_LANG_ATTRIB)},
		{"ER_MISSING_CONTAINER_ELEMENT_COMPONENT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources, ER_MISSING_CONTAINER_ELEMENT_COMPONENT)},
		{"ER_CAN_ONLY_OUTPUT_TO_ELEMENT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources, ER_CAN_ONLY_OUTPUT_TO_ELEMENT)},
		{"ER_PROCESS_ERROR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources, ER_PROCESS_ERROR)},
		{"ER_UNIMPLNODE_ERROR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources, ER_UNIMPLNODE_ERROR)},
		{"ER_NO_SELECT_EXPRESSION", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources, ER_NO_SELECT_EXPRESSION)},
		{"ER_CANNOT_SERIALIZE_XSLPROCESSOR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources, ER_CANNOT_SERIALIZE_XSLPROCESSOR)},
		{"ER_NO_INPUT_STYLESHEET", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources, ER_NO_INPUT_STYLESHEET)},
		{"ER_FAILED_PROCESS_STYLESHEET", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources, ER_FAILED_PROCESS_STYLESHEET)},
		{"ER_COULDNT_PARSE_DOC", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources, ER_COULDNT_PARSE_DOC)},
		{"ER_COULDNT_FIND_FRAGMENT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources, ER_COULDNT_FIND_FRAGMENT)},
		{"ER_NODE_NOT_ELEMENT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources, ER_NODE_NOT_ELEMENT)},
		{"ER_FOREACH_NEED_MATCH_OR_NAME_ATTRIB", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources, ER_FOREACH_NEED_MATCH_OR_NAME_ATTRIB)},
		{"ER_TEMPLATES_NEED_MATCH_OR_NAME_ATTRIB", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources, ER_TEMPLATES_NEED_MATCH_OR_NAME_ATTRIB)},
		{"ER_NO_CLONE_OF_DOCUMENT_FRAG", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources, ER_NO_CLONE_OF_DOCUMENT_FRAG)},
		{"ER_CANT_CREATE_ITEM", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources, ER_CANT_CREATE_ITEM)},
		{"ER_XMLSPACE_ILLEGAL_VALUE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources, ER_XMLSPACE_ILLEGAL_VALUE)},
		{"ER_NO_XSLKEY_DECLARATION", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources, ER_NO_XSLKEY_DECLARATION)},
		{"ER_CANT_CREATE_URL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources, ER_CANT_CREATE_URL)},
		{"ER_XSLFUNCTIONS_UNSUPPORTED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources, ER_XSLFUNCTIONS_UNSUPPORTED)},
		{"ER_PROCESSOR_ERROR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources, ER_PROCESSOR_ERROR)},
		{"ER_NOT_ALLOWED_INSIDE_STYLESHEET", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources, ER_NOT_ALLOWED_INSIDE_STYLESHEET)},
		{"ER_RESULTNS_NOT_SUPPORTED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources, ER_RESULTNS_NOT_SUPPORTED)},
		{"ER_DEFAULTSPACE_NOT_SUPPORTED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources, ER_DEFAULTSPACE_NOT_SUPPORTED)},
		{"ER_INDENTRESULT_NOT_SUPPORTED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources, ER_INDENTRESULT_NOT_SUPPORTED)},
		{"ER_ILLEGAL_ATTRIB", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources, ER_ILLEGAL_ATTRIB)},
		{"ER_UNKNOWN_XSL_ELEM", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources, ER_UNKNOWN_XSL_ELEM)},
		{"ER_BAD_XSLSORT_USE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources, ER_BAD_XSLSORT_USE)},
		{"ER_MISPLACED_XSLWHEN", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources, ER_MISPLACED_XSLWHEN)},
		{"ER_XSLWHEN_NOT_PARENTED_BY_XSLCHOOSE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources, ER_XSLWHEN_NOT_PARENTED_BY_XSLCHOOSE)},
		{"ER_MISPLACED_XSLOTHERWISE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources, ER_MISPLACED_XSLOTHERWISE)},
		{"ER_XSLOTHERWISE_NOT_PARENTED_BY_XSLCHOOSE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources, ER_XSLOTHERWISE_NOT_PARENTED_BY_XSLCHOOSE)},
		{"ER_NOT_ALLOWED_INSIDE_TEMPLATE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources, ER_NOT_ALLOWED_INSIDE_TEMPLATE)},
		{"ER_UNKNOWN_EXT_NS_PREFIX", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources, ER_UNKNOWN_EXT_NS_PREFIX)},
		{"ER_IMPORTS_AS_FIRST_ELEM", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources, ER_IMPORTS_AS_FIRST_ELEM)},
		{"ER_IMPORTING_ITSELF", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources, ER_IMPORTING_ITSELF)},
		{"ER_XMLSPACE_ILLEGAL_VAL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources, ER_XMLSPACE_ILLEGAL_VAL)},
		{"ER_PROCESSSTYLESHEET_NOT_SUCCESSFUL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources, ER_PROCESSSTYLESHEET_NOT_SUCCESSFUL)},
		{"ER_SAX_EXCEPTION", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources, ER_SAX_EXCEPTION)},
		{"ER_XSLT_ERROR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources, ER_XSLT_ERROR)},
		{"ER_CURRENCY_SIGN_ILLEGAL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources, ER_CURRENCY_SIGN_ILLEGAL)},
		{"ER_DOCUMENT_FUNCTION_INVALID_IN_STYLESHEET_DOM", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources, ER_DOCUMENT_FUNCTION_INVALID_IN_STYLESHEET_DOM)},
		{"ER_CANT_RESOLVE_PREFIX_OF_NON_PREFIX_RESOLVER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources, ER_CANT_RESOLVE_PREFIX_OF_NON_PREFIX_RESOLVER)},
		{"ER_REDIRECT_COULDNT_GET_FILENAME", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources, ER_REDIRECT_COULDNT_GET_FILENAME)},
		{"ER_CANNOT_BUILD_FORMATTERLISTENER_IN_REDIRECT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources, ER_CANNOT_BUILD_FORMATTERLISTENER_IN_REDIRECT)},
		{"ER_INVALID_PREFIX_IN_EXCLUDERESULTPREFIX", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources, ER_INVALID_PREFIX_IN_EXCLUDERESULTPREFIX)},
		{"ER_MISSING_NS_URI", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources, ER_MISSING_NS_URI)},
		{"ER_MISSING_ARG_FOR_OPTION", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources, ER_MISSING_ARG_FOR_OPTION)},
		{"ER_INVALID_OPTION", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources, ER_INVALID_OPTION)},
		{"ER_MALFORMED_FORMAT_STRING", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources, ER_MALFORMED_FORMAT_STRING)},
		{"ER_STYLESHEET_REQUIRES_VERSION_ATTRIB", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources, ER_STYLESHEET_REQUIRES_VERSION_ATTRIB)},
		{"ER_ILLEGAL_ATTRIBUTE_VALUE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources, ER_ILLEGAL_ATTRIBUTE_VALUE)},
		{"ER_CHOOSE_REQUIRES_WHEN", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources, ER_CHOOSE_REQUIRES_WHEN)},
		{"ER_NO_APPLY_IMPORT_IN_FOR_EACH", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources, ER_NO_APPLY_IMPORT_IN_FOR_EACH)},
		{"ER_CANT_USE_DTM_FOR_OUTPUT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources, ER_CANT_USE_DTM_FOR_OUTPUT)},
		{"ER_CANT_USE_DTM_FOR_INPUT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources, ER_CANT_USE_DTM_FOR_INPUT)},
		{"ER_CALL_TO_EXT_FAILED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources, ER_CALL_TO_EXT_FAILED)},
		{"ER_PREFIX_MUST_RESOLVE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources, ER_PREFIX_MUST_RESOLVE)},
		{"ER_INVALID_UTF16_SURROGATE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources, ER_INVALID_UTF16_SURROGATE)},
		{"ER_XSLATTRSET_USED_ITSELF", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources, ER_XSLATTRSET_USED_ITSELF)},
		{"ER_CANNOT_MIX_XERCESDOM", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources, ER_CANNOT_MIX_XERCESDOM)},
		{"ER_TOO_MANY_LISTENERS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources, ER_TOO_MANY_LISTENERS)},
		{"ER_IN_ELEMTEMPLATEELEM_READOBJECT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources, ER_IN_ELEMTEMPLATEELEM_READOBJECT)},
		{"ER_DUPLICATE_NAMED_TEMPLATE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources, ER_DUPLICATE_NAMED_TEMPLATE)},
		{"ER_INVALID_KEY_CALL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources, ER_INVALID_KEY_CALL)},
		{"ER_REFERENCING_ITSELF", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources, ER_REFERENCING_ITSELF)},
		{"ER_ILLEGAL_DOMSOURCE_INPUT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources, ER_ILLEGAL_DOMSOURCE_INPUT)},
		{"ER_CLASS_NOT_FOUND_FOR_OPTION", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources, ER_CLASS_NOT_FOUND_FOR_OPTION)},
		{"ER_REQUIRED_ELEM_NOT_FOUND", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources, ER_REQUIRED_ELEM_NOT_FOUND)},
		{"ER_INPUT_CANNOT_BE_NULL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources, ER_INPUT_CANNOT_BE_NULL)},
		{"ER_URI_CANNOT_BE_NULL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources, ER_URI_CANNOT_BE_NULL)},
		{"ER_FILE_CANNOT_BE_NULL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources, ER_FILE_CANNOT_BE_NULL)},
		{"ER_SOURCE_CANNOT_BE_NULL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources, ER_SOURCE_CANNOT_BE_NULL)},
		{"ER_CANNOT_INIT_BSFMGR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources, ER_CANNOT_INIT_BSFMGR)},
		{"ER_CANNOT_CMPL_EXTENSN", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources, ER_CANNOT_CMPL_EXTENSN)},
		{"ER_CANNOT_CREATE_EXTENSN", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources, ER_CANNOT_CREATE_EXTENSN)},
		{"ER_INSTANCE_MTHD_CALL_REQUIRES", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources, ER_INSTANCE_MTHD_CALL_REQUIRES)},
		{"ER_INVALID_ELEMENT_NAME", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources, ER_INVALID_ELEMENT_NAME)},
		{"ER_ELEMENT_NAME_METHOD_STATIC", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources, ER_ELEMENT_NAME_METHOD_STATIC)},
		{"ER_EXTENSION_FUNC_UNKNOWN", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources, ER_EXTENSION_FUNC_UNKNOWN)},
		{"ER_MORE_MATCH_CONSTRUCTOR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources, ER_MORE_MATCH_CONSTRUCTOR)},
		{"ER_MORE_MATCH_METHOD", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources, ER_MORE_MATCH_METHOD)},
		{"ER_MORE_MATCH_ELEMENT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources, ER_MORE_MATCH_ELEMENT)},
		{"ER_INVALID_CONTEXT_PASSED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources, ER_INVALID_CONTEXT_PASSED)},
		{"ER_POOL_EXISTS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources, ER_POOL_EXISTS)},
		{"ER_NO_DRIVER_NAME", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources, ER_NO_DRIVER_NAME)},
		{"ER_NO_URL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources, ER_NO_URL)},
		{"ER_POOL_SIZE_LESSTHAN_ONE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources, ER_POOL_SIZE_LESSTHAN_ONE)},
		{"ER_INVALID_DRIVER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources, ER_INVALID_DRIVER)},
		{"ER_NO_STYLESHEETROOT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources, ER_NO_STYLESHEETROOT)},
		{"ER_ILLEGAL_XMLSPACE_VALUE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources, ER_ILLEGAL_XMLSPACE_VALUE)},
		{"ER_PROCESSFROMNODE_FAILED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources, ER_PROCESSFROMNODE_FAILED)},
		{"ER_RESOURCE_COULD_NOT_LOAD", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources, ER_RESOURCE_COULD_NOT_LOAD)},
		{"ER_BUFFER_SIZE_LESSTHAN_ZERO", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources, ER_BUFFER_SIZE_LESSTHAN_ZERO)},
		{"ER_UNKNOWN_ERROR_CALLING_EXTENSION", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources, ER_UNKNOWN_ERROR_CALLING_EXTENSION)},
		{"ER_NO_NAMESPACE_DECL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources, ER_NO_NAMESPACE_DECL)},
		{"ER_ELEM_CONTENT_NOT_ALLOWED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources, ER_ELEM_CONTENT_NOT_ALLOWED)},
		{"ER_STYLESHEET_DIRECTED_TERMINATION", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources, ER_STYLESHEET_DIRECTED_TERMINATION)},
		{"ER_ONE_OR_TWO", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources, ER_ONE_OR_TWO)},
		{"ER_TWO_OR_THREE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources, ER_TWO_OR_THREE)},
		{"ER_COULD_NOT_LOAD_RESOURCE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources, ER_COULD_NOT_LOAD_RESOURCE)},
		{"ER_CANNOT_INIT_DEFAULT_TEMPLATES", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources, ER_CANNOT_INIT_DEFAULT_TEMPLATES)},
		{"ER_RESULT_NULL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources, ER_RESULT_NULL)},
		{"ER_RESULT_COULD_NOT_BE_SET", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources, ER_RESULT_COULD_NOT_BE_SET)},
		{"ER_NO_OUTPUT_SPECIFIED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources, ER_NO_OUTPUT_SPECIFIED)},
		{"ER_CANNOT_TRANSFORM_TO_RESULT_TYPE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources, ER_CANNOT_TRANSFORM_TO_RESULT_TYPE)},
		{"ER_CANNOT_TRANSFORM_SOURCE_TYPE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources, ER_CANNOT_TRANSFORM_SOURCE_TYPE)},
		{"ER_NULL_CONTENT_HANDLER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources, ER_NULL_CONTENT_HANDLER)},
		{"ER_NULL_ERROR_HANDLER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources, ER_NULL_ERROR_HANDLER)},
		{"ER_CANNOT_CALL_PARSE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources, ER_CANNOT_CALL_PARSE)},
		{"ER_NO_PARENT_FOR_FILTER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources, ER_NO_PARENT_FOR_FILTER)},
		{"ER_NO_STYLESHEET_IN_MEDIA", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources, ER_NO_STYLESHEET_IN_MEDIA)},
		{"ER_NO_STYLESHEET_PI", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources, ER_NO_STYLESHEET_PI)},
		{"ER_NOT_SUPPORTED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources, ER_NOT_SUPPORTED)},
		{"ER_PROPERTY_VALUE_BOOLEAN", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources, ER_PROPERTY_VALUE_BOOLEAN)},
		{"ER_COULD_NOT_FIND_EXTERN_SCRIPT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources, ER_COULD_NOT_FIND_EXTERN_SCRIPT)},
		{"ER_RESOURCE_COULD_NOT_FIND", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources, ER_RESOURCE_COULD_NOT_FIND)},
		{"ER_OUTPUT_PROPERTY_NOT_RECOGNIZED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources, ER_OUTPUT_PROPERTY_NOT_RECOGNIZED)},
		{"ER_FAILED_CREATING_ELEMLITRSLT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources, ER_FAILED_CREATING_ELEMLITRSLT)},
		{"ER_VALUE_SHOULD_BE_NUMBER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources, ER_VALUE_SHOULD_BE_NUMBER)},
		{"ER_VALUE_SHOULD_EQUAL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources, ER_VALUE_SHOULD_EQUAL)},
		{"ER_FAILED_CALLING_METHOD", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources, ER_FAILED_CALLING_METHOD)},
		{"ER_FAILED_CREATING_ELEMTMPL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources, ER_FAILED_CREATING_ELEMTMPL)},
		{"ER_CHARS_NOT_ALLOWED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources, ER_CHARS_NOT_ALLOWED)},
		{"ER_ATTR_NOT_ALLOWED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources, ER_ATTR_NOT_ALLOWED)},
		{"ER_BAD_VALUE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources, ER_BAD_VALUE)},
		{"ER_ATTRIB_VALUE_NOT_FOUND", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources, ER_ATTRIB_VALUE_NOT_FOUND)},
		{"ER_ATTRIB_VALUE_NOT_RECOGNIZED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources, ER_ATTRIB_VALUE_NOT_RECOGNIZED)},
		{"ER_NULL_URI_NAMESPACE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources, ER_NULL_URI_NAMESPACE)},
		{"ER_NUMBER_TOO_BIG", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources, ER_NUMBER_TOO_BIG)},
		{"ER_CANNOT_FIND_SAX1_DRIVER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources, ER_CANNOT_FIND_SAX1_DRIVER)},
		{"ER_SAX1_DRIVER_NOT_LOADED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources, ER_SAX1_DRIVER_NOT_LOADED)},
		{"ER_SAX1_DRIVER_NOT_INSTANTIATED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources, ER_SAX1_DRIVER_NOT_INSTANTIATED)},
		{"ER_SAX1_DRIVER_NOT_IMPLEMENT_PARSER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources, ER_SAX1_DRIVER_NOT_IMPLEMENT_PARSER)},
		{"ER_PARSER_PROPERTY_NOT_SPECIFIED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources, ER_PARSER_PROPERTY_NOT_SPECIFIED)},
		{"ER_PARSER_ARG_CANNOT_BE_NULL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources, ER_PARSER_ARG_CANNOT_BE_NULL)},
		{"ER_FEATURE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources, ER_FEATURE)},
		{"ER_PROPERTY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources, ER_PROPERTY)},
		{"ER_NULL_ENTITY_RESOLVER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources, ER_NULL_ENTITY_RESOLVER)},
		{"ER_NULL_DTD_HANDLER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources, ER_NULL_DTD_HANDLER)},
		{"ER_NO_DRIVER_NAME_SPECIFIED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources, ER_NO_DRIVER_NAME_SPECIFIED)},
		{"ER_NO_URL_SPECIFIED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources, ER_NO_URL_SPECIFIED)},
		{"ER_POOLSIZE_LESS_THAN_ONE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources, ER_POOLSIZE_LESS_THAN_ONE)},
		{"ER_INVALID_DRIVER_NAME", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources, ER_INVALID_DRIVER_NAME)},
		{"ER_ERRORLISTENER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources, ER_ERRORLISTENER)},
		{"ER_ASSERT_NO_TEMPLATE_PARENT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources, ER_ASSERT_NO_TEMPLATE_PARENT)},
		{"ER_ASSERT_REDUNDENT_EXPR_ELIMINATOR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources, ER_ASSERT_REDUNDENT_EXPR_ELIMINATOR)},
		{"ER_NOT_ALLOWED_IN_POSITION", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources, ER_NOT_ALLOWED_IN_POSITION)},
		{"ER_NONWHITESPACE_NOT_ALLOWED_IN_POSITION", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources, ER_NONWHITESPACE_NOT_ALLOWED_IN_POSITION)},
		{"ER_NAMESPACE_CONTEXT_NULL_NAMESPACE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources, ER_NAMESPACE_CONTEXT_NULL_NAMESPACE)},
		{"ER_NAMESPACE_CONTEXT_NULL_PREFIX", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources, ER_NAMESPACE_CONTEXT_NULL_PREFIX)},
		{"ER_XPATH_RESOLVER_NULL_QNAME", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources, ER_XPATH_RESOLVER_NULL_QNAME)},
		{"ER_XPATH_RESOLVER_NEGATIVE_ARITY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources, ER_XPATH_RESOLVER_NEGATIVE_ARITY)},
		{"INVALID_TCHAR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources, INVALID_TCHAR)},
		{"INVALID_QNAME", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources, INVALID_QNAME)},
		{"INVALID_ENUM", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources, INVALID_ENUM)},
		{"INVALID_NMTOKEN", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources, INVALID_NMTOKEN)},
		{"INVALID_NCNAME", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources, INVALID_NCNAME)},
		{"INVALID_BOOLEAN", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources, INVALID_BOOLEAN)},
		{"INVALID_NUMBER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources, INVALID_NUMBER)},
		{"ER_ARG_LITERAL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources, ER_ARG_LITERAL)},
		{"ER_DUPLICATE_GLOBAL_VAR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources, ER_DUPLICATE_GLOBAL_VAR)},
		{"ER_DUPLICATE_VAR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources, ER_DUPLICATE_VAR)},
		{"ER_TEMPLATE_NAME_MATCH", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources, ER_TEMPLATE_NAME_MATCH)},
		{"ER_INVALID_PREFIX", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources, ER_INVALID_PREFIX)},
		{"ER_NO_ATTRIB_SET", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources, ER_NO_ATTRIB_SET)},
		{"ER_FUNCTION_NOT_FOUND", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources, ER_FUNCTION_NOT_FOUND)},
		{"ER_CANT_HAVE_CONTENT_AND_SELECT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources, ER_CANT_HAVE_CONTENT_AND_SELECT)},
		{"ER_INVALID_SET_PARAM_VALUE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources, ER_INVALID_SET_PARAM_VALUE)},
		{"ER_SET_FEATURE_NULL_NAME", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources, ER_SET_FEATURE_NULL_NAME)},
		{"ER_GET_FEATURE_NULL_NAME", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources, ER_GET_FEATURE_NULL_NAME)},
		{"ER_UNSUPPORTED_FEATURE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources, ER_UNSUPPORTED_FEATURE)},
		{"ER_EXTENSION_ELEMENT_NOT_ALLOWED_IN_SECURE_PROCESSING", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources, ER_EXTENSION_ELEMENT_NOT_ALLOWED_IN_SECURE_PROCESSING)},
		{"WG_FOUND_CURLYBRACE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources, WG_FOUND_CURLYBRACE)},
		{"WG_COUNT_ATTRIB_MATCHES_NO_ANCESTOR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources, WG_COUNT_ATTRIB_MATCHES_NO_ANCESTOR)},
		{"WG_EXPR_ATTRIB_CHANGED_TO_SELECT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources, WG_EXPR_ATTRIB_CHANGED_TO_SELECT)},
		{"WG_NO_LOCALE_IN_FORMATNUMBER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources, WG_NO_LOCALE_IN_FORMATNUMBER)},
		{"WG_LOCALE_NOT_FOUND", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources, WG_LOCALE_NOT_FOUND)},
		{"WG_CANNOT_MAKE_URL_FROM", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources, WG_CANNOT_MAKE_URL_FROM)},
		{"WG_CANNOT_LOAD_REQUESTED_DOC", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources, WG_CANNOT_LOAD_REQUESTED_DOC)},
		{"WG_CANNOT_FIND_COLLATOR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources, WG_CANNOT_FIND_COLLATOR)},
		{"WG_FUNCTIONS_SHOULD_USE_URL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources, WG_FUNCTIONS_SHOULD_USE_URL)},
		{"WG_ENCODING_NOT_SUPPORTED_USING_UTF8", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources, WG_ENCODING_NOT_SUPPORTED_USING_UTF8)},
		{"WG_ENCODING_NOT_SUPPORTED_USING_JAVA", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources, WG_ENCODING_NOT_SUPPORTED_USING_JAVA)},
		{"WG_SPECIFICITY_CONFLICTS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources, WG_SPECIFICITY_CONFLICTS)},
		{"WG_PARSING_AND_PREPARING", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources, WG_PARSING_AND_PREPARING)},
		{"WG_ATTR_TEMPLATE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources, WG_ATTR_TEMPLATE)},
		{"WG_CONFLICT_BETWEEN_XSLSTRIPSPACE_AND_XSLPRESERVESPACE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources, WG_CONFLICT_BETWEEN_XSLSTRIPSPACE_AND_XSLPRESERVESPACE)},
		{"WG_ATTRIB_NOT_HANDLED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources, WG_ATTRIB_NOT_HANDLED)},
		{"WG_NO_DECIMALFORMAT_DECLARATION", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources, WG_NO_DECIMALFORMAT_DECLARATION)},
		{"WG_OLD_XSLT_NS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources, WG_OLD_XSLT_NS)},
		{"WG_ONE_DEFAULT_XSLDECIMALFORMAT_ALLOWED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources, WG_ONE_DEFAULT_XSLDECIMALFORMAT_ALLOWED)},
		{"WG_XSLDECIMALFORMAT_NAMES_MUST_BE_UNIQUE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources, WG_XSLDECIMALFORMAT_NAMES_MUST_BE_UNIQUE)},
		{"WG_ILLEGAL_ATTRIBUTE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources, WG_ILLEGAL_ATTRIBUTE)},
		{"WG_COULD_NOT_RESOLVE_PREFIX", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources, WG_COULD_NOT_RESOLVE_PREFIX)},
		{"WG_STYLESHEET_REQUIRES_VERSION_ATTRIB", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources, WG_STYLESHEET_REQUIRES_VERSION_ATTRIB)},
		{"WG_ILLEGAL_ATTRIBUTE_NAME", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources, WG_ILLEGAL_ATTRIBUTE_NAME)},
		{"WG_ILLEGAL_ATTRIBUTE_VALUE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources, WG_ILLEGAL_ATTRIBUTE_VALUE)},
		{"WG_EMPTY_SECOND_ARG", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources, WG_EMPTY_SECOND_ARG)},
		{"WG_PROCESSINGINSTRUCTION_NAME_CANT_BE_XML", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources, WG_PROCESSINGINSTRUCTION_NAME_CANT_BE_XML)},
		{"WG_PROCESSINGINSTRUCTION_NOTVALID_NCNAME", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources, WG_PROCESSINGINSTRUCTION_NOTVALID_NCNAME)},
		{"WG_ILLEGAL_ATTRIBUTE_POSITION", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources, WG_ILLEGAL_ATTRIBUTE_POSITION)},
		{"NO_MODIFICATION_ALLOWED_ERR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources, NO_MODIFICATION_ALLOWED_ERR)},
		{"BAD_CODE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources, BAD_CODE)},
		{"FORMAT_FAILED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources, FORMAT_FAILED)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(XSLTErrorResources, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(XSLTErrorResources, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.org.apache.xalan.internal.res.XSLTErrorResources",
		"java.util.ListResourceBundle",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(XSLTErrorResources, name, initialize, &classInfo$$, XSLTErrorResources::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(XSLTErrorResources);
	});
	return class$;
}

$Class* XSLTErrorResources::class$ = nullptr;

						} // res
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com