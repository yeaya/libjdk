#include <com/sun/org/apache/xml/internal/res/XMLErrorResources_ca.h>

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
#undef ER_INCRSAXSRCFILTER_NOT_RESTARTABLE
#undef ER_INVALID_PORT
#undef ER_INVALID_UTF16_SURROGATE
#undef ER_ITERATOR_AXIS_NOT_IMPLEMENTED
#undef ER_ITERATOR_CLONE_NOT_SUPPORTED
#undef ER_LOCATION_UNKNOWN
#undef ER_METHOD_NOT_SUPPORTED
#undef ER_NAMESPACE_PREFIX
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

$FieldInfo _XMLErrorResources_ca_FieldInfo_[] = {
	{"MAX_CODE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XMLErrorResources_ca, MAX_CODE)},
	{"MAX_WARNING", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XMLErrorResources_ca, MAX_WARNING)},
	{"MAX_OTHERS", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XMLErrorResources_ca, MAX_OTHERS)},
	{"MAX_MESSAGES", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XMLErrorResources_ca, MAX_MESSAGES)},
	{"ER_FUNCTION_NOT_SUPPORTED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ca, ER_FUNCTION_NOT_SUPPORTED)},
	{"ER_CANNOT_OVERWRITE_CAUSE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ca, ER_CANNOT_OVERWRITE_CAUSE)},
	{"ER_NO_DEFAULT_IMPL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ca, ER_NO_DEFAULT_IMPL)},
	{"ER_CHUNKEDINTARRAY_NOT_SUPPORTED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ca, ER_CHUNKEDINTARRAY_NOT_SUPPORTED)},
	{"ER_OFFSET_BIGGER_THAN_SLOT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ca, ER_OFFSET_BIGGER_THAN_SLOT)},
	{"ER_COROUTINE_NOT_AVAIL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ca, ER_COROUTINE_NOT_AVAIL)},
	{"ER_COROUTINE_CO_EXIT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ca, ER_COROUTINE_CO_EXIT)},
	{"ER_COJOINROUTINESET_FAILED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ca, ER_COJOINROUTINESET_FAILED)},
	{"ER_COROUTINE_PARAM", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ca, ER_COROUTINE_PARAM)},
	{"ER_PARSER_DOTERMINATE_ANSWERS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ca, ER_PARSER_DOTERMINATE_ANSWERS)},
	{"ER_NO_PARSE_CALL_WHILE_PARSING", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ca, ER_NO_PARSE_CALL_WHILE_PARSING)},
	{"ER_TYPED_ITERATOR_AXIS_NOT_IMPLEMENTED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ca, ER_TYPED_ITERATOR_AXIS_NOT_IMPLEMENTED)},
	{"ER_ITERATOR_AXIS_NOT_IMPLEMENTED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ca, ER_ITERATOR_AXIS_NOT_IMPLEMENTED)},
	{"ER_ITERATOR_CLONE_NOT_SUPPORTED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ca, ER_ITERATOR_CLONE_NOT_SUPPORTED)},
	{"ER_UNKNOWN_AXIS_TYPE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ca, ER_UNKNOWN_AXIS_TYPE)},
	{"ER_AXIS_NOT_SUPPORTED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ca, ER_AXIS_NOT_SUPPORTED)},
	{"ER_NO_DTMIDS_AVAIL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ca, ER_NO_DTMIDS_AVAIL)},
	{"ER_NOT_SUPPORTED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ca, ER_NOT_SUPPORTED)},
	{"ER_NODE_NON_NULL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ca, ER_NODE_NON_NULL)},
	{"ER_COULD_NOT_RESOLVE_NODE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ca, ER_COULD_NOT_RESOLVE_NODE)},
	{"ER_STARTPARSE_WHILE_PARSING", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ca, ER_STARTPARSE_WHILE_PARSING)},
	{"ER_STARTPARSE_NEEDS_SAXPARSER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ca, ER_STARTPARSE_NEEDS_SAXPARSER)},
	{"ER_COULD_NOT_INIT_PARSER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ca, ER_COULD_NOT_INIT_PARSER)},
	{"ER_EXCEPTION_CREATING_POOL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ca, ER_EXCEPTION_CREATING_POOL)},
	{"ER_PATH_CONTAINS_INVALID_ESCAPE_SEQUENCE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ca, ER_PATH_CONTAINS_INVALID_ESCAPE_SEQUENCE)},
	{"ER_SCHEME_REQUIRED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ca, ER_SCHEME_REQUIRED)},
	{"ER_NO_SCHEME_IN_URI", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ca, ER_NO_SCHEME_IN_URI)},
	{"ER_NO_SCHEME_INURI", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ca, ER_NO_SCHEME_INURI)},
	{"ER_PATH_INVALID_CHAR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ca, ER_PATH_INVALID_CHAR)},
	{"ER_SCHEME_FROM_NULL_STRING", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ca, ER_SCHEME_FROM_NULL_STRING)},
	{"ER_SCHEME_NOT_CONFORMANT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ca, ER_SCHEME_NOT_CONFORMANT)},
	{"ER_HOST_ADDRESS_NOT_WELLFORMED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ca, ER_HOST_ADDRESS_NOT_WELLFORMED)},
	{"ER_PORT_WHEN_HOST_NULL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ca, ER_PORT_WHEN_HOST_NULL)},
	{"ER_INVALID_PORT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ca, ER_INVALID_PORT)},
	{"ER_FRAG_FOR_GENERIC_URI", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ca, ER_FRAG_FOR_GENERIC_URI)},
	{"ER_FRAG_WHEN_PATH_NULL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ca, ER_FRAG_WHEN_PATH_NULL)},
	{"ER_FRAG_INVALID_CHAR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ca, ER_FRAG_INVALID_CHAR)},
	{"ER_PARSER_IN_USE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ca, ER_PARSER_IN_USE)},
	{"ER_CANNOT_CHANGE_WHILE_PARSING", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ca, ER_CANNOT_CHANGE_WHILE_PARSING)},
	{"ER_SELF_CAUSATION_NOT_PERMITTED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ca, ER_SELF_CAUSATION_NOT_PERMITTED)},
	{"ER_NO_USERINFO_IF_NO_HOST", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ca, ER_NO_USERINFO_IF_NO_HOST)},
	{"ER_NO_PORT_IF_NO_HOST", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ca, ER_NO_PORT_IF_NO_HOST)},
	{"ER_NO_QUERY_STRING_IN_PATH", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ca, ER_NO_QUERY_STRING_IN_PATH)},
	{"ER_NO_FRAGMENT_STRING_IN_PATH", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ca, ER_NO_FRAGMENT_STRING_IN_PATH)},
	{"ER_CANNOT_INIT_URI_EMPTY_PARMS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ca, ER_CANNOT_INIT_URI_EMPTY_PARMS)},
	{"ER_METHOD_NOT_SUPPORTED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ca, ER_METHOD_NOT_SUPPORTED)},
	{"ER_INCRSAXSRCFILTER_NOT_RESTARTABLE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ca, ER_INCRSAXSRCFILTER_NOT_RESTARTABLE)},
	{"ER_XMLRDR_NOT_BEFORE_STARTPARSE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ca, ER_XMLRDR_NOT_BEFORE_STARTPARSE)},
	{"ER_AXIS_TRAVERSER_NOT_SUPPORTED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ca, ER_AXIS_TRAVERSER_NOT_SUPPORTED)},
	{"ER_ERRORHANDLER_CREATED_WITH_NULL_PRINTWRITER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ca, ER_ERRORHANDLER_CREATED_WITH_NULL_PRINTWRITER)},
	{"ER_SYSTEMID_UNKNOWN", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ca, ER_SYSTEMID_UNKNOWN)},
	{"ER_LOCATION_UNKNOWN", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ca, ER_LOCATION_UNKNOWN)},
	{"ER_PREFIX_MUST_RESOLVE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ca, ER_PREFIX_MUST_RESOLVE)},
	{"ER_CREATEDOCUMENT_NOT_SUPPORTED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ca, ER_CREATEDOCUMENT_NOT_SUPPORTED)},
	{"ER_CHILD_HAS_NO_OWNER_DOCUMENT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ca, ER_CHILD_HAS_NO_OWNER_DOCUMENT)},
	{"ER_CHILD_HAS_NO_OWNER_DOCUMENT_ELEMENT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ca, ER_CHILD_HAS_NO_OWNER_DOCUMENT_ELEMENT)},
	{"ER_CANT_OUTPUT_TEXT_BEFORE_DOC", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ca, ER_CANT_OUTPUT_TEXT_BEFORE_DOC)},
	{"ER_CANT_HAVE_MORE_THAN_ONE_ROOT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ca, ER_CANT_HAVE_MORE_THAN_ONE_ROOT)},
	{"ER_ARG_LOCALNAME_NULL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ca, ER_ARG_LOCALNAME_NULL)},
	{"ER_ARG_LOCALNAME_INVALID", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ca, ER_ARG_LOCALNAME_INVALID)},
	{"ER_ARG_PREFIX_INVALID", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ca, ER_ARG_PREFIX_INVALID)},
	{"ER_RESOURCE_COULD_NOT_FIND", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ca, ER_RESOURCE_COULD_NOT_FIND)},
	{"ER_RESOURCE_COULD_NOT_LOAD", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ca, ER_RESOURCE_COULD_NOT_LOAD)},
	{"ER_BUFFER_SIZE_LESSTHAN_ZERO", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ca, ER_BUFFER_SIZE_LESSTHAN_ZERO)},
	{"ER_INVALID_UTF16_SURROGATE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ca, ER_INVALID_UTF16_SURROGATE)},
	{"ER_OIERROR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ca, ER_OIERROR)},
	{"ER_NAMESPACE_PREFIX", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ca, ER_NAMESPACE_PREFIX)},
	{"ER_STRAY_ATTRIBUTE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ca, ER_STRAY_ATTRIBUTE)},
	{"ER_STRAY_NAMESPACE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ca, ER_STRAY_NAMESPACE)},
	{"ER_COULD_NOT_LOAD_RESOURCE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ca, ER_COULD_NOT_LOAD_RESOURCE)},
	{"ER_COULD_NOT_LOAD_METHOD_PROPERTY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ca, ER_COULD_NOT_LOAD_METHOD_PROPERTY)},
	{"ER_SERIALIZER_NOT_CONTENTHANDLER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ca, ER_SERIALIZER_NOT_CONTENTHANDLER)},
	{"ER_ILLEGAL_ATTRIBUTE_POSITION", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ca, ER_ILLEGAL_ATTRIBUTE_POSITION)},
	{"_contents", "[[Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XMLErrorResources_ca, _contents)},
	{}
};

$MethodInfo _XMLErrorResources_ca_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(XMLErrorResources_ca, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(XMLErrorResources_ca, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _XMLErrorResources_ca_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.res.XMLErrorResources_ca",
	"java.util.ListResourceBundle",
	nullptr,
	_XMLErrorResources_ca_FieldInfo_,
	_XMLErrorResources_ca_MethodInfo_
};

$Object* allocate$XMLErrorResources_ca($Class* clazz) {
	return $of($alloc(XMLErrorResources_ca));
}

$String* XMLErrorResources_ca::ER_FUNCTION_NOT_SUPPORTED = nullptr;
$String* XMLErrorResources_ca::ER_CANNOT_OVERWRITE_CAUSE = nullptr;
$String* XMLErrorResources_ca::ER_NO_DEFAULT_IMPL = nullptr;
$String* XMLErrorResources_ca::ER_CHUNKEDINTARRAY_NOT_SUPPORTED = nullptr;
$String* XMLErrorResources_ca::ER_OFFSET_BIGGER_THAN_SLOT = nullptr;
$String* XMLErrorResources_ca::ER_COROUTINE_NOT_AVAIL = nullptr;
$String* XMLErrorResources_ca::ER_COROUTINE_CO_EXIT = nullptr;
$String* XMLErrorResources_ca::ER_COJOINROUTINESET_FAILED = nullptr;
$String* XMLErrorResources_ca::ER_COROUTINE_PARAM = nullptr;
$String* XMLErrorResources_ca::ER_PARSER_DOTERMINATE_ANSWERS = nullptr;
$String* XMLErrorResources_ca::ER_NO_PARSE_CALL_WHILE_PARSING = nullptr;
$String* XMLErrorResources_ca::ER_TYPED_ITERATOR_AXIS_NOT_IMPLEMENTED = nullptr;
$String* XMLErrorResources_ca::ER_ITERATOR_AXIS_NOT_IMPLEMENTED = nullptr;
$String* XMLErrorResources_ca::ER_ITERATOR_CLONE_NOT_SUPPORTED = nullptr;
$String* XMLErrorResources_ca::ER_UNKNOWN_AXIS_TYPE = nullptr;
$String* XMLErrorResources_ca::ER_AXIS_NOT_SUPPORTED = nullptr;
$String* XMLErrorResources_ca::ER_NO_DTMIDS_AVAIL = nullptr;
$String* XMLErrorResources_ca::ER_NOT_SUPPORTED = nullptr;
$String* XMLErrorResources_ca::ER_NODE_NON_NULL = nullptr;
$String* XMLErrorResources_ca::ER_COULD_NOT_RESOLVE_NODE = nullptr;
$String* XMLErrorResources_ca::ER_STARTPARSE_WHILE_PARSING = nullptr;
$String* XMLErrorResources_ca::ER_STARTPARSE_NEEDS_SAXPARSER = nullptr;
$String* XMLErrorResources_ca::ER_COULD_NOT_INIT_PARSER = nullptr;
$String* XMLErrorResources_ca::ER_EXCEPTION_CREATING_POOL = nullptr;
$String* XMLErrorResources_ca::ER_PATH_CONTAINS_INVALID_ESCAPE_SEQUENCE = nullptr;
$String* XMLErrorResources_ca::ER_SCHEME_REQUIRED = nullptr;
$String* XMLErrorResources_ca::ER_NO_SCHEME_IN_URI = nullptr;
$String* XMLErrorResources_ca::ER_NO_SCHEME_INURI = nullptr;
$String* XMLErrorResources_ca::ER_PATH_INVALID_CHAR = nullptr;
$String* XMLErrorResources_ca::ER_SCHEME_FROM_NULL_STRING = nullptr;
$String* XMLErrorResources_ca::ER_SCHEME_NOT_CONFORMANT = nullptr;
$String* XMLErrorResources_ca::ER_HOST_ADDRESS_NOT_WELLFORMED = nullptr;
$String* XMLErrorResources_ca::ER_PORT_WHEN_HOST_NULL = nullptr;
$String* XMLErrorResources_ca::ER_INVALID_PORT = nullptr;
$String* XMLErrorResources_ca::ER_FRAG_FOR_GENERIC_URI = nullptr;
$String* XMLErrorResources_ca::ER_FRAG_WHEN_PATH_NULL = nullptr;
$String* XMLErrorResources_ca::ER_FRAG_INVALID_CHAR = nullptr;
$String* XMLErrorResources_ca::ER_PARSER_IN_USE = nullptr;
$String* XMLErrorResources_ca::ER_CANNOT_CHANGE_WHILE_PARSING = nullptr;
$String* XMLErrorResources_ca::ER_SELF_CAUSATION_NOT_PERMITTED = nullptr;
$String* XMLErrorResources_ca::ER_NO_USERINFO_IF_NO_HOST = nullptr;
$String* XMLErrorResources_ca::ER_NO_PORT_IF_NO_HOST = nullptr;
$String* XMLErrorResources_ca::ER_NO_QUERY_STRING_IN_PATH = nullptr;
$String* XMLErrorResources_ca::ER_NO_FRAGMENT_STRING_IN_PATH = nullptr;
$String* XMLErrorResources_ca::ER_CANNOT_INIT_URI_EMPTY_PARMS = nullptr;
$String* XMLErrorResources_ca::ER_METHOD_NOT_SUPPORTED = nullptr;
$String* XMLErrorResources_ca::ER_INCRSAXSRCFILTER_NOT_RESTARTABLE = nullptr;
$String* XMLErrorResources_ca::ER_XMLRDR_NOT_BEFORE_STARTPARSE = nullptr;
$String* XMLErrorResources_ca::ER_AXIS_TRAVERSER_NOT_SUPPORTED = nullptr;
$String* XMLErrorResources_ca::ER_ERRORHANDLER_CREATED_WITH_NULL_PRINTWRITER = nullptr;
$String* XMLErrorResources_ca::ER_SYSTEMID_UNKNOWN = nullptr;
$String* XMLErrorResources_ca::ER_LOCATION_UNKNOWN = nullptr;
$String* XMLErrorResources_ca::ER_PREFIX_MUST_RESOLVE = nullptr;
$String* XMLErrorResources_ca::ER_CREATEDOCUMENT_NOT_SUPPORTED = nullptr;
$String* XMLErrorResources_ca::ER_CHILD_HAS_NO_OWNER_DOCUMENT = nullptr;
$String* XMLErrorResources_ca::ER_CHILD_HAS_NO_OWNER_DOCUMENT_ELEMENT = nullptr;
$String* XMLErrorResources_ca::ER_CANT_OUTPUT_TEXT_BEFORE_DOC = nullptr;
$String* XMLErrorResources_ca::ER_CANT_HAVE_MORE_THAN_ONE_ROOT = nullptr;
$String* XMLErrorResources_ca::ER_ARG_LOCALNAME_NULL = nullptr;
$String* XMLErrorResources_ca::ER_ARG_LOCALNAME_INVALID = nullptr;
$String* XMLErrorResources_ca::ER_ARG_PREFIX_INVALID = nullptr;
$String* XMLErrorResources_ca::ER_RESOURCE_COULD_NOT_FIND = nullptr;
$String* XMLErrorResources_ca::ER_RESOURCE_COULD_NOT_LOAD = nullptr;
$String* XMLErrorResources_ca::ER_BUFFER_SIZE_LESSTHAN_ZERO = nullptr;
$String* XMLErrorResources_ca::ER_INVALID_UTF16_SURROGATE = nullptr;
$String* XMLErrorResources_ca::ER_OIERROR = nullptr;
$String* XMLErrorResources_ca::ER_NAMESPACE_PREFIX = nullptr;
$String* XMLErrorResources_ca::ER_STRAY_ATTRIBUTE = nullptr;
$String* XMLErrorResources_ca::ER_STRAY_NAMESPACE = nullptr;
$String* XMLErrorResources_ca::ER_COULD_NOT_LOAD_RESOURCE = nullptr;
$String* XMLErrorResources_ca::ER_COULD_NOT_LOAD_METHOD_PROPERTY = nullptr;
$String* XMLErrorResources_ca::ER_SERIALIZER_NOT_CONTENTHANDLER = nullptr;
$String* XMLErrorResources_ca::ER_ILLEGAL_ATTRIBUTE_POSITION = nullptr;
$ObjectArray2* XMLErrorResources_ca::_contents = nullptr;

void XMLErrorResources_ca::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* XMLErrorResources_ca::getContents() {
	return XMLErrorResources_ca::_contents;
}

void clinit$XMLErrorResources_ca($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(XMLErrorResources_ca::ER_FUNCTION_NOT_SUPPORTED, "ER_FUNCTION_NOT_SUPPORTED"_s);
	$assignStatic(XMLErrorResources_ca::ER_CANNOT_OVERWRITE_CAUSE, "ER_CANNOT_OVERWRITE_CAUSE"_s);
	$assignStatic(XMLErrorResources_ca::ER_NO_DEFAULT_IMPL, "ER_NO_DEFAULT_IMPL"_s);
	$assignStatic(XMLErrorResources_ca::ER_CHUNKEDINTARRAY_NOT_SUPPORTED, "ER_CHUNKEDINTARRAY_NOT_SUPPORTED"_s);
	$assignStatic(XMLErrorResources_ca::ER_OFFSET_BIGGER_THAN_SLOT, "ER_OFFSET_BIGGER_THAN_SLOT"_s);
	$assignStatic(XMLErrorResources_ca::ER_COROUTINE_NOT_AVAIL, "ER_COROUTINE_NOT_AVAIL"_s);
	$assignStatic(XMLErrorResources_ca::ER_COROUTINE_CO_EXIT, "ER_COROUTINE_CO_EXIT"_s);
	$assignStatic(XMLErrorResources_ca::ER_COJOINROUTINESET_FAILED, "ER_COJOINROUTINESET_FAILED"_s);
	$assignStatic(XMLErrorResources_ca::ER_COROUTINE_PARAM, "ER_COROUTINE_PARAM"_s);
	$assignStatic(XMLErrorResources_ca::ER_PARSER_DOTERMINATE_ANSWERS, "ER_PARSER_DOTERMINATE_ANSWERS"_s);
	$assignStatic(XMLErrorResources_ca::ER_NO_PARSE_CALL_WHILE_PARSING, "ER_NO_PARSE_CALL_WHILE_PARSING"_s);
	$assignStatic(XMLErrorResources_ca::ER_TYPED_ITERATOR_AXIS_NOT_IMPLEMENTED, "ER_TYPED_ITERATOR_AXIS_NOT_IMPLEMENTED"_s);
	$assignStatic(XMLErrorResources_ca::ER_ITERATOR_AXIS_NOT_IMPLEMENTED, "ER_ITERATOR_AXIS_NOT_IMPLEMENTED"_s);
	$assignStatic(XMLErrorResources_ca::ER_ITERATOR_CLONE_NOT_SUPPORTED, "ER_ITERATOR_CLONE_NOT_SUPPORTED"_s);
	$assignStatic(XMLErrorResources_ca::ER_UNKNOWN_AXIS_TYPE, "ER_UNKNOWN_AXIS_TYPE"_s);
	$assignStatic(XMLErrorResources_ca::ER_AXIS_NOT_SUPPORTED, "ER_AXIS_NOT_SUPPORTED"_s);
	$assignStatic(XMLErrorResources_ca::ER_NO_DTMIDS_AVAIL, "ER_NO_DTMIDS_AVAIL"_s);
	$assignStatic(XMLErrorResources_ca::ER_NOT_SUPPORTED, "ER_NOT_SUPPORTED"_s);
	$assignStatic(XMLErrorResources_ca::ER_NODE_NON_NULL, "ER_NODE_NON_NULL"_s);
	$assignStatic(XMLErrorResources_ca::ER_COULD_NOT_RESOLVE_NODE, "ER_COULD_NOT_RESOLVE_NODE"_s);
	$assignStatic(XMLErrorResources_ca::ER_STARTPARSE_WHILE_PARSING, "ER_STARTPARSE_WHILE_PARSING"_s);
	$assignStatic(XMLErrorResources_ca::ER_STARTPARSE_NEEDS_SAXPARSER, "ER_STARTPARSE_NEEDS_SAXPARSER"_s);
	$assignStatic(XMLErrorResources_ca::ER_COULD_NOT_INIT_PARSER, "ER_COULD_NOT_INIT_PARSER"_s);
	$assignStatic(XMLErrorResources_ca::ER_EXCEPTION_CREATING_POOL, "ER_EXCEPTION_CREATING_POOL"_s);
	$assignStatic(XMLErrorResources_ca::ER_PATH_CONTAINS_INVALID_ESCAPE_SEQUENCE, "ER_PATH_CONTAINS_INVALID_ESCAPE_SEQUENCE"_s);
	$assignStatic(XMLErrorResources_ca::ER_SCHEME_REQUIRED, "ER_SCHEME_REQUIRED"_s);
	$assignStatic(XMLErrorResources_ca::ER_NO_SCHEME_IN_URI, "ER_NO_SCHEME_IN_URI"_s);
	$assignStatic(XMLErrorResources_ca::ER_NO_SCHEME_INURI, "ER_NO_SCHEME_INURI"_s);
	$assignStatic(XMLErrorResources_ca::ER_PATH_INVALID_CHAR, "ER_PATH_INVALID_CHAR"_s);
	$assignStatic(XMLErrorResources_ca::ER_SCHEME_FROM_NULL_STRING, "ER_SCHEME_FROM_NULL_STRING"_s);
	$assignStatic(XMLErrorResources_ca::ER_SCHEME_NOT_CONFORMANT, "ER_SCHEME_NOT_CONFORMANT"_s);
	$assignStatic(XMLErrorResources_ca::ER_HOST_ADDRESS_NOT_WELLFORMED, "ER_HOST_ADDRESS_NOT_WELLFORMED"_s);
	$assignStatic(XMLErrorResources_ca::ER_PORT_WHEN_HOST_NULL, "ER_PORT_WHEN_HOST_NULL"_s);
	$assignStatic(XMLErrorResources_ca::ER_INVALID_PORT, "ER_INVALID_PORT"_s);
	$assignStatic(XMLErrorResources_ca::ER_FRAG_FOR_GENERIC_URI, "ER_FRAG_FOR_GENERIC_URI"_s);
	$assignStatic(XMLErrorResources_ca::ER_FRAG_WHEN_PATH_NULL, "ER_FRAG_WHEN_PATH_NULL"_s);
	$assignStatic(XMLErrorResources_ca::ER_FRAG_INVALID_CHAR, "ER_FRAG_INVALID_CHAR"_s);
	$assignStatic(XMLErrorResources_ca::ER_PARSER_IN_USE, "ER_PARSER_IN_USE"_s);
	$assignStatic(XMLErrorResources_ca::ER_CANNOT_CHANGE_WHILE_PARSING, "ER_CANNOT_CHANGE_WHILE_PARSING"_s);
	$assignStatic(XMLErrorResources_ca::ER_SELF_CAUSATION_NOT_PERMITTED, "ER_SELF_CAUSATION_NOT_PERMITTED"_s);
	$assignStatic(XMLErrorResources_ca::ER_NO_USERINFO_IF_NO_HOST, "ER_NO_USERINFO_IF_NO_HOST"_s);
	$assignStatic(XMLErrorResources_ca::ER_NO_PORT_IF_NO_HOST, "ER_NO_PORT_IF_NO_HOST"_s);
	$assignStatic(XMLErrorResources_ca::ER_NO_QUERY_STRING_IN_PATH, "ER_NO_QUERY_STRING_IN_PATH"_s);
	$assignStatic(XMLErrorResources_ca::ER_NO_FRAGMENT_STRING_IN_PATH, "ER_NO_FRAGMENT_STRING_IN_PATH"_s);
	$assignStatic(XMLErrorResources_ca::ER_CANNOT_INIT_URI_EMPTY_PARMS, "ER_CANNOT_INIT_URI_EMPTY_PARMS"_s);
	$assignStatic(XMLErrorResources_ca::ER_METHOD_NOT_SUPPORTED, "ER_METHOD_NOT_SUPPORTED"_s);
	$assignStatic(XMLErrorResources_ca::ER_INCRSAXSRCFILTER_NOT_RESTARTABLE, "ER_INCRSAXSRCFILTER_NOT_RESTARTABLE"_s);
	$assignStatic(XMLErrorResources_ca::ER_XMLRDR_NOT_BEFORE_STARTPARSE, "ER_XMLRDR_NOT_BEFORE_STARTPARSE"_s);
	$assignStatic(XMLErrorResources_ca::ER_AXIS_TRAVERSER_NOT_SUPPORTED, "ER_AXIS_TRAVERSER_NOT_SUPPORTED"_s);
	$assignStatic(XMLErrorResources_ca::ER_ERRORHANDLER_CREATED_WITH_NULL_PRINTWRITER, "ER_ERRORHANDLER_CREATED_WITH_NULL_PRINTWRITER"_s);
	$assignStatic(XMLErrorResources_ca::ER_SYSTEMID_UNKNOWN, "ER_SYSTEMID_UNKNOWN"_s);
	$assignStatic(XMLErrorResources_ca::ER_LOCATION_UNKNOWN, "ER_LOCATION_UNKNOWN"_s);
	$assignStatic(XMLErrorResources_ca::ER_PREFIX_MUST_RESOLVE, "ER_PREFIX_MUST_RESOLVE"_s);
	$assignStatic(XMLErrorResources_ca::ER_CREATEDOCUMENT_NOT_SUPPORTED, "ER_CREATEDOCUMENT_NOT_SUPPORTED"_s);
	$assignStatic(XMLErrorResources_ca::ER_CHILD_HAS_NO_OWNER_DOCUMENT, "ER_CHILD_HAS_NO_OWNER_DOCUMENT"_s);
	$assignStatic(XMLErrorResources_ca::ER_CHILD_HAS_NO_OWNER_DOCUMENT_ELEMENT, "ER_CHILD_HAS_NO_OWNER_DOCUMENT_ELEMENT"_s);
	$assignStatic(XMLErrorResources_ca::ER_CANT_OUTPUT_TEXT_BEFORE_DOC, "ER_CANT_OUTPUT_TEXT_BEFORE_DOC"_s);
	$assignStatic(XMLErrorResources_ca::ER_CANT_HAVE_MORE_THAN_ONE_ROOT, "ER_CANT_HAVE_MORE_THAN_ONE_ROOT"_s);
	$assignStatic(XMLErrorResources_ca::ER_ARG_LOCALNAME_NULL, "ER_ARG_LOCALNAME_NULL"_s);
	$assignStatic(XMLErrorResources_ca::ER_ARG_LOCALNAME_INVALID, "ER_ARG_LOCALNAME_INVALID"_s);
	$assignStatic(XMLErrorResources_ca::ER_ARG_PREFIX_INVALID, "ER_ARG_PREFIX_INVALID"_s);
	$assignStatic(XMLErrorResources_ca::ER_RESOURCE_COULD_NOT_FIND, "ER_RESOURCE_COULD_NOT_FIND"_s);
	$assignStatic(XMLErrorResources_ca::ER_RESOURCE_COULD_NOT_LOAD, "ER_RESOURCE_COULD_NOT_LOAD"_s);
	$assignStatic(XMLErrorResources_ca::ER_BUFFER_SIZE_LESSTHAN_ZERO, "ER_BUFFER_SIZE_LESSTHAN_ZERO"_s);
	$assignStatic(XMLErrorResources_ca::ER_INVALID_UTF16_SURROGATE, "ER_INVALID_UTF16_SURROGATE"_s);
	$assignStatic(XMLErrorResources_ca::ER_OIERROR, "ER_OIERROR"_s);
	$assignStatic(XMLErrorResources_ca::ER_NAMESPACE_PREFIX, "ER_NAMESPACE_PREFIX"_s);
	$assignStatic(XMLErrorResources_ca::ER_STRAY_ATTRIBUTE, "ER_STRAY_ATTIRBUTE"_s);
	$assignStatic(XMLErrorResources_ca::ER_STRAY_NAMESPACE, "ER_STRAY_NAMESPACE"_s);
	$assignStatic(XMLErrorResources_ca::ER_COULD_NOT_LOAD_RESOURCE, "ER_COULD_NOT_LOAD_RESOURCE"_s);
	$assignStatic(XMLErrorResources_ca::ER_COULD_NOT_LOAD_METHOD_PROPERTY, "ER_COULD_NOT_LOAD_METHOD_PROPERTY"_s);
	$assignStatic(XMLErrorResources_ca::ER_SERIALIZER_NOT_CONTENTHANDLER, "ER_SERIALIZER_NOT_CONTENTHANDLER"_s);
	$assignStatic(XMLErrorResources_ca::ER_ILLEGAL_ATTRIBUTE_POSITION, "ER_ILLEGAL_ATTRIBUTE_POSITION"_s);
	$assignStatic(XMLErrorResources_ca::_contents, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("ER0000"_s),
			$of("{0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ca::ER_FUNCTION_NOT_SUPPORTED),
			$of(u"Aquesta funció no té suport. "_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ca::ER_CANNOT_OVERWRITE_CAUSE),
			$of("No es pot sobreescriure una causa "_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ca::ER_NO_DEFAULT_IMPL),
			$of(u"No s\'ha trobat cap implementació per defecte "_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ca::ER_CHUNKEDINTARRAY_NOT_SUPPORTED),
			$of(u"En l\'\'actualitat ChunkedIntArray({0}) no té suport "_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ca::ER_OFFSET_BIGGER_THAN_SLOT),
			$of(u"El desplaçament és més gran que la ranura "_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ca::ER_COROUTINE_NOT_AVAIL),
			$of(u"Coroutine no està disponible, id={0} "_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ca::ER_COROUTINE_CO_EXIT),
			$of(u"CoroutineManager ha rebut una petició co_exit() "_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ca::ER_COJOINROUTINESET_FAILED),
			$of(u"S\'ha produït un error a co_joinCoroutineSet() "_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ca::ER_COROUTINE_PARAM),
			$of(u"Error de paràmetre coroutine ({0}) "_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ca::ER_PARSER_DOTERMINATE_ANSWERS),
			$of("\nUNEXPECTED: doTerminate de l\'\'analitzador respon {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ca::ER_NO_PARSE_CALL_WHILE_PARSING),
			$of(u"L\'anàlisi no es pot cridar mentre s\'està duent a terme "_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ca::ER_TYPED_ITERATOR_AXIS_NOT_IMPLEMENTED),
			$of("Error: l\'\'iterador de tipus de l\'\'eix {0} no s\'\'ha implementat "_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ca::ER_ITERATOR_AXIS_NOT_IMPLEMENTED),
			$of("Error: l\'\'iterador de l\'\'eix {0} no s\'\'ha implementat "_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ca::ER_ITERATOR_CLONE_NOT_SUPPORTED),
			$of(u"El clonatge de l\'iterador no té suport "_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ca::ER_UNKNOWN_AXIS_TYPE),
			$of(u"Tipus de commutació de l\'\'eix desconeguda: {0} "_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ca::ER_AXIS_NOT_SUPPORTED),
			$of(u"La commutació de l\'\'eix no té suport: {0} "_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ca::ER_NO_DTMIDS_AVAIL),
			$of(u"No hi ha més ID de DTM disponibles "_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ca::ER_NOT_SUPPORTED),
			$of(u"No té suport: {0} "_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ca::ER_NODE_NON_NULL),
			$of("El node no ha de ser nul per a getDTMHandleFromNode "_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ca::ER_COULD_NOT_RESOLVE_NODE),
			$of("No s\'ha pogut resoldre el node en un manejador "_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ca::ER_STARTPARSE_WHILE_PARSING),
			$of(u"startParse no es pot cridar mentre s\'està duent a terme l\'anàlisi "_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ca::ER_STARTPARSE_NEEDS_SAXPARSER),
			$of("startParse necessita un SAXParser que no sigui nul "_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ca::ER_COULD_NOT_INIT_PARSER),
			$of("No s\'ha pogut inicialitzar l\'analitzador amb "_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ca::ER_EXCEPTION_CREATING_POOL),
			$of(u"S\'ha produït una excepció en crear una nova instància de l\'agrupació "_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ca::ER_PATH_CONTAINS_INVALID_ESCAPE_SEQUENCE),
			$of(u"La via d\'accés conté una seqüència d\'escapament no vàlida "_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ca::ER_SCHEME_REQUIRED),
			$of("Es necessita l\'esquema "_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ca::ER_NO_SCHEME_IN_URI),
			$of("No s\'\'ha trobat cap esquema a l\'\'URI: {0} "_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ca::ER_NO_SCHEME_INURI),
			$of("No s\'ha trobat cap esquema a l\'URI "_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ca::ER_PATH_INVALID_CHAR),
			$of(u"La via d\'accés conté un caràcter no vàlid {0} "_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ca::ER_SCHEME_FROM_NULL_STRING),
			$of(u"No es pot establir un esquema des d\'una cadena nul·la "_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ca::ER_SCHEME_NOT_CONFORMANT),
			$of(u"L\'esquema no té conformitat. "_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ca::ER_HOST_ADDRESS_NOT_WELLFORMED),
			$of(u"El sistema principal no té una adreça ben formada "_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ca::ER_PORT_WHEN_HOST_NULL),
			$of(u"El port no es pot establir quan el sistema principal és nul "_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ca::ER_INVALID_PORT),
			$of(u"Número de port no vàlid "_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ca::ER_FRAG_FOR_GENERIC_URI),
			$of(u"El fragment només es pot establir per a un URI genèric "_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ca::ER_FRAG_WHEN_PATH_NULL),
			$of(u"El fragment no es pot establir si la via d\'accés és nul·la "_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ca::ER_FRAG_INVALID_CHAR),
			$of(u"El fragment conté un caràcter no vàlid "_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ca::ER_PARSER_IN_USE),
			$of(u"L\'analitzador ja s\'està utilitzant "_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ca::ER_CANNOT_CHANGE_WHILE_PARSING),
			$of(u"No es pot modificar {0} {1} mentre es du a terme l\'\'anàlisi "_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ca::ER_SELF_CAUSATION_NOT_PERMITTED),
			$of(u"La causalitat pròpia no està permesa. "_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ca::ER_NO_USERINFO_IF_NO_HOST),
			$of(u"No es pot especificar informació de l\'usuari si no s\'especifica el sistema principal "_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ca::ER_NO_PORT_IF_NO_HOST),
			$of("No es pot especificar el port si no s\'especifica el sistema principal "_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ca::ER_NO_QUERY_STRING_IN_PATH),
			$of(u"No es pot especificar una cadena de consulta en la via d\'accés i la cadena de consulta "_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ca::ER_NO_FRAGMENT_STRING_IN_PATH),
			$of(u"No es pot especificar un fragment tant en la via d\'accés com en el fragment "_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ca::ER_CANNOT_INIT_URI_EMPTY_PARMS),
			$of(u"No es pot inicialitzar l\'URI amb paràmetres buits "_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ca::ER_METHOD_NOT_SUPPORTED),
			$of(u"Aquest mètode encara no té suport "_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ca::ER_INCRSAXSRCFILTER_NOT_RESTARTABLE),
			$of("Ara mateix no es pot reiniciar IncrementalSAXSource_Filter "_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ca::ER_XMLRDR_NOT_BEFORE_STARTPARSE),
			$of(u"XMLReader no es pot produir abans de la petició d\'startParse "_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ca::ER_AXIS_TRAVERSER_NOT_SUPPORTED),
			$of(u"La commutació de l\'\'eix no té suport: {0} "_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ca::ER_ERRORHANDLER_CREATED_WITH_NULL_PRINTWRITER),
			$of("S\'\'ha creat ListingErrorHandler amb PrintWriter nul "_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ca::ER_SYSTEMID_UNKNOWN),
			$of("ID del sistema (SystemId) desconegut "_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ca::ER_LOCATION_UNKNOWN),
			$of(u"Ubicació de l\'error desconeguda"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ca::ER_PREFIX_MUST_RESOLVE),
			$of("El prefix s\'\'ha de resoldre en un espai de noms: {0} "_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ca::ER_CREATEDOCUMENT_NOT_SUPPORTED),
			$of(u"createDocument() no té suport a XPathContext "_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ca::ER_CHILD_HAS_NO_OWNER_DOCUMENT),
			$of(u"El subordinat de l\'atribut no té un document de propietari. "_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ca::ER_CHILD_HAS_NO_OWNER_DOCUMENT_ELEMENT),
			$of(u"El subordinat de l\'atribut no té un element de document de propietari. "_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ca::ER_CANT_OUTPUT_TEXT_BEFORE_DOC),
			$of(u"Avís: no es pot produir text abans de l\'element de document. Es passa per alt. "_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ca::ER_CANT_HAVE_MORE_THAN_ONE_ROOT),
			$of(u"No hi pot haver més d\'una arrel en un DOM. "_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ca::ER_ARG_LOCALNAME_NULL),
			$of(u"L\'argument \'localName\' és nul. "_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ca::ER_ARG_LOCALNAME_INVALID),
			$of(u"El nom local de QNAME ha de ser un NCName vàlid. "_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ca::ER_ARG_PREFIX_INVALID),
			$of(u"El prefix de QNAME ha de ser un NCName vàlid. "_s)
		}),
		$$new($ObjectArray, {
			$of("BAD_CODE"_s),
			$of(u"El paràmetre de createMessage estava fora dels límits. "_s)
		}),
		$$new($ObjectArray, {
			$of("FORMAT_FAILED"_s),
			$of(u"S\'ha generat una excepció durant la crida messageFormat. "_s)
		}),
		$$new($ObjectArray, {
			$of("line"_s),
			$of(u"Línia núm. "_s)
		}),
		$$new($ObjectArray, {
			$of("column"_s),
			$of(u"Columna núm. "_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ca::ER_SERIALIZER_NOT_CONTENTHANDLER),
			$of("La classe de serialitzador \'\'{0}\'\' no implementa org.xml.sax.ContentHandler."_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ca::ER_RESOURCE_COULD_NOT_FIND),
			$of("No s\'\'ha trobat el recurs [ {0} ].\n {1}"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ca::ER_RESOURCE_COULD_NOT_LOAD),
			$of("El recurs [ {0} ] no s\'\'ha pogut carregar: {1} \n {2} \t {3}"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ca::ER_BUFFER_SIZE_LESSTHAN_ZERO),
			$of(u"Grandària del buffer <=0 "_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ca::ER_INVALID_UTF16_SURROGATE),
			$of(u"S\'\'ha detectat un suplent UTF-16 no vàlid: {0} ? "_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ca::ER_OIERROR),
			$of("Error d\'E/S "_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ca::ER_ILLEGAL_ATTRIBUTE_POSITION),
			$of(u"No es pot afegir l\'\'atribut {0} després dels nodes subordinats o abans que es produeixi un element. Es passarà per alt l\'\'atribut. "_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ca::ER_NAMESPACE_PREFIX),
			$of("L\'\'espai de noms del prefix \'\'{0}\'\' no s\'\'ha declarat."_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ca::ER_STRAY_ATTRIBUTE),
			$of("L\'\'atribut \'\'{0}\'\' es troba fora de l\'\'element."_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ca::ER_STRAY_NAMESPACE),
			$of(u"La declaració d\'\'espai de noms \'\'{0}\'\'=\'\'{1}\'\' es troba fora de l\'\'element."_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ca::ER_COULD_NOT_LOAD_RESOURCE),
			$of("No s\'\'ha pogut carregar \'\'{0}\'\' (comproveu la CLASSPATH); ara s\'\'estan fent servir els valors per defecte."_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ca::ER_COULD_NOT_LOAD_METHOD_PROPERTY),
			$of(u"No s\'\'ha pogut carregar el fitxer de propietats \'\'{0}\'\' del mètode de sortida \'\'{1}\'\' (comproveu la CLASSPATH)"_s)
		})
	}));
}

XMLErrorResources_ca::XMLErrorResources_ca() {
}

$Class* XMLErrorResources_ca::load$($String* name, bool initialize) {
	$loadClass(XMLErrorResources_ca, name, initialize, &_XMLErrorResources_ca_ClassInfo_, clinit$XMLErrorResources_ca, allocate$XMLErrorResources_ca);
	return class$;
}

$Class* XMLErrorResources_ca::class$ = nullptr;

						} // res
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com