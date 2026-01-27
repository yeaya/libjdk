#include <com/sun/org/apache/xml/internal/res/XMLErrorResources_pt_BR.h>

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

$FieldInfo _XMLErrorResources_pt_BR_FieldInfo_[] = {
	{"MAX_CODE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XMLErrorResources_pt_BR, MAX_CODE)},
	{"MAX_WARNING", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XMLErrorResources_pt_BR, MAX_WARNING)},
	{"MAX_OTHERS", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XMLErrorResources_pt_BR, MAX_OTHERS)},
	{"MAX_MESSAGES", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XMLErrorResources_pt_BR, MAX_MESSAGES)},
	{"ER_FUNCTION_NOT_SUPPORTED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_pt_BR, ER_FUNCTION_NOT_SUPPORTED)},
	{"ER_CANNOT_OVERWRITE_CAUSE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_pt_BR, ER_CANNOT_OVERWRITE_CAUSE)},
	{"ER_NO_DEFAULT_IMPL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_pt_BR, ER_NO_DEFAULT_IMPL)},
	{"ER_CHUNKEDINTARRAY_NOT_SUPPORTED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_pt_BR, ER_CHUNKEDINTARRAY_NOT_SUPPORTED)},
	{"ER_OFFSET_BIGGER_THAN_SLOT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_pt_BR, ER_OFFSET_BIGGER_THAN_SLOT)},
	{"ER_COROUTINE_NOT_AVAIL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_pt_BR, ER_COROUTINE_NOT_AVAIL)},
	{"ER_COROUTINE_CO_EXIT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_pt_BR, ER_COROUTINE_CO_EXIT)},
	{"ER_COJOINROUTINESET_FAILED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_pt_BR, ER_COJOINROUTINESET_FAILED)},
	{"ER_COROUTINE_PARAM", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_pt_BR, ER_COROUTINE_PARAM)},
	{"ER_PARSER_DOTERMINATE_ANSWERS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_pt_BR, ER_PARSER_DOTERMINATE_ANSWERS)},
	{"ER_NO_PARSE_CALL_WHILE_PARSING", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_pt_BR, ER_NO_PARSE_CALL_WHILE_PARSING)},
	{"ER_TYPED_ITERATOR_AXIS_NOT_IMPLEMENTED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_pt_BR, ER_TYPED_ITERATOR_AXIS_NOT_IMPLEMENTED)},
	{"ER_ITERATOR_AXIS_NOT_IMPLEMENTED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_pt_BR, ER_ITERATOR_AXIS_NOT_IMPLEMENTED)},
	{"ER_ITERATOR_CLONE_NOT_SUPPORTED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_pt_BR, ER_ITERATOR_CLONE_NOT_SUPPORTED)},
	{"ER_UNKNOWN_AXIS_TYPE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_pt_BR, ER_UNKNOWN_AXIS_TYPE)},
	{"ER_AXIS_NOT_SUPPORTED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_pt_BR, ER_AXIS_NOT_SUPPORTED)},
	{"ER_NO_DTMIDS_AVAIL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_pt_BR, ER_NO_DTMIDS_AVAIL)},
	{"ER_NOT_SUPPORTED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_pt_BR, ER_NOT_SUPPORTED)},
	{"ER_NODE_NON_NULL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_pt_BR, ER_NODE_NON_NULL)},
	{"ER_COULD_NOT_RESOLVE_NODE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_pt_BR, ER_COULD_NOT_RESOLVE_NODE)},
	{"ER_STARTPARSE_WHILE_PARSING", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_pt_BR, ER_STARTPARSE_WHILE_PARSING)},
	{"ER_STARTPARSE_NEEDS_SAXPARSER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_pt_BR, ER_STARTPARSE_NEEDS_SAXPARSER)},
	{"ER_COULD_NOT_INIT_PARSER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_pt_BR, ER_COULD_NOT_INIT_PARSER)},
	{"ER_EXCEPTION_CREATING_POOL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_pt_BR, ER_EXCEPTION_CREATING_POOL)},
	{"ER_PATH_CONTAINS_INVALID_ESCAPE_SEQUENCE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_pt_BR, ER_PATH_CONTAINS_INVALID_ESCAPE_SEQUENCE)},
	{"ER_SCHEME_REQUIRED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_pt_BR, ER_SCHEME_REQUIRED)},
	{"ER_NO_SCHEME_IN_URI", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_pt_BR, ER_NO_SCHEME_IN_URI)},
	{"ER_NO_SCHEME_INURI", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_pt_BR, ER_NO_SCHEME_INURI)},
	{"ER_PATH_INVALID_CHAR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_pt_BR, ER_PATH_INVALID_CHAR)},
	{"ER_SCHEME_FROM_NULL_STRING", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_pt_BR, ER_SCHEME_FROM_NULL_STRING)},
	{"ER_SCHEME_NOT_CONFORMANT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_pt_BR, ER_SCHEME_NOT_CONFORMANT)},
	{"ER_HOST_ADDRESS_NOT_WELLFORMED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_pt_BR, ER_HOST_ADDRESS_NOT_WELLFORMED)},
	{"ER_PORT_WHEN_HOST_NULL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_pt_BR, ER_PORT_WHEN_HOST_NULL)},
	{"ER_INVALID_PORT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_pt_BR, ER_INVALID_PORT)},
	{"ER_FRAG_FOR_GENERIC_URI", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_pt_BR, ER_FRAG_FOR_GENERIC_URI)},
	{"ER_FRAG_WHEN_PATH_NULL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_pt_BR, ER_FRAG_WHEN_PATH_NULL)},
	{"ER_FRAG_INVALID_CHAR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_pt_BR, ER_FRAG_INVALID_CHAR)},
	{"ER_PARSER_IN_USE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_pt_BR, ER_PARSER_IN_USE)},
	{"ER_CANNOT_CHANGE_WHILE_PARSING", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_pt_BR, ER_CANNOT_CHANGE_WHILE_PARSING)},
	{"ER_SELF_CAUSATION_NOT_PERMITTED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_pt_BR, ER_SELF_CAUSATION_NOT_PERMITTED)},
	{"ER_NO_USERINFO_IF_NO_HOST", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_pt_BR, ER_NO_USERINFO_IF_NO_HOST)},
	{"ER_NO_PORT_IF_NO_HOST", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_pt_BR, ER_NO_PORT_IF_NO_HOST)},
	{"ER_NO_QUERY_STRING_IN_PATH", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_pt_BR, ER_NO_QUERY_STRING_IN_PATH)},
	{"ER_NO_FRAGMENT_STRING_IN_PATH", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_pt_BR, ER_NO_FRAGMENT_STRING_IN_PATH)},
	{"ER_CANNOT_INIT_URI_EMPTY_PARMS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_pt_BR, ER_CANNOT_INIT_URI_EMPTY_PARMS)},
	{"ER_METHOD_NOT_SUPPORTED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_pt_BR, ER_METHOD_NOT_SUPPORTED)},
	{"ER_INCRSAXSRCFILTER_NOT_RESTARTABLE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_pt_BR, ER_INCRSAXSRCFILTER_NOT_RESTARTABLE)},
	{"ER_XMLRDR_NOT_BEFORE_STARTPARSE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_pt_BR, ER_XMLRDR_NOT_BEFORE_STARTPARSE)},
	{"ER_AXIS_TRAVERSER_NOT_SUPPORTED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_pt_BR, ER_AXIS_TRAVERSER_NOT_SUPPORTED)},
	{"ER_ERRORHANDLER_CREATED_WITH_NULL_PRINTWRITER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_pt_BR, ER_ERRORHANDLER_CREATED_WITH_NULL_PRINTWRITER)},
	{"ER_SYSTEMID_UNKNOWN", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_pt_BR, ER_SYSTEMID_UNKNOWN)},
	{"ER_LOCATION_UNKNOWN", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_pt_BR, ER_LOCATION_UNKNOWN)},
	{"ER_PREFIX_MUST_RESOLVE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_pt_BR, ER_PREFIX_MUST_RESOLVE)},
	{"ER_CREATEDOCUMENT_NOT_SUPPORTED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_pt_BR, ER_CREATEDOCUMENT_NOT_SUPPORTED)},
	{"ER_CHILD_HAS_NO_OWNER_DOCUMENT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_pt_BR, ER_CHILD_HAS_NO_OWNER_DOCUMENT)},
	{"ER_CHILD_HAS_NO_OWNER_DOCUMENT_ELEMENT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_pt_BR, ER_CHILD_HAS_NO_OWNER_DOCUMENT_ELEMENT)},
	{"ER_CANT_OUTPUT_TEXT_BEFORE_DOC", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_pt_BR, ER_CANT_OUTPUT_TEXT_BEFORE_DOC)},
	{"ER_CANT_HAVE_MORE_THAN_ONE_ROOT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_pt_BR, ER_CANT_HAVE_MORE_THAN_ONE_ROOT)},
	{"ER_ARG_LOCALNAME_NULL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_pt_BR, ER_ARG_LOCALNAME_NULL)},
	{"ER_ARG_LOCALNAME_INVALID", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_pt_BR, ER_ARG_LOCALNAME_INVALID)},
	{"ER_ARG_PREFIX_INVALID", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_pt_BR, ER_ARG_PREFIX_INVALID)},
	{"ER_NAME_CANT_START_WITH_COLON", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_pt_BR, ER_NAME_CANT_START_WITH_COLON)},
	{"ER_RESOURCE_COULD_NOT_FIND", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_pt_BR, ER_RESOURCE_COULD_NOT_FIND)},
	{"ER_RESOURCE_COULD_NOT_LOAD", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_pt_BR, ER_RESOURCE_COULD_NOT_LOAD)},
	{"ER_BUFFER_SIZE_LESSTHAN_ZERO", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_pt_BR, ER_BUFFER_SIZE_LESSTHAN_ZERO)},
	{"ER_INVALID_UTF16_SURROGATE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_pt_BR, ER_INVALID_UTF16_SURROGATE)},
	{"ER_OIERROR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_pt_BR, ER_OIERROR)},
	{"ER_NAMESPACE_PREFIX", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_pt_BR, ER_NAMESPACE_PREFIX)},
	{"ER_STRAY_ATTRIBUTE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_pt_BR, ER_STRAY_ATTRIBUTE)},
	{"ER_STRAY_NAMESPACE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_pt_BR, ER_STRAY_NAMESPACE)},
	{"ER_COULD_NOT_LOAD_RESOURCE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_pt_BR, ER_COULD_NOT_LOAD_RESOURCE)},
	{"ER_COULD_NOT_LOAD_METHOD_PROPERTY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_pt_BR, ER_COULD_NOT_LOAD_METHOD_PROPERTY)},
	{"ER_SERIALIZER_NOT_CONTENTHANDLER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_pt_BR, ER_SERIALIZER_NOT_CONTENTHANDLER)},
	{"ER_ILLEGAL_ATTRIBUTE_POSITION", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_pt_BR, ER_ILLEGAL_ATTRIBUTE_POSITION)},
	{"ER_ILLEGAL_CHARACTER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_pt_BR, ER_ILLEGAL_CHARACTER)},
	{"contents", "[[Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XMLErrorResources_pt_BR, contents)},
	{}
};

$MethodInfo _XMLErrorResources_pt_BR_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(XMLErrorResources_pt_BR, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED, $virtualMethod(XMLErrorResources_pt_BR, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _XMLErrorResources_pt_BR_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.res.XMLErrorResources_pt_BR",
	"java.util.ListResourceBundle",
	nullptr,
	_XMLErrorResources_pt_BR_FieldInfo_,
	_XMLErrorResources_pt_BR_MethodInfo_
};

$Object* allocate$XMLErrorResources_pt_BR($Class* clazz) {
	return $of($alloc(XMLErrorResources_pt_BR));
}

$String* XMLErrorResources_pt_BR::ER_FUNCTION_NOT_SUPPORTED = nullptr;
$String* XMLErrorResources_pt_BR::ER_CANNOT_OVERWRITE_CAUSE = nullptr;
$String* XMLErrorResources_pt_BR::ER_NO_DEFAULT_IMPL = nullptr;
$String* XMLErrorResources_pt_BR::ER_CHUNKEDINTARRAY_NOT_SUPPORTED = nullptr;
$String* XMLErrorResources_pt_BR::ER_OFFSET_BIGGER_THAN_SLOT = nullptr;
$String* XMLErrorResources_pt_BR::ER_COROUTINE_NOT_AVAIL = nullptr;
$String* XMLErrorResources_pt_BR::ER_COROUTINE_CO_EXIT = nullptr;
$String* XMLErrorResources_pt_BR::ER_COJOINROUTINESET_FAILED = nullptr;
$String* XMLErrorResources_pt_BR::ER_COROUTINE_PARAM = nullptr;
$String* XMLErrorResources_pt_BR::ER_PARSER_DOTERMINATE_ANSWERS = nullptr;
$String* XMLErrorResources_pt_BR::ER_NO_PARSE_CALL_WHILE_PARSING = nullptr;
$String* XMLErrorResources_pt_BR::ER_TYPED_ITERATOR_AXIS_NOT_IMPLEMENTED = nullptr;
$String* XMLErrorResources_pt_BR::ER_ITERATOR_AXIS_NOT_IMPLEMENTED = nullptr;
$String* XMLErrorResources_pt_BR::ER_ITERATOR_CLONE_NOT_SUPPORTED = nullptr;
$String* XMLErrorResources_pt_BR::ER_UNKNOWN_AXIS_TYPE = nullptr;
$String* XMLErrorResources_pt_BR::ER_AXIS_NOT_SUPPORTED = nullptr;
$String* XMLErrorResources_pt_BR::ER_NO_DTMIDS_AVAIL = nullptr;
$String* XMLErrorResources_pt_BR::ER_NOT_SUPPORTED = nullptr;
$String* XMLErrorResources_pt_BR::ER_NODE_NON_NULL = nullptr;
$String* XMLErrorResources_pt_BR::ER_COULD_NOT_RESOLVE_NODE = nullptr;
$String* XMLErrorResources_pt_BR::ER_STARTPARSE_WHILE_PARSING = nullptr;
$String* XMLErrorResources_pt_BR::ER_STARTPARSE_NEEDS_SAXPARSER = nullptr;
$String* XMLErrorResources_pt_BR::ER_COULD_NOT_INIT_PARSER = nullptr;
$String* XMLErrorResources_pt_BR::ER_EXCEPTION_CREATING_POOL = nullptr;
$String* XMLErrorResources_pt_BR::ER_PATH_CONTAINS_INVALID_ESCAPE_SEQUENCE = nullptr;
$String* XMLErrorResources_pt_BR::ER_SCHEME_REQUIRED = nullptr;
$String* XMLErrorResources_pt_BR::ER_NO_SCHEME_IN_URI = nullptr;
$String* XMLErrorResources_pt_BR::ER_NO_SCHEME_INURI = nullptr;
$String* XMLErrorResources_pt_BR::ER_PATH_INVALID_CHAR = nullptr;
$String* XMLErrorResources_pt_BR::ER_SCHEME_FROM_NULL_STRING = nullptr;
$String* XMLErrorResources_pt_BR::ER_SCHEME_NOT_CONFORMANT = nullptr;
$String* XMLErrorResources_pt_BR::ER_HOST_ADDRESS_NOT_WELLFORMED = nullptr;
$String* XMLErrorResources_pt_BR::ER_PORT_WHEN_HOST_NULL = nullptr;
$String* XMLErrorResources_pt_BR::ER_INVALID_PORT = nullptr;
$String* XMLErrorResources_pt_BR::ER_FRAG_FOR_GENERIC_URI = nullptr;
$String* XMLErrorResources_pt_BR::ER_FRAG_WHEN_PATH_NULL = nullptr;
$String* XMLErrorResources_pt_BR::ER_FRAG_INVALID_CHAR = nullptr;
$String* XMLErrorResources_pt_BR::ER_PARSER_IN_USE = nullptr;
$String* XMLErrorResources_pt_BR::ER_CANNOT_CHANGE_WHILE_PARSING = nullptr;
$String* XMLErrorResources_pt_BR::ER_SELF_CAUSATION_NOT_PERMITTED = nullptr;
$String* XMLErrorResources_pt_BR::ER_NO_USERINFO_IF_NO_HOST = nullptr;
$String* XMLErrorResources_pt_BR::ER_NO_PORT_IF_NO_HOST = nullptr;
$String* XMLErrorResources_pt_BR::ER_NO_QUERY_STRING_IN_PATH = nullptr;
$String* XMLErrorResources_pt_BR::ER_NO_FRAGMENT_STRING_IN_PATH = nullptr;
$String* XMLErrorResources_pt_BR::ER_CANNOT_INIT_URI_EMPTY_PARMS = nullptr;
$String* XMLErrorResources_pt_BR::ER_METHOD_NOT_SUPPORTED = nullptr;
$String* XMLErrorResources_pt_BR::ER_INCRSAXSRCFILTER_NOT_RESTARTABLE = nullptr;
$String* XMLErrorResources_pt_BR::ER_XMLRDR_NOT_BEFORE_STARTPARSE = nullptr;
$String* XMLErrorResources_pt_BR::ER_AXIS_TRAVERSER_NOT_SUPPORTED = nullptr;
$String* XMLErrorResources_pt_BR::ER_ERRORHANDLER_CREATED_WITH_NULL_PRINTWRITER = nullptr;
$String* XMLErrorResources_pt_BR::ER_SYSTEMID_UNKNOWN = nullptr;
$String* XMLErrorResources_pt_BR::ER_LOCATION_UNKNOWN = nullptr;
$String* XMLErrorResources_pt_BR::ER_PREFIX_MUST_RESOLVE = nullptr;
$String* XMLErrorResources_pt_BR::ER_CREATEDOCUMENT_NOT_SUPPORTED = nullptr;
$String* XMLErrorResources_pt_BR::ER_CHILD_HAS_NO_OWNER_DOCUMENT = nullptr;
$String* XMLErrorResources_pt_BR::ER_CHILD_HAS_NO_OWNER_DOCUMENT_ELEMENT = nullptr;
$String* XMLErrorResources_pt_BR::ER_CANT_OUTPUT_TEXT_BEFORE_DOC = nullptr;
$String* XMLErrorResources_pt_BR::ER_CANT_HAVE_MORE_THAN_ONE_ROOT = nullptr;
$String* XMLErrorResources_pt_BR::ER_ARG_LOCALNAME_NULL = nullptr;
$String* XMLErrorResources_pt_BR::ER_ARG_LOCALNAME_INVALID = nullptr;
$String* XMLErrorResources_pt_BR::ER_ARG_PREFIX_INVALID = nullptr;
$String* XMLErrorResources_pt_BR::ER_NAME_CANT_START_WITH_COLON = nullptr;
$String* XMLErrorResources_pt_BR::ER_RESOURCE_COULD_NOT_FIND = nullptr;
$String* XMLErrorResources_pt_BR::ER_RESOURCE_COULD_NOT_LOAD = nullptr;
$String* XMLErrorResources_pt_BR::ER_BUFFER_SIZE_LESSTHAN_ZERO = nullptr;
$String* XMLErrorResources_pt_BR::ER_INVALID_UTF16_SURROGATE = nullptr;
$String* XMLErrorResources_pt_BR::ER_OIERROR = nullptr;
$String* XMLErrorResources_pt_BR::ER_NAMESPACE_PREFIX = nullptr;
$String* XMLErrorResources_pt_BR::ER_STRAY_ATTRIBUTE = nullptr;
$String* XMLErrorResources_pt_BR::ER_STRAY_NAMESPACE = nullptr;
$String* XMLErrorResources_pt_BR::ER_COULD_NOT_LOAD_RESOURCE = nullptr;
$String* XMLErrorResources_pt_BR::ER_COULD_NOT_LOAD_METHOD_PROPERTY = nullptr;
$String* XMLErrorResources_pt_BR::ER_SERIALIZER_NOT_CONTENTHANDLER = nullptr;
$String* XMLErrorResources_pt_BR::ER_ILLEGAL_ATTRIBUTE_POSITION = nullptr;
$String* XMLErrorResources_pt_BR::ER_ILLEGAL_CHARACTER = nullptr;
$ObjectArray2* XMLErrorResources_pt_BR::contents = nullptr;

void XMLErrorResources_pt_BR::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* XMLErrorResources_pt_BR::getContents() {
	return XMLErrorResources_pt_BR::contents;
}

void clinit$XMLErrorResources_pt_BR($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(XMLErrorResources_pt_BR::ER_FUNCTION_NOT_SUPPORTED, "ER_FUNCTION_NOT_SUPPORTED"_s);
	$assignStatic(XMLErrorResources_pt_BR::ER_CANNOT_OVERWRITE_CAUSE, "ER_CANNOT_OVERWRITE_CAUSE"_s);
	$assignStatic(XMLErrorResources_pt_BR::ER_NO_DEFAULT_IMPL, "ER_NO_DEFAULT_IMPL"_s);
	$assignStatic(XMLErrorResources_pt_BR::ER_CHUNKEDINTARRAY_NOT_SUPPORTED, "ER_CHUNKEDINTARRAY_NOT_SUPPORTED"_s);
	$assignStatic(XMLErrorResources_pt_BR::ER_OFFSET_BIGGER_THAN_SLOT, "ER_OFFSET_BIGGER_THAN_SLOT"_s);
	$assignStatic(XMLErrorResources_pt_BR::ER_COROUTINE_NOT_AVAIL, "ER_COROUTINE_NOT_AVAIL"_s);
	$assignStatic(XMLErrorResources_pt_BR::ER_COROUTINE_CO_EXIT, "ER_COROUTINE_CO_EXIT"_s);
	$assignStatic(XMLErrorResources_pt_BR::ER_COJOINROUTINESET_FAILED, "ER_COJOINROUTINESET_FAILED"_s);
	$assignStatic(XMLErrorResources_pt_BR::ER_COROUTINE_PARAM, "ER_COROUTINE_PARAM"_s);
	$assignStatic(XMLErrorResources_pt_BR::ER_PARSER_DOTERMINATE_ANSWERS, "ER_PARSER_DOTERMINATE_ANSWERS"_s);
	$assignStatic(XMLErrorResources_pt_BR::ER_NO_PARSE_CALL_WHILE_PARSING, "ER_NO_PARSE_CALL_WHILE_PARSING"_s);
	$assignStatic(XMLErrorResources_pt_BR::ER_TYPED_ITERATOR_AXIS_NOT_IMPLEMENTED, "ER_TYPED_ITERATOR_AXIS_NOT_IMPLEMENTED"_s);
	$assignStatic(XMLErrorResources_pt_BR::ER_ITERATOR_AXIS_NOT_IMPLEMENTED, "ER_ITERATOR_AXIS_NOT_IMPLEMENTED"_s);
	$assignStatic(XMLErrorResources_pt_BR::ER_ITERATOR_CLONE_NOT_SUPPORTED, "ER_ITERATOR_CLONE_NOT_SUPPORTED"_s);
	$assignStatic(XMLErrorResources_pt_BR::ER_UNKNOWN_AXIS_TYPE, "ER_UNKNOWN_AXIS_TYPE"_s);
	$assignStatic(XMLErrorResources_pt_BR::ER_AXIS_NOT_SUPPORTED, "ER_AXIS_NOT_SUPPORTED"_s);
	$assignStatic(XMLErrorResources_pt_BR::ER_NO_DTMIDS_AVAIL, "ER_NO_DTMIDS_AVAIL"_s);
	$assignStatic(XMLErrorResources_pt_BR::ER_NOT_SUPPORTED, "ER_NOT_SUPPORTED"_s);
	$assignStatic(XMLErrorResources_pt_BR::ER_NODE_NON_NULL, "ER_NODE_NON_NULL"_s);
	$assignStatic(XMLErrorResources_pt_BR::ER_COULD_NOT_RESOLVE_NODE, "ER_COULD_NOT_RESOLVE_NODE"_s);
	$assignStatic(XMLErrorResources_pt_BR::ER_STARTPARSE_WHILE_PARSING, "ER_STARTPARSE_WHILE_PARSING"_s);
	$assignStatic(XMLErrorResources_pt_BR::ER_STARTPARSE_NEEDS_SAXPARSER, "ER_STARTPARSE_NEEDS_SAXPARSER"_s);
	$assignStatic(XMLErrorResources_pt_BR::ER_COULD_NOT_INIT_PARSER, "ER_COULD_NOT_INIT_PARSER"_s);
	$assignStatic(XMLErrorResources_pt_BR::ER_EXCEPTION_CREATING_POOL, "ER_EXCEPTION_CREATING_POOL"_s);
	$assignStatic(XMLErrorResources_pt_BR::ER_PATH_CONTAINS_INVALID_ESCAPE_SEQUENCE, "ER_PATH_CONTAINS_INVALID_ESCAPE_SEQUENCE"_s);
	$assignStatic(XMLErrorResources_pt_BR::ER_SCHEME_REQUIRED, "ER_SCHEME_REQUIRED"_s);
	$assignStatic(XMLErrorResources_pt_BR::ER_NO_SCHEME_IN_URI, "ER_NO_SCHEME_IN_URI"_s);
	$assignStatic(XMLErrorResources_pt_BR::ER_NO_SCHEME_INURI, "ER_NO_SCHEME_INURI"_s);
	$assignStatic(XMLErrorResources_pt_BR::ER_PATH_INVALID_CHAR, "ER_PATH_INVALID_CHAR"_s);
	$assignStatic(XMLErrorResources_pt_BR::ER_SCHEME_FROM_NULL_STRING, "ER_SCHEME_FROM_NULL_STRING"_s);
	$assignStatic(XMLErrorResources_pt_BR::ER_SCHEME_NOT_CONFORMANT, "ER_SCHEME_NOT_CONFORMANT"_s);
	$assignStatic(XMLErrorResources_pt_BR::ER_HOST_ADDRESS_NOT_WELLFORMED, "ER_HOST_ADDRESS_NOT_WELLFORMED"_s);
	$assignStatic(XMLErrorResources_pt_BR::ER_PORT_WHEN_HOST_NULL, "ER_PORT_WHEN_HOST_NULL"_s);
	$assignStatic(XMLErrorResources_pt_BR::ER_INVALID_PORT, "ER_INVALID_PORT"_s);
	$assignStatic(XMLErrorResources_pt_BR::ER_FRAG_FOR_GENERIC_URI, "ER_FRAG_FOR_GENERIC_URI"_s);
	$assignStatic(XMLErrorResources_pt_BR::ER_FRAG_WHEN_PATH_NULL, "ER_FRAG_WHEN_PATH_NULL"_s);
	$assignStatic(XMLErrorResources_pt_BR::ER_FRAG_INVALID_CHAR, "ER_FRAG_INVALID_CHAR"_s);
	$assignStatic(XMLErrorResources_pt_BR::ER_PARSER_IN_USE, "ER_PARSER_IN_USE"_s);
	$assignStatic(XMLErrorResources_pt_BR::ER_CANNOT_CHANGE_WHILE_PARSING, "ER_CANNOT_CHANGE_WHILE_PARSING"_s);
	$assignStatic(XMLErrorResources_pt_BR::ER_SELF_CAUSATION_NOT_PERMITTED, "ER_SELF_CAUSATION_NOT_PERMITTED"_s);
	$assignStatic(XMLErrorResources_pt_BR::ER_NO_USERINFO_IF_NO_HOST, "ER_NO_USERINFO_IF_NO_HOST"_s);
	$assignStatic(XMLErrorResources_pt_BR::ER_NO_PORT_IF_NO_HOST, "ER_NO_PORT_IF_NO_HOST"_s);
	$assignStatic(XMLErrorResources_pt_BR::ER_NO_QUERY_STRING_IN_PATH, "ER_NO_QUERY_STRING_IN_PATH"_s);
	$assignStatic(XMLErrorResources_pt_BR::ER_NO_FRAGMENT_STRING_IN_PATH, "ER_NO_FRAGMENT_STRING_IN_PATH"_s);
	$assignStatic(XMLErrorResources_pt_BR::ER_CANNOT_INIT_URI_EMPTY_PARMS, "ER_CANNOT_INIT_URI_EMPTY_PARMS"_s);
	$assignStatic(XMLErrorResources_pt_BR::ER_METHOD_NOT_SUPPORTED, "ER_METHOD_NOT_SUPPORTED"_s);
	$assignStatic(XMLErrorResources_pt_BR::ER_INCRSAXSRCFILTER_NOT_RESTARTABLE, "ER_INCRSAXSRCFILTER_NOT_RESTARTABLE"_s);
	$assignStatic(XMLErrorResources_pt_BR::ER_XMLRDR_NOT_BEFORE_STARTPARSE, "ER_XMLRDR_NOT_BEFORE_STARTPARSE"_s);
	$assignStatic(XMLErrorResources_pt_BR::ER_AXIS_TRAVERSER_NOT_SUPPORTED, "ER_AXIS_TRAVERSER_NOT_SUPPORTED"_s);
	$assignStatic(XMLErrorResources_pt_BR::ER_ERRORHANDLER_CREATED_WITH_NULL_PRINTWRITER, "ER_ERRORHANDLER_CREATED_WITH_NULL_PRINTWRITER"_s);
	$assignStatic(XMLErrorResources_pt_BR::ER_SYSTEMID_UNKNOWN, "ER_SYSTEMID_UNKNOWN"_s);
	$assignStatic(XMLErrorResources_pt_BR::ER_LOCATION_UNKNOWN, "ER_LOCATION_UNKNOWN"_s);
	$assignStatic(XMLErrorResources_pt_BR::ER_PREFIX_MUST_RESOLVE, "ER_PREFIX_MUST_RESOLVE"_s);
	$assignStatic(XMLErrorResources_pt_BR::ER_CREATEDOCUMENT_NOT_SUPPORTED, "ER_CREATEDOCUMENT_NOT_SUPPORTED"_s);
	$assignStatic(XMLErrorResources_pt_BR::ER_CHILD_HAS_NO_OWNER_DOCUMENT, "ER_CHILD_HAS_NO_OWNER_DOCUMENT"_s);
	$assignStatic(XMLErrorResources_pt_BR::ER_CHILD_HAS_NO_OWNER_DOCUMENT_ELEMENT, "ER_CHILD_HAS_NO_OWNER_DOCUMENT_ELEMENT"_s);
	$assignStatic(XMLErrorResources_pt_BR::ER_CANT_OUTPUT_TEXT_BEFORE_DOC, "ER_CANT_OUTPUT_TEXT_BEFORE_DOC"_s);
	$assignStatic(XMLErrorResources_pt_BR::ER_CANT_HAVE_MORE_THAN_ONE_ROOT, "ER_CANT_HAVE_MORE_THAN_ONE_ROOT"_s);
	$assignStatic(XMLErrorResources_pt_BR::ER_ARG_LOCALNAME_NULL, "ER_ARG_LOCALNAME_NULL"_s);
	$assignStatic(XMLErrorResources_pt_BR::ER_ARG_LOCALNAME_INVALID, "ER_ARG_LOCALNAME_INVALID"_s);
	$assignStatic(XMLErrorResources_pt_BR::ER_ARG_PREFIX_INVALID, "ER_ARG_PREFIX_INVALID"_s);
	$assignStatic(XMLErrorResources_pt_BR::ER_NAME_CANT_START_WITH_COLON, "ER_NAME_CANT_START_WITH_COLON"_s);
	$assignStatic(XMLErrorResources_pt_BR::ER_RESOURCE_COULD_NOT_FIND, "ER_RESOURCE_COULD_NOT_FIND"_s);
	$assignStatic(XMLErrorResources_pt_BR::ER_RESOURCE_COULD_NOT_LOAD, "ER_RESOURCE_COULD_NOT_LOAD"_s);
	$assignStatic(XMLErrorResources_pt_BR::ER_BUFFER_SIZE_LESSTHAN_ZERO, "ER_BUFFER_SIZE_LESSTHAN_ZERO"_s);
	$assignStatic(XMLErrorResources_pt_BR::ER_INVALID_UTF16_SURROGATE, "ER_INVALID_UTF16_SURROGATE"_s);
	$assignStatic(XMLErrorResources_pt_BR::ER_OIERROR, "ER_OIERROR"_s);
	$assignStatic(XMLErrorResources_pt_BR::ER_NAMESPACE_PREFIX, "ER_NAMESPACE_PREFIX"_s);
	$assignStatic(XMLErrorResources_pt_BR::ER_STRAY_ATTRIBUTE, "ER_STRAY_ATTIRBUTE"_s);
	$assignStatic(XMLErrorResources_pt_BR::ER_STRAY_NAMESPACE, "ER_STRAY_NAMESPACE"_s);
	$assignStatic(XMLErrorResources_pt_BR::ER_COULD_NOT_LOAD_RESOURCE, "ER_COULD_NOT_LOAD_RESOURCE"_s);
	$assignStatic(XMLErrorResources_pt_BR::ER_COULD_NOT_LOAD_METHOD_PROPERTY, "ER_COULD_NOT_LOAD_METHOD_PROPERTY"_s);
	$assignStatic(XMLErrorResources_pt_BR::ER_SERIALIZER_NOT_CONTENTHANDLER, "ER_SERIALIZER_NOT_CONTENTHANDLER"_s);
	$assignStatic(XMLErrorResources_pt_BR::ER_ILLEGAL_ATTRIBUTE_POSITION, "ER_ILLEGAL_ATTRIBUTE_POSITION"_s);
	$assignStatic(XMLErrorResources_pt_BR::ER_ILLEGAL_CHARACTER, "ER_ILLEGAL_CHARACTER"_s);
	$assignStatic(XMLErrorResources_pt_BR::contents, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("ER0000"_s),
			$of("{0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_pt_BR::ER_FUNCTION_NOT_SUPPORTED),
			$of(u"Função não suportada!"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_pt_BR::ER_CANNOT_OVERWRITE_CAUSE),
			$of(u"Não é possível substituir a causa"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_pt_BR::ER_NO_DEFAULT_IMPL),
			$of(u"Nenhuma implementação padrão encontrada "_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_pt_BR::ER_CHUNKEDINTARRAY_NOT_SUPPORTED),
			$of(u"ChunkedIntArray({0}) não suportado atualmente"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_pt_BR::ER_OFFSET_BIGGER_THAN_SLOT),
			$of("Deslocamento maior que o slot"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_pt_BR::ER_COROUTINE_NOT_AVAIL),
			$of(u"Co-rotina não disponível, id={0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_pt_BR::ER_COROUTINE_CO_EXIT),
			$of(u"CoroutineManager recebeu a solicitação co_exit()"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_pt_BR::ER_COJOINROUTINESET_FAILED),
			$of("Falha em co_joinCoroutineSet()"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_pt_BR::ER_COROUTINE_PARAM),
			$of(u"Erro no parâmetro da co-rotina ({0})"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_pt_BR::ER_PARSER_DOTERMINATE_ANSWERS),
			$of("\nINESPERADO: Parser doTerminate responde {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_pt_BR::ER_NO_PARSE_CALL_WHILE_PARSING),
			$of(u"o parsing não pode ser chamado durante o parsing"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_pt_BR::ER_TYPED_ITERATOR_AXIS_NOT_IMPLEMENTED),
			$of(u"Erro: iterador digitado para o eixo {0} não implementado"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_pt_BR::ER_ITERATOR_AXIS_NOT_IMPLEMENTED),
			$of(u"Erro: iterador para o eixo {0} não implementado "_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_pt_BR::ER_ITERATOR_CLONE_NOT_SUPPORTED),
			$of(u"clonagem do iterador não suportada"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_pt_BR::ER_UNKNOWN_AXIS_TYPE),
			$of("Tipo transversal de eixo desconhecido: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_pt_BR::ER_AXIS_NOT_SUPPORTED),
			$of(u"Transversor de eixo não suportado: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_pt_BR::ER_NO_DTMIDS_AVAIL),
			$of(u"Não há mais IDs de DTM disponíveis"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_pt_BR::ER_NOT_SUPPORTED),
			$of(u"Não suportado: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_pt_BR::ER_NODE_NON_NULL),
			$of(u"O nó deve ser não-nulo para getDTMHandleFromNode"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_pt_BR::ER_COULD_NOT_RESOLVE_NODE),
			$of(u"Não foi possível resolver o nó para um handle"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_pt_BR::ER_STARTPARSE_WHILE_PARSING),
			$of(u"startParse não pode ser chamado durante o parsing"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_pt_BR::ER_STARTPARSE_NEEDS_SAXPARSER),
			$of(u"startParse requer um SAXParser não nulo"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_pt_BR::ER_COULD_NOT_INIT_PARSER),
			$of(u"não foi possível inicializar o parser com"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_pt_BR::ER_EXCEPTION_CREATING_POOL),
			$of(u"exceção ao criar a nova instância do pool"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_pt_BR::ER_PATH_CONTAINS_INVALID_ESCAPE_SEQUENCE),
			$of(u"O caminho contém uma sequência inválida de caracteres de escape"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_pt_BR::ER_SCHEME_REQUIRED),
			$of(u"O esquema é obrigatório!"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_pt_BR::ER_NO_SCHEME_IN_URI),
			$of("Nenhum esquema encontrado no URI: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_pt_BR::ER_NO_SCHEME_INURI),
			$of("Nenhum esquema encontrado no URI"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_pt_BR::ER_PATH_INVALID_CHAR),
			$of(u"O caminho contém um caractere inválido: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_pt_BR::ER_SCHEME_FROM_NULL_STRING),
			$of(u"Não é possível definir o esquema de uma string nula"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_pt_BR::ER_SCHEME_NOT_CONFORMANT),
			$of(u"O esquema não é compatível."_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_pt_BR::ER_HOST_ADDRESS_NOT_WELLFORMED),
			$of(u"O host não é um endereço correto"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_pt_BR::ER_PORT_WHEN_HOST_NULL),
			$of(u"A porta não pode ser definida quando o host é nulo"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_pt_BR::ER_INVALID_PORT),
			$of(u"Número de porta inválido"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_pt_BR::ER_FRAG_FOR_GENERIC_URI),
			$of(u"O fragmento só pode ser definido para um URI genérico"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_pt_BR::ER_FRAG_WHEN_PATH_NULL),
			$of(u"O fragmento não pode ser definido quando o caminho é nulo"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_pt_BR::ER_FRAG_INVALID_CHAR),
			$of(u"O fragmento contém um caractere inválido"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_pt_BR::ER_PARSER_IN_USE),
			$of(u"O parser já está sendo usado"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_pt_BR::ER_CANNOT_CHANGE_WHILE_PARSING),
			$of(u"Não é possível alterar {0} {1} durante o parsing"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_pt_BR::ER_SELF_CAUSATION_NOT_PERMITTED),
			$of(u"Autoaveriguação não permitida"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_pt_BR::ER_NO_USERINFO_IF_NO_HOST),
			$of(u"As informações do usuário não podem ser especificadas se o host não tiver sido especificado"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_pt_BR::ER_NO_PORT_IF_NO_HOST),
			$of(u"A porta não pode ser especificada se o host não tiver sido especificado"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_pt_BR::ER_NO_QUERY_STRING_IN_PATH),
			$of(u"A string de consulta não pode ser especificada no caminho nem na string de consulta"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_pt_BR::ER_NO_FRAGMENT_STRING_IN_PATH),
			$of(u"O fragmento não pode ser especificado no caminho nem no fragmento"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_pt_BR::ER_CANNOT_INIT_URI_EMPTY_PARMS),
			$of(u"Não é possível inicializar o URI com parâmetros vazios"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_pt_BR::ER_METHOD_NOT_SUPPORTED),
			$of(u"Método ainda não suportado "_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_pt_BR::ER_INCRSAXSRCFILTER_NOT_RESTARTABLE),
			$of(u"IncrementalSAXSource_Filter atualmente não reinicializável"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_pt_BR::ER_XMLRDR_NOT_BEFORE_STARTPARSE),
			$of(u"XMLReader não anterior à solicitação de startParse"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_pt_BR::ER_AXIS_TRAVERSER_NOT_SUPPORTED),
			$of(u"Transversor de eixo não suportado: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_pt_BR::ER_ERRORHANDLER_CREATED_WITH_NULL_PRINTWRITER),
			$of("ListingErrorHandler criado com PrintWriter nulo!"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_pt_BR::ER_SYSTEMID_UNKNOWN),
			$of("SystemId Desconhecido"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_pt_BR::ER_LOCATION_UNKNOWN),
			$of(u"Localização de erro desconhecida"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_pt_BR::ER_PREFIX_MUST_RESOLVE),
			$of("O prefixo deve ser resolvido para um namespace: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_pt_BR::ER_CREATEDOCUMENT_NOT_SUPPORTED),
			$of(u"createDocument() não suportado no XPathContext!"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_pt_BR::ER_CHILD_HAS_NO_OWNER_DOCUMENT),
			$of(u"O filho do atributo não tem um documento do proprietário!"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_pt_BR::ER_CHILD_HAS_NO_OWNER_DOCUMENT_ELEMENT),
			$of(u"O filho do atributo não tem um elemento do documento do proprietário!"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_pt_BR::ER_CANT_OUTPUT_TEXT_BEFORE_DOC),
			$of(u"Advertência: não pode haver texto antes do elemento do documento! Ignorando..."_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_pt_BR::ER_CANT_HAVE_MORE_THAN_ONE_ROOT),
			$of(u"Não pode ter mais de uma raiz em um DOM!"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_pt_BR::ER_ARG_LOCALNAME_NULL),
			$of(u"O argumento \'localName\' é nulo"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_pt_BR::ER_ARG_LOCALNAME_INVALID),
			$of(u"Localname em QNAME deve ser um NCName válido"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_pt_BR::ER_ARG_PREFIX_INVALID),
			$of(u"O prefixo em QNAME deve ser um NCName válido"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_pt_BR::ER_NAME_CANT_START_WITH_COLON),
			$of(u"O nome não pode começar com dois pontos"_s)
		}),
		$$new($ObjectArray, {
			$of("BAD_CODE"_s),
			$of(u"O parâmetro para createMessage estava fora dos limites"_s)
		}),
		$$new($ObjectArray, {
			$of("FORMAT_FAILED"_s),
			$of(u"Exceção gerada durante a chamada messageFormat"_s)
		}),
		$$new($ObjectArray, {
			$of("line"_s),
			$of(u"N° da Linha"_s)
		}),
		$$new($ObjectArray, {
			$of("column"_s),
			$of(u"N° da Coluna"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_pt_BR::ER_SERIALIZER_NOT_CONTENTHANDLER),
			$of(u"A classe \'\'{0}\'\' do serializador não implementa org.xml.sax.ContentHandler."_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_pt_BR::ER_RESOURCE_COULD_NOT_FIND),
			$of(u"Não foi possível encontrar o recurso [ {0} ].\n {1}"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_pt_BR::ER_RESOURCE_COULD_NOT_LOAD),
			$of(u"O recurso [ {0} ] não foi carregado: {1} \n {2} \t {3}"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_pt_BR::ER_BUFFER_SIZE_LESSTHAN_ZERO),
			$of("Tamanho do buffer <=0"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_pt_BR::ER_INVALID_UTF16_SURROGATE),
			$of(u"Foi detectado um substituto de UTF-16 inválido: {0} ?"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_pt_BR::ER_OIERROR),
			$of("Erro de E/S"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_pt_BR::ER_ILLEGAL_ATTRIBUTE_POSITION),
			$of(u"Não é possível adicionar o atributo {0} depois dos nós filhos ou antes que um elemento seja produzido. O atributo será ignorado."_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_pt_BR::ER_NAMESPACE_PREFIX),
			$of(u"O namespace do prefixo \'\'{0}\'\' não foi declarado."_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_pt_BR::ER_STRAY_ATTRIBUTE),
			$of("Atributo \'\'{0}\'\' fora do elemento."_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_pt_BR::ER_STRAY_NAMESPACE),
			$of(u"Declaração de namespace \'\'{0}\'\'=\'\'{1}\'\' fora do elemento."_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_pt_BR::ER_COULD_NOT_LOAD_RESOURCE),
			$of(u"Não foi possível carregar \'\'{0}\'\' (verificar CLASSPATH); usando agora apenas os padrões"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_pt_BR::ER_ILLEGAL_CHARACTER),
			$of(u"Tentativa de exibir um caractere de valor integral {0} que não está representado na codificação de saída especificada de {1}."_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_pt_BR::ER_COULD_NOT_LOAD_METHOD_PROPERTY),
			$of(u"Não foi possível carregar o arquivo de propriedade \'\'{0}\'\' para o método de saída \'\'{1}\'\' (verificar CLASSPATH)"_s)
		})
	}));
}

XMLErrorResources_pt_BR::XMLErrorResources_pt_BR() {
}

$Class* XMLErrorResources_pt_BR::load$($String* name, bool initialize) {
	$loadClass(XMLErrorResources_pt_BR, name, initialize, &_XMLErrorResources_pt_BR_ClassInfo_, clinit$XMLErrorResources_pt_BR, allocate$XMLErrorResources_pt_BR);
	return class$;
}

$Class* XMLErrorResources_pt_BR::class$ = nullptr;

						} // res
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com