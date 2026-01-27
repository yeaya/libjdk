#include <com/sun/org/apache/xalan/internal/res/XSLTErrorResources_it.h>

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

$FieldInfo _XSLTErrorResources_it_FieldInfo_[] = {
	{"ER_INVALID_NAMESPACE_URI_VALUE_FOR_RESULT_PREFIX", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_it, ER_INVALID_NAMESPACE_URI_VALUE_FOR_RESULT_PREFIX)},
	{"ER_INVALID_NAMESPACE_URI_VALUE_FOR_RESULT_PREFIX_FOR_DEFAULT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_it, ER_INVALID_NAMESPACE_URI_VALUE_FOR_RESULT_PREFIX_FOR_DEFAULT)},
	{"ER_NO_CURLYBRACE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_it, ER_NO_CURLYBRACE)},
	{"ER_FUNCTION_NOT_SUPPORTED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_it, ER_FUNCTION_NOT_SUPPORTED)},
	{"ER_ILLEGAL_ATTRIBUTE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_it, ER_ILLEGAL_ATTRIBUTE)},
	{"ER_NULL_SOURCENODE_APPLYIMPORTS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_it, ER_NULL_SOURCENODE_APPLYIMPORTS)},
	{"ER_CANNOT_ADD", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_it, ER_CANNOT_ADD)},
	{"ER_NULL_SOURCENODE_HANDLEAPPLYTEMPLATES", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_it, ER_NULL_SOURCENODE_HANDLEAPPLYTEMPLATES)},
	{"ER_NO_NAME_ATTRIB", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_it, ER_NO_NAME_ATTRIB)},
	{"ER_TEMPLATE_NOT_FOUND", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_it, ER_TEMPLATE_NOT_FOUND)},
	{"ER_CANT_RESOLVE_NAME_AVT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_it, ER_CANT_RESOLVE_NAME_AVT)},
	{"ER_REQUIRES_ATTRIB", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_it, ER_REQUIRES_ATTRIB)},
	{"ER_MUST_HAVE_TEST_ATTRIB", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_it, ER_MUST_HAVE_TEST_ATTRIB)},
	{"ER_BAD_VAL_ON_LEVEL_ATTRIB", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_it, ER_BAD_VAL_ON_LEVEL_ATTRIB)},
	{"ER_PROCESSINGINSTRUCTION_NAME_CANT_BE_XML", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_it, ER_PROCESSINGINSTRUCTION_NAME_CANT_BE_XML)},
	{"ER_PROCESSINGINSTRUCTION_NOTVALID_NCNAME", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_it, ER_PROCESSINGINSTRUCTION_NOTVALID_NCNAME)},
	{"ER_NEED_MATCH_ATTRIB", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_it, ER_NEED_MATCH_ATTRIB)},
	{"ER_NEED_NAME_OR_MATCH_ATTRIB", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_it, ER_NEED_NAME_OR_MATCH_ATTRIB)},
	{"ER_CANT_RESOLVE_NSPREFIX", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_it, ER_CANT_RESOLVE_NSPREFIX)},
	{"ER_ILLEGAL_VALUE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_it, ER_ILLEGAL_VALUE)},
	{"ER_NO_OWNERDOC", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_it, ER_NO_OWNERDOC)},
	{"ER_ELEMTEMPLATEELEM_ERR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_it, ER_ELEMTEMPLATEELEM_ERR)},
	{"ER_NULL_CHILD", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_it, ER_NULL_CHILD)},
	{"ER_NEED_SELECT_ATTRIB", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_it, ER_NEED_SELECT_ATTRIB)},
	{"ER_NEED_TEST_ATTRIB", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_it, ER_NEED_TEST_ATTRIB)},
	{"ER_NEED_NAME_ATTRIB", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_it, ER_NEED_NAME_ATTRIB)},
	{"ER_NO_CONTEXT_OWNERDOC", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_it, ER_NO_CONTEXT_OWNERDOC)},
	{"ER_COULD_NOT_CREATE_XML_PROC_LIAISON", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_it, ER_COULD_NOT_CREATE_XML_PROC_LIAISON)},
	{"ER_PROCESS_NOT_SUCCESSFUL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_it, ER_PROCESS_NOT_SUCCESSFUL)},
	{"ER_NOT_SUCCESSFUL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_it, ER_NOT_SUCCESSFUL)},
	{"ER_ENCODING_NOT_SUPPORTED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_it, ER_ENCODING_NOT_SUPPORTED)},
	{"ER_COULD_NOT_CREATE_TRACELISTENER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_it, ER_COULD_NOT_CREATE_TRACELISTENER)},
	{"ER_KEY_REQUIRES_NAME_ATTRIB", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_it, ER_KEY_REQUIRES_NAME_ATTRIB)},
	{"ER_KEY_REQUIRES_MATCH_ATTRIB", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_it, ER_KEY_REQUIRES_MATCH_ATTRIB)},
	{"ER_KEY_REQUIRES_USE_ATTRIB", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_it, ER_KEY_REQUIRES_USE_ATTRIB)},
	{"ER_REQUIRES_ELEMENTS_ATTRIB", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_it, ER_REQUIRES_ELEMENTS_ATTRIB)},
	{"ER_MISSING_PREFIX_ATTRIB", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_it, ER_MISSING_PREFIX_ATTRIB)},
	{"ER_BAD_STYLESHEET_URL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_it, ER_BAD_STYLESHEET_URL)},
	{"ER_FILE_NOT_FOUND", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_it, ER_FILE_NOT_FOUND)},
	{"ER_IOEXCEPTION", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_it, ER_IOEXCEPTION)},
	{"ER_NO_HREF_ATTRIB", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_it, ER_NO_HREF_ATTRIB)},
	{"ER_STYLESHEET_INCLUDES_ITSELF", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_it, ER_STYLESHEET_INCLUDES_ITSELF)},
	{"ER_PROCESSINCLUDE_ERROR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_it, ER_PROCESSINCLUDE_ERROR)},
	{"ER_MISSING_LANG_ATTRIB", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_it, ER_MISSING_LANG_ATTRIB)},
	{"ER_MISSING_CONTAINER_ELEMENT_COMPONENT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_it, ER_MISSING_CONTAINER_ELEMENT_COMPONENT)},
	{"ER_CAN_ONLY_OUTPUT_TO_ELEMENT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_it, ER_CAN_ONLY_OUTPUT_TO_ELEMENT)},
	{"ER_PROCESS_ERROR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_it, ER_PROCESS_ERROR)},
	{"ER_UNIMPLNODE_ERROR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_it, ER_UNIMPLNODE_ERROR)},
	{"ER_NO_SELECT_EXPRESSION", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_it, ER_NO_SELECT_EXPRESSION)},
	{"ER_CANNOT_SERIALIZE_XSLPROCESSOR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_it, ER_CANNOT_SERIALIZE_XSLPROCESSOR)},
	{"ER_NO_INPUT_STYLESHEET", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_it, ER_NO_INPUT_STYLESHEET)},
	{"ER_FAILED_PROCESS_STYLESHEET", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_it, ER_FAILED_PROCESS_STYLESHEET)},
	{"ER_COULDNT_PARSE_DOC", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_it, ER_COULDNT_PARSE_DOC)},
	{"ER_COULDNT_FIND_FRAGMENT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_it, ER_COULDNT_FIND_FRAGMENT)},
	{"ER_NODE_NOT_ELEMENT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_it, ER_NODE_NOT_ELEMENT)},
	{"ER_FOREACH_NEED_MATCH_OR_NAME_ATTRIB", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_it, ER_FOREACH_NEED_MATCH_OR_NAME_ATTRIB)},
	{"ER_TEMPLATES_NEED_MATCH_OR_NAME_ATTRIB", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_it, ER_TEMPLATES_NEED_MATCH_OR_NAME_ATTRIB)},
	{"ER_NO_CLONE_OF_DOCUMENT_FRAG", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_it, ER_NO_CLONE_OF_DOCUMENT_FRAG)},
	{"ER_CANT_CREATE_ITEM", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_it, ER_CANT_CREATE_ITEM)},
	{"ER_XMLSPACE_ILLEGAL_VALUE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_it, ER_XMLSPACE_ILLEGAL_VALUE)},
	{"ER_NO_XSLKEY_DECLARATION", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_it, ER_NO_XSLKEY_DECLARATION)},
	{"ER_CANT_CREATE_URL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_it, ER_CANT_CREATE_URL)},
	{"ER_XSLFUNCTIONS_UNSUPPORTED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_it, ER_XSLFUNCTIONS_UNSUPPORTED)},
	{"ER_PROCESSOR_ERROR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_it, ER_PROCESSOR_ERROR)},
	{"ER_NOT_ALLOWED_INSIDE_STYLESHEET", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_it, ER_NOT_ALLOWED_INSIDE_STYLESHEET)},
	{"ER_RESULTNS_NOT_SUPPORTED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_it, ER_RESULTNS_NOT_SUPPORTED)},
	{"ER_DEFAULTSPACE_NOT_SUPPORTED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_it, ER_DEFAULTSPACE_NOT_SUPPORTED)},
	{"ER_INDENTRESULT_NOT_SUPPORTED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_it, ER_INDENTRESULT_NOT_SUPPORTED)},
	{"ER_ILLEGAL_ATTRIB", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_it, ER_ILLEGAL_ATTRIB)},
	{"ER_UNKNOWN_XSL_ELEM", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_it, ER_UNKNOWN_XSL_ELEM)},
	{"ER_BAD_XSLSORT_USE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_it, ER_BAD_XSLSORT_USE)},
	{"ER_MISPLACED_XSLWHEN", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_it, ER_MISPLACED_XSLWHEN)},
	{"ER_XSLWHEN_NOT_PARENTED_BY_XSLCHOOSE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_it, ER_XSLWHEN_NOT_PARENTED_BY_XSLCHOOSE)},
	{"ER_MISPLACED_XSLOTHERWISE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_it, ER_MISPLACED_XSLOTHERWISE)},
	{"ER_XSLOTHERWISE_NOT_PARENTED_BY_XSLCHOOSE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_it, ER_XSLOTHERWISE_NOT_PARENTED_BY_XSLCHOOSE)},
	{"ER_NOT_ALLOWED_INSIDE_TEMPLATE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_it, ER_NOT_ALLOWED_INSIDE_TEMPLATE)},
	{"ER_UNKNOWN_EXT_NS_PREFIX", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_it, ER_UNKNOWN_EXT_NS_PREFIX)},
	{"ER_IMPORTS_AS_FIRST_ELEM", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_it, ER_IMPORTS_AS_FIRST_ELEM)},
	{"ER_IMPORTING_ITSELF", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_it, ER_IMPORTING_ITSELF)},
	{"ER_XMLSPACE_ILLEGAL_VAL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_it, ER_XMLSPACE_ILLEGAL_VAL)},
	{"ER_PROCESSSTYLESHEET_NOT_SUCCESSFUL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_it, ER_PROCESSSTYLESHEET_NOT_SUCCESSFUL)},
	{"ER_SAX_EXCEPTION", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_it, ER_SAX_EXCEPTION)},
	{"ER_XSLT_ERROR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_it, ER_XSLT_ERROR)},
	{"ER_CURRENCY_SIGN_ILLEGAL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_it, ER_CURRENCY_SIGN_ILLEGAL)},
	{"ER_DOCUMENT_FUNCTION_INVALID_IN_STYLESHEET_DOM", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_it, ER_DOCUMENT_FUNCTION_INVALID_IN_STYLESHEET_DOM)},
	{"ER_CANT_RESOLVE_PREFIX_OF_NON_PREFIX_RESOLVER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_it, ER_CANT_RESOLVE_PREFIX_OF_NON_PREFIX_RESOLVER)},
	{"ER_REDIRECT_COULDNT_GET_FILENAME", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_it, ER_REDIRECT_COULDNT_GET_FILENAME)},
	{"ER_CANNOT_BUILD_FORMATTERLISTENER_IN_REDIRECT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_it, ER_CANNOT_BUILD_FORMATTERLISTENER_IN_REDIRECT)},
	{"ER_INVALID_PREFIX_IN_EXCLUDERESULTPREFIX", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_it, ER_INVALID_PREFIX_IN_EXCLUDERESULTPREFIX)},
	{"ER_MISSING_NS_URI", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_it, ER_MISSING_NS_URI)},
	{"ER_MISSING_ARG_FOR_OPTION", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_it, ER_MISSING_ARG_FOR_OPTION)},
	{"ER_INVALID_OPTION", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_it, ER_INVALID_OPTION)},
	{"ER_MALFORMED_FORMAT_STRING", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_it, ER_MALFORMED_FORMAT_STRING)},
	{"ER_STYLESHEET_REQUIRES_VERSION_ATTRIB", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_it, ER_STYLESHEET_REQUIRES_VERSION_ATTRIB)},
	{"ER_ILLEGAL_ATTRIBUTE_VALUE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_it, ER_ILLEGAL_ATTRIBUTE_VALUE)},
	{"ER_CHOOSE_REQUIRES_WHEN", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_it, ER_CHOOSE_REQUIRES_WHEN)},
	{"ER_NO_APPLY_IMPORT_IN_FOR_EACH", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_it, ER_NO_APPLY_IMPORT_IN_FOR_EACH)},
	{"ER_CANT_USE_DTM_FOR_OUTPUT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_it, ER_CANT_USE_DTM_FOR_OUTPUT)},
	{"ER_CANT_USE_DTM_FOR_INPUT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_it, ER_CANT_USE_DTM_FOR_INPUT)},
	{"ER_CALL_TO_EXT_FAILED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_it, ER_CALL_TO_EXT_FAILED)},
	{"ER_PREFIX_MUST_RESOLVE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_it, ER_PREFIX_MUST_RESOLVE)},
	{"ER_INVALID_UTF16_SURROGATE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_it, ER_INVALID_UTF16_SURROGATE)},
	{"ER_XSLATTRSET_USED_ITSELF", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_it, ER_XSLATTRSET_USED_ITSELF)},
	{"ER_CANNOT_MIX_XERCESDOM", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_it, ER_CANNOT_MIX_XERCESDOM)},
	{"ER_TOO_MANY_LISTENERS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_it, ER_TOO_MANY_LISTENERS)},
	{"ER_IN_ELEMTEMPLATEELEM_READOBJECT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_it, ER_IN_ELEMTEMPLATEELEM_READOBJECT)},
	{"ER_DUPLICATE_NAMED_TEMPLATE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_it, ER_DUPLICATE_NAMED_TEMPLATE)},
	{"ER_INVALID_KEY_CALL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_it, ER_INVALID_KEY_CALL)},
	{"ER_REFERENCING_ITSELF", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_it, ER_REFERENCING_ITSELF)},
	{"ER_ILLEGAL_DOMSOURCE_INPUT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_it, ER_ILLEGAL_DOMSOURCE_INPUT)},
	{"ER_CLASS_NOT_FOUND_FOR_OPTION", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_it, ER_CLASS_NOT_FOUND_FOR_OPTION)},
	{"ER_REQUIRED_ELEM_NOT_FOUND", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_it, ER_REQUIRED_ELEM_NOT_FOUND)},
	{"ER_INPUT_CANNOT_BE_NULL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_it, ER_INPUT_CANNOT_BE_NULL)},
	{"ER_URI_CANNOT_BE_NULL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_it, ER_URI_CANNOT_BE_NULL)},
	{"ER_FILE_CANNOT_BE_NULL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_it, ER_FILE_CANNOT_BE_NULL)},
	{"ER_SOURCE_CANNOT_BE_NULL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_it, ER_SOURCE_CANNOT_BE_NULL)},
	{"ER_CANNOT_INIT_BSFMGR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_it, ER_CANNOT_INIT_BSFMGR)},
	{"ER_CANNOT_CMPL_EXTENSN", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_it, ER_CANNOT_CMPL_EXTENSN)},
	{"ER_CANNOT_CREATE_EXTENSN", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_it, ER_CANNOT_CREATE_EXTENSN)},
	{"ER_INSTANCE_MTHD_CALL_REQUIRES", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_it, ER_INSTANCE_MTHD_CALL_REQUIRES)},
	{"ER_INVALID_ELEMENT_NAME", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_it, ER_INVALID_ELEMENT_NAME)},
	{"ER_ELEMENT_NAME_METHOD_STATIC", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_it, ER_ELEMENT_NAME_METHOD_STATIC)},
	{"ER_EXTENSION_FUNC_UNKNOWN", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_it, ER_EXTENSION_FUNC_UNKNOWN)},
	{"ER_MORE_MATCH_CONSTRUCTOR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_it, ER_MORE_MATCH_CONSTRUCTOR)},
	{"ER_MORE_MATCH_METHOD", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_it, ER_MORE_MATCH_METHOD)},
	{"ER_MORE_MATCH_ELEMENT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_it, ER_MORE_MATCH_ELEMENT)},
	{"ER_INVALID_CONTEXT_PASSED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_it, ER_INVALID_CONTEXT_PASSED)},
	{"ER_POOL_EXISTS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_it, ER_POOL_EXISTS)},
	{"ER_NO_DRIVER_NAME", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_it, ER_NO_DRIVER_NAME)},
	{"ER_NO_URL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_it, ER_NO_URL)},
	{"ER_POOL_SIZE_LESSTHAN_ONE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_it, ER_POOL_SIZE_LESSTHAN_ONE)},
	{"ER_INVALID_DRIVER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_it, ER_INVALID_DRIVER)},
	{"ER_NO_STYLESHEETROOT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_it, ER_NO_STYLESHEETROOT)},
	{"ER_ILLEGAL_XMLSPACE_VALUE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_it, ER_ILLEGAL_XMLSPACE_VALUE)},
	{"ER_PROCESSFROMNODE_FAILED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_it, ER_PROCESSFROMNODE_FAILED)},
	{"ER_RESOURCE_COULD_NOT_LOAD", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_it, ER_RESOURCE_COULD_NOT_LOAD)},
	{"ER_BUFFER_SIZE_LESSTHAN_ZERO", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_it, ER_BUFFER_SIZE_LESSTHAN_ZERO)},
	{"ER_UNKNOWN_ERROR_CALLING_EXTENSION", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_it, ER_UNKNOWN_ERROR_CALLING_EXTENSION)},
	{"ER_NO_NAMESPACE_DECL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_it, ER_NO_NAMESPACE_DECL)},
	{"ER_ELEM_CONTENT_NOT_ALLOWED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_it, ER_ELEM_CONTENT_NOT_ALLOWED)},
	{"ER_STYLESHEET_DIRECTED_TERMINATION", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_it, ER_STYLESHEET_DIRECTED_TERMINATION)},
	{"ER_ONE_OR_TWO", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_it, ER_ONE_OR_TWO)},
	{"ER_TWO_OR_THREE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_it, ER_TWO_OR_THREE)},
	{"ER_COULD_NOT_LOAD_RESOURCE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_it, ER_COULD_NOT_LOAD_RESOURCE)},
	{"ER_CANNOT_INIT_DEFAULT_TEMPLATES", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_it, ER_CANNOT_INIT_DEFAULT_TEMPLATES)},
	{"ER_RESULT_NULL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_it, ER_RESULT_NULL)},
	{"ER_RESULT_COULD_NOT_BE_SET", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_it, ER_RESULT_COULD_NOT_BE_SET)},
	{"ER_NO_OUTPUT_SPECIFIED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_it, ER_NO_OUTPUT_SPECIFIED)},
	{"ER_CANNOT_TRANSFORM_TO_RESULT_TYPE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_it, ER_CANNOT_TRANSFORM_TO_RESULT_TYPE)},
	{"ER_CANNOT_TRANSFORM_SOURCE_TYPE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_it, ER_CANNOT_TRANSFORM_SOURCE_TYPE)},
	{"ER_NULL_CONTENT_HANDLER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_it, ER_NULL_CONTENT_HANDLER)},
	{"ER_NULL_ERROR_HANDLER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_it, ER_NULL_ERROR_HANDLER)},
	{"ER_CANNOT_CALL_PARSE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_it, ER_CANNOT_CALL_PARSE)},
	{"ER_NO_PARENT_FOR_FILTER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_it, ER_NO_PARENT_FOR_FILTER)},
	{"ER_NO_STYLESHEET_IN_MEDIA", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_it, ER_NO_STYLESHEET_IN_MEDIA)},
	{"ER_NO_STYLESHEET_PI", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_it, ER_NO_STYLESHEET_PI)},
	{"ER_NOT_SUPPORTED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_it, ER_NOT_SUPPORTED)},
	{"ER_PROPERTY_VALUE_BOOLEAN", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_it, ER_PROPERTY_VALUE_BOOLEAN)},
	{"ER_COULD_NOT_FIND_EXTERN_SCRIPT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_it, ER_COULD_NOT_FIND_EXTERN_SCRIPT)},
	{"ER_RESOURCE_COULD_NOT_FIND", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_it, ER_RESOURCE_COULD_NOT_FIND)},
	{"ER_OUTPUT_PROPERTY_NOT_RECOGNIZED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_it, ER_OUTPUT_PROPERTY_NOT_RECOGNIZED)},
	{"ER_FAILED_CREATING_ELEMLITRSLT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_it, ER_FAILED_CREATING_ELEMLITRSLT)},
	{"ER_VALUE_SHOULD_BE_NUMBER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_it, ER_VALUE_SHOULD_BE_NUMBER)},
	{"ER_VALUE_SHOULD_EQUAL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_it, ER_VALUE_SHOULD_EQUAL)},
	{"ER_FAILED_CALLING_METHOD", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_it, ER_FAILED_CALLING_METHOD)},
	{"ER_FAILED_CREATING_ELEMTMPL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_it, ER_FAILED_CREATING_ELEMTMPL)},
	{"ER_CHARS_NOT_ALLOWED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_it, ER_CHARS_NOT_ALLOWED)},
	{"ER_ATTR_NOT_ALLOWED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_it, ER_ATTR_NOT_ALLOWED)},
	{"ER_BAD_VALUE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_it, ER_BAD_VALUE)},
	{"ER_ATTRIB_VALUE_NOT_FOUND", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_it, ER_ATTRIB_VALUE_NOT_FOUND)},
	{"ER_ATTRIB_VALUE_NOT_RECOGNIZED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_it, ER_ATTRIB_VALUE_NOT_RECOGNIZED)},
	{"ER_NULL_URI_NAMESPACE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_it, ER_NULL_URI_NAMESPACE)},
	{"ER_NUMBER_TOO_BIG", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_it, ER_NUMBER_TOO_BIG)},
	{"ER_CANNOT_FIND_SAX1_DRIVER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_it, ER_CANNOT_FIND_SAX1_DRIVER)},
	{"ER_SAX1_DRIVER_NOT_LOADED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_it, ER_SAX1_DRIVER_NOT_LOADED)},
	{"ER_SAX1_DRIVER_NOT_INSTANTIATED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_it, ER_SAX1_DRIVER_NOT_INSTANTIATED)},
	{"ER_SAX1_DRIVER_NOT_IMPLEMENT_PARSER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_it, ER_SAX1_DRIVER_NOT_IMPLEMENT_PARSER)},
	{"ER_PARSER_PROPERTY_NOT_SPECIFIED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_it, ER_PARSER_PROPERTY_NOT_SPECIFIED)},
	{"ER_PARSER_ARG_CANNOT_BE_NULL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_it, ER_PARSER_ARG_CANNOT_BE_NULL)},
	{"ER_FEATURE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_it, ER_FEATURE)},
	{"ER_PROPERTY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_it, ER_PROPERTY)},
	{"ER_NULL_ENTITY_RESOLVER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_it, ER_NULL_ENTITY_RESOLVER)},
	{"ER_NULL_DTD_HANDLER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_it, ER_NULL_DTD_HANDLER)},
	{"ER_NO_DRIVER_NAME_SPECIFIED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_it, ER_NO_DRIVER_NAME_SPECIFIED)},
	{"ER_NO_URL_SPECIFIED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_it, ER_NO_URL_SPECIFIED)},
	{"ER_POOLSIZE_LESS_THAN_ONE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_it, ER_POOLSIZE_LESS_THAN_ONE)},
	{"ER_INVALID_DRIVER_NAME", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_it, ER_INVALID_DRIVER_NAME)},
	{"ER_ERRORLISTENER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_it, ER_ERRORLISTENER)},
	{"ER_ASSERT_NO_TEMPLATE_PARENT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_it, ER_ASSERT_NO_TEMPLATE_PARENT)},
	{"ER_ASSERT_REDUNDENT_EXPR_ELIMINATOR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_it, ER_ASSERT_REDUNDENT_EXPR_ELIMINATOR)},
	{"ER_NOT_ALLOWED_IN_POSITION", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_it, ER_NOT_ALLOWED_IN_POSITION)},
	{"ER_NONWHITESPACE_NOT_ALLOWED_IN_POSITION", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_it, ER_NONWHITESPACE_NOT_ALLOWED_IN_POSITION)},
	{"ER_NAMESPACE_CONTEXT_NULL_NAMESPACE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_it, ER_NAMESPACE_CONTEXT_NULL_NAMESPACE)},
	{"ER_NAMESPACE_CONTEXT_NULL_PREFIX", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_it, ER_NAMESPACE_CONTEXT_NULL_PREFIX)},
	{"ER_XPATH_RESOLVER_NULL_QNAME", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_it, ER_XPATH_RESOLVER_NULL_QNAME)},
	{"ER_XPATH_RESOLVER_NEGATIVE_ARITY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_it, ER_XPATH_RESOLVER_NEGATIVE_ARITY)},
	{"INVALID_TCHAR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_it, INVALID_TCHAR)},
	{"INVALID_QNAME", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_it, INVALID_QNAME)},
	{"INVALID_ENUM", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_it, INVALID_ENUM)},
	{"INVALID_NMTOKEN", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_it, INVALID_NMTOKEN)},
	{"INVALID_NCNAME", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_it, INVALID_NCNAME)},
	{"INVALID_BOOLEAN", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_it, INVALID_BOOLEAN)},
	{"INVALID_NUMBER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_it, INVALID_NUMBER)},
	{"ER_ARG_LITERAL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_it, ER_ARG_LITERAL)},
	{"ER_DUPLICATE_GLOBAL_VAR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_it, ER_DUPLICATE_GLOBAL_VAR)},
	{"ER_DUPLICATE_VAR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_it, ER_DUPLICATE_VAR)},
	{"ER_TEMPLATE_NAME_MATCH", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_it, ER_TEMPLATE_NAME_MATCH)},
	{"ER_INVALID_PREFIX", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_it, ER_INVALID_PREFIX)},
	{"ER_NO_ATTRIB_SET", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_it, ER_NO_ATTRIB_SET)},
	{"ER_FUNCTION_NOT_FOUND", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_it, ER_FUNCTION_NOT_FOUND)},
	{"ER_CANT_HAVE_CONTENT_AND_SELECT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_it, ER_CANT_HAVE_CONTENT_AND_SELECT)},
	{"ER_INVALID_SET_PARAM_VALUE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_it, ER_INVALID_SET_PARAM_VALUE)},
	{"ER_SET_FEATURE_NULL_NAME", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_it, ER_SET_FEATURE_NULL_NAME)},
	{"ER_GET_FEATURE_NULL_NAME", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_it, ER_GET_FEATURE_NULL_NAME)},
	{"ER_UNSUPPORTED_FEATURE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_it, ER_UNSUPPORTED_FEATURE)},
	{"ER_EXTENSION_ELEMENT_NOT_ALLOWED_IN_SECURE_PROCESSING", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_it, ER_EXTENSION_ELEMENT_NOT_ALLOWED_IN_SECURE_PROCESSING)},
	{"WG_FOUND_CURLYBRACE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_it, WG_FOUND_CURLYBRACE)},
	{"WG_COUNT_ATTRIB_MATCHES_NO_ANCESTOR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_it, WG_COUNT_ATTRIB_MATCHES_NO_ANCESTOR)},
	{"WG_EXPR_ATTRIB_CHANGED_TO_SELECT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_it, WG_EXPR_ATTRIB_CHANGED_TO_SELECT)},
	{"WG_NO_LOCALE_IN_FORMATNUMBER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_it, WG_NO_LOCALE_IN_FORMATNUMBER)},
	{"WG_LOCALE_NOT_FOUND", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_it, WG_LOCALE_NOT_FOUND)},
	{"WG_CANNOT_MAKE_URL_FROM", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_it, WG_CANNOT_MAKE_URL_FROM)},
	{"WG_CANNOT_LOAD_REQUESTED_DOC", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_it, WG_CANNOT_LOAD_REQUESTED_DOC)},
	{"WG_CANNOT_FIND_COLLATOR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_it, WG_CANNOT_FIND_COLLATOR)},
	{"WG_FUNCTIONS_SHOULD_USE_URL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_it, WG_FUNCTIONS_SHOULD_USE_URL)},
	{"WG_ENCODING_NOT_SUPPORTED_USING_UTF8", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_it, WG_ENCODING_NOT_SUPPORTED_USING_UTF8)},
	{"WG_ENCODING_NOT_SUPPORTED_USING_JAVA", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_it, WG_ENCODING_NOT_SUPPORTED_USING_JAVA)},
	{"WG_SPECIFICITY_CONFLICTS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_it, WG_SPECIFICITY_CONFLICTS)},
	{"WG_PARSING_AND_PREPARING", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_it, WG_PARSING_AND_PREPARING)},
	{"WG_ATTR_TEMPLATE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_it, WG_ATTR_TEMPLATE)},
	{"WG_CONFLICT_BETWEEN_XSLSTRIPSPACE_AND_XSLPRESERVESPACE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_it, WG_CONFLICT_BETWEEN_XSLSTRIPSPACE_AND_XSLPRESERVESPACE)},
	{"WG_ATTRIB_NOT_HANDLED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_it, WG_ATTRIB_NOT_HANDLED)},
	{"WG_NO_DECIMALFORMAT_DECLARATION", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_it, WG_NO_DECIMALFORMAT_DECLARATION)},
	{"WG_OLD_XSLT_NS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_it, WG_OLD_XSLT_NS)},
	{"WG_ONE_DEFAULT_XSLDECIMALFORMAT_ALLOWED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_it, WG_ONE_DEFAULT_XSLDECIMALFORMAT_ALLOWED)},
	{"WG_XSLDECIMALFORMAT_NAMES_MUST_BE_UNIQUE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_it, WG_XSLDECIMALFORMAT_NAMES_MUST_BE_UNIQUE)},
	{"WG_ILLEGAL_ATTRIBUTE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_it, WG_ILLEGAL_ATTRIBUTE)},
	{"WG_COULD_NOT_RESOLVE_PREFIX", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_it, WG_COULD_NOT_RESOLVE_PREFIX)},
	{"WG_STYLESHEET_REQUIRES_VERSION_ATTRIB", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_it, WG_STYLESHEET_REQUIRES_VERSION_ATTRIB)},
	{"WG_ILLEGAL_ATTRIBUTE_NAME", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_it, WG_ILLEGAL_ATTRIBUTE_NAME)},
	{"WG_ILLEGAL_ATTRIBUTE_VALUE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_it, WG_ILLEGAL_ATTRIBUTE_VALUE)},
	{"WG_EMPTY_SECOND_ARG", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_it, WG_EMPTY_SECOND_ARG)},
	{"WG_PROCESSINGINSTRUCTION_NAME_CANT_BE_XML", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_it, WG_PROCESSINGINSTRUCTION_NAME_CANT_BE_XML)},
	{"WG_PROCESSINGINSTRUCTION_NOTVALID_NCNAME", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_it, WG_PROCESSINGINSTRUCTION_NOTVALID_NCNAME)},
	{"WG_ILLEGAL_ATTRIBUTE_POSITION", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_it, WG_ILLEGAL_ATTRIBUTE_POSITION)},
	{"NO_MODIFICATION_ALLOWED_ERR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_it, NO_MODIFICATION_ALLOWED_ERR)},
	{"BAD_CODE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_it, BAD_CODE)},
	{"FORMAT_FAILED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSLTErrorResources_it, FORMAT_FAILED)},
	{}
};

$MethodInfo _XSLTErrorResources_it_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(XSLTErrorResources_it, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(XSLTErrorResources_it, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _XSLTErrorResources_it_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xalan.internal.res.XSLTErrorResources_it",
	"java.util.ListResourceBundle",
	nullptr,
	_XSLTErrorResources_it_FieldInfo_,
	_XSLTErrorResources_it_MethodInfo_
};

$Object* allocate$XSLTErrorResources_it($Class* clazz) {
	return $of($alloc(XSLTErrorResources_it));
}

$String* XSLTErrorResources_it::ER_INVALID_NAMESPACE_URI_VALUE_FOR_RESULT_PREFIX = nullptr;
$String* XSLTErrorResources_it::ER_INVALID_NAMESPACE_URI_VALUE_FOR_RESULT_PREFIX_FOR_DEFAULT = nullptr;
$String* XSLTErrorResources_it::ER_NO_CURLYBRACE = nullptr;
$String* XSLTErrorResources_it::ER_FUNCTION_NOT_SUPPORTED = nullptr;
$String* XSLTErrorResources_it::ER_ILLEGAL_ATTRIBUTE = nullptr;
$String* XSLTErrorResources_it::ER_NULL_SOURCENODE_APPLYIMPORTS = nullptr;
$String* XSLTErrorResources_it::ER_CANNOT_ADD = nullptr;
$String* XSLTErrorResources_it::ER_NULL_SOURCENODE_HANDLEAPPLYTEMPLATES = nullptr;
$String* XSLTErrorResources_it::ER_NO_NAME_ATTRIB = nullptr;
$String* XSLTErrorResources_it::ER_TEMPLATE_NOT_FOUND = nullptr;
$String* XSLTErrorResources_it::ER_CANT_RESOLVE_NAME_AVT = nullptr;
$String* XSLTErrorResources_it::ER_REQUIRES_ATTRIB = nullptr;
$String* XSLTErrorResources_it::ER_MUST_HAVE_TEST_ATTRIB = nullptr;
$String* XSLTErrorResources_it::ER_BAD_VAL_ON_LEVEL_ATTRIB = nullptr;
$String* XSLTErrorResources_it::ER_PROCESSINGINSTRUCTION_NAME_CANT_BE_XML = nullptr;
$String* XSLTErrorResources_it::ER_PROCESSINGINSTRUCTION_NOTVALID_NCNAME = nullptr;
$String* XSLTErrorResources_it::ER_NEED_MATCH_ATTRIB = nullptr;
$String* XSLTErrorResources_it::ER_NEED_NAME_OR_MATCH_ATTRIB = nullptr;
$String* XSLTErrorResources_it::ER_CANT_RESOLVE_NSPREFIX = nullptr;
$String* XSLTErrorResources_it::ER_ILLEGAL_VALUE = nullptr;
$String* XSLTErrorResources_it::ER_NO_OWNERDOC = nullptr;
$String* XSLTErrorResources_it::ER_ELEMTEMPLATEELEM_ERR = nullptr;
$String* XSLTErrorResources_it::ER_NULL_CHILD = nullptr;
$String* XSLTErrorResources_it::ER_NEED_SELECT_ATTRIB = nullptr;
$String* XSLTErrorResources_it::ER_NEED_TEST_ATTRIB = nullptr;
$String* XSLTErrorResources_it::ER_NEED_NAME_ATTRIB = nullptr;
$String* XSLTErrorResources_it::ER_NO_CONTEXT_OWNERDOC = nullptr;
$String* XSLTErrorResources_it::ER_COULD_NOT_CREATE_XML_PROC_LIAISON = nullptr;
$String* XSLTErrorResources_it::ER_PROCESS_NOT_SUCCESSFUL = nullptr;
$String* XSLTErrorResources_it::ER_NOT_SUCCESSFUL = nullptr;
$String* XSLTErrorResources_it::ER_ENCODING_NOT_SUPPORTED = nullptr;
$String* XSLTErrorResources_it::ER_COULD_NOT_CREATE_TRACELISTENER = nullptr;
$String* XSLTErrorResources_it::ER_KEY_REQUIRES_NAME_ATTRIB = nullptr;
$String* XSLTErrorResources_it::ER_KEY_REQUIRES_MATCH_ATTRIB = nullptr;
$String* XSLTErrorResources_it::ER_KEY_REQUIRES_USE_ATTRIB = nullptr;
$String* XSLTErrorResources_it::ER_REQUIRES_ELEMENTS_ATTRIB = nullptr;
$String* XSLTErrorResources_it::ER_MISSING_PREFIX_ATTRIB = nullptr;
$String* XSLTErrorResources_it::ER_BAD_STYLESHEET_URL = nullptr;
$String* XSLTErrorResources_it::ER_FILE_NOT_FOUND = nullptr;
$String* XSLTErrorResources_it::ER_IOEXCEPTION = nullptr;
$String* XSLTErrorResources_it::ER_NO_HREF_ATTRIB = nullptr;
$String* XSLTErrorResources_it::ER_STYLESHEET_INCLUDES_ITSELF = nullptr;
$String* XSLTErrorResources_it::ER_PROCESSINCLUDE_ERROR = nullptr;
$String* XSLTErrorResources_it::ER_MISSING_LANG_ATTRIB = nullptr;
$String* XSLTErrorResources_it::ER_MISSING_CONTAINER_ELEMENT_COMPONENT = nullptr;
$String* XSLTErrorResources_it::ER_CAN_ONLY_OUTPUT_TO_ELEMENT = nullptr;
$String* XSLTErrorResources_it::ER_PROCESS_ERROR = nullptr;
$String* XSLTErrorResources_it::ER_UNIMPLNODE_ERROR = nullptr;
$String* XSLTErrorResources_it::ER_NO_SELECT_EXPRESSION = nullptr;
$String* XSLTErrorResources_it::ER_CANNOT_SERIALIZE_XSLPROCESSOR = nullptr;
$String* XSLTErrorResources_it::ER_NO_INPUT_STYLESHEET = nullptr;
$String* XSLTErrorResources_it::ER_FAILED_PROCESS_STYLESHEET = nullptr;
$String* XSLTErrorResources_it::ER_COULDNT_PARSE_DOC = nullptr;
$String* XSLTErrorResources_it::ER_COULDNT_FIND_FRAGMENT = nullptr;
$String* XSLTErrorResources_it::ER_NODE_NOT_ELEMENT = nullptr;
$String* XSLTErrorResources_it::ER_FOREACH_NEED_MATCH_OR_NAME_ATTRIB = nullptr;
$String* XSLTErrorResources_it::ER_TEMPLATES_NEED_MATCH_OR_NAME_ATTRIB = nullptr;
$String* XSLTErrorResources_it::ER_NO_CLONE_OF_DOCUMENT_FRAG = nullptr;
$String* XSLTErrorResources_it::ER_CANT_CREATE_ITEM = nullptr;
$String* XSLTErrorResources_it::ER_XMLSPACE_ILLEGAL_VALUE = nullptr;
$String* XSLTErrorResources_it::ER_NO_XSLKEY_DECLARATION = nullptr;
$String* XSLTErrorResources_it::ER_CANT_CREATE_URL = nullptr;
$String* XSLTErrorResources_it::ER_XSLFUNCTIONS_UNSUPPORTED = nullptr;
$String* XSLTErrorResources_it::ER_PROCESSOR_ERROR = nullptr;
$String* XSLTErrorResources_it::ER_NOT_ALLOWED_INSIDE_STYLESHEET = nullptr;
$String* XSLTErrorResources_it::ER_RESULTNS_NOT_SUPPORTED = nullptr;
$String* XSLTErrorResources_it::ER_DEFAULTSPACE_NOT_SUPPORTED = nullptr;
$String* XSLTErrorResources_it::ER_INDENTRESULT_NOT_SUPPORTED = nullptr;
$String* XSLTErrorResources_it::ER_ILLEGAL_ATTRIB = nullptr;
$String* XSLTErrorResources_it::ER_UNKNOWN_XSL_ELEM = nullptr;
$String* XSLTErrorResources_it::ER_BAD_XSLSORT_USE = nullptr;
$String* XSLTErrorResources_it::ER_MISPLACED_XSLWHEN = nullptr;
$String* XSLTErrorResources_it::ER_XSLWHEN_NOT_PARENTED_BY_XSLCHOOSE = nullptr;
$String* XSLTErrorResources_it::ER_MISPLACED_XSLOTHERWISE = nullptr;
$String* XSLTErrorResources_it::ER_XSLOTHERWISE_NOT_PARENTED_BY_XSLCHOOSE = nullptr;
$String* XSLTErrorResources_it::ER_NOT_ALLOWED_INSIDE_TEMPLATE = nullptr;
$String* XSLTErrorResources_it::ER_UNKNOWN_EXT_NS_PREFIX = nullptr;
$String* XSLTErrorResources_it::ER_IMPORTS_AS_FIRST_ELEM = nullptr;
$String* XSLTErrorResources_it::ER_IMPORTING_ITSELF = nullptr;
$String* XSLTErrorResources_it::ER_XMLSPACE_ILLEGAL_VAL = nullptr;
$String* XSLTErrorResources_it::ER_PROCESSSTYLESHEET_NOT_SUCCESSFUL = nullptr;
$String* XSLTErrorResources_it::ER_SAX_EXCEPTION = nullptr;
$String* XSLTErrorResources_it::ER_XSLT_ERROR = nullptr;
$String* XSLTErrorResources_it::ER_CURRENCY_SIGN_ILLEGAL = nullptr;
$String* XSLTErrorResources_it::ER_DOCUMENT_FUNCTION_INVALID_IN_STYLESHEET_DOM = nullptr;
$String* XSLTErrorResources_it::ER_CANT_RESOLVE_PREFIX_OF_NON_PREFIX_RESOLVER = nullptr;
$String* XSLTErrorResources_it::ER_REDIRECT_COULDNT_GET_FILENAME = nullptr;
$String* XSLTErrorResources_it::ER_CANNOT_BUILD_FORMATTERLISTENER_IN_REDIRECT = nullptr;
$String* XSLTErrorResources_it::ER_INVALID_PREFIX_IN_EXCLUDERESULTPREFIX = nullptr;
$String* XSLTErrorResources_it::ER_MISSING_NS_URI = nullptr;
$String* XSLTErrorResources_it::ER_MISSING_ARG_FOR_OPTION = nullptr;
$String* XSLTErrorResources_it::ER_INVALID_OPTION = nullptr;
$String* XSLTErrorResources_it::ER_MALFORMED_FORMAT_STRING = nullptr;
$String* XSLTErrorResources_it::ER_STYLESHEET_REQUIRES_VERSION_ATTRIB = nullptr;
$String* XSLTErrorResources_it::ER_ILLEGAL_ATTRIBUTE_VALUE = nullptr;
$String* XSLTErrorResources_it::ER_CHOOSE_REQUIRES_WHEN = nullptr;
$String* XSLTErrorResources_it::ER_NO_APPLY_IMPORT_IN_FOR_EACH = nullptr;
$String* XSLTErrorResources_it::ER_CANT_USE_DTM_FOR_OUTPUT = nullptr;
$String* XSLTErrorResources_it::ER_CANT_USE_DTM_FOR_INPUT = nullptr;
$String* XSLTErrorResources_it::ER_CALL_TO_EXT_FAILED = nullptr;
$String* XSLTErrorResources_it::ER_PREFIX_MUST_RESOLVE = nullptr;
$String* XSLTErrorResources_it::ER_INVALID_UTF16_SURROGATE = nullptr;
$String* XSLTErrorResources_it::ER_XSLATTRSET_USED_ITSELF = nullptr;
$String* XSLTErrorResources_it::ER_CANNOT_MIX_XERCESDOM = nullptr;
$String* XSLTErrorResources_it::ER_TOO_MANY_LISTENERS = nullptr;
$String* XSLTErrorResources_it::ER_IN_ELEMTEMPLATEELEM_READOBJECT = nullptr;
$String* XSLTErrorResources_it::ER_DUPLICATE_NAMED_TEMPLATE = nullptr;
$String* XSLTErrorResources_it::ER_INVALID_KEY_CALL = nullptr;
$String* XSLTErrorResources_it::ER_REFERENCING_ITSELF = nullptr;
$String* XSLTErrorResources_it::ER_ILLEGAL_DOMSOURCE_INPUT = nullptr;
$String* XSLTErrorResources_it::ER_CLASS_NOT_FOUND_FOR_OPTION = nullptr;
$String* XSLTErrorResources_it::ER_REQUIRED_ELEM_NOT_FOUND = nullptr;
$String* XSLTErrorResources_it::ER_INPUT_CANNOT_BE_NULL = nullptr;
$String* XSLTErrorResources_it::ER_URI_CANNOT_BE_NULL = nullptr;
$String* XSLTErrorResources_it::ER_FILE_CANNOT_BE_NULL = nullptr;
$String* XSLTErrorResources_it::ER_SOURCE_CANNOT_BE_NULL = nullptr;
$String* XSLTErrorResources_it::ER_CANNOT_INIT_BSFMGR = nullptr;
$String* XSLTErrorResources_it::ER_CANNOT_CMPL_EXTENSN = nullptr;
$String* XSLTErrorResources_it::ER_CANNOT_CREATE_EXTENSN = nullptr;
$String* XSLTErrorResources_it::ER_INSTANCE_MTHD_CALL_REQUIRES = nullptr;
$String* XSLTErrorResources_it::ER_INVALID_ELEMENT_NAME = nullptr;
$String* XSLTErrorResources_it::ER_ELEMENT_NAME_METHOD_STATIC = nullptr;
$String* XSLTErrorResources_it::ER_EXTENSION_FUNC_UNKNOWN = nullptr;
$String* XSLTErrorResources_it::ER_MORE_MATCH_CONSTRUCTOR = nullptr;
$String* XSLTErrorResources_it::ER_MORE_MATCH_METHOD = nullptr;
$String* XSLTErrorResources_it::ER_MORE_MATCH_ELEMENT = nullptr;
$String* XSLTErrorResources_it::ER_INVALID_CONTEXT_PASSED = nullptr;
$String* XSLTErrorResources_it::ER_POOL_EXISTS = nullptr;
$String* XSLTErrorResources_it::ER_NO_DRIVER_NAME = nullptr;
$String* XSLTErrorResources_it::ER_NO_URL = nullptr;
$String* XSLTErrorResources_it::ER_POOL_SIZE_LESSTHAN_ONE = nullptr;
$String* XSLTErrorResources_it::ER_INVALID_DRIVER = nullptr;
$String* XSLTErrorResources_it::ER_NO_STYLESHEETROOT = nullptr;
$String* XSLTErrorResources_it::ER_ILLEGAL_XMLSPACE_VALUE = nullptr;
$String* XSLTErrorResources_it::ER_PROCESSFROMNODE_FAILED = nullptr;
$String* XSLTErrorResources_it::ER_RESOURCE_COULD_NOT_LOAD = nullptr;
$String* XSLTErrorResources_it::ER_BUFFER_SIZE_LESSTHAN_ZERO = nullptr;
$String* XSLTErrorResources_it::ER_UNKNOWN_ERROR_CALLING_EXTENSION = nullptr;
$String* XSLTErrorResources_it::ER_NO_NAMESPACE_DECL = nullptr;
$String* XSLTErrorResources_it::ER_ELEM_CONTENT_NOT_ALLOWED = nullptr;
$String* XSLTErrorResources_it::ER_STYLESHEET_DIRECTED_TERMINATION = nullptr;
$String* XSLTErrorResources_it::ER_ONE_OR_TWO = nullptr;
$String* XSLTErrorResources_it::ER_TWO_OR_THREE = nullptr;
$String* XSLTErrorResources_it::ER_COULD_NOT_LOAD_RESOURCE = nullptr;
$String* XSLTErrorResources_it::ER_CANNOT_INIT_DEFAULT_TEMPLATES = nullptr;
$String* XSLTErrorResources_it::ER_RESULT_NULL = nullptr;
$String* XSLTErrorResources_it::ER_RESULT_COULD_NOT_BE_SET = nullptr;
$String* XSLTErrorResources_it::ER_NO_OUTPUT_SPECIFIED = nullptr;
$String* XSLTErrorResources_it::ER_CANNOT_TRANSFORM_TO_RESULT_TYPE = nullptr;
$String* XSLTErrorResources_it::ER_CANNOT_TRANSFORM_SOURCE_TYPE = nullptr;
$String* XSLTErrorResources_it::ER_NULL_CONTENT_HANDLER = nullptr;
$String* XSLTErrorResources_it::ER_NULL_ERROR_HANDLER = nullptr;
$String* XSLTErrorResources_it::ER_CANNOT_CALL_PARSE = nullptr;
$String* XSLTErrorResources_it::ER_NO_PARENT_FOR_FILTER = nullptr;
$String* XSLTErrorResources_it::ER_NO_STYLESHEET_IN_MEDIA = nullptr;
$String* XSLTErrorResources_it::ER_NO_STYLESHEET_PI = nullptr;
$String* XSLTErrorResources_it::ER_NOT_SUPPORTED = nullptr;
$String* XSLTErrorResources_it::ER_PROPERTY_VALUE_BOOLEAN = nullptr;
$String* XSLTErrorResources_it::ER_COULD_NOT_FIND_EXTERN_SCRIPT = nullptr;
$String* XSLTErrorResources_it::ER_RESOURCE_COULD_NOT_FIND = nullptr;
$String* XSLTErrorResources_it::ER_OUTPUT_PROPERTY_NOT_RECOGNIZED = nullptr;
$String* XSLTErrorResources_it::ER_FAILED_CREATING_ELEMLITRSLT = nullptr;
$String* XSLTErrorResources_it::ER_VALUE_SHOULD_BE_NUMBER = nullptr;
$String* XSLTErrorResources_it::ER_VALUE_SHOULD_EQUAL = nullptr;
$String* XSLTErrorResources_it::ER_FAILED_CALLING_METHOD = nullptr;
$String* XSLTErrorResources_it::ER_FAILED_CREATING_ELEMTMPL = nullptr;
$String* XSLTErrorResources_it::ER_CHARS_NOT_ALLOWED = nullptr;
$String* XSLTErrorResources_it::ER_ATTR_NOT_ALLOWED = nullptr;
$String* XSLTErrorResources_it::ER_BAD_VALUE = nullptr;
$String* XSLTErrorResources_it::ER_ATTRIB_VALUE_NOT_FOUND = nullptr;
$String* XSLTErrorResources_it::ER_ATTRIB_VALUE_NOT_RECOGNIZED = nullptr;
$String* XSLTErrorResources_it::ER_NULL_URI_NAMESPACE = nullptr;
$String* XSLTErrorResources_it::ER_NUMBER_TOO_BIG = nullptr;
$String* XSLTErrorResources_it::ER_CANNOT_FIND_SAX1_DRIVER = nullptr;
$String* XSLTErrorResources_it::ER_SAX1_DRIVER_NOT_LOADED = nullptr;
$String* XSLTErrorResources_it::ER_SAX1_DRIVER_NOT_INSTANTIATED = nullptr;
$String* XSLTErrorResources_it::ER_SAX1_DRIVER_NOT_IMPLEMENT_PARSER = nullptr;
$String* XSLTErrorResources_it::ER_PARSER_PROPERTY_NOT_SPECIFIED = nullptr;
$String* XSLTErrorResources_it::ER_PARSER_ARG_CANNOT_BE_NULL = nullptr;
$String* XSLTErrorResources_it::ER_FEATURE = nullptr;
$String* XSLTErrorResources_it::ER_PROPERTY = nullptr;
$String* XSLTErrorResources_it::ER_NULL_ENTITY_RESOLVER = nullptr;
$String* XSLTErrorResources_it::ER_NULL_DTD_HANDLER = nullptr;
$String* XSLTErrorResources_it::ER_NO_DRIVER_NAME_SPECIFIED = nullptr;
$String* XSLTErrorResources_it::ER_NO_URL_SPECIFIED = nullptr;
$String* XSLTErrorResources_it::ER_POOLSIZE_LESS_THAN_ONE = nullptr;
$String* XSLTErrorResources_it::ER_INVALID_DRIVER_NAME = nullptr;
$String* XSLTErrorResources_it::ER_ERRORLISTENER = nullptr;
$String* XSLTErrorResources_it::ER_ASSERT_NO_TEMPLATE_PARENT = nullptr;
$String* XSLTErrorResources_it::ER_ASSERT_REDUNDENT_EXPR_ELIMINATOR = nullptr;
$String* XSLTErrorResources_it::ER_NOT_ALLOWED_IN_POSITION = nullptr;
$String* XSLTErrorResources_it::ER_NONWHITESPACE_NOT_ALLOWED_IN_POSITION = nullptr;
$String* XSLTErrorResources_it::ER_NAMESPACE_CONTEXT_NULL_NAMESPACE = nullptr;
$String* XSLTErrorResources_it::ER_NAMESPACE_CONTEXT_NULL_PREFIX = nullptr;
$String* XSLTErrorResources_it::ER_XPATH_RESOLVER_NULL_QNAME = nullptr;
$String* XSLTErrorResources_it::ER_XPATH_RESOLVER_NEGATIVE_ARITY = nullptr;
$String* XSLTErrorResources_it::INVALID_TCHAR = nullptr;
$String* XSLTErrorResources_it::INVALID_QNAME = nullptr;
$String* XSLTErrorResources_it::INVALID_ENUM = nullptr;
$String* XSLTErrorResources_it::INVALID_NMTOKEN = nullptr;
$String* XSLTErrorResources_it::INVALID_NCNAME = nullptr;
$String* XSLTErrorResources_it::INVALID_BOOLEAN = nullptr;
$String* XSLTErrorResources_it::INVALID_NUMBER = nullptr;
$String* XSLTErrorResources_it::ER_ARG_LITERAL = nullptr;
$String* XSLTErrorResources_it::ER_DUPLICATE_GLOBAL_VAR = nullptr;
$String* XSLTErrorResources_it::ER_DUPLICATE_VAR = nullptr;
$String* XSLTErrorResources_it::ER_TEMPLATE_NAME_MATCH = nullptr;
$String* XSLTErrorResources_it::ER_INVALID_PREFIX = nullptr;
$String* XSLTErrorResources_it::ER_NO_ATTRIB_SET = nullptr;
$String* XSLTErrorResources_it::ER_FUNCTION_NOT_FOUND = nullptr;
$String* XSLTErrorResources_it::ER_CANT_HAVE_CONTENT_AND_SELECT = nullptr;
$String* XSLTErrorResources_it::ER_INVALID_SET_PARAM_VALUE = nullptr;
$String* XSLTErrorResources_it::ER_SET_FEATURE_NULL_NAME = nullptr;
$String* XSLTErrorResources_it::ER_GET_FEATURE_NULL_NAME = nullptr;
$String* XSLTErrorResources_it::ER_UNSUPPORTED_FEATURE = nullptr;
$String* XSLTErrorResources_it::ER_EXTENSION_ELEMENT_NOT_ALLOWED_IN_SECURE_PROCESSING = nullptr;
$String* XSLTErrorResources_it::WG_FOUND_CURLYBRACE = nullptr;
$String* XSLTErrorResources_it::WG_COUNT_ATTRIB_MATCHES_NO_ANCESTOR = nullptr;
$String* XSLTErrorResources_it::WG_EXPR_ATTRIB_CHANGED_TO_SELECT = nullptr;
$String* XSLTErrorResources_it::WG_NO_LOCALE_IN_FORMATNUMBER = nullptr;
$String* XSLTErrorResources_it::WG_LOCALE_NOT_FOUND = nullptr;
$String* XSLTErrorResources_it::WG_CANNOT_MAKE_URL_FROM = nullptr;
$String* XSLTErrorResources_it::WG_CANNOT_LOAD_REQUESTED_DOC = nullptr;
$String* XSLTErrorResources_it::WG_CANNOT_FIND_COLLATOR = nullptr;
$String* XSLTErrorResources_it::WG_FUNCTIONS_SHOULD_USE_URL = nullptr;
$String* XSLTErrorResources_it::WG_ENCODING_NOT_SUPPORTED_USING_UTF8 = nullptr;
$String* XSLTErrorResources_it::WG_ENCODING_NOT_SUPPORTED_USING_JAVA = nullptr;
$String* XSLTErrorResources_it::WG_SPECIFICITY_CONFLICTS = nullptr;
$String* XSLTErrorResources_it::WG_PARSING_AND_PREPARING = nullptr;
$String* XSLTErrorResources_it::WG_ATTR_TEMPLATE = nullptr;
$String* XSLTErrorResources_it::WG_CONFLICT_BETWEEN_XSLSTRIPSPACE_AND_XSLPRESERVESPACE = nullptr;
$String* XSLTErrorResources_it::WG_ATTRIB_NOT_HANDLED = nullptr;
$String* XSLTErrorResources_it::WG_NO_DECIMALFORMAT_DECLARATION = nullptr;
$String* XSLTErrorResources_it::WG_OLD_XSLT_NS = nullptr;
$String* XSLTErrorResources_it::WG_ONE_DEFAULT_XSLDECIMALFORMAT_ALLOWED = nullptr;
$String* XSLTErrorResources_it::WG_XSLDECIMALFORMAT_NAMES_MUST_BE_UNIQUE = nullptr;
$String* XSLTErrorResources_it::WG_ILLEGAL_ATTRIBUTE = nullptr;
$String* XSLTErrorResources_it::WG_COULD_NOT_RESOLVE_PREFIX = nullptr;
$String* XSLTErrorResources_it::WG_STYLESHEET_REQUIRES_VERSION_ATTRIB = nullptr;
$String* XSLTErrorResources_it::WG_ILLEGAL_ATTRIBUTE_NAME = nullptr;
$String* XSLTErrorResources_it::WG_ILLEGAL_ATTRIBUTE_VALUE = nullptr;
$String* XSLTErrorResources_it::WG_EMPTY_SECOND_ARG = nullptr;
$String* XSLTErrorResources_it::WG_PROCESSINGINSTRUCTION_NAME_CANT_BE_XML = nullptr;
$String* XSLTErrorResources_it::WG_PROCESSINGINSTRUCTION_NOTVALID_NCNAME = nullptr;
$String* XSLTErrorResources_it::WG_ILLEGAL_ATTRIBUTE_POSITION = nullptr;
$String* XSLTErrorResources_it::NO_MODIFICATION_ALLOWED_ERR = nullptr;
$String* XSLTErrorResources_it::BAD_CODE = nullptr;
$String* XSLTErrorResources_it::FORMAT_FAILED = nullptr;

void XSLTErrorResources_it::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* XSLTErrorResources_it::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("ER0000"_s),
			$of("{0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_it::ER_NO_CURLYBRACE),
			$of(u"Errore: \'{\' non può esistere nell\'espressione"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_it::ER_ILLEGAL_ATTRIBUTE),
			$of("{0} ha un attributo non valido: {1}"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_it::ER_NULL_SOURCENODE_APPLYIMPORTS),
			$of("sourceNode nullo in xsl:apply-imports."_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_it::ER_CANNOT_ADD),
			$of("Impossibile aggiungere {0} a {1}"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_it::ER_NULL_SOURCENODE_HANDLEAPPLYTEMPLATES),
			$of("sourceNode nullo in handleApplyTemplatesInstruction."_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_it::ER_NO_NAME_ATTRIB),
			$of("{0} deve avere un attributo name."_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_it::ER_TEMPLATE_NOT_FOUND),
			$of("Impossibile trovare il modello denominato {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_it::ER_CANT_RESOLVE_NAME_AVT),
			$of("Impossibile risolvere l\'AVT del nome in xsl:call-template."_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_it::ER_REQUIRES_ATTRIB),
			$of("{0} richiede l\'\'attributo: {1}"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_it::ER_MUST_HAVE_TEST_ATTRIB),
			$of("{0} deve avere un attributo \"test\"."_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_it::ER_BAD_VAL_ON_LEVEL_ATTRIB),
			$of("Valore non valido per l\'\'attributo level: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_it::ER_PROCESSINGINSTRUCTION_NAME_CANT_BE_XML),
			$of(u"il nome processing-instruction non può essere \'xml\'"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_it::ER_PROCESSINGINSTRUCTION_NOTVALID_NCNAME),
			$of("il nome processing-instruction deve essere un NCName valido: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_it::ER_NEED_MATCH_ATTRIB),
			$of(u"{0} deve avere un attributo match se dispone di una modalità."_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_it::ER_NEED_NAME_OR_MATCH_ATTRIB),
			$of("{0} richiede un nome o un attributo match."_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_it::ER_CANT_RESOLVE_NSPREFIX),
			$of("Impossibile risolvere il prefisso spazio di nomi {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_it::ER_ILLEGAL_VALUE),
			$of("xml:space ha un valore non valido {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_it::ER_NO_OWNERDOC),
			$of("Il nodo figlio non dispone di un documento proprietario."_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_it::ER_ELEMTEMPLATEELEM_ERR),
			$of("Errore di ElemTemplateElement: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_it::ER_NULL_CHILD),
			$of("Tentativo di aggiungere un elemento figlio nullo."_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_it::ER_NEED_SELECT_ATTRIB),
			$of("{0} richiede un attributo select."_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_it::ER_NEED_TEST_ATTRIB),
			$of("xsl:when deve avere un attributo \'test\'."_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_it::ER_NEED_NAME_ATTRIB),
			$of("xsl:with-param deve avere un attributo \'name\'."_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_it::ER_NO_CONTEXT_OWNERDOC),
			$of("il contesto non dispone di un documento proprietario."_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_it::ER_COULD_NOT_CREATE_XML_PROC_LIAISON),
			$of("Impossibile creare la relazione TransformerFactory XML {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_it::ER_PROCESS_NOT_SUCCESSFUL),
			$of("Xalan: processo non riuscito."_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_it::ER_NOT_SUCCESSFUL),
			$of("Xalan: operazione non riuscita."_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_it::ER_ENCODING_NOT_SUPPORTED),
			$of("Codifica non supportata: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_it::ER_COULD_NOT_CREATE_TRACELISTENER),
			$of("Impossibile creare TraceListener {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_it::ER_KEY_REQUIRES_NAME_ATTRIB),
			$of("xsl:key richiede un attributo \'name\'."_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_it::ER_KEY_REQUIRES_MATCH_ATTRIB),
			$of("xsl:key richiede un attributo \'match\'."_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_it::ER_KEY_REQUIRES_USE_ATTRIB),
			$of("xsl:key richiede un attributo \'use\'."_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_it::ER_REQUIRES_ELEMENTS_ATTRIB),
			$of("(StylesheetHandler) {0} richiede un attributo \'\'elements\'\'."_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_it::ER_MISSING_PREFIX_ATTRIB),
			$of("(StylesheetHandler) {0} attributo \'\'prefix\'\' mancante"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_it::ER_BAD_STYLESHEET_URL),
			$of("URL del foglio di stile non valido: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_it::ER_FILE_NOT_FOUND),
			$of("File del foglio di stile non trovato: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_it::ER_IOEXCEPTION),
			$of("Eccezione IO con il file foglio di stile: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_it::ER_NO_HREF_ATTRIB),
			$of("(StylesheetHandler) Impossibile trovare l\'\'attributo href per {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_it::ER_STYLESHEET_INCLUDES_ITSELF),
			$of(u"(StylesheetHandler) {0} include sé stesso direttamente o indirettamente."_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_it::ER_PROCESSINCLUDE_ERROR),
			$of("Errore di StylesheetHandler.processInclude: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_it::ER_MISSING_LANG_ATTRIB),
			$of("(StylesheetHandler) {0} attributo \'\'lang\'\' mancante"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_it::ER_MISSING_CONTAINER_ELEMENT_COMPONENT),
			$of("(StylesheetHandler) posizione errata dell\'\'elemento {0}. Elemento \'\'component\'\' del contenitore mancante."_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_it::ER_CAN_ONLY_OUTPUT_TO_ELEMENT),
			$of(u"L\'output può essere eseguito solo su Element, DocumentFragment, Document o PrintWriter."_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_it::ER_PROCESS_ERROR),
			$of("Errore di StylesheetRoot.process"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_it::ER_UNIMPLNODE_ERROR),
			$of("Errore di UnImplNode: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_it::ER_NO_SELECT_EXPRESSION),
			$of(u"Errore. L\'espressione di selezione dell\'xpath (-select) non è stata trovata."_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_it::ER_CANNOT_SERIALIZE_XSLPROCESSOR),
			$of("Impossibile serializzare un XSLProcessor."_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_it::ER_NO_INPUT_STYLESHEET),
			$of("Input del foglio di stile non specificato."_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_it::ER_FAILED_PROCESS_STYLESHEET),
			$of("Elaborazione del foglio di stile non riuscita."_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_it::ER_COULDNT_PARSE_DOC),
			$of("Impossibile analizzare il documento {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_it::ER_COULDNT_FIND_FRAGMENT),
			$of("Impossibile trovare il frammento {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_it::ER_NODE_NOT_ELEMENT),
			$of(u"Il nodo a cui punta l\'\'identificativo di frammento non è un elemento: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_it::ER_FOREACH_NEED_MATCH_OR_NAME_ATTRIB),
			$of("for-each deve avere un attributo match o name"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_it::ER_TEMPLATES_NEED_MATCH_OR_NAME_ATTRIB),
			$of("templates deve avere un attributo match o name"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_it::ER_NO_CLONE_OF_DOCUMENT_FRAG),
			$of("Nessun duplicato di un frammento di documento."_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_it::ER_CANT_CREATE_ITEM),
			$of("Impossibile creare una voce nella struttura dei risultati: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_it::ER_XMLSPACE_ILLEGAL_VALUE),
			$of("xml:space nell\'\'XML di origine ha un valore non valido {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_it::ER_NO_XSLKEY_DECLARATION),
			$of("Nessuna dichiarazione xsl:key per {0}."_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_it::ER_CANT_CREATE_URL),
			$of("Errore. Impossibile creare l\'\'URL per {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_it::ER_XSLFUNCTIONS_UNSUPPORTED),
			$of("xsl:functions non supportato"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_it::ER_PROCESSOR_ERROR),
			$of("Errore di TransformerFactory XSLT"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_it::ER_NOT_ALLOWED_INSIDE_STYLESHEET),
			$of("(StylesheetHandler) {0} non consentito in un foglio di stile."_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_it::ER_RESULTNS_NOT_SUPPORTED),
			$of(u"result-ns non più supportato. Utilizzare xsl:output."_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_it::ER_DEFAULTSPACE_NOT_SUPPORTED),
			$of(u"default-space non più supportato. Utilizzare xsl:strip-space o xsl:preserve-space."_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_it::ER_INDENTRESULT_NOT_SUPPORTED),
			$of(u"indent-result non più supportato. Utilizzare xsl:output."_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_it::ER_ILLEGAL_ATTRIB),
			$of("(StylesheetHandler) {0} ha un attributo non valido: {1}"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_it::ER_UNKNOWN_XSL_ELEM),
			$of("Elemento XSL sconosciuto: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_it::ER_BAD_XSLSORT_USE),
			$of(u"(StylesheetHandler) xsl:sort può essere utilizzato solo con xsl:apply-templates o xsl:for-each."_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_it::ER_MISPLACED_XSLWHEN),
			$of("(StylesheetHandler) posizione errata di xsl:when."_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_it::ER_XSLWHEN_NOT_PARENTED_BY_XSLCHOOSE),
			$of("(StylesheetHandler) xsl:when non associato da xsl:choose."_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_it::ER_MISPLACED_XSLOTHERWISE),
			$of("(StylesheetHandler) posizione errata di xsl:otherwise."_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_it::ER_XSLOTHERWISE_NOT_PARENTED_BY_XSLCHOOSE),
			$of("(StylesheetHandler) xsl:otherwise non associato da xsl:choose."_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_it::ER_NOT_ALLOWED_INSIDE_TEMPLATE),
			$of("(StylesheetHandler) {0} non consentito in un modello."_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_it::ER_UNKNOWN_EXT_NS_PREFIX),
			$of("(StylesheetHandler) {0} prefisso spazio di nomi estensione {1} sconosciuto"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_it::ER_IMPORTS_AS_FIRST_ELEM),
			$of("(StylesheetHandler) Le importazioni possono essere eseguite solo come primi elementi nel foglio di stile."_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_it::ER_IMPORTING_ITSELF),
			$of(u"(StylesheetHandler) {0} importa sé stesso direttamente o indirettamente."_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_it::ER_XMLSPACE_ILLEGAL_VAL),
			$of("(StylesheetHandler) xml:space ha un valore non valido {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_it::ER_PROCESSSTYLESHEET_NOT_SUCCESSFUL),
			$of("processStylesheet non riuscito."_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_it::ER_SAX_EXCEPTION),
			$of("Eccezione SAX"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_it::ER_FUNCTION_NOT_SUPPORTED),
			$of("Funzione non supportata."_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_it::ER_XSLT_ERROR),
			$of("Errore XSLT"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_it::ER_CURRENCY_SIGN_ILLEGAL),
			$of(u"il simbolo della valuta non è consentito in una stringa di pattern di formato"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_it::ER_DOCUMENT_FUNCTION_INVALID_IN_STYLESHEET_DOM),
			$of("Funzione del documento non supportata nel DOM del foglio di stile."_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_it::ER_CANT_RESOLVE_PREFIX_OF_NON_PREFIX_RESOLVER),
			$of("Impossibile risolvere il prefisso di un resolver senza prefissi."_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_it::ER_REDIRECT_COULDNT_GET_FILENAME),
			$of("Estensione di reindirizzamento: impossibile trovare il nome file. L\'attributo file o select deve restituire una stringa valida."_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_it::ER_CANNOT_BUILD_FORMATTERLISTENER_IN_REDIRECT),
			$of("Impossibile creare FormatterListener nell\'estensione di reindirizzamento."_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_it::ER_INVALID_PREFIX_IN_EXCLUDERESULTPREFIX),
			$of(u"Il prefisso in exclude-result-prefixes non è valido: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_it::ER_MISSING_NS_URI),
			$of("URI dello spazio di nomi mancante per il prefisso specificato"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_it::ER_MISSING_ARG_FOR_OPTION),
			$of("Argomento mancante per l\'\'opzione: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_it::ER_INVALID_OPTION),
			$of("Opzione non valida: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_it::ER_MALFORMED_FORMAT_STRING),
			$of("Stringa con formato errato: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_it::ER_STYLESHEET_REQUIRES_VERSION_ATTRIB),
			$of("xsl:stylesheet richiede un attributo \'version\'."_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_it::ER_ILLEGAL_ATTRIBUTE_VALUE),
			$of("L\'\'attributo {0} ha un valore non valido {1}"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_it::ER_CHOOSE_REQUIRES_WHEN),
			$of("xsl:choose richiede xsl:when"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_it::ER_NO_APPLY_IMPORT_IN_FOR_EACH),
			$of("xsl:apply-imports non consentito in xsl:for-each"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_it::ER_CANT_USE_DTM_FOR_OUTPUT),
			$of("Impossibile utilizzare DTMLiaison per un nodo DOM di output... Passare com.sun.org.apache.xpath.internal.DOM2Helper."_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_it::ER_CANT_USE_DTM_FOR_INPUT),
			$of("Impossibile utilizzare DTMLiaison per un nodo DOM di input... Passare com.sun.org.apache.xpath.internal.DOM2Helper."_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_it::ER_CALL_TO_EXT_FAILED),
			$of("Chiamata all\'\'elemento di estensione non riuscita: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_it::ER_PREFIX_MUST_RESOLVE),
			$of("Il prefisso deve essere risolto in uno spazio di nomi: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_it::ER_INVALID_UTF16_SURROGATE),
			$of("Rilevato surrogato UTF-16 non valido: {0}?"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_it::ER_XSLATTRSET_USED_ITSELF),
			$of(u"xsl:attribute-set {0} utilizza sé stesso, il che può causare un loop infinito."_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_it::ER_CANNOT_MIX_XERCESDOM),
			$of("Impossibile unire input non Xerces-DOM con output Xerces-DOM."_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_it::ER_TOO_MANY_LISTENERS),
			$of("addTraceListenersToStylesheet - TooManyListenersException"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_it::ER_IN_ELEMTEMPLATEELEM_READOBJECT),
			$of("In ElemTemplateElement.readObject: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_it::ER_DUPLICATE_NAMED_TEMPLATE),
			$of(u"Sono stati trovati più modelli denominati {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_it::ER_INVALID_KEY_CALL),
			$of("Chiamata di funzione non valida: non sono consentite chiamate recursive key()"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_it::ER_REFERENCING_ITSELF),
			$of(u"La variabile {0} fa riferimento a sé stessa direttamente o indirettamente."_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_it::ER_ILLEGAL_DOMSOURCE_INPUT),
			$of(u"Il nodo di input non può essere nullo per un DOMSource per newTemplates."_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_it::ER_CLASS_NOT_FOUND_FOR_OPTION),
			$of("File di classe non trovato per l\'\'opzione {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_it::ER_REQUIRED_ELEM_NOT_FOUND),
			$of("Elemento richiesto non trovato: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_it::ER_INPUT_CANNOT_BE_NULL),
			$of(u"InputStream non può essere nullo"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_it::ER_URI_CANNOT_BE_NULL),
			$of(u"L\'URI non può essere nullo"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_it::ER_FILE_CANNOT_BE_NULL),
			$of(u"Il file non può essere nullo"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_it::ER_SOURCE_CANNOT_BE_NULL),
			$of(u"InputSource non può essere nullo"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_it::ER_CANNOT_INIT_BSFMGR),
			$of("Impossibile inizializzare BSF Manager"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_it::ER_CANNOT_CMPL_EXTENSN),
			$of("Impossibile compilare l\'estensione"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_it::ER_CANNOT_CREATE_EXTENSN),
			$of("Impossibile creare l\'\'estensione {0}. Motivo: {1}"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_it::ER_INSTANCE_MTHD_CALL_REQUIRES),
			$of("La chiamata del metodo di istanza {0} richiede un\'\'istanza di oggetto come primo argomento"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_it::ER_INVALID_ELEMENT_NAME),
			$of("Specificato nome elemento {0} non valido"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_it::ER_ELEMENT_NAME_METHOD_STATIC),
			$of("Il metodo di nome elemento deve essere statico {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_it::ER_EXTENSION_FUNC_UNKNOWN),
			$of("Funzione di estensione {0} : {1} sconosciuta"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_it::ER_MORE_MATCH_CONSTRUCTOR),
			$of(u"Esistono più corrispondenze migliori per il costruttore di {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_it::ER_MORE_MATCH_METHOD),
			$of(u"Esistono più corrispondenze migliori per il metodo {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_it::ER_MORE_MATCH_ELEMENT),
			$of(u"Esistono più corrispondenze migliori per il metodo di elemento {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_it::ER_INVALID_CONTEXT_PASSED),
			$of("Passato contesto non valido per valutare {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_it::ER_POOL_EXISTS),
			$of(u"Il pool esiste già"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_it::ER_NO_DRIVER_NAME),
			$of("Nessun nome driver specificato"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_it::ER_NO_URL),
			$of("Nessun URL specificato"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_it::ER_POOL_SIZE_LESSTHAN_ONE),
			$of(u"La dimensione del pool è minore di uno."_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_it::ER_INVALID_DRIVER),
			$of("Specificato nome driver non valido."_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_it::ER_NO_STYLESHEETROOT),
			$of("Radice del foglio di stile non trovata."_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_it::ER_ILLEGAL_XMLSPACE_VALUE),
			$of("Valore non valido per xml:space"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_it::ER_PROCESSFROMNODE_FAILED),
			$of("processFromNode non riuscito"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_it::ER_RESOURCE_COULD_NOT_LOAD),
			$of("Impossibile caricare la risorsa [ {0} ]: {1} \n {2} \t {3}"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_it::ER_BUFFER_SIZE_LESSTHAN_ZERO),
			$of("Dimensione buffer <=0"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_it::ER_UNKNOWN_ERROR_CALLING_EXTENSION),
			$of("Errore sconosciuto durante la chiamata dell\'estensione"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_it::ER_NO_NAMESPACE_DECL),
			$of("Il prefisso {0} non ha una dichiarazione di spazio di nomi corrispondente"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_it::ER_ELEM_CONTENT_NOT_ALLOWED),
			$of("Contenuto di elemento non consentito per lang=javaclass {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_it::ER_STYLESHEET_DIRECTED_TERMINATION),
			$of("Il foglio di stile ha causato l\'interruzione"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_it::ER_ONE_OR_TWO),
			$of("1 o 2"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_it::ER_TWO_OR_THREE),
			$of("2 o 3"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_it::ER_COULD_NOT_LOAD_RESOURCE),
			$of("Impossibile caricare {0} (verificare CLASSPATH); verranno utilizzati i valori predefiniti"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_it::ER_CANNOT_INIT_DEFAULT_TEMPLATES),
			$of("Impossibile inizializzare i modelli predefiniti"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_it::ER_RESULT_NULL),
			$of("Il risultato non deve essere nullo"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_it::ER_RESULT_COULD_NOT_BE_SET),
			$of("Impossibile impostare il risultato"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_it::ER_NO_OUTPUT_SPECIFIED),
			$of("Nessun output specificato"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_it::ER_CANNOT_TRANSFORM_TO_RESULT_TYPE),
			$of("Impossibile eseguire la trasformazione in un risultato di tipo {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_it::ER_CANNOT_TRANSFORM_SOURCE_TYPE),
			$of("Impossibile eseguire la trasformazione in un\'\'origine di tipo {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_it::ER_NULL_CONTENT_HANDLER),
			$of("Handler dei contenuti nullo"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_it::ER_NULL_ERROR_HANDLER),
			$of("Handler degli errori nullo"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_it::ER_CANNOT_CALL_PARSE),
			$of(u"impossibile richiamare parse se non è stato impostato ContentHandler"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_it::ER_NO_PARENT_FOR_FILTER),
			$of("Nessun elemento padre per il filtro"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_it::ER_NO_STYLESHEET_IN_MEDIA),
			$of("Nessun foglio di stile trovato in {0}, media= {1}."_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_it::ER_NO_STYLESHEET_PI),
			$of("Nessun PI xml-stylesheet trovato in {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_it::ER_NOT_SUPPORTED),
			$of("Non supportato: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_it::ER_PROPERTY_VALUE_BOOLEAN),
			$of(u"Il valore della proprietà {0} deve essere un\'\'istanza booleana"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_it::ER_COULD_NOT_FIND_EXTERN_SCRIPT),
			$of("Impossibile recuperare lo script esterno in {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_it::ER_RESOURCE_COULD_NOT_FIND),
			$of("Risorsa [ {0} ] non trovata.\n {1}"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_it::ER_OUTPUT_PROPERTY_NOT_RECOGNIZED),
			$of(u"Proprietà di output non riconosciuta: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_it::ER_FAILED_CREATING_ELEMLITRSLT),
			$of("Creazione dell\'istanza ElemLiteralResult non riuscita"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_it::ER_VALUE_SHOULD_BE_NUMBER),
			$of("Il valore per {0} deve contenere un numero analizzabile"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_it::ER_VALUE_SHOULD_EQUAL),
			$of("Il valore per {0} deve corrispondere a yes o no"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_it::ER_FAILED_CALLING_METHOD),
			$of("Richiamo del metodo {0} non riuscito"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_it::ER_FAILED_CREATING_ELEMTMPL),
			$of("Creazione dell\'istanza ElemTemplateElement non riuscita"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_it::ER_CHARS_NOT_ALLOWED),
			$of("Non sono consentiti caratteri in questo punto del documento"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_it::ER_ATTR_NOT_ALLOWED),
			$of(u"L\'\'attributo \"{0}\" non è consentito nell\'\'elemento {1}."_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_it::ER_BAD_VALUE),
			$of("{0} valore non valido {1} "_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_it::ER_ATTRIB_VALUE_NOT_FOUND),
			$of("{0} valore di attributo non trovato "_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_it::ER_ATTRIB_VALUE_NOT_RECOGNIZED),
			$of("{0} valore di attributo non riconosciuto "_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_it::ER_NULL_URI_NAMESPACE),
			$of("Tentativo di generare un prefisso spazio di nomi con URI nullo"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_it::ER_NUMBER_TOO_BIG),
			$of(u"Tentativo di formattare un numero superiore a quello del numero intero di tipo Long più grande"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_it::ER_CANNOT_FIND_SAX1_DRIVER),
			$of("Impossibile trovare la classe di driver SAX1 {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_it::ER_SAX1_DRIVER_NOT_LOADED),
			$of(u"La classe di driver SAX1 {0} è stata trovata, ma non può essere caricata."_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_it::ER_SAX1_DRIVER_NOT_INSTANTIATED),
			$of(u"La classe di driver SAX1 {0} è stata caricata, ma non è possibile creare un\'\'istanza."_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_it::ER_SAX1_DRIVER_NOT_IMPLEMENT_PARSER),
			$of("La classe di driver SAX1 {0} non implementa org.xml.sax.Parser"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_it::ER_PARSER_PROPERTY_NOT_SPECIFIED),
			$of(u"Proprietà di sistema org.xml.sax.parser non specificata"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_it::ER_PARSER_ARG_CANNOT_BE_NULL),
			$of("L\'argomento del parser non deve essere nullo"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_it::ER_FEATURE),
			$of("Funzione: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_it::ER_PROPERTY),
			$of(u"Proprietà: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_it::ER_NULL_ENTITY_RESOLVER),
			$of(u"Resolver di entità nullo"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_it::ER_NULL_DTD_HANDLER),
			$of("Handler DTD nullo"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_it::ER_NO_DRIVER_NAME_SPECIFIED),
			$of("Nessun nome driver specificato."_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_it::ER_NO_URL_SPECIFIED),
			$of("Nessun URL specificato."_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_it::ER_POOLSIZE_LESS_THAN_ONE),
			$of(u"La dimensione del pool è minore di uno."_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_it::ER_INVALID_DRIVER_NAME),
			$of("Specificato nome driver non valido."_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_it::ER_ERRORLISTENER),
			$of("ErrorListener"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_it::ER_ASSERT_NO_TEMPLATE_PARENT),
			$of("Errore del programmatore. L\'espressione non ha un elemento padre ElemTemplateElement."_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_it::ER_ASSERT_REDUNDENT_EXPR_ELIMINATOR),
			$of("Asserzione del programmatore in RedundentExprEliminator: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_it::ER_NOT_ALLOWED_IN_POSITION),
			$of("{0} non consentito in questa posizione nel figlio di stile."_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_it::ER_NONWHITESPACE_NOT_ALLOWED_IN_POSITION),
			$of("Testo senza spazi non consentito in questa posizione nel figlio di stile."_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_it::INVALID_TCHAR),
			$of("Valore non valido {1} utilizzato per l\'\'attributo CHAR {0}. Un attributo di tipo CHAR deve avere un solo carattere."_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_it::INVALID_QNAME),
			$of("Valore non valido {1} utilizzato per l\'\'attributo QNAME {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_it::INVALID_ENUM),
			$of("Valore non valido {1} utilizzato per l\'\'attributo ENUM {0}. Valori validi: {2}."_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_it::INVALID_NMTOKEN),
			$of("Valore non valido {1} utilizzato per l\'\'attributo NMTOKEN {0} "_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_it::INVALID_NCNAME),
			$of("Valore non valido {1} utilizzato per l\'\'attributo NCNAME {0} "_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_it::INVALID_BOOLEAN),
			$of("Valore non valido {1} utilizzato per l\'\'attributo booleano {0} "_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_it::INVALID_NUMBER),
			$of("Valore non valido {1} utilizzato per l\'\'attributo numerico {0} "_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_it::ER_ARG_LITERAL),
			$of("L\'\'argomento per {0} nel pattern di corrispondenza deve essere un valore."_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_it::ER_DUPLICATE_GLOBAL_VAR),
			$of("Dichiarazione di variabili globali duplicate."_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_it::ER_DUPLICATE_VAR),
			$of("Dichiarazione di variabili duplicate."_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_it::ER_TEMPLATE_NAME_MATCH),
			$of("xsl:template deve avere un attributo name o match o entrambi"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_it::ER_INVALID_PREFIX),
			$of(u"Il prefisso in exclude-result-prefixes non è valido: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_it::ER_NO_ATTRIB_SET),
			$of("il set di attributi denominato {0} non esiste"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_it::ER_FUNCTION_NOT_FOUND),
			$of("La funzione denominata {0} non esiste"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_it::ER_CANT_HAVE_CONTENT_AND_SELECT),
			$of("L\'\'elemento {0} non deve avere entrambi gli attributi content e select."_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_it::ER_INVALID_SET_PARAM_VALUE),
			$of("Il valore del parametro {0} deve essere un oggetto Java valido"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_it::ER_INVALID_NAMESPACE_URI_VALUE_FOR_RESULT_PREFIX_FOR_DEFAULT),
			$of("L\'attributo result-prefix di un elemento xsl:namespace-alias ha il valore \'#default\', ma non esiste alcuna dichiarazione dello spazio di nomi predefinito nell\'ambito per l\'elemento."_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_it::ER_INVALID_NAMESPACE_URI_VALUE_FOR_RESULT_PREFIX),
			$of("L\'\'attributo result-prefix di un elemento xsl:namespace-alias ha il valore \'\'{0}\'\', ma non esiste alcuna dichiarazione dello spazio di nomi per il prefisso \'\'{0}\'\' nell\'\'ambito per l\'\'elemento."_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_it::ER_SET_FEATURE_NULL_NAME),
			$of(u"Il nome funzione non può essere nullo in TransformerFactory.setFeature (nome stringa, valore booleano)."_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_it::ER_GET_FEATURE_NULL_NAME),
			$of(u"Il nome funzione non può essere nullo in TransformerFactory.getFeature (nome stringa)."_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_it::ER_UNSUPPORTED_FEATURE),
			$of("Impossibile impostare la funzione \'\'{0}\'\' in questo TransformerFactory."_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_it::ER_EXTENSION_ELEMENT_NOT_ALLOWED_IN_SECURE_PROCESSING),
			$of(u"Non è consentito utilizzare l\'\'elemento di estensione \'\'{0}\'\' se la funzione di elaborazione sicura è impostata su true."_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_it::ER_NAMESPACE_CONTEXT_NULL_NAMESPACE),
			$of("Impossibile recuperare il prefisso per un URI di spazio di nomi nullo."_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_it::ER_NAMESPACE_CONTEXT_NULL_PREFIX),
			$of("Impossibile recuperare l\'URI di spazio di nomi per un prefisso nullo."_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_it::ER_XPATH_RESOLVER_NULL_QNAME),
			$of(u"Il nome funzione non può essere nullo."_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_it::ER_XPATH_RESOLVER_NEGATIVE_ARITY),
			$of(u"L\'arity non può essere negativa."_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_it::WG_FOUND_CURLYBRACE),
			$of("Trovato \'}\', ma non esistono modelli di attributo aperti."_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_it::WG_COUNT_ATTRIB_MATCHES_NO_ANCESTOR),
			$of("Avvertenza: l\'\'attributo count non corrisponde a un predecessore in xsl:number. Destinazione = {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_it::WG_EXPR_ATTRIB_CHANGED_TO_SELECT),
			$of(u"Sintassi obsoleta: il nome dell\'attributo \'expr\' è stato cambiato in \'select\'."_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_it::WG_NO_LOCALE_IN_FORMATNUMBER),
			$of("Xalan non gestisce ancora il nome di impostazioni nazionali nella funzione format-number."_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_it::WG_LOCALE_NOT_FOUND),
			$of("Avvertenza: impossibile trovare le impostazioni nazionali per xml:lang={0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_it::WG_CANNOT_MAKE_URL_FROM),
			$of("Impossibile creare un URL da {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_it::WG_CANNOT_LOAD_REQUESTED_DOC),
			$of("Impossibile caricare il documento richiesto: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_it::WG_CANNOT_FIND_COLLATOR),
			$of("Impossibile trovare Collator per <sort xml:lang={0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_it::WG_FUNCTIONS_SHOULD_USE_URL),
			$of("Sintassi obsoleta: le istruzioni delle funzioni devono utilizzare un URL {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_it::WG_ENCODING_NOT_SUPPORTED_USING_UTF8),
			$of(u"Codifica {0} non supportata. Verrà utilizzata la codifica UTF-8."_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_it::WG_ENCODING_NOT_SUPPORTED_USING_JAVA),
			$of(u"Codifica {0} non supportata. Verrà utilizzata la codifica Java {1}."_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_it::WG_SPECIFICITY_CONFLICTS),
			$of(u"Sono stati trovati conflitti di specificità: {0}. Verrà utilizzato l\'\'ultimo trovato nel foglio di stile."_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_it::WG_PARSING_AND_PREPARING),
			$of("========= Analisi e preparazione di {0} in corso =========="_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_it::WG_ATTR_TEMPLATE),
			$of("Modello attributi {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_it::WG_CONFLICT_BETWEEN_XSLSTRIPSPACE_AND_XSLPRESERVESPACE),
			$of("Conflitto di corrispondenza tra xsl:strip-space e xsl:preserve-space"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_it::WG_ATTRIB_NOT_HANDLED),
			$of("Xalan non gestisce ancora l\'\'attributo {0}."_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_it::WG_NO_DECIMALFORMAT_DECLARATION),
			$of("Nessuna dichiarazione trovata per il formato decimale: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_it::WG_OLD_XSLT_NS),
			$of("Spazio di nomi XSLT mancante o errato. "_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_it::WG_ONE_DEFAULT_XSLDECIMALFORMAT_ALLOWED),
			$of(u"È consentita una sola dichiarazione xsl:decimal-format predefinita."_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_it::WG_XSLDECIMALFORMAT_NAMES_MUST_BE_UNIQUE),
			$of(u"I nomi xsl:decimal-format devono essere univoci. Il nome \"{0}\" è stato duplicato."_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_it::WG_ILLEGAL_ATTRIBUTE),
			$of("{0} ha un attributo non valido: {1}"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_it::WG_COULD_NOT_RESOLVE_PREFIX),
			$of(u"Impossibile risolvere il prefisso spazio di nomi {0}. Il nodo verrà ignorato."_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_it::WG_STYLESHEET_REQUIRES_VERSION_ATTRIB),
			$of("xsl:stylesheet richiede un attributo \'version\'."_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_it::WG_ILLEGAL_ATTRIBUTE_NAME),
			$of("Nome attributo non valido: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_it::WG_ILLEGAL_ATTRIBUTE_VALUE),
			$of("Valore non valido utilizzato per l\'\'attributo {0}: {1}"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_it::WG_EMPTY_SECOND_ARG),
			$of(u"Il set di nodi risultante dal secondo argomento della funzione di documento è vuoto. Verrà restituito un set di nodi vuoto."_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_it::WG_PROCESSINGINSTRUCTION_NAME_CANT_BE_XML),
			$of("Il valore dell\'attributo \'name\' del nome xsl:processing-instruction non deve essere \'xml\'"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_it::WG_PROCESSINGINSTRUCTION_NOTVALID_NCNAME),
			$of("Il valore dell\'\'attributo \'\'name\'\' di xsl:processing-instruction deve essere un NCName valido: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_it::WG_ILLEGAL_ATTRIBUTE_POSITION),
			$of(u"Impossibile aggiungere l\'\'attributo {0} dopo i nodi figlio o prima che sia prodotto un elemento. L\'\'attributo verrà ignorato."_s)
		}),
		$$new($ObjectArray, {
			$of(XSLTErrorResources_it::NO_MODIFICATION_ALLOWED_ERR),
			$of(u"Si è tentato di modificare un oggetto non modificabile."_s)
		}),
		$$new($ObjectArray, {
			$of("ui_language"_s),
			$of("it"_s)
		}),
		$$new($ObjectArray, {
			$of("help_language"_s),
			$of("it"_s)
		}),
		$$new($ObjectArray, {
			$of("language"_s),
			$of("it"_s)
		}),
		$$new($ObjectArray, {
			$of("BAD_CODE"_s),
			$of("Parametro per createMessage fuori limite"_s)
		}),
		$$new($ObjectArray, {
			$of("FORMAT_FAILED"_s),
			$of("Eccezione durante la chiamata messageFormat"_s)
		}),
		$$new($ObjectArray, {
			$of("version"_s),
			$of(">>>>>>> Versione Xalan "_s)
		}),
		$$new($ObjectArray, {
			$of("version2"_s),
			$of("<<<<<<<"_s)
		}),
		$$new($ObjectArray, {
			$of("yes"_s),
			$of(u"sì"_s)
		}),
		$$new($ObjectArray, {
			$of("line"_s),
			$of("N. riga"_s)
		}),
		$$new($ObjectArray, {
			$of("column"_s),
			$of("N. colonna"_s)
		}),
		$$new($ObjectArray, {
			$of("xsldone"_s),
			$of("XSLProcessor: operazione completata"_s)
		}),
		$$new($ObjectArray, {
			$of("xslProc_option"_s),
			$of("Opzioni classe di processo per riga di comando Xalan-J:"_s)
		}),
		$$new($ObjectArray, {
			$of("xslProc_option"_s),
			$of("Opzioni classe di processo per riga di comando Xalan-J:"_s)
		}),
		$$new($ObjectArray, {
			$of("xslProc_invalid_xsltc_option"_s),
			$of(u"Opzione {0} non supportata in modalità XSLTC."_s)
		}),
		$$new($ObjectArray, {
			$of("xslProc_invalid_xalan_option"_s),
			$of(u"L\'\'opzione {0} può essere utilizzata solo con -XSLTC."_s)
		}),
		$$new($ObjectArray, {
			$of("xslProc_no_input"_s),
			$of(u"Errore: non è stato specificato alcun foglio di stile o XML di input. Eseguire questo comando senza opzioni per visualizzare le istruzioni sull\'uso."_s)
		}),
		$$new($ObjectArray, {
			$of("xslProc_common_options"_s),
			$of("-Opzioni comuni-"_s)
		}),
		$$new($ObjectArray, {
			$of("xslProc_xalan_options"_s),
			$of("-Opzioni per Xalan-"_s)
		}),
		$$new($ObjectArray, {
			$of("xslProc_xsltc_options"_s),
			$of("-Opzioni per XSLTC-"_s)
		}),
		$$new($ObjectArray, {
			$of("xslProc_return_to_continue"_s),
			$of("(premere <invio> per continuare)"_s)
		}),
		$$new($ObjectArray, {
			$of("optionXSLTC"_s),
			$of("   [-XSLTC (usa XSLTC per la trasformazione)]"_s)
		}),
		$$new($ObjectArray, {
			$of("optionIN"_s),
			$of("   [-IN inputXMLURL]"_s)
		}),
		$$new($ObjectArray, {
			$of("optionXSL"_s),
			$of("   [-XSL XSLTransformationURL]"_s)
		}),
		$$new($ObjectArray, {
			$of("optionOUT"_s),
			$of("   [-OUT outputFileName]"_s)
		}),
		$$new($ObjectArray, {
			$of("optionLXCIN"_s),
			$of("   [-LXCIN compiledStylesheetFileNameIn]"_s)
		}),
		$$new($ObjectArray, {
			$of("optionLXCOUT"_s),
			$of("   [-LXCOUT compiledStylesheetFileNameOutOut]"_s)
		}),
		$$new($ObjectArray, {
			$of("optionPARSER"_s),
			$of("   [-PARSER nome classe completamente qualificato per la relazione del parser]"_s)
		}),
		$$new($ObjectArray, {
			$of("optionE"_s),
			$of(u"   [-E (non espande i riferimenti alle entità)]"_s)
		}),
		$$new($ObjectArray, {
			$of("optionV"_s),
			$of(u"   [-E (non espande i riferimenti alle entità)]"_s)
		}),
		$$new($ObjectArray, {
			$of("optionQC"_s),
			$of("   [-QC (avvertenze silenziose per i conflitti di pattern)]"_s)
		}),
		$$new($ObjectArray, {
			$of("optionQ"_s),
			$of(u"   [-Q  (modalità silenziosa)]"_s)
		}),
		$$new($ObjectArray, {
			$of("optionLF"_s),
			$of(u"   [-LF (usa avanzamenti riga solo nell\'output {il valore predefinito è CR/LF})]"_s)
		}),
		$$new($ObjectArray, {
			$of("optionCR"_s),
			$of(u"   [-CR (usa ritorni a capo solo nell\'output {il valore predefinito è CR/LF})]"_s)
		}),
		$$new($ObjectArray, {
			$of("optionESCAPE"_s),
			$of(u"   [-ESCAPE (caratteri da sottoporre a escape {il valore predefinito è <>&\"\'\\r\\n}]"_s)
		}),
		$$new($ObjectArray, {
			$of("optionINDENT"_s),
			$of(u"   [-INDENT (determina il numero di spazi da indentare {il valore predefinito è 0})]"_s)
		}),
		$$new($ObjectArray, {
			$of("optionTT"_s),
			$of("   [-TT (tiene traccia dei modelli mentre vengono richiamati.)]"_s)
		}),
		$$new($ObjectArray, {
			$of("optionTG"_s),
			$of("   [-TG (tiene traccia di ogni evento di generazione.)]"_s)
		}),
		$$new($ObjectArray, {
			$of("optionTS"_s),
			$of("   [-TS (tiene traccia di ogni evento di selezione.)]"_s)
		}),
		$$new($ObjectArray, {
			$of("optionTTC"_s),
			$of("   [-TTC (tiene traccia degli elementi secondari di modello mentre vengono elaborati.)]"_s)
		}),
		$$new($ObjectArray, {
			$of("optionTCLASS"_s),
			$of("   [-TCLASS (classe TraceListener per tenere traccia delle estensioni.)]"_s)
		}),
		$$new($ObjectArray, {
			$of("optionVALIDATE"_s),
			$of(u"   [-VALIDATE (imposta se viene eseguita la convalida che, per impostazione predefinita, è disattivata.)]"_s)
		}),
		$$new($ObjectArray, {
			$of("optionEDUMP"_s),
			$of("   [-EDUMP {nome file facoltativo} (esegue stackdump in caso di errore.)]"_s)
		}),
		$$new($ObjectArray, {
			$of("optionXML"_s),
			$of("   [-XML (usa il formatter XML e aggiunge l\'intestazione XML.)]"_s)
		}),
		$$new($ObjectArray, {
			$of("optionTEXT"_s),
			$of("   [-TEXT (usa il formatter di testo semplice.)]"_s)
		}),
		$$new($ObjectArray, {
			$of("optionHTML"_s),
			$of("   [-HTML (usa il formatter HTML.)]"_s)
		}),
		$$new($ObjectArray, {
			$of("optionPARAM"_s),
			$of("   [-PARAM espressione nome (imposta un parametro di foglio di stile)]"_s)
		}),
		$$new($ObjectArray, {
			$of("noParsermsg1"_s),
			$of("Processo XSL non riuscito."_s)
		}),
		$$new($ObjectArray, {
			$of("noParsermsg2"_s),
			$of("** Impossibile trovare il parser **"_s)
		}),
		$$new($ObjectArray, {
			$of("noParsermsg3"_s),
			$of("Controllare il classpath."_s)
		}),
		$$new($ObjectArray, {
			$of("noParsermsg4"_s),
			$of(u"Se non è disponibile un parser XML di IBM per Java, è possibile scaricarlo da"_s)
		}),
		$$new($ObjectArray, {
			$of("noParsermsg5"_s),
			$of("AlphaWorks di IBM: http://www.alphaworks.ibm.com/formula/xml"_s)
		}),
		$$new($ObjectArray, {
			$of("optionURIRESOLVER"_s),
			$of("   [-URIRESOLVER nome classe completo (URIResolver da utilizzare per risolvere gli URI)]"_s)
		}),
		$$new($ObjectArray, {
			$of("optionENTITYRESOLVER"_s),
			$of(u"   [-ENTITYRESOLVER nome classe completo (EntityResolver da utilizzare per risolvere le entità)]"_s)
		}),
		$$new($ObjectArray, {
			$of("optionCONTENTHANDLER"_s),
			$of("   [-CONTENTHANDLER nome classe completo (ContentHandler da utilizzare per serializzare l\'output)]"_s)
		}),
		$$new($ObjectArray, {
			$of("optionLINENUMBERS"_s),
			$of("   [-L utilizza i numeri di riga per il documento di origine]"_s)
		}),
		$$new($ObjectArray, {
			$of("optionSECUREPROCESSING"_s),
			$of("   [-SECURE (imposta la funzione di elaborazione sicura su true.)]"_s)
		}),
		$$new($ObjectArray, {
			$of("optionMEDIA"_s),
			$of("   [-MEDIA mediaType (utilizza l\'attributo media per trovare il foglio di stile associato a un documento.)]"_s)
		}),
		$$new($ObjectArray, {
			$of("optionFLAVOR"_s),
			$of("   [-FLAVOR flavorName (utilizza esplicitamente s2s=SAX o d2d=DOM per eseguire la trasformazione.)] "_s)
		}),
		$$new($ObjectArray, {
			$of("optionDIAG"_s),
			$of("   [-DIAG (visualizza i millisecondi totali richiesti per la trasformazione.)]"_s)
		}),
		$$new($ObjectArray, {
			$of("optionINCREMENTAL"_s),
			$of("   [-INCREMENTAL (richiede la creazione incrementale di DTM impostando http://xml.apache.org/xalan/features/incremental su true.)]"_s)
		}),
		$$new($ObjectArray, {
			$of("optionNOOPTIMIMIZE"_s),
			$of("   [-NOOPTIMIMIZE (richiede che non venga elaborata l\'ottimizzazione dei fogli di stile impostando http://xml.apache.org/xalan/features/optimize su false.)]"_s)
		}),
		$$new($ObjectArray, {
			$of("optionRL"_s),
			$of(u"   [-RL recursionlimit (stabilisce un limite numerico sulla profondità ricorsiva dei fogli di stile.)]"_s)
		}),
		$$new($ObjectArray, {
			$of("optionXO"_s),
			$of("   [-XO [transletName] (assegna un nome al translet creato)]"_s)
		}),
		$$new($ObjectArray, {
			$of("optionXD"_s),
			$of("   [-XD destinationDirectory (specifica una directory di destinazione per il translet)]"_s)
		}),
		$$new($ObjectArray, {
			$of("optionXJ"_s),
			$of("   [-XJ jarfile (crea un package di classi di translet in un file jar denominato <jarfile>)]"_s)
		}),
		$$new($ObjectArray, {
			$of("optionXP"_s),
			$of("   [-XP package (specifica un prefisso nome package per tutte le classi di translet generate)]"_s)
		}),
		$$new($ObjectArray, {
			$of("optionXN"_s),
			$of("   [-XN (abilita l\'inserimento in linea dei modelli)]"_s)
		}),
		$$new($ObjectArray, {
			$of("optionXX"_s),
			$of("   [-XX (attiva l\'output di altri messaggi di debug)]"_s)
		}),
		$$new($ObjectArray, {
			$of("optionXT"_s),
			$of("   [-XT (utilizza il translet per eseguire la trasformazione, se possibile.)]"_s)
		}),
		$$new($ObjectArray, {
			$of("diagTiming"_s),
			$of(" --------- La trasformazione di {0} mediante {1} ha richiesto {2} ms"_s)
		}),
		$$new($ObjectArray, {
			$of("recursionTooDeep"_s),
			$of("Nidificazione dei modelli troppo profonda. Nidificazione = {0}, modello {1} {2}."_s)
		}),
		$$new($ObjectArray, {
			$of("nameIs"_s),
			$of(u"il nome è"_s)
		}),
		$$new($ObjectArray, {
			$of("matchPatternIs"_s),
			$of(u"il pattern di corrispondenza è"_s)
		})
	});
}

XSLTErrorResources_it::XSLTErrorResources_it() {
}

void clinit$XSLTErrorResources_it($Class* class$) {
	$assignStatic(XSLTErrorResources_it::ER_INVALID_NAMESPACE_URI_VALUE_FOR_RESULT_PREFIX, "ER_INVALID_SET_NAMESPACE_URI_VALUE_FOR_RESULT_PREFIX"_s);
	$assignStatic(XSLTErrorResources_it::ER_INVALID_NAMESPACE_URI_VALUE_FOR_RESULT_PREFIX_FOR_DEFAULT, "ER_INVALID_NAMESPACE_URI_VALUE_FOR_RESULT_PREFIX_FOR_DEFAULT"_s);
	$assignStatic(XSLTErrorResources_it::ER_NO_CURLYBRACE, "ER_NO_CURLYBRACE"_s);
	$assignStatic(XSLTErrorResources_it::ER_FUNCTION_NOT_SUPPORTED, "ER_FUNCTION_NOT_SUPPORTED"_s);
	$assignStatic(XSLTErrorResources_it::ER_ILLEGAL_ATTRIBUTE, "ER_ILLEGAL_ATTRIBUTE"_s);
	$assignStatic(XSLTErrorResources_it::ER_NULL_SOURCENODE_APPLYIMPORTS, "ER_NULL_SOURCENODE_APPLYIMPORTS"_s);
	$assignStatic(XSLTErrorResources_it::ER_CANNOT_ADD, "ER_CANNOT_ADD"_s);
	$assignStatic(XSLTErrorResources_it::ER_NULL_SOURCENODE_HANDLEAPPLYTEMPLATES, "ER_NULL_SOURCENODE_HANDLEAPPLYTEMPLATES"_s);
	$assignStatic(XSLTErrorResources_it::ER_NO_NAME_ATTRIB, "ER_NO_NAME_ATTRIB"_s);
	$assignStatic(XSLTErrorResources_it::ER_TEMPLATE_NOT_FOUND, "ER_TEMPLATE_NOT_FOUND"_s);
	$assignStatic(XSLTErrorResources_it::ER_CANT_RESOLVE_NAME_AVT, "ER_CANT_RESOLVE_NAME_AVT"_s);
	$assignStatic(XSLTErrorResources_it::ER_REQUIRES_ATTRIB, "ER_REQUIRES_ATTRIB"_s);
	$assignStatic(XSLTErrorResources_it::ER_MUST_HAVE_TEST_ATTRIB, "ER_MUST_HAVE_TEST_ATTRIB"_s);
	$assignStatic(XSLTErrorResources_it::ER_BAD_VAL_ON_LEVEL_ATTRIB, "ER_BAD_VAL_ON_LEVEL_ATTRIB"_s);
	$assignStatic(XSLTErrorResources_it::ER_PROCESSINGINSTRUCTION_NAME_CANT_BE_XML, "ER_PROCESSINGINSTRUCTION_NAME_CANT_BE_XML"_s);
	$assignStatic(XSLTErrorResources_it::ER_PROCESSINGINSTRUCTION_NOTVALID_NCNAME, "ER_PROCESSINGINSTRUCTION_NOTVALID_NCNAME"_s);
	$assignStatic(XSLTErrorResources_it::ER_NEED_MATCH_ATTRIB, "ER_NEED_MATCH_ATTRIB"_s);
	$assignStatic(XSLTErrorResources_it::ER_NEED_NAME_OR_MATCH_ATTRIB, "ER_NEED_NAME_OR_MATCH_ATTRIB"_s);
	$assignStatic(XSLTErrorResources_it::ER_CANT_RESOLVE_NSPREFIX, "ER_CANT_RESOLVE_NSPREFIX"_s);
	$assignStatic(XSLTErrorResources_it::ER_ILLEGAL_VALUE, "ER_ILLEGAL_VALUE"_s);
	$assignStatic(XSLTErrorResources_it::ER_NO_OWNERDOC, "ER_NO_OWNERDOC"_s);
	$assignStatic(XSLTErrorResources_it::ER_ELEMTEMPLATEELEM_ERR, "ER_ELEMTEMPLATEELEM_ERR"_s);
	$assignStatic(XSLTErrorResources_it::ER_NULL_CHILD, "ER_NULL_CHILD"_s);
	$assignStatic(XSLTErrorResources_it::ER_NEED_SELECT_ATTRIB, "ER_NEED_SELECT_ATTRIB"_s);
	$assignStatic(XSLTErrorResources_it::ER_NEED_TEST_ATTRIB, "ER_NEED_TEST_ATTRIB"_s);
	$assignStatic(XSLTErrorResources_it::ER_NEED_NAME_ATTRIB, "ER_NEED_NAME_ATTRIB"_s);
	$assignStatic(XSLTErrorResources_it::ER_NO_CONTEXT_OWNERDOC, "ER_NO_CONTEXT_OWNERDOC"_s);
	$assignStatic(XSLTErrorResources_it::ER_COULD_NOT_CREATE_XML_PROC_LIAISON, "ER_COULD_NOT_CREATE_XML_PROC_LIAISON"_s);
	$assignStatic(XSLTErrorResources_it::ER_PROCESS_NOT_SUCCESSFUL, "ER_PROCESS_NOT_SUCCESSFUL"_s);
	$assignStatic(XSLTErrorResources_it::ER_NOT_SUCCESSFUL, "ER_NOT_SUCCESSFUL"_s);
	$assignStatic(XSLTErrorResources_it::ER_ENCODING_NOT_SUPPORTED, "ER_ENCODING_NOT_SUPPORTED"_s);
	$assignStatic(XSLTErrorResources_it::ER_COULD_NOT_CREATE_TRACELISTENER, "ER_COULD_NOT_CREATE_TRACELISTENER"_s);
	$assignStatic(XSLTErrorResources_it::ER_KEY_REQUIRES_NAME_ATTRIB, "ER_KEY_REQUIRES_NAME_ATTRIB"_s);
	$assignStatic(XSLTErrorResources_it::ER_KEY_REQUIRES_MATCH_ATTRIB, "ER_KEY_REQUIRES_MATCH_ATTRIB"_s);
	$assignStatic(XSLTErrorResources_it::ER_KEY_REQUIRES_USE_ATTRIB, "ER_KEY_REQUIRES_USE_ATTRIB"_s);
	$assignStatic(XSLTErrorResources_it::ER_REQUIRES_ELEMENTS_ATTRIB, "ER_REQUIRES_ELEMENTS_ATTRIB"_s);
	$assignStatic(XSLTErrorResources_it::ER_MISSING_PREFIX_ATTRIB, "ER_MISSING_PREFIX_ATTRIB"_s);
	$assignStatic(XSLTErrorResources_it::ER_BAD_STYLESHEET_URL, "ER_BAD_STYLESHEET_URL"_s);
	$assignStatic(XSLTErrorResources_it::ER_FILE_NOT_FOUND, "ER_FILE_NOT_FOUND"_s);
	$assignStatic(XSLTErrorResources_it::ER_IOEXCEPTION, "ER_IOEXCEPTION"_s);
	$assignStatic(XSLTErrorResources_it::ER_NO_HREF_ATTRIB, "ER_NO_HREF_ATTRIB"_s);
	$assignStatic(XSLTErrorResources_it::ER_STYLESHEET_INCLUDES_ITSELF, "ER_STYLESHEET_INCLUDES_ITSELF"_s);
	$assignStatic(XSLTErrorResources_it::ER_PROCESSINCLUDE_ERROR, "ER_PROCESSINCLUDE_ERROR"_s);
	$assignStatic(XSLTErrorResources_it::ER_MISSING_LANG_ATTRIB, "ER_MISSING_LANG_ATTRIB"_s);
	$assignStatic(XSLTErrorResources_it::ER_MISSING_CONTAINER_ELEMENT_COMPONENT, "ER_MISSING_CONTAINER_ELEMENT_COMPONENT"_s);
	$assignStatic(XSLTErrorResources_it::ER_CAN_ONLY_OUTPUT_TO_ELEMENT, "ER_CAN_ONLY_OUTPUT_TO_ELEMENT"_s);
	$assignStatic(XSLTErrorResources_it::ER_PROCESS_ERROR, "ER_PROCESS_ERROR"_s);
	$assignStatic(XSLTErrorResources_it::ER_UNIMPLNODE_ERROR, "ER_UNIMPLNODE_ERROR"_s);
	$assignStatic(XSLTErrorResources_it::ER_NO_SELECT_EXPRESSION, "ER_NO_SELECT_EXPRESSION"_s);
	$assignStatic(XSLTErrorResources_it::ER_CANNOT_SERIALIZE_XSLPROCESSOR, "ER_CANNOT_SERIALIZE_XSLPROCESSOR"_s);
	$assignStatic(XSLTErrorResources_it::ER_NO_INPUT_STYLESHEET, "ER_NO_INPUT_STYLESHEET"_s);
	$assignStatic(XSLTErrorResources_it::ER_FAILED_PROCESS_STYLESHEET, "ER_FAILED_PROCESS_STYLESHEET"_s);
	$assignStatic(XSLTErrorResources_it::ER_COULDNT_PARSE_DOC, "ER_COULDNT_PARSE_DOC"_s);
	$assignStatic(XSLTErrorResources_it::ER_COULDNT_FIND_FRAGMENT, "ER_COULDNT_FIND_FRAGMENT"_s);
	$assignStatic(XSLTErrorResources_it::ER_NODE_NOT_ELEMENT, "ER_NODE_NOT_ELEMENT"_s);
	$assignStatic(XSLTErrorResources_it::ER_FOREACH_NEED_MATCH_OR_NAME_ATTRIB, "ER_FOREACH_NEED_MATCH_OR_NAME_ATTRIB"_s);
	$assignStatic(XSLTErrorResources_it::ER_TEMPLATES_NEED_MATCH_OR_NAME_ATTRIB, "ER_TEMPLATES_NEED_MATCH_OR_NAME_ATTRIB"_s);
	$assignStatic(XSLTErrorResources_it::ER_NO_CLONE_OF_DOCUMENT_FRAG, "ER_NO_CLONE_OF_DOCUMENT_FRAG"_s);
	$assignStatic(XSLTErrorResources_it::ER_CANT_CREATE_ITEM, "ER_CANT_CREATE_ITEM"_s);
	$assignStatic(XSLTErrorResources_it::ER_XMLSPACE_ILLEGAL_VALUE, "ER_XMLSPACE_ILLEGAL_VALUE"_s);
	$assignStatic(XSLTErrorResources_it::ER_NO_XSLKEY_DECLARATION, "ER_NO_XSLKEY_DECLARATION"_s);
	$assignStatic(XSLTErrorResources_it::ER_CANT_CREATE_URL, "ER_CANT_CREATE_URL"_s);
	$assignStatic(XSLTErrorResources_it::ER_XSLFUNCTIONS_UNSUPPORTED, "ER_XSLFUNCTIONS_UNSUPPORTED"_s);
	$assignStatic(XSLTErrorResources_it::ER_PROCESSOR_ERROR, "ER_PROCESSOR_ERROR"_s);
	$assignStatic(XSLTErrorResources_it::ER_NOT_ALLOWED_INSIDE_STYLESHEET, "ER_NOT_ALLOWED_INSIDE_STYLESHEET"_s);
	$assignStatic(XSLTErrorResources_it::ER_RESULTNS_NOT_SUPPORTED, "ER_RESULTNS_NOT_SUPPORTED"_s);
	$assignStatic(XSLTErrorResources_it::ER_DEFAULTSPACE_NOT_SUPPORTED, "ER_DEFAULTSPACE_NOT_SUPPORTED"_s);
	$assignStatic(XSLTErrorResources_it::ER_INDENTRESULT_NOT_SUPPORTED, "ER_INDENTRESULT_NOT_SUPPORTED"_s);
	$assignStatic(XSLTErrorResources_it::ER_ILLEGAL_ATTRIB, "ER_ILLEGAL_ATTRIB"_s);
	$assignStatic(XSLTErrorResources_it::ER_UNKNOWN_XSL_ELEM, "ER_UNKNOWN_XSL_ELEM"_s);
	$assignStatic(XSLTErrorResources_it::ER_BAD_XSLSORT_USE, "ER_BAD_XSLSORT_USE"_s);
	$assignStatic(XSLTErrorResources_it::ER_MISPLACED_XSLWHEN, "ER_MISPLACED_XSLWHEN"_s);
	$assignStatic(XSLTErrorResources_it::ER_XSLWHEN_NOT_PARENTED_BY_XSLCHOOSE, "ER_XSLWHEN_NOT_PARENTED_BY_XSLCHOOSE"_s);
	$assignStatic(XSLTErrorResources_it::ER_MISPLACED_XSLOTHERWISE, "ER_MISPLACED_XSLOTHERWISE"_s);
	$assignStatic(XSLTErrorResources_it::ER_XSLOTHERWISE_NOT_PARENTED_BY_XSLCHOOSE, "ER_XSLOTHERWISE_NOT_PARENTED_BY_XSLCHOOSE"_s);
	$assignStatic(XSLTErrorResources_it::ER_NOT_ALLOWED_INSIDE_TEMPLATE, "ER_NOT_ALLOWED_INSIDE_TEMPLATE"_s);
	$assignStatic(XSLTErrorResources_it::ER_UNKNOWN_EXT_NS_PREFIX, "ER_UNKNOWN_EXT_NS_PREFIX"_s);
	$assignStatic(XSLTErrorResources_it::ER_IMPORTS_AS_FIRST_ELEM, "ER_IMPORTS_AS_FIRST_ELEM"_s);
	$assignStatic(XSLTErrorResources_it::ER_IMPORTING_ITSELF, "ER_IMPORTING_ITSELF"_s);
	$assignStatic(XSLTErrorResources_it::ER_XMLSPACE_ILLEGAL_VAL, "ER_XMLSPACE_ILLEGAL_VAL"_s);
	$assignStatic(XSLTErrorResources_it::ER_PROCESSSTYLESHEET_NOT_SUCCESSFUL, "ER_PROCESSSTYLESHEET_NOT_SUCCESSFUL"_s);
	$assignStatic(XSLTErrorResources_it::ER_SAX_EXCEPTION, "ER_SAX_EXCEPTION"_s);
	$assignStatic(XSLTErrorResources_it::ER_XSLT_ERROR, "ER_XSLT_ERROR"_s);
	$assignStatic(XSLTErrorResources_it::ER_CURRENCY_SIGN_ILLEGAL, "ER_CURRENCY_SIGN_ILLEGAL"_s);
	$assignStatic(XSLTErrorResources_it::ER_DOCUMENT_FUNCTION_INVALID_IN_STYLESHEET_DOM, "ER_DOCUMENT_FUNCTION_INVALID_IN_STYLESHEET_DOM"_s);
	$assignStatic(XSLTErrorResources_it::ER_CANT_RESOLVE_PREFIX_OF_NON_PREFIX_RESOLVER, "ER_CANT_RESOLVE_PREFIX_OF_NON_PREFIX_RESOLVER"_s);
	$assignStatic(XSLTErrorResources_it::ER_REDIRECT_COULDNT_GET_FILENAME, "ER_REDIRECT_COULDNT_GET_FILENAME"_s);
	$assignStatic(XSLTErrorResources_it::ER_CANNOT_BUILD_FORMATTERLISTENER_IN_REDIRECT, "ER_CANNOT_BUILD_FORMATTERLISTENER_IN_REDIRECT"_s);
	$assignStatic(XSLTErrorResources_it::ER_INVALID_PREFIX_IN_EXCLUDERESULTPREFIX, "ER_INVALID_PREFIX_IN_EXCLUDERESULTPREFIX"_s);
	$assignStatic(XSLTErrorResources_it::ER_MISSING_NS_URI, "ER_MISSING_NS_URI"_s);
	$assignStatic(XSLTErrorResources_it::ER_MISSING_ARG_FOR_OPTION, "ER_MISSING_ARG_FOR_OPTION"_s);
	$assignStatic(XSLTErrorResources_it::ER_INVALID_OPTION, "ER_INVALID_OPTION"_s);
	$assignStatic(XSLTErrorResources_it::ER_MALFORMED_FORMAT_STRING, "ER_MALFORMED_FORMAT_STRING"_s);
	$assignStatic(XSLTErrorResources_it::ER_STYLESHEET_REQUIRES_VERSION_ATTRIB, "ER_STYLESHEET_REQUIRES_VERSION_ATTRIB"_s);
	$assignStatic(XSLTErrorResources_it::ER_ILLEGAL_ATTRIBUTE_VALUE, "ER_ILLEGAL_ATTRIBUTE_VALUE"_s);
	$assignStatic(XSLTErrorResources_it::ER_CHOOSE_REQUIRES_WHEN, "ER_CHOOSE_REQUIRES_WHEN"_s);
	$assignStatic(XSLTErrorResources_it::ER_NO_APPLY_IMPORT_IN_FOR_EACH, "ER_NO_APPLY_IMPORT_IN_FOR_EACH"_s);
	$assignStatic(XSLTErrorResources_it::ER_CANT_USE_DTM_FOR_OUTPUT, "ER_CANT_USE_DTM_FOR_OUTPUT"_s);
	$assignStatic(XSLTErrorResources_it::ER_CANT_USE_DTM_FOR_INPUT, "ER_CANT_USE_DTM_FOR_INPUT"_s);
	$assignStatic(XSLTErrorResources_it::ER_CALL_TO_EXT_FAILED, "ER_CALL_TO_EXT_FAILED"_s);
	$assignStatic(XSLTErrorResources_it::ER_PREFIX_MUST_RESOLVE, "ER_PREFIX_MUST_RESOLVE"_s);
	$assignStatic(XSLTErrorResources_it::ER_INVALID_UTF16_SURROGATE, "ER_INVALID_UTF16_SURROGATE"_s);
	$assignStatic(XSLTErrorResources_it::ER_XSLATTRSET_USED_ITSELF, "ER_XSLATTRSET_USED_ITSELF"_s);
	$assignStatic(XSLTErrorResources_it::ER_CANNOT_MIX_XERCESDOM, "ER_CANNOT_MIX_XERCESDOM"_s);
	$assignStatic(XSLTErrorResources_it::ER_TOO_MANY_LISTENERS, "ER_TOO_MANY_LISTENERS"_s);
	$assignStatic(XSLTErrorResources_it::ER_IN_ELEMTEMPLATEELEM_READOBJECT, "ER_IN_ELEMTEMPLATEELEM_READOBJECT"_s);
	$assignStatic(XSLTErrorResources_it::ER_DUPLICATE_NAMED_TEMPLATE, "ER_DUPLICATE_NAMED_TEMPLATE"_s);
	$assignStatic(XSLTErrorResources_it::ER_INVALID_KEY_CALL, "ER_INVALID_KEY_CALL"_s);
	$assignStatic(XSLTErrorResources_it::ER_REFERENCING_ITSELF, "ER_REFERENCING_ITSELF"_s);
	$assignStatic(XSLTErrorResources_it::ER_ILLEGAL_DOMSOURCE_INPUT, "ER_ILLEGAL_DOMSOURCE_INPUT"_s);
	$assignStatic(XSLTErrorResources_it::ER_CLASS_NOT_FOUND_FOR_OPTION, "ER_CLASS_NOT_FOUND_FOR_OPTION"_s);
	$assignStatic(XSLTErrorResources_it::ER_REQUIRED_ELEM_NOT_FOUND, "ER_REQUIRED_ELEM_NOT_FOUND"_s);
	$assignStatic(XSLTErrorResources_it::ER_INPUT_CANNOT_BE_NULL, "ER_INPUT_CANNOT_BE_NULL"_s);
	$assignStatic(XSLTErrorResources_it::ER_URI_CANNOT_BE_NULL, "ER_URI_CANNOT_BE_NULL"_s);
	$assignStatic(XSLTErrorResources_it::ER_FILE_CANNOT_BE_NULL, "ER_FILE_CANNOT_BE_NULL"_s);
	$assignStatic(XSLTErrorResources_it::ER_SOURCE_CANNOT_BE_NULL, "ER_SOURCE_CANNOT_BE_NULL"_s);
	$assignStatic(XSLTErrorResources_it::ER_CANNOT_INIT_BSFMGR, "ER_CANNOT_INIT_BSFMGR"_s);
	$assignStatic(XSLTErrorResources_it::ER_CANNOT_CMPL_EXTENSN, "ER_CANNOT_CMPL_EXTENSN"_s);
	$assignStatic(XSLTErrorResources_it::ER_CANNOT_CREATE_EXTENSN, "ER_CANNOT_CREATE_EXTENSN"_s);
	$assignStatic(XSLTErrorResources_it::ER_INSTANCE_MTHD_CALL_REQUIRES, "ER_INSTANCE_MTHD_CALL_REQUIRES"_s);
	$assignStatic(XSLTErrorResources_it::ER_INVALID_ELEMENT_NAME, "ER_INVALID_ELEMENT_NAME"_s);
	$assignStatic(XSLTErrorResources_it::ER_ELEMENT_NAME_METHOD_STATIC, "ER_ELEMENT_NAME_METHOD_STATIC"_s);
	$assignStatic(XSLTErrorResources_it::ER_EXTENSION_FUNC_UNKNOWN, "ER_EXTENSION_FUNC_UNKNOWN"_s);
	$assignStatic(XSLTErrorResources_it::ER_MORE_MATCH_CONSTRUCTOR, "ER_MORE_MATCH_CONSTRUCTOR"_s);
	$assignStatic(XSLTErrorResources_it::ER_MORE_MATCH_METHOD, "ER_MORE_MATCH_METHOD"_s);
	$assignStatic(XSLTErrorResources_it::ER_MORE_MATCH_ELEMENT, "ER_MORE_MATCH_ELEMENT"_s);
	$assignStatic(XSLTErrorResources_it::ER_INVALID_CONTEXT_PASSED, "ER_INVALID_CONTEXT_PASSED"_s);
	$assignStatic(XSLTErrorResources_it::ER_POOL_EXISTS, "ER_POOL_EXISTS"_s);
	$assignStatic(XSLTErrorResources_it::ER_NO_DRIVER_NAME, "ER_NO_DRIVER_NAME"_s);
	$assignStatic(XSLTErrorResources_it::ER_NO_URL, "ER_NO_URL"_s);
	$assignStatic(XSLTErrorResources_it::ER_POOL_SIZE_LESSTHAN_ONE, "ER_POOL_SIZE_LESSTHAN_ONE"_s);
	$assignStatic(XSLTErrorResources_it::ER_INVALID_DRIVER, "ER_INVALID_DRIVER"_s);
	$assignStatic(XSLTErrorResources_it::ER_NO_STYLESHEETROOT, "ER_NO_STYLESHEETROOT"_s);
	$assignStatic(XSLTErrorResources_it::ER_ILLEGAL_XMLSPACE_VALUE, "ER_ILLEGAL_XMLSPACE_VALUE"_s);
	$assignStatic(XSLTErrorResources_it::ER_PROCESSFROMNODE_FAILED, "ER_PROCESSFROMNODE_FAILED"_s);
	$assignStatic(XSLTErrorResources_it::ER_RESOURCE_COULD_NOT_LOAD, "ER_RESOURCE_COULD_NOT_LOAD"_s);
	$assignStatic(XSLTErrorResources_it::ER_BUFFER_SIZE_LESSTHAN_ZERO, "ER_BUFFER_SIZE_LESSTHAN_ZERO"_s);
	$assignStatic(XSLTErrorResources_it::ER_UNKNOWN_ERROR_CALLING_EXTENSION, "ER_UNKNOWN_ERROR_CALLING_EXTENSION"_s);
	$assignStatic(XSLTErrorResources_it::ER_NO_NAMESPACE_DECL, "ER_NO_NAMESPACE_DECL"_s);
	$assignStatic(XSLTErrorResources_it::ER_ELEM_CONTENT_NOT_ALLOWED, "ER_ELEM_CONTENT_NOT_ALLOWED"_s);
	$assignStatic(XSLTErrorResources_it::ER_STYLESHEET_DIRECTED_TERMINATION, "ER_STYLESHEET_DIRECTED_TERMINATION"_s);
	$assignStatic(XSLTErrorResources_it::ER_ONE_OR_TWO, "ER_ONE_OR_TWO"_s);
	$assignStatic(XSLTErrorResources_it::ER_TWO_OR_THREE, "ER_TWO_OR_THREE"_s);
	$assignStatic(XSLTErrorResources_it::ER_COULD_NOT_LOAD_RESOURCE, "ER_COULD_NOT_LOAD_RESOURCE"_s);
	$assignStatic(XSLTErrorResources_it::ER_CANNOT_INIT_DEFAULT_TEMPLATES, "ER_CANNOT_INIT_DEFAULT_TEMPLATES"_s);
	$assignStatic(XSLTErrorResources_it::ER_RESULT_NULL, "ER_RESULT_NULL"_s);
	$assignStatic(XSLTErrorResources_it::ER_RESULT_COULD_NOT_BE_SET, "ER_RESULT_COULD_NOT_BE_SET"_s);
	$assignStatic(XSLTErrorResources_it::ER_NO_OUTPUT_SPECIFIED, "ER_NO_OUTPUT_SPECIFIED"_s);
	$assignStatic(XSLTErrorResources_it::ER_CANNOT_TRANSFORM_TO_RESULT_TYPE, "ER_CANNOT_TRANSFORM_TO_RESULT_TYPE"_s);
	$assignStatic(XSLTErrorResources_it::ER_CANNOT_TRANSFORM_SOURCE_TYPE, "ER_CANNOT_TRANSFORM_SOURCE_TYPE"_s);
	$assignStatic(XSLTErrorResources_it::ER_NULL_CONTENT_HANDLER, "ER_NULL_CONTENT_HANDLER"_s);
	$assignStatic(XSLTErrorResources_it::ER_NULL_ERROR_HANDLER, "ER_NULL_ERROR_HANDLER"_s);
	$assignStatic(XSLTErrorResources_it::ER_CANNOT_CALL_PARSE, "ER_CANNOT_CALL_PARSE"_s);
	$assignStatic(XSLTErrorResources_it::ER_NO_PARENT_FOR_FILTER, "ER_NO_PARENT_FOR_FILTER"_s);
	$assignStatic(XSLTErrorResources_it::ER_NO_STYLESHEET_IN_MEDIA, "ER_NO_STYLESHEET_IN_MEDIA"_s);
	$assignStatic(XSLTErrorResources_it::ER_NO_STYLESHEET_PI, "ER_NO_STYLESHEET_PI"_s);
	$assignStatic(XSLTErrorResources_it::ER_NOT_SUPPORTED, "ER_NOT_SUPPORTED"_s);
	$assignStatic(XSLTErrorResources_it::ER_PROPERTY_VALUE_BOOLEAN, "ER_PROPERTY_VALUE_BOOLEAN"_s);
	$assignStatic(XSLTErrorResources_it::ER_COULD_NOT_FIND_EXTERN_SCRIPT, "ER_COULD_NOT_FIND_EXTERN_SCRIPT"_s);
	$assignStatic(XSLTErrorResources_it::ER_RESOURCE_COULD_NOT_FIND, "ER_RESOURCE_COULD_NOT_FIND"_s);
	$assignStatic(XSLTErrorResources_it::ER_OUTPUT_PROPERTY_NOT_RECOGNIZED, "ER_OUTPUT_PROPERTY_NOT_RECOGNIZED"_s);
	$assignStatic(XSLTErrorResources_it::ER_FAILED_CREATING_ELEMLITRSLT, "ER_FAILED_CREATING_ELEMLITRSLT"_s);
	$assignStatic(XSLTErrorResources_it::ER_VALUE_SHOULD_BE_NUMBER, "ER_VALUE_SHOULD_BE_NUMBER"_s);
	$assignStatic(XSLTErrorResources_it::ER_VALUE_SHOULD_EQUAL, "ER_VALUE_SHOULD_EQUAL"_s);
	$assignStatic(XSLTErrorResources_it::ER_FAILED_CALLING_METHOD, "ER_FAILED_CALLING_METHOD"_s);
	$assignStatic(XSLTErrorResources_it::ER_FAILED_CREATING_ELEMTMPL, "ER_FAILED_CREATING_ELEMTMPL"_s);
	$assignStatic(XSLTErrorResources_it::ER_CHARS_NOT_ALLOWED, "ER_CHARS_NOT_ALLOWED"_s);
	$assignStatic(XSLTErrorResources_it::ER_ATTR_NOT_ALLOWED, "ER_ATTR_NOT_ALLOWED"_s);
	$assignStatic(XSLTErrorResources_it::ER_BAD_VALUE, "ER_BAD_VALUE"_s);
	$assignStatic(XSLTErrorResources_it::ER_ATTRIB_VALUE_NOT_FOUND, "ER_ATTRIB_VALUE_NOT_FOUND"_s);
	$assignStatic(XSLTErrorResources_it::ER_ATTRIB_VALUE_NOT_RECOGNIZED, "ER_ATTRIB_VALUE_NOT_RECOGNIZED"_s);
	$assignStatic(XSLTErrorResources_it::ER_NULL_URI_NAMESPACE, "ER_NULL_URI_NAMESPACE"_s);
	$assignStatic(XSLTErrorResources_it::ER_NUMBER_TOO_BIG, "ER_NUMBER_TOO_BIG"_s);
	$assignStatic(XSLTErrorResources_it::ER_CANNOT_FIND_SAX1_DRIVER, "ER_CANNOT_FIND_SAX1_DRIVER"_s);
	$assignStatic(XSLTErrorResources_it::ER_SAX1_DRIVER_NOT_LOADED, "ER_SAX1_DRIVER_NOT_LOADED"_s);
	$assignStatic(XSLTErrorResources_it::ER_SAX1_DRIVER_NOT_INSTANTIATED, "ER_SAX1_DRIVER_NOT_INSTANTIATED"_s);
	$assignStatic(XSLTErrorResources_it::ER_SAX1_DRIVER_NOT_IMPLEMENT_PARSER, "ER_SAX1_DRIVER_NOT_IMPLEMENT_PARSER"_s);
	$assignStatic(XSLTErrorResources_it::ER_PARSER_PROPERTY_NOT_SPECIFIED, "ER_PARSER_PROPERTY_NOT_SPECIFIED"_s);
	$assignStatic(XSLTErrorResources_it::ER_PARSER_ARG_CANNOT_BE_NULL, "ER_PARSER_ARG_CANNOT_BE_NULL"_s);
	$assignStatic(XSLTErrorResources_it::ER_FEATURE, "ER_FEATURE"_s);
	$assignStatic(XSLTErrorResources_it::ER_PROPERTY, "ER_PROPERTY"_s);
	$assignStatic(XSLTErrorResources_it::ER_NULL_ENTITY_RESOLVER, "ER_NULL_ENTITY_RESOLVER"_s);
	$assignStatic(XSLTErrorResources_it::ER_NULL_DTD_HANDLER, "ER_NULL_DTD_HANDLER"_s);
	$assignStatic(XSLTErrorResources_it::ER_NO_DRIVER_NAME_SPECIFIED, "ER_NO_DRIVER_NAME_SPECIFIED"_s);
	$assignStatic(XSLTErrorResources_it::ER_NO_URL_SPECIFIED, "ER_NO_URL_SPECIFIED"_s);
	$assignStatic(XSLTErrorResources_it::ER_POOLSIZE_LESS_THAN_ONE, "ER_POOLSIZE_LESS_THAN_ONE"_s);
	$assignStatic(XSLTErrorResources_it::ER_INVALID_DRIVER_NAME, "ER_INVALID_DRIVER_NAME"_s);
	$assignStatic(XSLTErrorResources_it::ER_ERRORLISTENER, "ER_ERRORLISTENER"_s);
	$assignStatic(XSLTErrorResources_it::ER_ASSERT_NO_TEMPLATE_PARENT, "ER_ASSERT_NO_TEMPLATE_PARENT"_s);
	$assignStatic(XSLTErrorResources_it::ER_ASSERT_REDUNDENT_EXPR_ELIMINATOR, "ER_ASSERT_REDUNDENT_EXPR_ELIMINATOR"_s);
	$assignStatic(XSLTErrorResources_it::ER_NOT_ALLOWED_IN_POSITION, "ER_NOT_ALLOWED_IN_POSITION"_s);
	$assignStatic(XSLTErrorResources_it::ER_NONWHITESPACE_NOT_ALLOWED_IN_POSITION, "ER_NONWHITESPACE_NOT_ALLOWED_IN_POSITION"_s);
	$assignStatic(XSLTErrorResources_it::ER_NAMESPACE_CONTEXT_NULL_NAMESPACE, "ER_NAMESPACE_CONTEXT_NULL_NAMESPACE"_s);
	$assignStatic(XSLTErrorResources_it::ER_NAMESPACE_CONTEXT_NULL_PREFIX, "ER_NAMESPACE_CONTEXT_NULL_PREFIX"_s);
	$assignStatic(XSLTErrorResources_it::ER_XPATH_RESOLVER_NULL_QNAME, "ER_XPATH_RESOLVER_NULL_QNAME"_s);
	$assignStatic(XSLTErrorResources_it::ER_XPATH_RESOLVER_NEGATIVE_ARITY, "ER_XPATH_RESOLVER_NEGATIVE_ARITY"_s);
	$assignStatic(XSLTErrorResources_it::INVALID_TCHAR, "INVALID_TCHAR"_s);
	$assignStatic(XSLTErrorResources_it::INVALID_QNAME, "INVALID_QNAME"_s);
	$assignStatic(XSLTErrorResources_it::INVALID_ENUM, "INVALID_ENUM"_s);
	$assignStatic(XSLTErrorResources_it::INVALID_NMTOKEN, "INVALID_NMTOKEN"_s);
	$assignStatic(XSLTErrorResources_it::INVALID_NCNAME, "INVALID_NCNAME"_s);
	$assignStatic(XSLTErrorResources_it::INVALID_BOOLEAN, "INVALID_BOOLEAN"_s);
	$assignStatic(XSLTErrorResources_it::INVALID_NUMBER, "INVALID_NUMBER"_s);
	$assignStatic(XSLTErrorResources_it::ER_ARG_LITERAL, "ER_ARG_LITERAL"_s);
	$assignStatic(XSLTErrorResources_it::ER_DUPLICATE_GLOBAL_VAR, "ER_DUPLICATE_GLOBAL_VAR"_s);
	$assignStatic(XSLTErrorResources_it::ER_DUPLICATE_VAR, "ER_DUPLICATE_VAR"_s);
	$assignStatic(XSLTErrorResources_it::ER_TEMPLATE_NAME_MATCH, "ER_TEMPLATE_NAME_MATCH"_s);
	$assignStatic(XSLTErrorResources_it::ER_INVALID_PREFIX, "ER_INVALID_PREFIX"_s);
	$assignStatic(XSLTErrorResources_it::ER_NO_ATTRIB_SET, "ER_NO_ATTRIB_SET"_s);
	$assignStatic(XSLTErrorResources_it::ER_FUNCTION_NOT_FOUND, "ER_FUNCTION_NOT_FOUND"_s);
	$assignStatic(XSLTErrorResources_it::ER_CANT_HAVE_CONTENT_AND_SELECT, "ER_CANT_HAVE_CONTENT_AND_SELECT"_s);
	$assignStatic(XSLTErrorResources_it::ER_INVALID_SET_PARAM_VALUE, "ER_INVALID_SET_PARAM_VALUE"_s);
	$assignStatic(XSLTErrorResources_it::ER_SET_FEATURE_NULL_NAME, "ER_SET_FEATURE_NULL_NAME"_s);
	$assignStatic(XSLTErrorResources_it::ER_GET_FEATURE_NULL_NAME, "ER_GET_FEATURE_NULL_NAME"_s);
	$assignStatic(XSLTErrorResources_it::ER_UNSUPPORTED_FEATURE, "ER_UNSUPPORTED_FEATURE"_s);
	$assignStatic(XSLTErrorResources_it::ER_EXTENSION_ELEMENT_NOT_ALLOWED_IN_SECURE_PROCESSING, "ER_EXTENSION_ELEMENT_NOT_ALLOWED_IN_SECURE_PROCESSING"_s);
	$assignStatic(XSLTErrorResources_it::WG_FOUND_CURLYBRACE, "WG_FOUND_CURLYBRACE"_s);
	$assignStatic(XSLTErrorResources_it::WG_COUNT_ATTRIB_MATCHES_NO_ANCESTOR, "WG_COUNT_ATTRIB_MATCHES_NO_ANCESTOR"_s);
	$assignStatic(XSLTErrorResources_it::WG_EXPR_ATTRIB_CHANGED_TO_SELECT, "WG_EXPR_ATTRIB_CHANGED_TO_SELECT"_s);
	$assignStatic(XSLTErrorResources_it::WG_NO_LOCALE_IN_FORMATNUMBER, "WG_NO_LOCALE_IN_FORMATNUMBER"_s);
	$assignStatic(XSLTErrorResources_it::WG_LOCALE_NOT_FOUND, "WG_LOCALE_NOT_FOUND"_s);
	$assignStatic(XSLTErrorResources_it::WG_CANNOT_MAKE_URL_FROM, "WG_CANNOT_MAKE_URL_FROM"_s);
	$assignStatic(XSLTErrorResources_it::WG_CANNOT_LOAD_REQUESTED_DOC, "WG_CANNOT_LOAD_REQUESTED_DOC"_s);
	$assignStatic(XSLTErrorResources_it::WG_CANNOT_FIND_COLLATOR, "WG_CANNOT_FIND_COLLATOR"_s);
	$assignStatic(XSLTErrorResources_it::WG_FUNCTIONS_SHOULD_USE_URL, "WG_FUNCTIONS_SHOULD_USE_URL"_s);
	$assignStatic(XSLTErrorResources_it::WG_ENCODING_NOT_SUPPORTED_USING_UTF8, "WG_ENCODING_NOT_SUPPORTED_USING_UTF8"_s);
	$assignStatic(XSLTErrorResources_it::WG_ENCODING_NOT_SUPPORTED_USING_JAVA, "WG_ENCODING_NOT_SUPPORTED_USING_JAVA"_s);
	$assignStatic(XSLTErrorResources_it::WG_SPECIFICITY_CONFLICTS, "WG_SPECIFICITY_CONFLICTS"_s);
	$assignStatic(XSLTErrorResources_it::WG_PARSING_AND_PREPARING, "WG_PARSING_AND_PREPARING"_s);
	$assignStatic(XSLTErrorResources_it::WG_ATTR_TEMPLATE, "WG_ATTR_TEMPLATE"_s);
	$assignStatic(XSLTErrorResources_it::WG_CONFLICT_BETWEEN_XSLSTRIPSPACE_AND_XSLPRESERVESPACE, "WG_CONFLICT_BETWEEN_XSLSTRIPSPACE_AND_XSLPRESERVESP"_s);
	$assignStatic(XSLTErrorResources_it::WG_ATTRIB_NOT_HANDLED, "WG_ATTRIB_NOT_HANDLED"_s);
	$assignStatic(XSLTErrorResources_it::WG_NO_DECIMALFORMAT_DECLARATION, "WG_NO_DECIMALFORMAT_DECLARATION"_s);
	$assignStatic(XSLTErrorResources_it::WG_OLD_XSLT_NS, "WG_OLD_XSLT_NS"_s);
	$assignStatic(XSLTErrorResources_it::WG_ONE_DEFAULT_XSLDECIMALFORMAT_ALLOWED, "WG_ONE_DEFAULT_XSLDECIMALFORMAT_ALLOWED"_s);
	$assignStatic(XSLTErrorResources_it::WG_XSLDECIMALFORMAT_NAMES_MUST_BE_UNIQUE, "WG_XSLDECIMALFORMAT_NAMES_MUST_BE_UNIQUE"_s);
	$assignStatic(XSLTErrorResources_it::WG_ILLEGAL_ATTRIBUTE, "WG_ILLEGAL_ATTRIBUTE"_s);
	$assignStatic(XSLTErrorResources_it::WG_COULD_NOT_RESOLVE_PREFIX, "WG_COULD_NOT_RESOLVE_PREFIX"_s);
	$assignStatic(XSLTErrorResources_it::WG_STYLESHEET_REQUIRES_VERSION_ATTRIB, "WG_STYLESHEET_REQUIRES_VERSION_ATTRIB"_s);
	$assignStatic(XSLTErrorResources_it::WG_ILLEGAL_ATTRIBUTE_NAME, "WG_ILLEGAL_ATTRIBUTE_NAME"_s);
	$assignStatic(XSLTErrorResources_it::WG_ILLEGAL_ATTRIBUTE_VALUE, "WG_ILLEGAL_ATTRIBUTE_VALUE"_s);
	$assignStatic(XSLTErrorResources_it::WG_EMPTY_SECOND_ARG, "WG_EMPTY_SECOND_ARG"_s);
	$assignStatic(XSLTErrorResources_it::WG_PROCESSINGINSTRUCTION_NAME_CANT_BE_XML, "WG_PROCESSINGINSTRUCTION_NAME_CANT_BE_XML"_s);
	$assignStatic(XSLTErrorResources_it::WG_PROCESSINGINSTRUCTION_NOTVALID_NCNAME, "WG_PROCESSINGINSTRUCTION_NOTVALID_NCNAME"_s);
	$assignStatic(XSLTErrorResources_it::WG_ILLEGAL_ATTRIBUTE_POSITION, "WG_ILLEGAL_ATTRIBUTE_POSITION"_s);
	$assignStatic(XSLTErrorResources_it::NO_MODIFICATION_ALLOWED_ERR, "NO_MODIFICATION_ALLOWED_ERR"_s);
	$assignStatic(XSLTErrorResources_it::BAD_CODE, "BAD_CODE"_s);
	$assignStatic(XSLTErrorResources_it::FORMAT_FAILED, "FORMAT_FAILED"_s);
}

$Class* XSLTErrorResources_it::load$($String* name, bool initialize) {
	$loadClass(XSLTErrorResources_it, name, initialize, &_XSLTErrorResources_it_ClassInfo_, clinit$XSLTErrorResources_it, allocate$XSLTErrorResources_it);
	return class$;
}

$Class* XSLTErrorResources_it::class$ = nullptr;

						} // res
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com