#include <com/sun/org/apache/xml/internal/res/XMLErrorResources_zh_CN.h>

#include <java/util/ListResourceBundle.h>
#include <jcpp.h>

#undef ER_ARG_LOCALNAME_INVALID
#undef ER_ARG_LOCALNAME_NULL
#undef ER_ARG_PREFIX_INVALID
#undef ER_AXIS_NOT_SUPPORTED
#undef ER_AXIS_TRAVERSER_NOT_SUPPORTED
#undef ER_BUFFER_SIZE_LESSTHAN_ZERO
#undef ER_CANNOT_CHANGE_WHILE_PARSING
#undef ER_CANNOT_INIT_URI_EMPTY_PARMS
#undef ER_CANNOT_OVERWRITE_CAUSE
#undef ER_CANT_HAVE_MORE_THAN_ONE_ROOT
#undef ER_CANT_OUTPUT_TEXT_BEFORE_DOC
#undef ER_CHILD_HAS_NO_OWNER_DOCUMENT
#undef ER_CHILD_HAS_NO_OWNER_DOCUMENT_ELEMENT
#undef ER_CHUNKEDINTARRAY_NOT_SUPPORTED
#undef ER_COJOINROUTINESET_FAILED
#undef ER_COROUTINE_CO_EXIT
#undef ER_COROUTINE_NOT_AVAIL
#undef ER_COROUTINE_PARAM
#undef ER_COULD_NOT_INIT_PARSER
#undef ER_COULD_NOT_LOAD_METHOD_PROPERTY
#undef ER_COULD_NOT_LOAD_RESOURCE
#undef ER_COULD_NOT_RESOLVE_NODE
#undef ER_CREATEDOCUMENT_NOT_SUPPORTED
#undef ER_ERRORHANDLER_CREATED_WITH_NULL_PRINTWRITER
#undef ER_EXCEPTION_CREATING_POOL
#undef ER_FRAG_FOR_GENERIC_URI
#undef ER_FRAG_INVALID_CHAR
#undef ER_FRAG_WHEN_PATH_NULL
#undef ER_FUNCTION_NOT_SUPPORTED
#undef ER_HOST_ADDRESS_NOT_WELLFORMED
#undef ER_ILLEGAL_ATTRIBUTE_POSITION
#undef ER_ILLEGAL_CHARACTER
#undef ER_INCRSAXSRCFILTER_NOT_RESTARTABLE
#undef ER_INVALID_PORT
#undef ER_INVALID_UTF16_SURROGATE
#undef ER_ITERATOR_AXIS_NOT_IMPLEMENTED
#undef ER_ITERATOR_CLONE_NOT_SUPPORTED
#undef ER_LOCATION_UNKNOWN
#undef ER_METHOD_NOT_SUPPORTED
#undef ER_NAMESPACE_PREFIX
#undef ER_NAME_CANT_START_WITH_COLON
#undef ER_NODE_NON_NULL
#undef ER_NOT_SUPPORTED
#undef ER_NO_DEFAULT_IMPL
#undef ER_NO_DTMIDS_AVAIL
#undef ER_NO_FRAGMENT_STRING_IN_PATH
#undef ER_NO_PARSE_CALL_WHILE_PARSING
#undef ER_NO_PORT_IF_NO_HOST
#undef ER_NO_QUERY_STRING_IN_PATH
#undef ER_NO_SCHEME_INURI
#undef ER_NO_SCHEME_IN_URI
#undef ER_NO_USERINFO_IF_NO_HOST
#undef ER_OFFSET_BIGGER_THAN_SLOT
#undef ER_OIERROR
#undef ER_PARSER_DOTERMINATE_ANSWERS
#undef ER_PARSER_IN_USE
#undef ER_PATH_CONTAINS_INVALID_ESCAPE_SEQUENCE
#undef ER_PATH_INVALID_CHAR
#undef ER_PORT_WHEN_HOST_NULL
#undef ER_PREFIX_MUST_RESOLVE
#undef ER_RESOURCE_COULD_NOT_FIND
#undef ER_RESOURCE_COULD_NOT_LOAD
#undef ER_SCHEME_FROM_NULL_STRING
#undef ER_SCHEME_NOT_CONFORMANT
#undef ER_SCHEME_REQUIRED
#undef ER_SELF_CAUSATION_NOT_PERMITTED
#undef ER_SERIALIZER_NOT_CONTENTHANDLER
#undef ER_STARTPARSE_NEEDS_SAXPARSER
#undef ER_STARTPARSE_WHILE_PARSING
#undef ER_STRAY_ATTRIBUTE
#undef ER_STRAY_NAMESPACE
#undef ER_SYSTEMID_UNKNOWN
#undef ER_TYPED_ITERATOR_AXIS_NOT_IMPLEMENTED
#undef ER_UNKNOWN_AXIS_TYPE
#undef ER_XMLRDR_NOT_BEFORE_STARTPARSE
#undef MAX_CODE
#undef MAX_MESSAGES
#undef MAX_OTHERS
#undef MAX_WARNING

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ListResourceBundle = ::java::util::ListResourceBundle;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace res {

$FieldInfo _XMLErrorResources_zh_CN_FieldInfo_[] = {
	{"MAX_CODE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XMLErrorResources_zh_CN, MAX_CODE)},
	{"MAX_WARNING", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XMLErrorResources_zh_CN, MAX_WARNING)},
	{"MAX_OTHERS", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XMLErrorResources_zh_CN, MAX_OTHERS)},
	{"MAX_MESSAGES", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XMLErrorResources_zh_CN, MAX_MESSAGES)},
	{"ER_FUNCTION_NOT_SUPPORTED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_zh_CN, ER_FUNCTION_NOT_SUPPORTED)},
	{"ER_CANNOT_OVERWRITE_CAUSE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_zh_CN, ER_CANNOT_OVERWRITE_CAUSE)},
	{"ER_NO_DEFAULT_IMPL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_zh_CN, ER_NO_DEFAULT_IMPL)},
	{"ER_CHUNKEDINTARRAY_NOT_SUPPORTED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_zh_CN, ER_CHUNKEDINTARRAY_NOT_SUPPORTED)},
	{"ER_OFFSET_BIGGER_THAN_SLOT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_zh_CN, ER_OFFSET_BIGGER_THAN_SLOT)},
	{"ER_COROUTINE_NOT_AVAIL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_zh_CN, ER_COROUTINE_NOT_AVAIL)},
	{"ER_COROUTINE_CO_EXIT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_zh_CN, ER_COROUTINE_CO_EXIT)},
	{"ER_COJOINROUTINESET_FAILED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_zh_CN, ER_COJOINROUTINESET_FAILED)},
	{"ER_COROUTINE_PARAM", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_zh_CN, ER_COROUTINE_PARAM)},
	{"ER_PARSER_DOTERMINATE_ANSWERS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_zh_CN, ER_PARSER_DOTERMINATE_ANSWERS)},
	{"ER_NO_PARSE_CALL_WHILE_PARSING", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_zh_CN, ER_NO_PARSE_CALL_WHILE_PARSING)},
	{"ER_TYPED_ITERATOR_AXIS_NOT_IMPLEMENTED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_zh_CN, ER_TYPED_ITERATOR_AXIS_NOT_IMPLEMENTED)},
	{"ER_ITERATOR_AXIS_NOT_IMPLEMENTED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_zh_CN, ER_ITERATOR_AXIS_NOT_IMPLEMENTED)},
	{"ER_ITERATOR_CLONE_NOT_SUPPORTED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_zh_CN, ER_ITERATOR_CLONE_NOT_SUPPORTED)},
	{"ER_UNKNOWN_AXIS_TYPE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_zh_CN, ER_UNKNOWN_AXIS_TYPE)},
	{"ER_AXIS_NOT_SUPPORTED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_zh_CN, ER_AXIS_NOT_SUPPORTED)},
	{"ER_NO_DTMIDS_AVAIL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_zh_CN, ER_NO_DTMIDS_AVAIL)},
	{"ER_NOT_SUPPORTED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_zh_CN, ER_NOT_SUPPORTED)},
	{"ER_NODE_NON_NULL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_zh_CN, ER_NODE_NON_NULL)},
	{"ER_COULD_NOT_RESOLVE_NODE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_zh_CN, ER_COULD_NOT_RESOLVE_NODE)},
	{"ER_STARTPARSE_WHILE_PARSING", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_zh_CN, ER_STARTPARSE_WHILE_PARSING)},
	{"ER_STARTPARSE_NEEDS_SAXPARSER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_zh_CN, ER_STARTPARSE_NEEDS_SAXPARSER)},
	{"ER_COULD_NOT_INIT_PARSER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_zh_CN, ER_COULD_NOT_INIT_PARSER)},
	{"ER_EXCEPTION_CREATING_POOL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_zh_CN, ER_EXCEPTION_CREATING_POOL)},
	{"ER_PATH_CONTAINS_INVALID_ESCAPE_SEQUENCE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_zh_CN, ER_PATH_CONTAINS_INVALID_ESCAPE_SEQUENCE)},
	{"ER_SCHEME_REQUIRED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_zh_CN, ER_SCHEME_REQUIRED)},
	{"ER_NO_SCHEME_IN_URI", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_zh_CN, ER_NO_SCHEME_IN_URI)},
	{"ER_NO_SCHEME_INURI", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_zh_CN, ER_NO_SCHEME_INURI)},
	{"ER_PATH_INVALID_CHAR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_zh_CN, ER_PATH_INVALID_CHAR)},
	{"ER_SCHEME_FROM_NULL_STRING", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_zh_CN, ER_SCHEME_FROM_NULL_STRING)},
	{"ER_SCHEME_NOT_CONFORMANT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_zh_CN, ER_SCHEME_NOT_CONFORMANT)},
	{"ER_HOST_ADDRESS_NOT_WELLFORMED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_zh_CN, ER_HOST_ADDRESS_NOT_WELLFORMED)},
	{"ER_PORT_WHEN_HOST_NULL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_zh_CN, ER_PORT_WHEN_HOST_NULL)},
	{"ER_INVALID_PORT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_zh_CN, ER_INVALID_PORT)},
	{"ER_FRAG_FOR_GENERIC_URI", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_zh_CN, ER_FRAG_FOR_GENERIC_URI)},
	{"ER_FRAG_WHEN_PATH_NULL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_zh_CN, ER_FRAG_WHEN_PATH_NULL)},
	{"ER_FRAG_INVALID_CHAR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_zh_CN, ER_FRAG_INVALID_CHAR)},
	{"ER_PARSER_IN_USE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_zh_CN, ER_PARSER_IN_USE)},
	{"ER_CANNOT_CHANGE_WHILE_PARSING", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_zh_CN, ER_CANNOT_CHANGE_WHILE_PARSING)},
	{"ER_SELF_CAUSATION_NOT_PERMITTED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_zh_CN, ER_SELF_CAUSATION_NOT_PERMITTED)},
	{"ER_NO_USERINFO_IF_NO_HOST", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_zh_CN, ER_NO_USERINFO_IF_NO_HOST)},
	{"ER_NO_PORT_IF_NO_HOST", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_zh_CN, ER_NO_PORT_IF_NO_HOST)},
	{"ER_NO_QUERY_STRING_IN_PATH", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_zh_CN, ER_NO_QUERY_STRING_IN_PATH)},
	{"ER_NO_FRAGMENT_STRING_IN_PATH", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_zh_CN, ER_NO_FRAGMENT_STRING_IN_PATH)},
	{"ER_CANNOT_INIT_URI_EMPTY_PARMS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_zh_CN, ER_CANNOT_INIT_URI_EMPTY_PARMS)},
	{"ER_METHOD_NOT_SUPPORTED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_zh_CN, ER_METHOD_NOT_SUPPORTED)},
	{"ER_INCRSAXSRCFILTER_NOT_RESTARTABLE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_zh_CN, ER_INCRSAXSRCFILTER_NOT_RESTARTABLE)},
	{"ER_XMLRDR_NOT_BEFORE_STARTPARSE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_zh_CN, ER_XMLRDR_NOT_BEFORE_STARTPARSE)},
	{"ER_AXIS_TRAVERSER_NOT_SUPPORTED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_zh_CN, ER_AXIS_TRAVERSER_NOT_SUPPORTED)},
	{"ER_ERRORHANDLER_CREATED_WITH_NULL_PRINTWRITER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_zh_CN, ER_ERRORHANDLER_CREATED_WITH_NULL_PRINTWRITER)},
	{"ER_SYSTEMID_UNKNOWN", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_zh_CN, ER_SYSTEMID_UNKNOWN)},
	{"ER_LOCATION_UNKNOWN", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_zh_CN, ER_LOCATION_UNKNOWN)},
	{"ER_PREFIX_MUST_RESOLVE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_zh_CN, ER_PREFIX_MUST_RESOLVE)},
	{"ER_CREATEDOCUMENT_NOT_SUPPORTED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_zh_CN, ER_CREATEDOCUMENT_NOT_SUPPORTED)},
	{"ER_CHILD_HAS_NO_OWNER_DOCUMENT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_zh_CN, ER_CHILD_HAS_NO_OWNER_DOCUMENT)},
	{"ER_CHILD_HAS_NO_OWNER_DOCUMENT_ELEMENT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_zh_CN, ER_CHILD_HAS_NO_OWNER_DOCUMENT_ELEMENT)},
	{"ER_CANT_OUTPUT_TEXT_BEFORE_DOC", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_zh_CN, ER_CANT_OUTPUT_TEXT_BEFORE_DOC)},
	{"ER_CANT_HAVE_MORE_THAN_ONE_ROOT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_zh_CN, ER_CANT_HAVE_MORE_THAN_ONE_ROOT)},
	{"ER_ARG_LOCALNAME_NULL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_zh_CN, ER_ARG_LOCALNAME_NULL)},
	{"ER_ARG_LOCALNAME_INVALID", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_zh_CN, ER_ARG_LOCALNAME_INVALID)},
	{"ER_ARG_PREFIX_INVALID", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_zh_CN, ER_ARG_PREFIX_INVALID)},
	{"ER_NAME_CANT_START_WITH_COLON", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_zh_CN, ER_NAME_CANT_START_WITH_COLON)},
	{"ER_RESOURCE_COULD_NOT_FIND", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_zh_CN, ER_RESOURCE_COULD_NOT_FIND)},
	{"ER_RESOURCE_COULD_NOT_LOAD", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_zh_CN, ER_RESOURCE_COULD_NOT_LOAD)},
	{"ER_BUFFER_SIZE_LESSTHAN_ZERO", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_zh_CN, ER_BUFFER_SIZE_LESSTHAN_ZERO)},
	{"ER_INVALID_UTF16_SURROGATE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_zh_CN, ER_INVALID_UTF16_SURROGATE)},
	{"ER_OIERROR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_zh_CN, ER_OIERROR)},
	{"ER_NAMESPACE_PREFIX", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_zh_CN, ER_NAMESPACE_PREFIX)},
	{"ER_STRAY_ATTRIBUTE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_zh_CN, ER_STRAY_ATTRIBUTE)},
	{"ER_STRAY_NAMESPACE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_zh_CN, ER_STRAY_NAMESPACE)},
	{"ER_COULD_NOT_LOAD_RESOURCE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_zh_CN, ER_COULD_NOT_LOAD_RESOURCE)},
	{"ER_COULD_NOT_LOAD_METHOD_PROPERTY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_zh_CN, ER_COULD_NOT_LOAD_METHOD_PROPERTY)},
	{"ER_SERIALIZER_NOT_CONTENTHANDLER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_zh_CN, ER_SERIALIZER_NOT_CONTENTHANDLER)},
	{"ER_ILLEGAL_ATTRIBUTE_POSITION", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_zh_CN, ER_ILLEGAL_ATTRIBUTE_POSITION)},
	{"ER_ILLEGAL_CHARACTER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_zh_CN, ER_ILLEGAL_CHARACTER)},
	{"contents", "[[Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XMLErrorResources_zh_CN, contents)},
	{}
};

$MethodInfo _XMLErrorResources_zh_CN_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(XMLErrorResources_zh_CN, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED, $virtualMethod(XMLErrorResources_zh_CN, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _XMLErrorResources_zh_CN_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.res.XMLErrorResources_zh_CN",
	"java.util.ListResourceBundle",
	nullptr,
	_XMLErrorResources_zh_CN_FieldInfo_,
	_XMLErrorResources_zh_CN_MethodInfo_
};

$Object* allocate$XMLErrorResources_zh_CN($Class* clazz) {
	return $of($alloc(XMLErrorResources_zh_CN));
}

$String* XMLErrorResources_zh_CN::ER_FUNCTION_NOT_SUPPORTED = nullptr;
$String* XMLErrorResources_zh_CN::ER_CANNOT_OVERWRITE_CAUSE = nullptr;
$String* XMLErrorResources_zh_CN::ER_NO_DEFAULT_IMPL = nullptr;
$String* XMLErrorResources_zh_CN::ER_CHUNKEDINTARRAY_NOT_SUPPORTED = nullptr;
$String* XMLErrorResources_zh_CN::ER_OFFSET_BIGGER_THAN_SLOT = nullptr;
$String* XMLErrorResources_zh_CN::ER_COROUTINE_NOT_AVAIL = nullptr;
$String* XMLErrorResources_zh_CN::ER_COROUTINE_CO_EXIT = nullptr;
$String* XMLErrorResources_zh_CN::ER_COJOINROUTINESET_FAILED = nullptr;
$String* XMLErrorResources_zh_CN::ER_COROUTINE_PARAM = nullptr;
$String* XMLErrorResources_zh_CN::ER_PARSER_DOTERMINATE_ANSWERS = nullptr;
$String* XMLErrorResources_zh_CN::ER_NO_PARSE_CALL_WHILE_PARSING = nullptr;
$String* XMLErrorResources_zh_CN::ER_TYPED_ITERATOR_AXIS_NOT_IMPLEMENTED = nullptr;
$String* XMLErrorResources_zh_CN::ER_ITERATOR_AXIS_NOT_IMPLEMENTED = nullptr;
$String* XMLErrorResources_zh_CN::ER_ITERATOR_CLONE_NOT_SUPPORTED = nullptr;
$String* XMLErrorResources_zh_CN::ER_UNKNOWN_AXIS_TYPE = nullptr;
$String* XMLErrorResources_zh_CN::ER_AXIS_NOT_SUPPORTED = nullptr;
$String* XMLErrorResources_zh_CN::ER_NO_DTMIDS_AVAIL = nullptr;
$String* XMLErrorResources_zh_CN::ER_NOT_SUPPORTED = nullptr;
$String* XMLErrorResources_zh_CN::ER_NODE_NON_NULL = nullptr;
$String* XMLErrorResources_zh_CN::ER_COULD_NOT_RESOLVE_NODE = nullptr;
$String* XMLErrorResources_zh_CN::ER_STARTPARSE_WHILE_PARSING = nullptr;
$String* XMLErrorResources_zh_CN::ER_STARTPARSE_NEEDS_SAXPARSER = nullptr;
$String* XMLErrorResources_zh_CN::ER_COULD_NOT_INIT_PARSER = nullptr;
$String* XMLErrorResources_zh_CN::ER_EXCEPTION_CREATING_POOL = nullptr;
$String* XMLErrorResources_zh_CN::ER_PATH_CONTAINS_INVALID_ESCAPE_SEQUENCE = nullptr;
$String* XMLErrorResources_zh_CN::ER_SCHEME_REQUIRED = nullptr;
$String* XMLErrorResources_zh_CN::ER_NO_SCHEME_IN_URI = nullptr;
$String* XMLErrorResources_zh_CN::ER_NO_SCHEME_INURI = nullptr;
$String* XMLErrorResources_zh_CN::ER_PATH_INVALID_CHAR = nullptr;
$String* XMLErrorResources_zh_CN::ER_SCHEME_FROM_NULL_STRING = nullptr;
$String* XMLErrorResources_zh_CN::ER_SCHEME_NOT_CONFORMANT = nullptr;
$String* XMLErrorResources_zh_CN::ER_HOST_ADDRESS_NOT_WELLFORMED = nullptr;
$String* XMLErrorResources_zh_CN::ER_PORT_WHEN_HOST_NULL = nullptr;
$String* XMLErrorResources_zh_CN::ER_INVALID_PORT = nullptr;
$String* XMLErrorResources_zh_CN::ER_FRAG_FOR_GENERIC_URI = nullptr;
$String* XMLErrorResources_zh_CN::ER_FRAG_WHEN_PATH_NULL = nullptr;
$String* XMLErrorResources_zh_CN::ER_FRAG_INVALID_CHAR = nullptr;
$String* XMLErrorResources_zh_CN::ER_PARSER_IN_USE = nullptr;
$String* XMLErrorResources_zh_CN::ER_CANNOT_CHANGE_WHILE_PARSING = nullptr;
$String* XMLErrorResources_zh_CN::ER_SELF_CAUSATION_NOT_PERMITTED = nullptr;
$String* XMLErrorResources_zh_CN::ER_NO_USERINFO_IF_NO_HOST = nullptr;
$String* XMLErrorResources_zh_CN::ER_NO_PORT_IF_NO_HOST = nullptr;
$String* XMLErrorResources_zh_CN::ER_NO_QUERY_STRING_IN_PATH = nullptr;
$String* XMLErrorResources_zh_CN::ER_NO_FRAGMENT_STRING_IN_PATH = nullptr;
$String* XMLErrorResources_zh_CN::ER_CANNOT_INIT_URI_EMPTY_PARMS = nullptr;
$String* XMLErrorResources_zh_CN::ER_METHOD_NOT_SUPPORTED = nullptr;
$String* XMLErrorResources_zh_CN::ER_INCRSAXSRCFILTER_NOT_RESTARTABLE = nullptr;
$String* XMLErrorResources_zh_CN::ER_XMLRDR_NOT_BEFORE_STARTPARSE = nullptr;
$String* XMLErrorResources_zh_CN::ER_AXIS_TRAVERSER_NOT_SUPPORTED = nullptr;
$String* XMLErrorResources_zh_CN::ER_ERRORHANDLER_CREATED_WITH_NULL_PRINTWRITER = nullptr;
$String* XMLErrorResources_zh_CN::ER_SYSTEMID_UNKNOWN = nullptr;
$String* XMLErrorResources_zh_CN::ER_LOCATION_UNKNOWN = nullptr;
$String* XMLErrorResources_zh_CN::ER_PREFIX_MUST_RESOLVE = nullptr;
$String* XMLErrorResources_zh_CN::ER_CREATEDOCUMENT_NOT_SUPPORTED = nullptr;
$String* XMLErrorResources_zh_CN::ER_CHILD_HAS_NO_OWNER_DOCUMENT = nullptr;
$String* XMLErrorResources_zh_CN::ER_CHILD_HAS_NO_OWNER_DOCUMENT_ELEMENT = nullptr;
$String* XMLErrorResources_zh_CN::ER_CANT_OUTPUT_TEXT_BEFORE_DOC = nullptr;
$String* XMLErrorResources_zh_CN::ER_CANT_HAVE_MORE_THAN_ONE_ROOT = nullptr;
$String* XMLErrorResources_zh_CN::ER_ARG_LOCALNAME_NULL = nullptr;
$String* XMLErrorResources_zh_CN::ER_ARG_LOCALNAME_INVALID = nullptr;
$String* XMLErrorResources_zh_CN::ER_ARG_PREFIX_INVALID = nullptr;
$String* XMLErrorResources_zh_CN::ER_NAME_CANT_START_WITH_COLON = nullptr;
$String* XMLErrorResources_zh_CN::ER_RESOURCE_COULD_NOT_FIND = nullptr;
$String* XMLErrorResources_zh_CN::ER_RESOURCE_COULD_NOT_LOAD = nullptr;
$String* XMLErrorResources_zh_CN::ER_BUFFER_SIZE_LESSTHAN_ZERO = nullptr;
$String* XMLErrorResources_zh_CN::ER_INVALID_UTF16_SURROGATE = nullptr;
$String* XMLErrorResources_zh_CN::ER_OIERROR = nullptr;
$String* XMLErrorResources_zh_CN::ER_NAMESPACE_PREFIX = nullptr;
$String* XMLErrorResources_zh_CN::ER_STRAY_ATTRIBUTE = nullptr;
$String* XMLErrorResources_zh_CN::ER_STRAY_NAMESPACE = nullptr;
$String* XMLErrorResources_zh_CN::ER_COULD_NOT_LOAD_RESOURCE = nullptr;
$String* XMLErrorResources_zh_CN::ER_COULD_NOT_LOAD_METHOD_PROPERTY = nullptr;
$String* XMLErrorResources_zh_CN::ER_SERIALIZER_NOT_CONTENTHANDLER = nullptr;
$String* XMLErrorResources_zh_CN::ER_ILLEGAL_ATTRIBUTE_POSITION = nullptr;
$String* XMLErrorResources_zh_CN::ER_ILLEGAL_CHARACTER = nullptr;
$ObjectArray2* XMLErrorResources_zh_CN::contents = nullptr;

void XMLErrorResources_zh_CN::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* XMLErrorResources_zh_CN::getContents() {
	return XMLErrorResources_zh_CN::contents;
}

void clinit$XMLErrorResources_zh_CN($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(XMLErrorResources_zh_CN::ER_FUNCTION_NOT_SUPPORTED, "ER_FUNCTION_NOT_SUPPORTED"_s);
	$assignStatic(XMLErrorResources_zh_CN::ER_CANNOT_OVERWRITE_CAUSE, "ER_CANNOT_OVERWRITE_CAUSE"_s);
	$assignStatic(XMLErrorResources_zh_CN::ER_NO_DEFAULT_IMPL, "ER_NO_DEFAULT_IMPL"_s);
	$assignStatic(XMLErrorResources_zh_CN::ER_CHUNKEDINTARRAY_NOT_SUPPORTED, "ER_CHUNKEDINTARRAY_NOT_SUPPORTED"_s);
	$assignStatic(XMLErrorResources_zh_CN::ER_OFFSET_BIGGER_THAN_SLOT, "ER_OFFSET_BIGGER_THAN_SLOT"_s);
	$assignStatic(XMLErrorResources_zh_CN::ER_COROUTINE_NOT_AVAIL, "ER_COROUTINE_NOT_AVAIL"_s);
	$assignStatic(XMLErrorResources_zh_CN::ER_COROUTINE_CO_EXIT, "ER_COROUTINE_CO_EXIT"_s);
	$assignStatic(XMLErrorResources_zh_CN::ER_COJOINROUTINESET_FAILED, "ER_COJOINROUTINESET_FAILED"_s);
	$assignStatic(XMLErrorResources_zh_CN::ER_COROUTINE_PARAM, "ER_COROUTINE_PARAM"_s);
	$assignStatic(XMLErrorResources_zh_CN::ER_PARSER_DOTERMINATE_ANSWERS, "ER_PARSER_DOTERMINATE_ANSWERS"_s);
	$assignStatic(XMLErrorResources_zh_CN::ER_NO_PARSE_CALL_WHILE_PARSING, "ER_NO_PARSE_CALL_WHILE_PARSING"_s);
	$assignStatic(XMLErrorResources_zh_CN::ER_TYPED_ITERATOR_AXIS_NOT_IMPLEMENTED, "ER_TYPED_ITERATOR_AXIS_NOT_IMPLEMENTED"_s);
	$assignStatic(XMLErrorResources_zh_CN::ER_ITERATOR_AXIS_NOT_IMPLEMENTED, "ER_ITERATOR_AXIS_NOT_IMPLEMENTED"_s);
	$assignStatic(XMLErrorResources_zh_CN::ER_ITERATOR_CLONE_NOT_SUPPORTED, "ER_ITERATOR_CLONE_NOT_SUPPORTED"_s);
	$assignStatic(XMLErrorResources_zh_CN::ER_UNKNOWN_AXIS_TYPE, "ER_UNKNOWN_AXIS_TYPE"_s);
	$assignStatic(XMLErrorResources_zh_CN::ER_AXIS_NOT_SUPPORTED, "ER_AXIS_NOT_SUPPORTED"_s);
	$assignStatic(XMLErrorResources_zh_CN::ER_NO_DTMIDS_AVAIL, "ER_NO_DTMIDS_AVAIL"_s);
	$assignStatic(XMLErrorResources_zh_CN::ER_NOT_SUPPORTED, "ER_NOT_SUPPORTED"_s);
	$assignStatic(XMLErrorResources_zh_CN::ER_NODE_NON_NULL, "ER_NODE_NON_NULL"_s);
	$assignStatic(XMLErrorResources_zh_CN::ER_COULD_NOT_RESOLVE_NODE, "ER_COULD_NOT_RESOLVE_NODE"_s);
	$assignStatic(XMLErrorResources_zh_CN::ER_STARTPARSE_WHILE_PARSING, "ER_STARTPARSE_WHILE_PARSING"_s);
	$assignStatic(XMLErrorResources_zh_CN::ER_STARTPARSE_NEEDS_SAXPARSER, "ER_STARTPARSE_NEEDS_SAXPARSER"_s);
	$assignStatic(XMLErrorResources_zh_CN::ER_COULD_NOT_INIT_PARSER, "ER_COULD_NOT_INIT_PARSER"_s);
	$assignStatic(XMLErrorResources_zh_CN::ER_EXCEPTION_CREATING_POOL, "ER_EXCEPTION_CREATING_POOL"_s);
	$assignStatic(XMLErrorResources_zh_CN::ER_PATH_CONTAINS_INVALID_ESCAPE_SEQUENCE, "ER_PATH_CONTAINS_INVALID_ESCAPE_SEQUENCE"_s);
	$assignStatic(XMLErrorResources_zh_CN::ER_SCHEME_REQUIRED, "ER_SCHEME_REQUIRED"_s);
	$assignStatic(XMLErrorResources_zh_CN::ER_NO_SCHEME_IN_URI, "ER_NO_SCHEME_IN_URI"_s);
	$assignStatic(XMLErrorResources_zh_CN::ER_NO_SCHEME_INURI, "ER_NO_SCHEME_INURI"_s);
	$assignStatic(XMLErrorResources_zh_CN::ER_PATH_INVALID_CHAR, "ER_PATH_INVALID_CHAR"_s);
	$assignStatic(XMLErrorResources_zh_CN::ER_SCHEME_FROM_NULL_STRING, "ER_SCHEME_FROM_NULL_STRING"_s);
	$assignStatic(XMLErrorResources_zh_CN::ER_SCHEME_NOT_CONFORMANT, "ER_SCHEME_NOT_CONFORMANT"_s);
	$assignStatic(XMLErrorResources_zh_CN::ER_HOST_ADDRESS_NOT_WELLFORMED, "ER_HOST_ADDRESS_NOT_WELLFORMED"_s);
	$assignStatic(XMLErrorResources_zh_CN::ER_PORT_WHEN_HOST_NULL, "ER_PORT_WHEN_HOST_NULL"_s);
	$assignStatic(XMLErrorResources_zh_CN::ER_INVALID_PORT, "ER_INVALID_PORT"_s);
	$assignStatic(XMLErrorResources_zh_CN::ER_FRAG_FOR_GENERIC_URI, "ER_FRAG_FOR_GENERIC_URI"_s);
	$assignStatic(XMLErrorResources_zh_CN::ER_FRAG_WHEN_PATH_NULL, "ER_FRAG_WHEN_PATH_NULL"_s);
	$assignStatic(XMLErrorResources_zh_CN::ER_FRAG_INVALID_CHAR, "ER_FRAG_INVALID_CHAR"_s);
	$assignStatic(XMLErrorResources_zh_CN::ER_PARSER_IN_USE, "ER_PARSER_IN_USE"_s);
	$assignStatic(XMLErrorResources_zh_CN::ER_CANNOT_CHANGE_WHILE_PARSING, "ER_CANNOT_CHANGE_WHILE_PARSING"_s);
	$assignStatic(XMLErrorResources_zh_CN::ER_SELF_CAUSATION_NOT_PERMITTED, "ER_SELF_CAUSATION_NOT_PERMITTED"_s);
	$assignStatic(XMLErrorResources_zh_CN::ER_NO_USERINFO_IF_NO_HOST, "ER_NO_USERINFO_IF_NO_HOST"_s);
	$assignStatic(XMLErrorResources_zh_CN::ER_NO_PORT_IF_NO_HOST, "ER_NO_PORT_IF_NO_HOST"_s);
	$assignStatic(XMLErrorResources_zh_CN::ER_NO_QUERY_STRING_IN_PATH, "ER_NO_QUERY_STRING_IN_PATH"_s);
	$assignStatic(XMLErrorResources_zh_CN::ER_NO_FRAGMENT_STRING_IN_PATH, "ER_NO_FRAGMENT_STRING_IN_PATH"_s);
	$assignStatic(XMLErrorResources_zh_CN::ER_CANNOT_INIT_URI_EMPTY_PARMS, "ER_CANNOT_INIT_URI_EMPTY_PARMS"_s);
	$assignStatic(XMLErrorResources_zh_CN::ER_METHOD_NOT_SUPPORTED, "ER_METHOD_NOT_SUPPORTED"_s);
	$assignStatic(XMLErrorResources_zh_CN::ER_INCRSAXSRCFILTER_NOT_RESTARTABLE, "ER_INCRSAXSRCFILTER_NOT_RESTARTABLE"_s);
	$assignStatic(XMLErrorResources_zh_CN::ER_XMLRDR_NOT_BEFORE_STARTPARSE, "ER_XMLRDR_NOT_BEFORE_STARTPARSE"_s);
	$assignStatic(XMLErrorResources_zh_CN::ER_AXIS_TRAVERSER_NOT_SUPPORTED, "ER_AXIS_TRAVERSER_NOT_SUPPORTED"_s);
	$assignStatic(XMLErrorResources_zh_CN::ER_ERRORHANDLER_CREATED_WITH_NULL_PRINTWRITER, "ER_ERRORHANDLER_CREATED_WITH_NULL_PRINTWRITER"_s);
	$assignStatic(XMLErrorResources_zh_CN::ER_SYSTEMID_UNKNOWN, "ER_SYSTEMID_UNKNOWN"_s);
	$assignStatic(XMLErrorResources_zh_CN::ER_LOCATION_UNKNOWN, "ER_LOCATION_UNKNOWN"_s);
	$assignStatic(XMLErrorResources_zh_CN::ER_PREFIX_MUST_RESOLVE, "ER_PREFIX_MUST_RESOLVE"_s);
	$assignStatic(XMLErrorResources_zh_CN::ER_CREATEDOCUMENT_NOT_SUPPORTED, "ER_CREATEDOCUMENT_NOT_SUPPORTED"_s);
	$assignStatic(XMLErrorResources_zh_CN::ER_CHILD_HAS_NO_OWNER_DOCUMENT, "ER_CHILD_HAS_NO_OWNER_DOCUMENT"_s);
	$assignStatic(XMLErrorResources_zh_CN::ER_CHILD_HAS_NO_OWNER_DOCUMENT_ELEMENT, "ER_CHILD_HAS_NO_OWNER_DOCUMENT_ELEMENT"_s);
	$assignStatic(XMLErrorResources_zh_CN::ER_CANT_OUTPUT_TEXT_BEFORE_DOC, "ER_CANT_OUTPUT_TEXT_BEFORE_DOC"_s);
	$assignStatic(XMLErrorResources_zh_CN::ER_CANT_HAVE_MORE_THAN_ONE_ROOT, "ER_CANT_HAVE_MORE_THAN_ONE_ROOT"_s);
	$assignStatic(XMLErrorResources_zh_CN::ER_ARG_LOCALNAME_NULL, "ER_ARG_LOCALNAME_NULL"_s);
	$assignStatic(XMLErrorResources_zh_CN::ER_ARG_LOCALNAME_INVALID, "ER_ARG_LOCALNAME_INVALID"_s);
	$assignStatic(XMLErrorResources_zh_CN::ER_ARG_PREFIX_INVALID, "ER_ARG_PREFIX_INVALID"_s);
	$assignStatic(XMLErrorResources_zh_CN::ER_NAME_CANT_START_WITH_COLON, "ER_NAME_CANT_START_WITH_COLON"_s);
	$assignStatic(XMLErrorResources_zh_CN::ER_RESOURCE_COULD_NOT_FIND, "ER_RESOURCE_COULD_NOT_FIND"_s);
	$assignStatic(XMLErrorResources_zh_CN::ER_RESOURCE_COULD_NOT_LOAD, "ER_RESOURCE_COULD_NOT_LOAD"_s);
	$assignStatic(XMLErrorResources_zh_CN::ER_BUFFER_SIZE_LESSTHAN_ZERO, "ER_BUFFER_SIZE_LESSTHAN_ZERO"_s);
	$assignStatic(XMLErrorResources_zh_CN::ER_INVALID_UTF16_SURROGATE, "ER_INVALID_UTF16_SURROGATE"_s);
	$assignStatic(XMLErrorResources_zh_CN::ER_OIERROR, "ER_OIERROR"_s);
	$assignStatic(XMLErrorResources_zh_CN::ER_NAMESPACE_PREFIX, "ER_NAMESPACE_PREFIX"_s);
	$assignStatic(XMLErrorResources_zh_CN::ER_STRAY_ATTRIBUTE, "ER_STRAY_ATTIRBUTE"_s);
	$assignStatic(XMLErrorResources_zh_CN::ER_STRAY_NAMESPACE, "ER_STRAY_NAMESPACE"_s);
	$assignStatic(XMLErrorResources_zh_CN::ER_COULD_NOT_LOAD_RESOURCE, "ER_COULD_NOT_LOAD_RESOURCE"_s);
	$assignStatic(XMLErrorResources_zh_CN::ER_COULD_NOT_LOAD_METHOD_PROPERTY, "ER_COULD_NOT_LOAD_METHOD_PROPERTY"_s);
	$assignStatic(XMLErrorResources_zh_CN::ER_SERIALIZER_NOT_CONTENTHANDLER, "ER_SERIALIZER_NOT_CONTENTHANDLER"_s);
	$assignStatic(XMLErrorResources_zh_CN::ER_ILLEGAL_ATTRIBUTE_POSITION, "ER_ILLEGAL_ATTRIBUTE_POSITION"_s);
	$assignStatic(XMLErrorResources_zh_CN::ER_ILLEGAL_CHARACTER, "ER_ILLEGAL_CHARACTER"_s);
	$assignStatic(XMLErrorResources_zh_CN::contents, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("ER0000"_s),
			$of("{0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_zh_CN::ER_FUNCTION_NOT_SUPPORTED),
			$of(u"不支持该函数!"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_zh_CN::ER_CANNOT_OVERWRITE_CAUSE),
			$of(u"无法覆盖原因"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_zh_CN::ER_NO_DEFAULT_IMPL),
			$of(u"找不到默认实现 "_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_zh_CN::ER_CHUNKEDINTARRAY_NOT_SUPPORTED),
			$of(u"当前不支持 ChunkedIntArray({0})"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_zh_CN::ER_OFFSET_BIGGER_THAN_SLOT),
			$of(u"偏移量大于插槽"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_zh_CN::ER_COROUTINE_NOT_AVAIL),
			$of(u"Coroutine 不可用, id={0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_zh_CN::ER_COROUTINE_CO_EXIT),
			$of(u"CoroutineManager 收到 co_exit() 请求"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_zh_CN::ER_COJOINROUTINESET_FAILED),
			$of(u"co_joinCoroutineSet() 失败"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_zh_CN::ER_COROUTINE_PARAM),
			$of(u"Coroutine 参数错误 ({0})"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_zh_CN::ER_PARSER_DOTERMINATE_ANSWERS),
			$of(u"\n意外: 解析器对答复{0}执行 doTerminate"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_zh_CN::ER_NO_PARSE_CALL_WHILE_PARSING),
			$of(u"无法在解析时调用 parse"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_zh_CN::ER_TYPED_ITERATOR_AXIS_NOT_IMPLEMENTED),
			$of(u"错误: 未实现轴{0}的类型化迭代器"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_zh_CN::ER_ITERATOR_AXIS_NOT_IMPLEMENTED),
			$of(u"错误: 未实现轴{0}的迭代器 "_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_zh_CN::ER_ITERATOR_CLONE_NOT_SUPPORTED),
			$of(u"不支持克隆迭代器"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_zh_CN::ER_UNKNOWN_AXIS_TYPE),
			$of(u"轴遍历类型未知: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_zh_CN::ER_AXIS_NOT_SUPPORTED),
			$of(u"不支持轴遍历程序: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_zh_CN::ER_NO_DTMIDS_AVAIL),
			$of(u"无法使用更多 DTM ID"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_zh_CN::ER_NOT_SUPPORTED),
			$of(u"不支持: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_zh_CN::ER_NODE_NON_NULL),
			$of(u"getDTMHandleFromNode 的节点必须为非空值"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_zh_CN::ER_COULD_NOT_RESOLVE_NODE),
			$of(u"无法将节点解析为句柄"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_zh_CN::ER_STARTPARSE_WHILE_PARSING),
			$of(u"无法在解析时调用 startParse"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_zh_CN::ER_STARTPARSE_NEEDS_SAXPARSER),
			$of(u"startParse 需要非空 SAXParser"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_zh_CN::ER_COULD_NOT_INIT_PARSER),
			$of(u"无法使用以下对象初始化解析器"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_zh_CN::ER_EXCEPTION_CREATING_POOL),
			$of(u"为池创建新实例时出现异常错误"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_zh_CN::ER_PATH_CONTAINS_INVALID_ESCAPE_SEQUENCE),
			$of(u"路径包含无效的转义序列"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_zh_CN::ER_SCHEME_REQUIRED),
			$of(u"方案是必需的!"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_zh_CN::ER_NO_SCHEME_IN_URI),
			$of(u"在 URI 中找不到方案: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_zh_CN::ER_NO_SCHEME_INURI),
			$of(u"在 URI 中找不到方案"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_zh_CN::ER_PATH_INVALID_CHAR),
			$of(u"路径包含无效的字符: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_zh_CN::ER_SCHEME_FROM_NULL_STRING),
			$of(u"无法从空字符串设置方案"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_zh_CN::ER_SCHEME_NOT_CONFORMANT),
			$of(u"方案不一致。"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_zh_CN::ER_HOST_ADDRESS_NOT_WELLFORMED),
			$of(u"主机不是格式良好的地址"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_zh_CN::ER_PORT_WHEN_HOST_NULL),
			$of(u"主机为空时, 无法设置端口"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_zh_CN::ER_INVALID_PORT),
			$of(u"无效的端口号"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_zh_CN::ER_FRAG_FOR_GENERIC_URI),
			$of(u"只能为一般 URI 设置片段"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_zh_CN::ER_FRAG_WHEN_PATH_NULL),
			$of(u"路径为空时, 无法设置片段"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_zh_CN::ER_FRAG_INVALID_CHAR),
			$of(u"片段包含无效的字符"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_zh_CN::ER_PARSER_IN_USE),
			$of(u"解析器已在使用"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_zh_CN::ER_CANNOT_CHANGE_WHILE_PARSING),
			$of(u"无法在解析时更改{0} {1}"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_zh_CN::ER_SELF_CAUSATION_NOT_PERMITTED),
			$of(u"不允许使用自因"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_zh_CN::ER_NO_USERINFO_IF_NO_HOST),
			$of(u"如果没有指定主机, 则不可以指定 Userinfo"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_zh_CN::ER_NO_PORT_IF_NO_HOST),
			$of(u"如果没有指定主机, 则不可以指定端口"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_zh_CN::ER_NO_QUERY_STRING_IN_PATH),
			$of(u"路径和查询字符串中不能指定查询字符串"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_zh_CN::ER_NO_FRAGMENT_STRING_IN_PATH),
			$of(u"路径和片段中都无法指定片段"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_zh_CN::ER_CANNOT_INIT_URI_EMPTY_PARMS),
			$of(u"无法以空参数初始化 URI"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_zh_CN::ER_METHOD_NOT_SUPPORTED),
			$of(u"尚不支持该方法 "_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_zh_CN::ER_INCRSAXSRCFILTER_NOT_RESTARTABLE),
			$of(u"当前无法重新启动 IncrementalSAXSource_Filter"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_zh_CN::ER_XMLRDR_NOT_BEFORE_STARTPARSE),
			$of(u"XMLReader 不在 startParse 请求之前"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_zh_CN::ER_AXIS_TRAVERSER_NOT_SUPPORTED),
			$of(u"不支持轴遍历程序: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_zh_CN::ER_ERRORHANDLER_CREATED_WITH_NULL_PRINTWRITER),
			$of(u"使用空 PrintWriter 创建了 ListingErrorHandler!"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_zh_CN::ER_SYSTEMID_UNKNOWN),
			$of(u"SystemId 未知"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_zh_CN::ER_LOCATION_UNKNOWN),
			$of(u"错误所在的位置未知"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_zh_CN::ER_PREFIX_MUST_RESOLVE),
			$of(u"前缀必须解析为名称空间: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_zh_CN::ER_CREATEDOCUMENT_NOT_SUPPORTED),
			$of(u"XPathContext 中不支持 createDocument()!"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_zh_CN::ER_CHILD_HAS_NO_OWNER_DOCUMENT),
			$of(u"属性子级没有所有者文档!"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_zh_CN::ER_CHILD_HAS_NO_OWNER_DOCUMENT_ELEMENT),
			$of(u"属性子级没有所有者文档元素!"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_zh_CN::ER_CANT_OUTPUT_TEXT_BEFORE_DOC),
			$of(u"警告: 无法输出文档元素之前的文本! 将忽略..."_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_zh_CN::ER_CANT_HAVE_MORE_THAN_ONE_ROOT),
			$of(u"DOM 上不能有多个根!"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_zh_CN::ER_ARG_LOCALNAME_NULL),
			$of(u"参数 \'localName\' 为空值"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_zh_CN::ER_ARG_LOCALNAME_INVALID),
			$of(u"QNAME 中的本地名称应为有效 NCName"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_zh_CN::ER_ARG_PREFIX_INVALID),
			$of(u"QNAME 中的前缀应为有效 NCName"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_zh_CN::ER_NAME_CANT_START_WITH_COLON),
			$of(u"名称不能以冒号开头"_s)
		}),
		$$new($ObjectArray, {
			$of("BAD_CODE"_s),
			$of(u"createMessage 的参数超出范围"_s)
		}),
		$$new($ObjectArray, {
			$of("FORMAT_FAILED"_s),
			$of(u"调用 messageFormat 时抛出异常错误"_s)
		}),
		$$new($ObjectArray, {
			$of("line"_s),
			$of(u"行号"_s)
		}),
		$$new($ObjectArray, {
			$of("column"_s),
			$of(u"列号"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_zh_CN::ER_SERIALIZER_NOT_CONTENTHANDLER),
			$of(u"串行器类 \'\'{0}\'\' 不实现 org.xml.sax.ContentHandler。"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_zh_CN::ER_RESOURCE_COULD_NOT_FIND),
			$of(u"找不到资源 [ {0} ]。\n {1}"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_zh_CN::ER_RESOURCE_COULD_NOT_LOAD),
			$of(u"资源 [ {0} ] 无法加载: {1} \n {2} \t {3}"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_zh_CN::ER_BUFFER_SIZE_LESSTHAN_ZERO),
			$of(u"缓冲区大小 <=0"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_zh_CN::ER_INVALID_UTF16_SURROGATE),
			$of(u"检测到无效的 UTF-16 代理: {0}?"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_zh_CN::ER_OIERROR),
			$of(u"IO 错误"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_zh_CN::ER_ILLEGAL_ATTRIBUTE_POSITION),
			$of(u"在生成子节点之后或在生成元素之前无法添加属性 {0}。将忽略属性。"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_zh_CN::ER_NAMESPACE_PREFIX),
			$of(u"没有说明名称空间前缀 \'\'{0}\'\'。"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_zh_CN::ER_STRAY_ATTRIBUTE),
			$of(u"属性 \'\'{0}\'\' 在元素外部。"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_zh_CN::ER_STRAY_NAMESPACE),
			$of(u"名称空间声明 \'\'{0}\'\'=\'\'{1}\'\' 在元素外部。"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_zh_CN::ER_COULD_NOT_LOAD_RESOURCE),
			$of(u"无法加载 \'\'{0}\'\' (检查 CLASSPATH), 现在只使用默认值"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_zh_CN::ER_ILLEGAL_CHARACTER),
			$of(u"尝试输出未以{1}的指定输出编码表示的整数值 {0} 的字符。"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_zh_CN::ER_COULD_NOT_LOAD_METHOD_PROPERTY),
			$of(u"无法为输出方法 \'\'{1}\'\' 加载属性文件 \'\'{0}\'\' (检查 CLASSPATH)"_s)
		})
	}));
}

XMLErrorResources_zh_CN::XMLErrorResources_zh_CN() {
}

$Class* XMLErrorResources_zh_CN::load$($String* name, bool initialize) {
	$loadClass(XMLErrorResources_zh_CN, name, initialize, &_XMLErrorResources_zh_CN_ClassInfo_, clinit$XMLErrorResources_zh_CN, allocate$XMLErrorResources_zh_CN);
	return class$;
}

$Class* XMLErrorResources_zh_CN::class$ = nullptr;

						} // res
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com