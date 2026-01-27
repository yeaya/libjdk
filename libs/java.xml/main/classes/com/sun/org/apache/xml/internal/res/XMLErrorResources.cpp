#include <com/sun/org/apache/xml/internal/res/XMLErrorResources.h>

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

$FieldInfo _XMLErrorResources_FieldInfo_[] = {
	{"MAX_CODE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XMLErrorResources, MAX_CODE)},
	{"MAX_WARNING", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XMLErrorResources, MAX_WARNING)},
	{"MAX_OTHERS", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XMLErrorResources, MAX_OTHERS)},
	{"MAX_MESSAGES", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XMLErrorResources, MAX_MESSAGES)},
	{"ER_FUNCTION_NOT_SUPPORTED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources, ER_FUNCTION_NOT_SUPPORTED)},
	{"ER_CANNOT_OVERWRITE_CAUSE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources, ER_CANNOT_OVERWRITE_CAUSE)},
	{"ER_NO_DEFAULT_IMPL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources, ER_NO_DEFAULT_IMPL)},
	{"ER_CHUNKEDINTARRAY_NOT_SUPPORTED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources, ER_CHUNKEDINTARRAY_NOT_SUPPORTED)},
	{"ER_OFFSET_BIGGER_THAN_SLOT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources, ER_OFFSET_BIGGER_THAN_SLOT)},
	{"ER_COROUTINE_NOT_AVAIL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources, ER_COROUTINE_NOT_AVAIL)},
	{"ER_COROUTINE_CO_EXIT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources, ER_COROUTINE_CO_EXIT)},
	{"ER_COJOINROUTINESET_FAILED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources, ER_COJOINROUTINESET_FAILED)},
	{"ER_COROUTINE_PARAM", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources, ER_COROUTINE_PARAM)},
	{"ER_PARSER_DOTERMINATE_ANSWERS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources, ER_PARSER_DOTERMINATE_ANSWERS)},
	{"ER_NO_PARSE_CALL_WHILE_PARSING", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources, ER_NO_PARSE_CALL_WHILE_PARSING)},
	{"ER_TYPED_ITERATOR_AXIS_NOT_IMPLEMENTED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources, ER_TYPED_ITERATOR_AXIS_NOT_IMPLEMENTED)},
	{"ER_ITERATOR_AXIS_NOT_IMPLEMENTED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources, ER_ITERATOR_AXIS_NOT_IMPLEMENTED)},
	{"ER_ITERATOR_CLONE_NOT_SUPPORTED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources, ER_ITERATOR_CLONE_NOT_SUPPORTED)},
	{"ER_UNKNOWN_AXIS_TYPE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources, ER_UNKNOWN_AXIS_TYPE)},
	{"ER_AXIS_NOT_SUPPORTED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources, ER_AXIS_NOT_SUPPORTED)},
	{"ER_NO_DTMIDS_AVAIL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources, ER_NO_DTMIDS_AVAIL)},
	{"ER_NOT_SUPPORTED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources, ER_NOT_SUPPORTED)},
	{"ER_NODE_NON_NULL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources, ER_NODE_NON_NULL)},
	{"ER_COULD_NOT_RESOLVE_NODE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources, ER_COULD_NOT_RESOLVE_NODE)},
	{"ER_STARTPARSE_WHILE_PARSING", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources, ER_STARTPARSE_WHILE_PARSING)},
	{"ER_STARTPARSE_NEEDS_SAXPARSER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources, ER_STARTPARSE_NEEDS_SAXPARSER)},
	{"ER_COULD_NOT_INIT_PARSER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources, ER_COULD_NOT_INIT_PARSER)},
	{"ER_EXCEPTION_CREATING_POOL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources, ER_EXCEPTION_CREATING_POOL)},
	{"ER_PATH_CONTAINS_INVALID_ESCAPE_SEQUENCE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources, ER_PATH_CONTAINS_INVALID_ESCAPE_SEQUENCE)},
	{"ER_SCHEME_REQUIRED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources, ER_SCHEME_REQUIRED)},
	{"ER_NO_SCHEME_IN_URI", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources, ER_NO_SCHEME_IN_URI)},
	{"ER_NO_SCHEME_INURI", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources, ER_NO_SCHEME_INURI)},
	{"ER_PATH_INVALID_CHAR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources, ER_PATH_INVALID_CHAR)},
	{"ER_SCHEME_FROM_NULL_STRING", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources, ER_SCHEME_FROM_NULL_STRING)},
	{"ER_SCHEME_NOT_CONFORMANT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources, ER_SCHEME_NOT_CONFORMANT)},
	{"ER_HOST_ADDRESS_NOT_WELLFORMED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources, ER_HOST_ADDRESS_NOT_WELLFORMED)},
	{"ER_PORT_WHEN_HOST_NULL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources, ER_PORT_WHEN_HOST_NULL)},
	{"ER_INVALID_PORT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources, ER_INVALID_PORT)},
	{"ER_FRAG_FOR_GENERIC_URI", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources, ER_FRAG_FOR_GENERIC_URI)},
	{"ER_FRAG_WHEN_PATH_NULL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources, ER_FRAG_WHEN_PATH_NULL)},
	{"ER_FRAG_INVALID_CHAR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources, ER_FRAG_INVALID_CHAR)},
	{"ER_PARSER_IN_USE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources, ER_PARSER_IN_USE)},
	{"ER_CANNOT_CHANGE_WHILE_PARSING", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources, ER_CANNOT_CHANGE_WHILE_PARSING)},
	{"ER_SELF_CAUSATION_NOT_PERMITTED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources, ER_SELF_CAUSATION_NOT_PERMITTED)},
	{"ER_NO_USERINFO_IF_NO_HOST", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources, ER_NO_USERINFO_IF_NO_HOST)},
	{"ER_NO_PORT_IF_NO_HOST", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources, ER_NO_PORT_IF_NO_HOST)},
	{"ER_NO_QUERY_STRING_IN_PATH", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources, ER_NO_QUERY_STRING_IN_PATH)},
	{"ER_NO_FRAGMENT_STRING_IN_PATH", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources, ER_NO_FRAGMENT_STRING_IN_PATH)},
	{"ER_CANNOT_INIT_URI_EMPTY_PARMS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources, ER_CANNOT_INIT_URI_EMPTY_PARMS)},
	{"ER_METHOD_NOT_SUPPORTED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources, ER_METHOD_NOT_SUPPORTED)},
	{"ER_INCRSAXSRCFILTER_NOT_RESTARTABLE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources, ER_INCRSAXSRCFILTER_NOT_RESTARTABLE)},
	{"ER_XMLRDR_NOT_BEFORE_STARTPARSE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources, ER_XMLRDR_NOT_BEFORE_STARTPARSE)},
	{"ER_AXIS_TRAVERSER_NOT_SUPPORTED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources, ER_AXIS_TRAVERSER_NOT_SUPPORTED)},
	{"ER_ERRORHANDLER_CREATED_WITH_NULL_PRINTWRITER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources, ER_ERRORHANDLER_CREATED_WITH_NULL_PRINTWRITER)},
	{"ER_SYSTEMID_UNKNOWN", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources, ER_SYSTEMID_UNKNOWN)},
	{"ER_LOCATION_UNKNOWN", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources, ER_LOCATION_UNKNOWN)},
	{"ER_PREFIX_MUST_RESOLVE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources, ER_PREFIX_MUST_RESOLVE)},
	{"ER_CREATEDOCUMENT_NOT_SUPPORTED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources, ER_CREATEDOCUMENT_NOT_SUPPORTED)},
	{"ER_CHILD_HAS_NO_OWNER_DOCUMENT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources, ER_CHILD_HAS_NO_OWNER_DOCUMENT)},
	{"ER_CHILD_HAS_NO_OWNER_DOCUMENT_ELEMENT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources, ER_CHILD_HAS_NO_OWNER_DOCUMENT_ELEMENT)},
	{"ER_CANT_OUTPUT_TEXT_BEFORE_DOC", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources, ER_CANT_OUTPUT_TEXT_BEFORE_DOC)},
	{"ER_CANT_HAVE_MORE_THAN_ONE_ROOT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources, ER_CANT_HAVE_MORE_THAN_ONE_ROOT)},
	{"ER_ARG_LOCALNAME_NULL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources, ER_ARG_LOCALNAME_NULL)},
	{"ER_ARG_LOCALNAME_INVALID", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources, ER_ARG_LOCALNAME_INVALID)},
	{"ER_ARG_PREFIX_INVALID", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources, ER_ARG_PREFIX_INVALID)},
	{"ER_NAME_CANT_START_WITH_COLON", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources, ER_NAME_CANT_START_WITH_COLON)},
	{"ER_RESOURCE_COULD_NOT_FIND", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources, ER_RESOURCE_COULD_NOT_FIND)},
	{"ER_RESOURCE_COULD_NOT_LOAD", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources, ER_RESOURCE_COULD_NOT_LOAD)},
	{"ER_BUFFER_SIZE_LESSTHAN_ZERO", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources, ER_BUFFER_SIZE_LESSTHAN_ZERO)},
	{"ER_INVALID_UTF16_SURROGATE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources, ER_INVALID_UTF16_SURROGATE)},
	{"ER_OIERROR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources, ER_OIERROR)},
	{"ER_NAMESPACE_PREFIX", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources, ER_NAMESPACE_PREFIX)},
	{"ER_STRAY_ATTRIBUTE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources, ER_STRAY_ATTRIBUTE)},
	{"ER_STRAY_NAMESPACE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources, ER_STRAY_NAMESPACE)},
	{"ER_COULD_NOT_LOAD_RESOURCE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources, ER_COULD_NOT_LOAD_RESOURCE)},
	{"ER_COULD_NOT_LOAD_METHOD_PROPERTY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources, ER_COULD_NOT_LOAD_METHOD_PROPERTY)},
	{"ER_SERIALIZER_NOT_CONTENTHANDLER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources, ER_SERIALIZER_NOT_CONTENTHANDLER)},
	{"ER_ILLEGAL_ATTRIBUTE_POSITION", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources, ER_ILLEGAL_ATTRIBUTE_POSITION)},
	{"ER_ILLEGAL_CHARACTER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources, ER_ILLEGAL_CHARACTER)},
	{"contents", "[[Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XMLErrorResources, contents)},
	{}
};

$MethodInfo _XMLErrorResources_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(XMLErrorResources, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED, $virtualMethod(XMLErrorResources, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _XMLErrorResources_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.res.XMLErrorResources",
	"java.util.ListResourceBundle",
	nullptr,
	_XMLErrorResources_FieldInfo_,
	_XMLErrorResources_MethodInfo_
};

$Object* allocate$XMLErrorResources($Class* clazz) {
	return $of($alloc(XMLErrorResources));
}

$String* XMLErrorResources::ER_FUNCTION_NOT_SUPPORTED = nullptr;
$String* XMLErrorResources::ER_CANNOT_OVERWRITE_CAUSE = nullptr;
$String* XMLErrorResources::ER_NO_DEFAULT_IMPL = nullptr;
$String* XMLErrorResources::ER_CHUNKEDINTARRAY_NOT_SUPPORTED = nullptr;
$String* XMLErrorResources::ER_OFFSET_BIGGER_THAN_SLOT = nullptr;
$String* XMLErrorResources::ER_COROUTINE_NOT_AVAIL = nullptr;
$String* XMLErrorResources::ER_COROUTINE_CO_EXIT = nullptr;
$String* XMLErrorResources::ER_COJOINROUTINESET_FAILED = nullptr;
$String* XMLErrorResources::ER_COROUTINE_PARAM = nullptr;
$String* XMLErrorResources::ER_PARSER_DOTERMINATE_ANSWERS = nullptr;
$String* XMLErrorResources::ER_NO_PARSE_CALL_WHILE_PARSING = nullptr;
$String* XMLErrorResources::ER_TYPED_ITERATOR_AXIS_NOT_IMPLEMENTED = nullptr;
$String* XMLErrorResources::ER_ITERATOR_AXIS_NOT_IMPLEMENTED = nullptr;
$String* XMLErrorResources::ER_ITERATOR_CLONE_NOT_SUPPORTED = nullptr;
$String* XMLErrorResources::ER_UNKNOWN_AXIS_TYPE = nullptr;
$String* XMLErrorResources::ER_AXIS_NOT_SUPPORTED = nullptr;
$String* XMLErrorResources::ER_NO_DTMIDS_AVAIL = nullptr;
$String* XMLErrorResources::ER_NOT_SUPPORTED = nullptr;
$String* XMLErrorResources::ER_NODE_NON_NULL = nullptr;
$String* XMLErrorResources::ER_COULD_NOT_RESOLVE_NODE = nullptr;
$String* XMLErrorResources::ER_STARTPARSE_WHILE_PARSING = nullptr;
$String* XMLErrorResources::ER_STARTPARSE_NEEDS_SAXPARSER = nullptr;
$String* XMLErrorResources::ER_COULD_NOT_INIT_PARSER = nullptr;
$String* XMLErrorResources::ER_EXCEPTION_CREATING_POOL = nullptr;
$String* XMLErrorResources::ER_PATH_CONTAINS_INVALID_ESCAPE_SEQUENCE = nullptr;
$String* XMLErrorResources::ER_SCHEME_REQUIRED = nullptr;
$String* XMLErrorResources::ER_NO_SCHEME_IN_URI = nullptr;
$String* XMLErrorResources::ER_NO_SCHEME_INURI = nullptr;
$String* XMLErrorResources::ER_PATH_INVALID_CHAR = nullptr;
$String* XMLErrorResources::ER_SCHEME_FROM_NULL_STRING = nullptr;
$String* XMLErrorResources::ER_SCHEME_NOT_CONFORMANT = nullptr;
$String* XMLErrorResources::ER_HOST_ADDRESS_NOT_WELLFORMED = nullptr;
$String* XMLErrorResources::ER_PORT_WHEN_HOST_NULL = nullptr;
$String* XMLErrorResources::ER_INVALID_PORT = nullptr;
$String* XMLErrorResources::ER_FRAG_FOR_GENERIC_URI = nullptr;
$String* XMLErrorResources::ER_FRAG_WHEN_PATH_NULL = nullptr;
$String* XMLErrorResources::ER_FRAG_INVALID_CHAR = nullptr;
$String* XMLErrorResources::ER_PARSER_IN_USE = nullptr;
$String* XMLErrorResources::ER_CANNOT_CHANGE_WHILE_PARSING = nullptr;
$String* XMLErrorResources::ER_SELF_CAUSATION_NOT_PERMITTED = nullptr;
$String* XMLErrorResources::ER_NO_USERINFO_IF_NO_HOST = nullptr;
$String* XMLErrorResources::ER_NO_PORT_IF_NO_HOST = nullptr;
$String* XMLErrorResources::ER_NO_QUERY_STRING_IN_PATH = nullptr;
$String* XMLErrorResources::ER_NO_FRAGMENT_STRING_IN_PATH = nullptr;
$String* XMLErrorResources::ER_CANNOT_INIT_URI_EMPTY_PARMS = nullptr;
$String* XMLErrorResources::ER_METHOD_NOT_SUPPORTED = nullptr;
$String* XMLErrorResources::ER_INCRSAXSRCFILTER_NOT_RESTARTABLE = nullptr;
$String* XMLErrorResources::ER_XMLRDR_NOT_BEFORE_STARTPARSE = nullptr;
$String* XMLErrorResources::ER_AXIS_TRAVERSER_NOT_SUPPORTED = nullptr;
$String* XMLErrorResources::ER_ERRORHANDLER_CREATED_WITH_NULL_PRINTWRITER = nullptr;
$String* XMLErrorResources::ER_SYSTEMID_UNKNOWN = nullptr;
$String* XMLErrorResources::ER_LOCATION_UNKNOWN = nullptr;
$String* XMLErrorResources::ER_PREFIX_MUST_RESOLVE = nullptr;
$String* XMLErrorResources::ER_CREATEDOCUMENT_NOT_SUPPORTED = nullptr;
$String* XMLErrorResources::ER_CHILD_HAS_NO_OWNER_DOCUMENT = nullptr;
$String* XMLErrorResources::ER_CHILD_HAS_NO_OWNER_DOCUMENT_ELEMENT = nullptr;
$String* XMLErrorResources::ER_CANT_OUTPUT_TEXT_BEFORE_DOC = nullptr;
$String* XMLErrorResources::ER_CANT_HAVE_MORE_THAN_ONE_ROOT = nullptr;
$String* XMLErrorResources::ER_ARG_LOCALNAME_NULL = nullptr;
$String* XMLErrorResources::ER_ARG_LOCALNAME_INVALID = nullptr;
$String* XMLErrorResources::ER_ARG_PREFIX_INVALID = nullptr;
$String* XMLErrorResources::ER_NAME_CANT_START_WITH_COLON = nullptr;
$String* XMLErrorResources::ER_RESOURCE_COULD_NOT_FIND = nullptr;
$String* XMLErrorResources::ER_RESOURCE_COULD_NOT_LOAD = nullptr;
$String* XMLErrorResources::ER_BUFFER_SIZE_LESSTHAN_ZERO = nullptr;
$String* XMLErrorResources::ER_INVALID_UTF16_SURROGATE = nullptr;
$String* XMLErrorResources::ER_OIERROR = nullptr;
$String* XMLErrorResources::ER_NAMESPACE_PREFIX = nullptr;
$String* XMLErrorResources::ER_STRAY_ATTRIBUTE = nullptr;
$String* XMLErrorResources::ER_STRAY_NAMESPACE = nullptr;
$String* XMLErrorResources::ER_COULD_NOT_LOAD_RESOURCE = nullptr;
$String* XMLErrorResources::ER_COULD_NOT_LOAD_METHOD_PROPERTY = nullptr;
$String* XMLErrorResources::ER_SERIALIZER_NOT_CONTENTHANDLER = nullptr;
$String* XMLErrorResources::ER_ILLEGAL_ATTRIBUTE_POSITION = nullptr;
$String* XMLErrorResources::ER_ILLEGAL_CHARACTER = nullptr;
$ObjectArray2* XMLErrorResources::contents = nullptr;

void XMLErrorResources::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* XMLErrorResources::getContents() {
	return XMLErrorResources::contents;
}

void clinit$XMLErrorResources($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(XMLErrorResources::ER_FUNCTION_NOT_SUPPORTED, "ER_FUNCTION_NOT_SUPPORTED"_s);
	$assignStatic(XMLErrorResources::ER_CANNOT_OVERWRITE_CAUSE, "ER_CANNOT_OVERWRITE_CAUSE"_s);
	$assignStatic(XMLErrorResources::ER_NO_DEFAULT_IMPL, "ER_NO_DEFAULT_IMPL"_s);
	$assignStatic(XMLErrorResources::ER_CHUNKEDINTARRAY_NOT_SUPPORTED, "ER_CHUNKEDINTARRAY_NOT_SUPPORTED"_s);
	$assignStatic(XMLErrorResources::ER_OFFSET_BIGGER_THAN_SLOT, "ER_OFFSET_BIGGER_THAN_SLOT"_s);
	$assignStatic(XMLErrorResources::ER_COROUTINE_NOT_AVAIL, "ER_COROUTINE_NOT_AVAIL"_s);
	$assignStatic(XMLErrorResources::ER_COROUTINE_CO_EXIT, "ER_COROUTINE_CO_EXIT"_s);
	$assignStatic(XMLErrorResources::ER_COJOINROUTINESET_FAILED, "ER_COJOINROUTINESET_FAILED"_s);
	$assignStatic(XMLErrorResources::ER_COROUTINE_PARAM, "ER_COROUTINE_PARAM"_s);
	$assignStatic(XMLErrorResources::ER_PARSER_DOTERMINATE_ANSWERS, "ER_PARSER_DOTERMINATE_ANSWERS"_s);
	$assignStatic(XMLErrorResources::ER_NO_PARSE_CALL_WHILE_PARSING, "ER_NO_PARSE_CALL_WHILE_PARSING"_s);
	$assignStatic(XMLErrorResources::ER_TYPED_ITERATOR_AXIS_NOT_IMPLEMENTED, "ER_TYPED_ITERATOR_AXIS_NOT_IMPLEMENTED"_s);
	$assignStatic(XMLErrorResources::ER_ITERATOR_AXIS_NOT_IMPLEMENTED, "ER_ITERATOR_AXIS_NOT_IMPLEMENTED"_s);
	$assignStatic(XMLErrorResources::ER_ITERATOR_CLONE_NOT_SUPPORTED, "ER_ITERATOR_CLONE_NOT_SUPPORTED"_s);
	$assignStatic(XMLErrorResources::ER_UNKNOWN_AXIS_TYPE, "ER_UNKNOWN_AXIS_TYPE"_s);
	$assignStatic(XMLErrorResources::ER_AXIS_NOT_SUPPORTED, "ER_AXIS_NOT_SUPPORTED"_s);
	$assignStatic(XMLErrorResources::ER_NO_DTMIDS_AVAIL, "ER_NO_DTMIDS_AVAIL"_s);
	$assignStatic(XMLErrorResources::ER_NOT_SUPPORTED, "ER_NOT_SUPPORTED"_s);
	$assignStatic(XMLErrorResources::ER_NODE_NON_NULL, "ER_NODE_NON_NULL"_s);
	$assignStatic(XMLErrorResources::ER_COULD_NOT_RESOLVE_NODE, "ER_COULD_NOT_RESOLVE_NODE"_s);
	$assignStatic(XMLErrorResources::ER_STARTPARSE_WHILE_PARSING, "ER_STARTPARSE_WHILE_PARSING"_s);
	$assignStatic(XMLErrorResources::ER_STARTPARSE_NEEDS_SAXPARSER, "ER_STARTPARSE_NEEDS_SAXPARSER"_s);
	$assignStatic(XMLErrorResources::ER_COULD_NOT_INIT_PARSER, "ER_COULD_NOT_INIT_PARSER"_s);
	$assignStatic(XMLErrorResources::ER_EXCEPTION_CREATING_POOL, "ER_EXCEPTION_CREATING_POOL"_s);
	$assignStatic(XMLErrorResources::ER_PATH_CONTAINS_INVALID_ESCAPE_SEQUENCE, "ER_PATH_CONTAINS_INVALID_ESCAPE_SEQUENCE"_s);
	$assignStatic(XMLErrorResources::ER_SCHEME_REQUIRED, "ER_SCHEME_REQUIRED"_s);
	$assignStatic(XMLErrorResources::ER_NO_SCHEME_IN_URI, "ER_NO_SCHEME_IN_URI"_s);
	$assignStatic(XMLErrorResources::ER_NO_SCHEME_INURI, "ER_NO_SCHEME_INURI"_s);
	$assignStatic(XMLErrorResources::ER_PATH_INVALID_CHAR, "ER_PATH_INVALID_CHAR"_s);
	$assignStatic(XMLErrorResources::ER_SCHEME_FROM_NULL_STRING, "ER_SCHEME_FROM_NULL_STRING"_s);
	$assignStatic(XMLErrorResources::ER_SCHEME_NOT_CONFORMANT, "ER_SCHEME_NOT_CONFORMANT"_s);
	$assignStatic(XMLErrorResources::ER_HOST_ADDRESS_NOT_WELLFORMED, "ER_HOST_ADDRESS_NOT_WELLFORMED"_s);
	$assignStatic(XMLErrorResources::ER_PORT_WHEN_HOST_NULL, "ER_PORT_WHEN_HOST_NULL"_s);
	$assignStatic(XMLErrorResources::ER_INVALID_PORT, "ER_INVALID_PORT"_s);
	$assignStatic(XMLErrorResources::ER_FRAG_FOR_GENERIC_URI, "ER_FRAG_FOR_GENERIC_URI"_s);
	$assignStatic(XMLErrorResources::ER_FRAG_WHEN_PATH_NULL, "ER_FRAG_WHEN_PATH_NULL"_s);
	$assignStatic(XMLErrorResources::ER_FRAG_INVALID_CHAR, "ER_FRAG_INVALID_CHAR"_s);
	$assignStatic(XMLErrorResources::ER_PARSER_IN_USE, "ER_PARSER_IN_USE"_s);
	$assignStatic(XMLErrorResources::ER_CANNOT_CHANGE_WHILE_PARSING, "ER_CANNOT_CHANGE_WHILE_PARSING"_s);
	$assignStatic(XMLErrorResources::ER_SELF_CAUSATION_NOT_PERMITTED, "ER_SELF_CAUSATION_NOT_PERMITTED"_s);
	$assignStatic(XMLErrorResources::ER_NO_USERINFO_IF_NO_HOST, "ER_NO_USERINFO_IF_NO_HOST"_s);
	$assignStatic(XMLErrorResources::ER_NO_PORT_IF_NO_HOST, "ER_NO_PORT_IF_NO_HOST"_s);
	$assignStatic(XMLErrorResources::ER_NO_QUERY_STRING_IN_PATH, "ER_NO_QUERY_STRING_IN_PATH"_s);
	$assignStatic(XMLErrorResources::ER_NO_FRAGMENT_STRING_IN_PATH, "ER_NO_FRAGMENT_STRING_IN_PATH"_s);
	$assignStatic(XMLErrorResources::ER_CANNOT_INIT_URI_EMPTY_PARMS, "ER_CANNOT_INIT_URI_EMPTY_PARMS"_s);
	$assignStatic(XMLErrorResources::ER_METHOD_NOT_SUPPORTED, "ER_METHOD_NOT_SUPPORTED"_s);
	$assignStatic(XMLErrorResources::ER_INCRSAXSRCFILTER_NOT_RESTARTABLE, "ER_INCRSAXSRCFILTER_NOT_RESTARTABLE"_s);
	$assignStatic(XMLErrorResources::ER_XMLRDR_NOT_BEFORE_STARTPARSE, "ER_XMLRDR_NOT_BEFORE_STARTPARSE"_s);
	$assignStatic(XMLErrorResources::ER_AXIS_TRAVERSER_NOT_SUPPORTED, "ER_AXIS_TRAVERSER_NOT_SUPPORTED"_s);
	$assignStatic(XMLErrorResources::ER_ERRORHANDLER_CREATED_WITH_NULL_PRINTWRITER, "ER_ERRORHANDLER_CREATED_WITH_NULL_PRINTWRITER"_s);
	$assignStatic(XMLErrorResources::ER_SYSTEMID_UNKNOWN, "ER_SYSTEMID_UNKNOWN"_s);
	$assignStatic(XMLErrorResources::ER_LOCATION_UNKNOWN, "ER_LOCATION_UNKNOWN"_s);
	$assignStatic(XMLErrorResources::ER_PREFIX_MUST_RESOLVE, "ER_PREFIX_MUST_RESOLVE"_s);
	$assignStatic(XMLErrorResources::ER_CREATEDOCUMENT_NOT_SUPPORTED, "ER_CREATEDOCUMENT_NOT_SUPPORTED"_s);
	$assignStatic(XMLErrorResources::ER_CHILD_HAS_NO_OWNER_DOCUMENT, "ER_CHILD_HAS_NO_OWNER_DOCUMENT"_s);
	$assignStatic(XMLErrorResources::ER_CHILD_HAS_NO_OWNER_DOCUMENT_ELEMENT, "ER_CHILD_HAS_NO_OWNER_DOCUMENT_ELEMENT"_s);
	$assignStatic(XMLErrorResources::ER_CANT_OUTPUT_TEXT_BEFORE_DOC, "ER_CANT_OUTPUT_TEXT_BEFORE_DOC"_s);
	$assignStatic(XMLErrorResources::ER_CANT_HAVE_MORE_THAN_ONE_ROOT, "ER_CANT_HAVE_MORE_THAN_ONE_ROOT"_s);
	$assignStatic(XMLErrorResources::ER_ARG_LOCALNAME_NULL, "ER_ARG_LOCALNAME_NULL"_s);
	$assignStatic(XMLErrorResources::ER_ARG_LOCALNAME_INVALID, "ER_ARG_LOCALNAME_INVALID"_s);
	$assignStatic(XMLErrorResources::ER_ARG_PREFIX_INVALID, "ER_ARG_PREFIX_INVALID"_s);
	$assignStatic(XMLErrorResources::ER_NAME_CANT_START_WITH_COLON, "ER_NAME_CANT_START_WITH_COLON"_s);
	$assignStatic(XMLErrorResources::ER_RESOURCE_COULD_NOT_FIND, "ER_RESOURCE_COULD_NOT_FIND"_s);
	$assignStatic(XMLErrorResources::ER_RESOURCE_COULD_NOT_LOAD, "ER_RESOURCE_COULD_NOT_LOAD"_s);
	$assignStatic(XMLErrorResources::ER_BUFFER_SIZE_LESSTHAN_ZERO, "ER_BUFFER_SIZE_LESSTHAN_ZERO"_s);
	$assignStatic(XMLErrorResources::ER_INVALID_UTF16_SURROGATE, "ER_INVALID_UTF16_SURROGATE"_s);
	$assignStatic(XMLErrorResources::ER_OIERROR, "ER_OIERROR"_s);
	$assignStatic(XMLErrorResources::ER_NAMESPACE_PREFIX, "ER_NAMESPACE_PREFIX"_s);
	$assignStatic(XMLErrorResources::ER_STRAY_ATTRIBUTE, "ER_STRAY_ATTIRBUTE"_s);
	$assignStatic(XMLErrorResources::ER_STRAY_NAMESPACE, "ER_STRAY_NAMESPACE"_s);
	$assignStatic(XMLErrorResources::ER_COULD_NOT_LOAD_RESOURCE, "ER_COULD_NOT_LOAD_RESOURCE"_s);
	$assignStatic(XMLErrorResources::ER_COULD_NOT_LOAD_METHOD_PROPERTY, "ER_COULD_NOT_LOAD_METHOD_PROPERTY"_s);
	$assignStatic(XMLErrorResources::ER_SERIALIZER_NOT_CONTENTHANDLER, "ER_SERIALIZER_NOT_CONTENTHANDLER"_s);
	$assignStatic(XMLErrorResources::ER_ILLEGAL_ATTRIBUTE_POSITION, "ER_ILLEGAL_ATTRIBUTE_POSITION"_s);
	$assignStatic(XMLErrorResources::ER_ILLEGAL_CHARACTER, "ER_ILLEGAL_CHARACTER"_s);
	$assignStatic(XMLErrorResources::contents, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("ER0000"_s),
			$of("{0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources::ER_FUNCTION_NOT_SUPPORTED),
			$of("Function not supported!"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources::ER_CANNOT_OVERWRITE_CAUSE),
			$of("Cannot overwrite cause"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources::ER_NO_DEFAULT_IMPL),
			$of("No default implementation found "_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources::ER_CHUNKEDINTARRAY_NOT_SUPPORTED),
			$of("ChunkedIntArray({0}) not currently supported"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources::ER_OFFSET_BIGGER_THAN_SLOT),
			$of("Offset bigger than slot"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources::ER_COROUTINE_NOT_AVAIL),
			$of("Coroutine not available, id={0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources::ER_COROUTINE_CO_EXIT),
			$of("CoroutineManager received co_exit() request"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources::ER_COJOINROUTINESET_FAILED),
			$of("co_joinCoroutineSet() failed"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources::ER_COROUTINE_PARAM),
			$of("Coroutine parameter error ({0})"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources::ER_PARSER_DOTERMINATE_ANSWERS),
			$of("\nUNEXPECTED: Parser doTerminate answers {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources::ER_NO_PARSE_CALL_WHILE_PARSING),
			$of("parse may not be called while parsing"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources::ER_TYPED_ITERATOR_AXIS_NOT_IMPLEMENTED),
			$of("Error: typed iterator for axis  {0} not implemented"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources::ER_ITERATOR_AXIS_NOT_IMPLEMENTED),
			$of("Error: iterator for axis {0} not implemented "_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources::ER_ITERATOR_CLONE_NOT_SUPPORTED),
			$of("Iterator clone not supported"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources::ER_UNKNOWN_AXIS_TYPE),
			$of("Unknown axis traversal type: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources::ER_AXIS_NOT_SUPPORTED),
			$of("Axis traverser not supported: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources::ER_NO_DTMIDS_AVAIL),
			$of("No more DTM IDs are available"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources::ER_NOT_SUPPORTED),
			$of("Not supported: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources::ER_NODE_NON_NULL),
			$of("Node must be non-null for getDTMHandleFromNode"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources::ER_COULD_NOT_RESOLVE_NODE),
			$of("Could not resolve the node to a handle"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources::ER_STARTPARSE_WHILE_PARSING),
			$of("startParse may not be called while parsing"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources::ER_STARTPARSE_NEEDS_SAXPARSER),
			$of("startParse needs a non-null SAXParser"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources::ER_COULD_NOT_INIT_PARSER),
			$of("could not initialize parser with"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources::ER_EXCEPTION_CREATING_POOL),
			$of("exception creating new instance for pool"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources::ER_PATH_CONTAINS_INVALID_ESCAPE_SEQUENCE),
			$of("Path contains invalid escape sequence"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources::ER_SCHEME_REQUIRED),
			$of("Scheme is required!"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources::ER_NO_SCHEME_IN_URI),
			$of("No scheme found in URI: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources::ER_NO_SCHEME_INURI),
			$of("No scheme found in URI"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources::ER_PATH_INVALID_CHAR),
			$of("Path contains invalid character: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources::ER_SCHEME_FROM_NULL_STRING),
			$of("Cannot set scheme from null string"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources::ER_SCHEME_NOT_CONFORMANT),
			$of("The scheme is not conformant."_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources::ER_HOST_ADDRESS_NOT_WELLFORMED),
			$of("Host is not a well formed address"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources::ER_PORT_WHEN_HOST_NULL),
			$of("Port cannot be set when host is null"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources::ER_INVALID_PORT),
			$of("Invalid port number"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources::ER_FRAG_FOR_GENERIC_URI),
			$of("Fragment can only be set for a generic URI"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources::ER_FRAG_WHEN_PATH_NULL),
			$of("Fragment cannot be set when path is null"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources::ER_FRAG_INVALID_CHAR),
			$of("Fragment contains invalid character"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources::ER_PARSER_IN_USE),
			$of("Parser is already in use"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources::ER_CANNOT_CHANGE_WHILE_PARSING),
			$of("Cannot change {0} {1} while parsing"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources::ER_SELF_CAUSATION_NOT_PERMITTED),
			$of("Self-causation not permitted"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources::ER_NO_USERINFO_IF_NO_HOST),
			$of("Userinfo may not be specified if host is not specified"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources::ER_NO_PORT_IF_NO_HOST),
			$of("Port may not be specified if host is not specified"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources::ER_NO_QUERY_STRING_IN_PATH),
			$of("Query string cannot be specified in path and query string"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources::ER_NO_FRAGMENT_STRING_IN_PATH),
			$of("Fragment cannot be specified in both the path and fragment"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources::ER_CANNOT_INIT_URI_EMPTY_PARMS),
			$of("Cannot initialize URI with empty parameters"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources::ER_METHOD_NOT_SUPPORTED),
			$of("Method not yet supported "_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources::ER_INCRSAXSRCFILTER_NOT_RESTARTABLE),
			$of("IncrementalSAXSource_Filter not currently restartable"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources::ER_XMLRDR_NOT_BEFORE_STARTPARSE),
			$of("XMLReader not before startParse request"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources::ER_AXIS_TRAVERSER_NOT_SUPPORTED),
			$of("Axis traverser not supported: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources::ER_ERRORHANDLER_CREATED_WITH_NULL_PRINTWRITER),
			$of("ListingErrorHandler created with null PrintWriter!"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources::ER_SYSTEMID_UNKNOWN),
			$of("SystemId Unknown"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources::ER_LOCATION_UNKNOWN),
			$of("Location of error unknown"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources::ER_PREFIX_MUST_RESOLVE),
			$of("Prefix must resolve to a namespace: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources::ER_CREATEDOCUMENT_NOT_SUPPORTED),
			$of("createDocument() not supported in XPathContext!"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources::ER_CHILD_HAS_NO_OWNER_DOCUMENT),
			$of("Attribute child does not have an owner document!"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources::ER_CHILD_HAS_NO_OWNER_DOCUMENT_ELEMENT),
			$of("Attribute child does not have an owner document element!"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources::ER_CANT_OUTPUT_TEXT_BEFORE_DOC),
			$of("Warning: can\'t output text before document element!  Ignoring..."_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources::ER_CANT_HAVE_MORE_THAN_ONE_ROOT),
			$of("Can\'t have more than one root on a DOM!"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources::ER_ARG_LOCALNAME_NULL),
			$of("Argument \'localName\' is null"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources::ER_ARG_LOCALNAME_INVALID),
			$of("Localname in QNAME should be a valid NCName"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources::ER_ARG_PREFIX_INVALID),
			$of("Prefix in QNAME should be a valid NCName"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources::ER_NAME_CANT_START_WITH_COLON),
			$of("Name cannot start with a colon"_s)
		}),
		$$new($ObjectArray, {
			$of("BAD_CODE"_s),
			$of("Parameter to createMessage was out of bounds"_s)
		}),
		$$new($ObjectArray, {
			$of("FORMAT_FAILED"_s),
			$of("Exception thrown during messageFormat call"_s)
		}),
		$$new($ObjectArray, {
			$of("line"_s),
			$of("Line #"_s)
		}),
		$$new($ObjectArray, {
			$of("column"_s),
			$of("Column #"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources::ER_SERIALIZER_NOT_CONTENTHANDLER),
			$of("The serializer class \'\'{0}\'\' does not implement org.xml.sax.ContentHandler."_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources::ER_RESOURCE_COULD_NOT_FIND),
			$of("The resource [ {0} ] could not be found.\n {1}"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources::ER_RESOURCE_COULD_NOT_LOAD),
			$of("The resource [ {0} ] could not load: {1} \n {2} \t {3}"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources::ER_BUFFER_SIZE_LESSTHAN_ZERO),
			$of("Buffer size <=0"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources::ER_INVALID_UTF16_SURROGATE),
			$of("Invalid UTF-16 surrogate detected: {0} ?"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources::ER_OIERROR),
			$of("IO error"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources::ER_ILLEGAL_ATTRIBUTE_POSITION),
			$of("Cannot add attribute {0} after child nodes or before an element is produced.  Attribute will be ignored."_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources::ER_NAMESPACE_PREFIX),
			$of("Namespace for prefix \'\'{0}\'\' has not been declared."_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources::ER_STRAY_ATTRIBUTE),
			$of("Attribute \'\'{0}\'\' outside of element."_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources::ER_STRAY_NAMESPACE),
			$of("Namespace declaration \'\'{0}\'\'=\'\'{1}\'\' outside of element."_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources::ER_COULD_NOT_LOAD_RESOURCE),
			$of("Could not load \'\'{0}\'\' (check CLASSPATH), now using just the defaults"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources::ER_ILLEGAL_CHARACTER),
			$of("Attempt to output character of integral value {0} that is not represented in specified output encoding of {1}."_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources::ER_COULD_NOT_LOAD_METHOD_PROPERTY),
			$of("Could not load the propery file \'\'{0}\'\' for output method \'\'{1}\'\' (check CLASSPATH)"_s)
		})
	}));
}

XMLErrorResources::XMLErrorResources() {
}

$Class* XMLErrorResources::load$($String* name, bool initialize) {
	$loadClass(XMLErrorResources, name, initialize, &_XMLErrorResources_ClassInfo_, clinit$XMLErrorResources, allocate$XMLErrorResources);
	return class$;
}

$Class* XMLErrorResources::class$ = nullptr;

						} // res
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com