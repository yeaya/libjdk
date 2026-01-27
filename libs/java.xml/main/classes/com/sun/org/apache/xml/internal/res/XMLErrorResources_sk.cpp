#include <com/sun/org/apache/xml/internal/res/XMLErrorResources_sk.h>

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

$FieldInfo _XMLErrorResources_sk_FieldInfo_[] = {
	{"MAX_CODE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XMLErrorResources_sk, MAX_CODE)},
	{"MAX_WARNING", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XMLErrorResources_sk, MAX_WARNING)},
	{"MAX_OTHERS", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XMLErrorResources_sk, MAX_OTHERS)},
	{"MAX_MESSAGES", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XMLErrorResources_sk, MAX_MESSAGES)},
	{"ER_FUNCTION_NOT_SUPPORTED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_sk, ER_FUNCTION_NOT_SUPPORTED)},
	{"ER_CANNOT_OVERWRITE_CAUSE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_sk, ER_CANNOT_OVERWRITE_CAUSE)},
	{"ER_NO_DEFAULT_IMPL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_sk, ER_NO_DEFAULT_IMPL)},
	{"ER_CHUNKEDINTARRAY_NOT_SUPPORTED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_sk, ER_CHUNKEDINTARRAY_NOT_SUPPORTED)},
	{"ER_OFFSET_BIGGER_THAN_SLOT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_sk, ER_OFFSET_BIGGER_THAN_SLOT)},
	{"ER_COROUTINE_NOT_AVAIL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_sk, ER_COROUTINE_NOT_AVAIL)},
	{"ER_COROUTINE_CO_EXIT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_sk, ER_COROUTINE_CO_EXIT)},
	{"ER_COJOINROUTINESET_FAILED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_sk, ER_COJOINROUTINESET_FAILED)},
	{"ER_COROUTINE_PARAM", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_sk, ER_COROUTINE_PARAM)},
	{"ER_PARSER_DOTERMINATE_ANSWERS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_sk, ER_PARSER_DOTERMINATE_ANSWERS)},
	{"ER_NO_PARSE_CALL_WHILE_PARSING", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_sk, ER_NO_PARSE_CALL_WHILE_PARSING)},
	{"ER_TYPED_ITERATOR_AXIS_NOT_IMPLEMENTED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_sk, ER_TYPED_ITERATOR_AXIS_NOT_IMPLEMENTED)},
	{"ER_ITERATOR_AXIS_NOT_IMPLEMENTED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_sk, ER_ITERATOR_AXIS_NOT_IMPLEMENTED)},
	{"ER_ITERATOR_CLONE_NOT_SUPPORTED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_sk, ER_ITERATOR_CLONE_NOT_SUPPORTED)},
	{"ER_UNKNOWN_AXIS_TYPE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_sk, ER_UNKNOWN_AXIS_TYPE)},
	{"ER_AXIS_NOT_SUPPORTED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_sk, ER_AXIS_NOT_SUPPORTED)},
	{"ER_NO_DTMIDS_AVAIL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_sk, ER_NO_DTMIDS_AVAIL)},
	{"ER_NOT_SUPPORTED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_sk, ER_NOT_SUPPORTED)},
	{"ER_NODE_NON_NULL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_sk, ER_NODE_NON_NULL)},
	{"ER_COULD_NOT_RESOLVE_NODE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_sk, ER_COULD_NOT_RESOLVE_NODE)},
	{"ER_STARTPARSE_WHILE_PARSING", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_sk, ER_STARTPARSE_WHILE_PARSING)},
	{"ER_STARTPARSE_NEEDS_SAXPARSER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_sk, ER_STARTPARSE_NEEDS_SAXPARSER)},
	{"ER_COULD_NOT_INIT_PARSER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_sk, ER_COULD_NOT_INIT_PARSER)},
	{"ER_EXCEPTION_CREATING_POOL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_sk, ER_EXCEPTION_CREATING_POOL)},
	{"ER_PATH_CONTAINS_INVALID_ESCAPE_SEQUENCE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_sk, ER_PATH_CONTAINS_INVALID_ESCAPE_SEQUENCE)},
	{"ER_SCHEME_REQUIRED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_sk, ER_SCHEME_REQUIRED)},
	{"ER_NO_SCHEME_IN_URI", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_sk, ER_NO_SCHEME_IN_URI)},
	{"ER_NO_SCHEME_INURI", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_sk, ER_NO_SCHEME_INURI)},
	{"ER_PATH_INVALID_CHAR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_sk, ER_PATH_INVALID_CHAR)},
	{"ER_SCHEME_FROM_NULL_STRING", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_sk, ER_SCHEME_FROM_NULL_STRING)},
	{"ER_SCHEME_NOT_CONFORMANT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_sk, ER_SCHEME_NOT_CONFORMANT)},
	{"ER_HOST_ADDRESS_NOT_WELLFORMED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_sk, ER_HOST_ADDRESS_NOT_WELLFORMED)},
	{"ER_PORT_WHEN_HOST_NULL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_sk, ER_PORT_WHEN_HOST_NULL)},
	{"ER_INVALID_PORT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_sk, ER_INVALID_PORT)},
	{"ER_FRAG_FOR_GENERIC_URI", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_sk, ER_FRAG_FOR_GENERIC_URI)},
	{"ER_FRAG_WHEN_PATH_NULL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_sk, ER_FRAG_WHEN_PATH_NULL)},
	{"ER_FRAG_INVALID_CHAR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_sk, ER_FRAG_INVALID_CHAR)},
	{"ER_PARSER_IN_USE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_sk, ER_PARSER_IN_USE)},
	{"ER_CANNOT_CHANGE_WHILE_PARSING", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_sk, ER_CANNOT_CHANGE_WHILE_PARSING)},
	{"ER_SELF_CAUSATION_NOT_PERMITTED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_sk, ER_SELF_CAUSATION_NOT_PERMITTED)},
	{"ER_NO_USERINFO_IF_NO_HOST", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_sk, ER_NO_USERINFO_IF_NO_HOST)},
	{"ER_NO_PORT_IF_NO_HOST", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_sk, ER_NO_PORT_IF_NO_HOST)},
	{"ER_NO_QUERY_STRING_IN_PATH", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_sk, ER_NO_QUERY_STRING_IN_PATH)},
	{"ER_NO_FRAGMENT_STRING_IN_PATH", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_sk, ER_NO_FRAGMENT_STRING_IN_PATH)},
	{"ER_CANNOT_INIT_URI_EMPTY_PARMS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_sk, ER_CANNOT_INIT_URI_EMPTY_PARMS)},
	{"ER_METHOD_NOT_SUPPORTED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_sk, ER_METHOD_NOT_SUPPORTED)},
	{"ER_INCRSAXSRCFILTER_NOT_RESTARTABLE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_sk, ER_INCRSAXSRCFILTER_NOT_RESTARTABLE)},
	{"ER_XMLRDR_NOT_BEFORE_STARTPARSE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_sk, ER_XMLRDR_NOT_BEFORE_STARTPARSE)},
	{"ER_AXIS_TRAVERSER_NOT_SUPPORTED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_sk, ER_AXIS_TRAVERSER_NOT_SUPPORTED)},
	{"ER_ERRORHANDLER_CREATED_WITH_NULL_PRINTWRITER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_sk, ER_ERRORHANDLER_CREATED_WITH_NULL_PRINTWRITER)},
	{"ER_SYSTEMID_UNKNOWN", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_sk, ER_SYSTEMID_UNKNOWN)},
	{"ER_LOCATION_UNKNOWN", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_sk, ER_LOCATION_UNKNOWN)},
	{"ER_PREFIX_MUST_RESOLVE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_sk, ER_PREFIX_MUST_RESOLVE)},
	{"ER_CREATEDOCUMENT_NOT_SUPPORTED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_sk, ER_CREATEDOCUMENT_NOT_SUPPORTED)},
	{"ER_CHILD_HAS_NO_OWNER_DOCUMENT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_sk, ER_CHILD_HAS_NO_OWNER_DOCUMENT)},
	{"ER_CHILD_HAS_NO_OWNER_DOCUMENT_ELEMENT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_sk, ER_CHILD_HAS_NO_OWNER_DOCUMENT_ELEMENT)},
	{"ER_CANT_OUTPUT_TEXT_BEFORE_DOC", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_sk, ER_CANT_OUTPUT_TEXT_BEFORE_DOC)},
	{"ER_CANT_HAVE_MORE_THAN_ONE_ROOT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_sk, ER_CANT_HAVE_MORE_THAN_ONE_ROOT)},
	{"ER_ARG_LOCALNAME_NULL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_sk, ER_ARG_LOCALNAME_NULL)},
	{"ER_ARG_LOCALNAME_INVALID", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_sk, ER_ARG_LOCALNAME_INVALID)},
	{"ER_ARG_PREFIX_INVALID", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_sk, ER_ARG_PREFIX_INVALID)},
	{"ER_RESOURCE_COULD_NOT_FIND", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_sk, ER_RESOURCE_COULD_NOT_FIND)},
	{"ER_RESOURCE_COULD_NOT_LOAD", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_sk, ER_RESOURCE_COULD_NOT_LOAD)},
	{"ER_BUFFER_SIZE_LESSTHAN_ZERO", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_sk, ER_BUFFER_SIZE_LESSTHAN_ZERO)},
	{"ER_INVALID_UTF16_SURROGATE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_sk, ER_INVALID_UTF16_SURROGATE)},
	{"ER_OIERROR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_sk, ER_OIERROR)},
	{"ER_NAMESPACE_PREFIX", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_sk, ER_NAMESPACE_PREFIX)},
	{"ER_STRAY_ATTRIBUTE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_sk, ER_STRAY_ATTRIBUTE)},
	{"ER_STRAY_NAMESPACE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_sk, ER_STRAY_NAMESPACE)},
	{"ER_COULD_NOT_LOAD_RESOURCE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_sk, ER_COULD_NOT_LOAD_RESOURCE)},
	{"ER_COULD_NOT_LOAD_METHOD_PROPERTY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_sk, ER_COULD_NOT_LOAD_METHOD_PROPERTY)},
	{"ER_SERIALIZER_NOT_CONTENTHANDLER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_sk, ER_SERIALIZER_NOT_CONTENTHANDLER)},
	{"ER_ILLEGAL_ATTRIBUTE_POSITION", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_sk, ER_ILLEGAL_ATTRIBUTE_POSITION)},
	{"_contents", "[[Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XMLErrorResources_sk, _contents)},
	{}
};

$MethodInfo _XMLErrorResources_sk_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(XMLErrorResources_sk, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(XMLErrorResources_sk, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _XMLErrorResources_sk_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.res.XMLErrorResources_sk",
	"java.util.ListResourceBundle",
	nullptr,
	_XMLErrorResources_sk_FieldInfo_,
	_XMLErrorResources_sk_MethodInfo_
};

$Object* allocate$XMLErrorResources_sk($Class* clazz) {
	return $of($alloc(XMLErrorResources_sk));
}

$String* XMLErrorResources_sk::ER_FUNCTION_NOT_SUPPORTED = nullptr;
$String* XMLErrorResources_sk::ER_CANNOT_OVERWRITE_CAUSE = nullptr;
$String* XMLErrorResources_sk::ER_NO_DEFAULT_IMPL = nullptr;
$String* XMLErrorResources_sk::ER_CHUNKEDINTARRAY_NOT_SUPPORTED = nullptr;
$String* XMLErrorResources_sk::ER_OFFSET_BIGGER_THAN_SLOT = nullptr;
$String* XMLErrorResources_sk::ER_COROUTINE_NOT_AVAIL = nullptr;
$String* XMLErrorResources_sk::ER_COROUTINE_CO_EXIT = nullptr;
$String* XMLErrorResources_sk::ER_COJOINROUTINESET_FAILED = nullptr;
$String* XMLErrorResources_sk::ER_COROUTINE_PARAM = nullptr;
$String* XMLErrorResources_sk::ER_PARSER_DOTERMINATE_ANSWERS = nullptr;
$String* XMLErrorResources_sk::ER_NO_PARSE_CALL_WHILE_PARSING = nullptr;
$String* XMLErrorResources_sk::ER_TYPED_ITERATOR_AXIS_NOT_IMPLEMENTED = nullptr;
$String* XMLErrorResources_sk::ER_ITERATOR_AXIS_NOT_IMPLEMENTED = nullptr;
$String* XMLErrorResources_sk::ER_ITERATOR_CLONE_NOT_SUPPORTED = nullptr;
$String* XMLErrorResources_sk::ER_UNKNOWN_AXIS_TYPE = nullptr;
$String* XMLErrorResources_sk::ER_AXIS_NOT_SUPPORTED = nullptr;
$String* XMLErrorResources_sk::ER_NO_DTMIDS_AVAIL = nullptr;
$String* XMLErrorResources_sk::ER_NOT_SUPPORTED = nullptr;
$String* XMLErrorResources_sk::ER_NODE_NON_NULL = nullptr;
$String* XMLErrorResources_sk::ER_COULD_NOT_RESOLVE_NODE = nullptr;
$String* XMLErrorResources_sk::ER_STARTPARSE_WHILE_PARSING = nullptr;
$String* XMLErrorResources_sk::ER_STARTPARSE_NEEDS_SAXPARSER = nullptr;
$String* XMLErrorResources_sk::ER_COULD_NOT_INIT_PARSER = nullptr;
$String* XMLErrorResources_sk::ER_EXCEPTION_CREATING_POOL = nullptr;
$String* XMLErrorResources_sk::ER_PATH_CONTAINS_INVALID_ESCAPE_SEQUENCE = nullptr;
$String* XMLErrorResources_sk::ER_SCHEME_REQUIRED = nullptr;
$String* XMLErrorResources_sk::ER_NO_SCHEME_IN_URI = nullptr;
$String* XMLErrorResources_sk::ER_NO_SCHEME_INURI = nullptr;
$String* XMLErrorResources_sk::ER_PATH_INVALID_CHAR = nullptr;
$String* XMLErrorResources_sk::ER_SCHEME_FROM_NULL_STRING = nullptr;
$String* XMLErrorResources_sk::ER_SCHEME_NOT_CONFORMANT = nullptr;
$String* XMLErrorResources_sk::ER_HOST_ADDRESS_NOT_WELLFORMED = nullptr;
$String* XMLErrorResources_sk::ER_PORT_WHEN_HOST_NULL = nullptr;
$String* XMLErrorResources_sk::ER_INVALID_PORT = nullptr;
$String* XMLErrorResources_sk::ER_FRAG_FOR_GENERIC_URI = nullptr;
$String* XMLErrorResources_sk::ER_FRAG_WHEN_PATH_NULL = nullptr;
$String* XMLErrorResources_sk::ER_FRAG_INVALID_CHAR = nullptr;
$String* XMLErrorResources_sk::ER_PARSER_IN_USE = nullptr;
$String* XMLErrorResources_sk::ER_CANNOT_CHANGE_WHILE_PARSING = nullptr;
$String* XMLErrorResources_sk::ER_SELF_CAUSATION_NOT_PERMITTED = nullptr;
$String* XMLErrorResources_sk::ER_NO_USERINFO_IF_NO_HOST = nullptr;
$String* XMLErrorResources_sk::ER_NO_PORT_IF_NO_HOST = nullptr;
$String* XMLErrorResources_sk::ER_NO_QUERY_STRING_IN_PATH = nullptr;
$String* XMLErrorResources_sk::ER_NO_FRAGMENT_STRING_IN_PATH = nullptr;
$String* XMLErrorResources_sk::ER_CANNOT_INIT_URI_EMPTY_PARMS = nullptr;
$String* XMLErrorResources_sk::ER_METHOD_NOT_SUPPORTED = nullptr;
$String* XMLErrorResources_sk::ER_INCRSAXSRCFILTER_NOT_RESTARTABLE = nullptr;
$String* XMLErrorResources_sk::ER_XMLRDR_NOT_BEFORE_STARTPARSE = nullptr;
$String* XMLErrorResources_sk::ER_AXIS_TRAVERSER_NOT_SUPPORTED = nullptr;
$String* XMLErrorResources_sk::ER_ERRORHANDLER_CREATED_WITH_NULL_PRINTWRITER = nullptr;
$String* XMLErrorResources_sk::ER_SYSTEMID_UNKNOWN = nullptr;
$String* XMLErrorResources_sk::ER_LOCATION_UNKNOWN = nullptr;
$String* XMLErrorResources_sk::ER_PREFIX_MUST_RESOLVE = nullptr;
$String* XMLErrorResources_sk::ER_CREATEDOCUMENT_NOT_SUPPORTED = nullptr;
$String* XMLErrorResources_sk::ER_CHILD_HAS_NO_OWNER_DOCUMENT = nullptr;
$String* XMLErrorResources_sk::ER_CHILD_HAS_NO_OWNER_DOCUMENT_ELEMENT = nullptr;
$String* XMLErrorResources_sk::ER_CANT_OUTPUT_TEXT_BEFORE_DOC = nullptr;
$String* XMLErrorResources_sk::ER_CANT_HAVE_MORE_THAN_ONE_ROOT = nullptr;
$String* XMLErrorResources_sk::ER_ARG_LOCALNAME_NULL = nullptr;
$String* XMLErrorResources_sk::ER_ARG_LOCALNAME_INVALID = nullptr;
$String* XMLErrorResources_sk::ER_ARG_PREFIX_INVALID = nullptr;
$String* XMLErrorResources_sk::ER_RESOURCE_COULD_NOT_FIND = nullptr;
$String* XMLErrorResources_sk::ER_RESOURCE_COULD_NOT_LOAD = nullptr;
$String* XMLErrorResources_sk::ER_BUFFER_SIZE_LESSTHAN_ZERO = nullptr;
$String* XMLErrorResources_sk::ER_INVALID_UTF16_SURROGATE = nullptr;
$String* XMLErrorResources_sk::ER_OIERROR = nullptr;
$String* XMLErrorResources_sk::ER_NAMESPACE_PREFIX = nullptr;
$String* XMLErrorResources_sk::ER_STRAY_ATTRIBUTE = nullptr;
$String* XMLErrorResources_sk::ER_STRAY_NAMESPACE = nullptr;
$String* XMLErrorResources_sk::ER_COULD_NOT_LOAD_RESOURCE = nullptr;
$String* XMLErrorResources_sk::ER_COULD_NOT_LOAD_METHOD_PROPERTY = nullptr;
$String* XMLErrorResources_sk::ER_SERIALIZER_NOT_CONTENTHANDLER = nullptr;
$String* XMLErrorResources_sk::ER_ILLEGAL_ATTRIBUTE_POSITION = nullptr;
$ObjectArray2* XMLErrorResources_sk::_contents = nullptr;

void XMLErrorResources_sk::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* XMLErrorResources_sk::getContents() {
	return XMLErrorResources_sk::_contents;
}

void clinit$XMLErrorResources_sk($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(XMLErrorResources_sk::ER_FUNCTION_NOT_SUPPORTED, "ER_FUNCTION_NOT_SUPPORTED"_s);
	$assignStatic(XMLErrorResources_sk::ER_CANNOT_OVERWRITE_CAUSE, "ER_CANNOT_OVERWRITE_CAUSE"_s);
	$assignStatic(XMLErrorResources_sk::ER_NO_DEFAULT_IMPL, "ER_NO_DEFAULT_IMPL"_s);
	$assignStatic(XMLErrorResources_sk::ER_CHUNKEDINTARRAY_NOT_SUPPORTED, "ER_CHUNKEDINTARRAY_NOT_SUPPORTED"_s);
	$assignStatic(XMLErrorResources_sk::ER_OFFSET_BIGGER_THAN_SLOT, "ER_OFFSET_BIGGER_THAN_SLOT"_s);
	$assignStatic(XMLErrorResources_sk::ER_COROUTINE_NOT_AVAIL, "ER_COROUTINE_NOT_AVAIL"_s);
	$assignStatic(XMLErrorResources_sk::ER_COROUTINE_CO_EXIT, "ER_COROUTINE_CO_EXIT"_s);
	$assignStatic(XMLErrorResources_sk::ER_COJOINROUTINESET_FAILED, "ER_COJOINROUTINESET_FAILED"_s);
	$assignStatic(XMLErrorResources_sk::ER_COROUTINE_PARAM, "ER_COROUTINE_PARAM"_s);
	$assignStatic(XMLErrorResources_sk::ER_PARSER_DOTERMINATE_ANSWERS, "ER_PARSER_DOTERMINATE_ANSWERS"_s);
	$assignStatic(XMLErrorResources_sk::ER_NO_PARSE_CALL_WHILE_PARSING, "ER_NO_PARSE_CALL_WHILE_PARSING"_s);
	$assignStatic(XMLErrorResources_sk::ER_TYPED_ITERATOR_AXIS_NOT_IMPLEMENTED, "ER_TYPED_ITERATOR_AXIS_NOT_IMPLEMENTED"_s);
	$assignStatic(XMLErrorResources_sk::ER_ITERATOR_AXIS_NOT_IMPLEMENTED, "ER_ITERATOR_AXIS_NOT_IMPLEMENTED"_s);
	$assignStatic(XMLErrorResources_sk::ER_ITERATOR_CLONE_NOT_SUPPORTED, "ER_ITERATOR_CLONE_NOT_SUPPORTED"_s);
	$assignStatic(XMLErrorResources_sk::ER_UNKNOWN_AXIS_TYPE, "ER_UNKNOWN_AXIS_TYPE"_s);
	$assignStatic(XMLErrorResources_sk::ER_AXIS_NOT_SUPPORTED, "ER_AXIS_NOT_SUPPORTED"_s);
	$assignStatic(XMLErrorResources_sk::ER_NO_DTMIDS_AVAIL, "ER_NO_DTMIDS_AVAIL"_s);
	$assignStatic(XMLErrorResources_sk::ER_NOT_SUPPORTED, "ER_NOT_SUPPORTED"_s);
	$assignStatic(XMLErrorResources_sk::ER_NODE_NON_NULL, "ER_NODE_NON_NULL"_s);
	$assignStatic(XMLErrorResources_sk::ER_COULD_NOT_RESOLVE_NODE, "ER_COULD_NOT_RESOLVE_NODE"_s);
	$assignStatic(XMLErrorResources_sk::ER_STARTPARSE_WHILE_PARSING, "ER_STARTPARSE_WHILE_PARSING"_s);
	$assignStatic(XMLErrorResources_sk::ER_STARTPARSE_NEEDS_SAXPARSER, "ER_STARTPARSE_NEEDS_SAXPARSER"_s);
	$assignStatic(XMLErrorResources_sk::ER_COULD_NOT_INIT_PARSER, "ER_COULD_NOT_INIT_PARSER"_s);
	$assignStatic(XMLErrorResources_sk::ER_EXCEPTION_CREATING_POOL, "ER_EXCEPTION_CREATING_POOL"_s);
	$assignStatic(XMLErrorResources_sk::ER_PATH_CONTAINS_INVALID_ESCAPE_SEQUENCE, "ER_PATH_CONTAINS_INVALID_ESCAPE_SEQUENCE"_s);
	$assignStatic(XMLErrorResources_sk::ER_SCHEME_REQUIRED, "ER_SCHEME_REQUIRED"_s);
	$assignStatic(XMLErrorResources_sk::ER_NO_SCHEME_IN_URI, "ER_NO_SCHEME_IN_URI"_s);
	$assignStatic(XMLErrorResources_sk::ER_NO_SCHEME_INURI, "ER_NO_SCHEME_INURI"_s);
	$assignStatic(XMLErrorResources_sk::ER_PATH_INVALID_CHAR, "ER_PATH_INVALID_CHAR"_s);
	$assignStatic(XMLErrorResources_sk::ER_SCHEME_FROM_NULL_STRING, "ER_SCHEME_FROM_NULL_STRING"_s);
	$assignStatic(XMLErrorResources_sk::ER_SCHEME_NOT_CONFORMANT, "ER_SCHEME_NOT_CONFORMANT"_s);
	$assignStatic(XMLErrorResources_sk::ER_HOST_ADDRESS_NOT_WELLFORMED, "ER_HOST_ADDRESS_NOT_WELLFORMED"_s);
	$assignStatic(XMLErrorResources_sk::ER_PORT_WHEN_HOST_NULL, "ER_PORT_WHEN_HOST_NULL"_s);
	$assignStatic(XMLErrorResources_sk::ER_INVALID_PORT, "ER_INVALID_PORT"_s);
	$assignStatic(XMLErrorResources_sk::ER_FRAG_FOR_GENERIC_URI, "ER_FRAG_FOR_GENERIC_URI"_s);
	$assignStatic(XMLErrorResources_sk::ER_FRAG_WHEN_PATH_NULL, "ER_FRAG_WHEN_PATH_NULL"_s);
	$assignStatic(XMLErrorResources_sk::ER_FRAG_INVALID_CHAR, "ER_FRAG_INVALID_CHAR"_s);
	$assignStatic(XMLErrorResources_sk::ER_PARSER_IN_USE, "ER_PARSER_IN_USE"_s);
	$assignStatic(XMLErrorResources_sk::ER_CANNOT_CHANGE_WHILE_PARSING, "ER_CANNOT_CHANGE_WHILE_PARSING"_s);
	$assignStatic(XMLErrorResources_sk::ER_SELF_CAUSATION_NOT_PERMITTED, "ER_SELF_CAUSATION_NOT_PERMITTED"_s);
	$assignStatic(XMLErrorResources_sk::ER_NO_USERINFO_IF_NO_HOST, "ER_NO_USERINFO_IF_NO_HOST"_s);
	$assignStatic(XMLErrorResources_sk::ER_NO_PORT_IF_NO_HOST, "ER_NO_PORT_IF_NO_HOST"_s);
	$assignStatic(XMLErrorResources_sk::ER_NO_QUERY_STRING_IN_PATH, "ER_NO_QUERY_STRING_IN_PATH"_s);
	$assignStatic(XMLErrorResources_sk::ER_NO_FRAGMENT_STRING_IN_PATH, "ER_NO_FRAGMENT_STRING_IN_PATH"_s);
	$assignStatic(XMLErrorResources_sk::ER_CANNOT_INIT_URI_EMPTY_PARMS, "ER_CANNOT_INIT_URI_EMPTY_PARMS"_s);
	$assignStatic(XMLErrorResources_sk::ER_METHOD_NOT_SUPPORTED, "ER_METHOD_NOT_SUPPORTED"_s);
	$assignStatic(XMLErrorResources_sk::ER_INCRSAXSRCFILTER_NOT_RESTARTABLE, "ER_INCRSAXSRCFILTER_NOT_RESTARTABLE"_s);
	$assignStatic(XMLErrorResources_sk::ER_XMLRDR_NOT_BEFORE_STARTPARSE, "ER_XMLRDR_NOT_BEFORE_STARTPARSE"_s);
	$assignStatic(XMLErrorResources_sk::ER_AXIS_TRAVERSER_NOT_SUPPORTED, "ER_AXIS_TRAVERSER_NOT_SUPPORTED"_s);
	$assignStatic(XMLErrorResources_sk::ER_ERRORHANDLER_CREATED_WITH_NULL_PRINTWRITER, "ER_ERRORHANDLER_CREATED_WITH_NULL_PRINTWRITER"_s);
	$assignStatic(XMLErrorResources_sk::ER_SYSTEMID_UNKNOWN, "ER_SYSTEMID_UNKNOWN"_s);
	$assignStatic(XMLErrorResources_sk::ER_LOCATION_UNKNOWN, "ER_LOCATION_UNKNOWN"_s);
	$assignStatic(XMLErrorResources_sk::ER_PREFIX_MUST_RESOLVE, "ER_PREFIX_MUST_RESOLVE"_s);
	$assignStatic(XMLErrorResources_sk::ER_CREATEDOCUMENT_NOT_SUPPORTED, "ER_CREATEDOCUMENT_NOT_SUPPORTED"_s);
	$assignStatic(XMLErrorResources_sk::ER_CHILD_HAS_NO_OWNER_DOCUMENT, "ER_CHILD_HAS_NO_OWNER_DOCUMENT"_s);
	$assignStatic(XMLErrorResources_sk::ER_CHILD_HAS_NO_OWNER_DOCUMENT_ELEMENT, "ER_CHILD_HAS_NO_OWNER_DOCUMENT_ELEMENT"_s);
	$assignStatic(XMLErrorResources_sk::ER_CANT_OUTPUT_TEXT_BEFORE_DOC, "ER_CANT_OUTPUT_TEXT_BEFORE_DOC"_s);
	$assignStatic(XMLErrorResources_sk::ER_CANT_HAVE_MORE_THAN_ONE_ROOT, "ER_CANT_HAVE_MORE_THAN_ONE_ROOT"_s);
	$assignStatic(XMLErrorResources_sk::ER_ARG_LOCALNAME_NULL, "ER_ARG_LOCALNAME_NULL"_s);
	$assignStatic(XMLErrorResources_sk::ER_ARG_LOCALNAME_INVALID, "ER_ARG_LOCALNAME_INVALID"_s);
	$assignStatic(XMLErrorResources_sk::ER_ARG_PREFIX_INVALID, "ER_ARG_PREFIX_INVALID"_s);
	$assignStatic(XMLErrorResources_sk::ER_RESOURCE_COULD_NOT_FIND, "ER_RESOURCE_COULD_NOT_FIND"_s);
	$assignStatic(XMLErrorResources_sk::ER_RESOURCE_COULD_NOT_LOAD, "ER_RESOURCE_COULD_NOT_LOAD"_s);
	$assignStatic(XMLErrorResources_sk::ER_BUFFER_SIZE_LESSTHAN_ZERO, "ER_BUFFER_SIZE_LESSTHAN_ZERO"_s);
	$assignStatic(XMLErrorResources_sk::ER_INVALID_UTF16_SURROGATE, "ER_INVALID_UTF16_SURROGATE"_s);
	$assignStatic(XMLErrorResources_sk::ER_OIERROR, "ER_OIERROR"_s);
	$assignStatic(XMLErrorResources_sk::ER_NAMESPACE_PREFIX, "ER_NAMESPACE_PREFIX"_s);
	$assignStatic(XMLErrorResources_sk::ER_STRAY_ATTRIBUTE, "ER_STRAY_ATTIRBUTE"_s);
	$assignStatic(XMLErrorResources_sk::ER_STRAY_NAMESPACE, "ER_STRAY_NAMESPACE"_s);
	$assignStatic(XMLErrorResources_sk::ER_COULD_NOT_LOAD_RESOURCE, "ER_COULD_NOT_LOAD_RESOURCE"_s);
	$assignStatic(XMLErrorResources_sk::ER_COULD_NOT_LOAD_METHOD_PROPERTY, "ER_COULD_NOT_LOAD_METHOD_PROPERTY"_s);
	$assignStatic(XMLErrorResources_sk::ER_SERIALIZER_NOT_CONTENTHANDLER, "ER_SERIALIZER_NOT_CONTENTHANDLER"_s);
	$assignStatic(XMLErrorResources_sk::ER_ILLEGAL_ATTRIBUTE_POSITION, "ER_ILLEGAL_ATTRIBUTE_POSITION"_s);
	$assignStatic(XMLErrorResources_sk::_contents, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("ER0000"_s),
			$of("{0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_sk::ER_FUNCTION_NOT_SUPPORTED),
			$of(u"Funkcia nie je podporovaná!"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_sk::ER_CANNOT_OVERWRITE_CAUSE),
			$of(u"Nie je možné prepísať príčinu"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_sk::ER_NO_DEFAULT_IMPL),
			$of(u"Nebola nájdená žiadna predvolená implementácia "_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_sk::ER_CHUNKEDINTARRAY_NOT_SUPPORTED),
			$of(u"ChunkedIntArray({0}) nie je momentálne podporovaný"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_sk::ER_OFFSET_BIGGER_THAN_SLOT),
			$of(u"Offset väčší, než zásuvka"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_sk::ER_COROUTINE_NOT_AVAIL),
			$of(u"Korutina nie je dostupná, id={0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_sk::ER_COROUTINE_CO_EXIT),
			$of(u"CoroutineManager obdržal požiadavku co_exit()"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_sk::ER_COJOINROUTINESET_FAILED),
			$of("zlyhal co_joinCoroutineSet()"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_sk::ER_COROUTINE_PARAM),
			$of("Chyba parametra korutiny ({0})"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_sk::ER_PARSER_DOTERMINATE_ANSWERS),
			$of(u"\nNEOČAKÁVANÉ: Analyzátor doTerminate odpovedá {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_sk::ER_NO_PARSE_CALL_WHILE_PARSING),
			$of(u"syntaktický analyzátor nemôže byť volaný počas vykonávania analýzy"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_sk::ER_TYPED_ITERATOR_AXIS_NOT_IMPLEMENTED),
			$of(u"Chyba: napísaný iterátor pre os {0} nie je implementovaný"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_sk::ER_ITERATOR_AXIS_NOT_IMPLEMENTED),
			$of(u"Chyba: iterátor pre os {0} nie je implementovaný "_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_sk::ER_ITERATOR_CLONE_NOT_SUPPORTED),
			$of(u"Klon iterátora nie je podporovaný"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_sk::ER_UNKNOWN_AXIS_TYPE),
			$of(u"Neznámy typ pretínania osí: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_sk::ER_AXIS_NOT_SUPPORTED),
			$of(u"Pretínanie osí nie je podporované: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_sk::ER_NO_DTMIDS_AVAIL),
			$of(u"Žiadne ďalšie DTM ID nie sú dostupné"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_sk::ER_NOT_SUPPORTED),
			$of(u"Nie je podporované: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_sk::ER_NODE_NON_NULL),
			$of(u"Pre getDTMHandleFromNode musí byť uzol nenulový"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_sk::ER_COULD_NOT_RESOLVE_NODE),
			$of(u"Nebolo možné určiť uzol na spracovanie"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_sk::ER_STARTPARSE_WHILE_PARSING),
			$of(u"startParse nemôže byť volaný počas vykonávania analýzy"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_sk::ER_STARTPARSE_NEEDS_SAXPARSER),
			$of(u"startParse potrebuje nenulový SAXParser"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_sk::ER_COULD_NOT_INIT_PARSER),
			$of(u"nebolo možné inicializovať syntaktický analyzátor pomocou"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_sk::ER_EXCEPTION_CREATING_POOL),
			$of(u"výnimka vytvárania novej inštancie oblasti"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_sk::ER_PATH_CONTAINS_INVALID_ESCAPE_SEQUENCE),
			$of(u"Cesta obsahuje neplatnú únikovú sekvenciu"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_sk::ER_SCHEME_REQUIRED),
			$of(u"Je požadovaná schéma!"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_sk::ER_NO_SCHEME_IN_URI),
			$of(u"V URI sa nenašla žiadna schéma: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_sk::ER_NO_SCHEME_INURI),
			$of(u"V URI nebola nájdená žiadna schéma"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_sk::ER_PATH_INVALID_CHAR),
			$of(u"Cesta obsahuje neplatný znak: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_sk::ER_SCHEME_FROM_NULL_STRING),
			$of(u"Nie je možné stanoviť schému z nulového reťazca"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_sk::ER_SCHEME_NOT_CONFORMANT),
			$of(u"Nezhodná schéma."_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_sk::ER_HOST_ADDRESS_NOT_WELLFORMED),
			$of(u"Hostiteľ nie je správne formátovaná adresa"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_sk::ER_PORT_WHEN_HOST_NULL),
			$of(u"Nemôže byť stanovený port, ak je hostiteľ null"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_sk::ER_INVALID_PORT),
			$of(u"Neplatné číslo portu"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_sk::ER_FRAG_FOR_GENERIC_URI),
			$of(u"Fragment môže byť stanovený len pre všeobecné URI"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_sk::ER_FRAG_WHEN_PATH_NULL),
			$of(u"Ak je cesta nulová, nemôže byť stanovený fragment"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_sk::ER_FRAG_INVALID_CHAR),
			$of(u"Fragment obsahuje neplatný znak"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_sk::ER_PARSER_IN_USE),
			$of(u"Syntaktický analyzátor je už používaný"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_sk::ER_CANNOT_CHANGE_WHILE_PARSING),
			$of(u"Nie je možné zmeniť {0} {1} počas vykonávania analýzy"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_sk::ER_SELF_CAUSATION_NOT_PERMITTED),
			$of(u"Samozapríčinenie nie je povolené"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_sk::ER_NO_USERINFO_IF_NO_HOST),
			$of(u"Ak nebol zadaný hostiteľ, možno nebolo zadané userinfo"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_sk::ER_NO_PORT_IF_NO_HOST),
			$of(u"Ak nebol zadaný hostiteľ, možno nebol zadaný port"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_sk::ER_NO_QUERY_STRING_IN_PATH),
			$of(u"Reťazec dotazu nemôže byť zadaný v ceste a reťazci dotazu"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_sk::ER_NO_FRAGMENT_STRING_IN_PATH),
			$of(u"Fragment nemôže byť zadaný v ceste, ani vo fragmente"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_sk::ER_CANNOT_INIT_URI_EMPTY_PARMS),
			$of(u"Nie je možné inicializovať URI s prázdnymi parametrami"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_sk::ER_METHOD_NOT_SUPPORTED),
			$of(u"Metóda ešte nie je podporovaná "_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_sk::ER_INCRSAXSRCFILTER_NOT_RESTARTABLE),
			$of(u"IncrementalSAXSource_Filter nie je momentálne reštartovateľný"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_sk::ER_XMLRDR_NOT_BEFORE_STARTPARSE),
			$of(u"XMLReader nepredchádza požiadavke na startParse"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_sk::ER_AXIS_TRAVERSER_NOT_SUPPORTED),
			$of(u"Pretínanie osí nie je podporované: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_sk::ER_ERRORHANDLER_CREATED_WITH_NULL_PRINTWRITER),
			$of(u"ListingErrorHandler vytvorený s nulovým PrintWriter!"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_sk::ER_SYSTEMID_UNKNOWN),
			$of(u"Neznáme SystemId"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_sk::ER_LOCATION_UNKNOWN),
			$of(u"Neznáme miesto výskytu chyby"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_sk::ER_PREFIX_MUST_RESOLVE),
			$of(u"Predpona sa musí rozlíšiť do názvového priestoru: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_sk::ER_CREATEDOCUMENT_NOT_SUPPORTED),
			$of(u"createDocument() nie je podporované XPathContext!"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_sk::ER_CHILD_HAS_NO_OWNER_DOCUMENT),
			$of(u"Potomok atribútu nemá dokument vlastníka!"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_sk::ER_CHILD_HAS_NO_OWNER_DOCUMENT_ELEMENT),
			$of(u"Potomok atribútu nemá súčasť dokumentu vlastníka!"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_sk::ER_CANT_OUTPUT_TEXT_BEFORE_DOC),
			$of(u"Upozornenie: nemožno vypustiť text pred elementom dokumentu!  Ignorovanie..."_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_sk::ER_CANT_HAVE_MORE_THAN_ONE_ROOT),
			$of(u"Nie je možné mať viac, než jeden koreň DOM!"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_sk::ER_ARG_LOCALNAME_NULL),
			$of("Argument \'localName\' je null"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_sk::ER_ARG_LOCALNAME_INVALID),
			$of(u"Lokálny názov v QNAME by mal byť platným NCName"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_sk::ER_ARG_PREFIX_INVALID),
			$of(u"Predpona v QNAME by mala byť platným NCName"_s)
		}),
		$$new($ObjectArray, {
			$of("BAD_CODE"_s),
			$of(u"Parameter na createMessage bol mimo ohraničenia"_s)
		}),
		$$new($ObjectArray, {
			$of("FORMAT_FAILED"_s),
			$of(u"Výnimka počas volania messageFormat"_s)
		}),
		$$new($ObjectArray, {
			$of("line"_s),
			$of("Riadok #"_s)
		}),
		$$new($ObjectArray, {
			$of("column"_s),
			$of(u"Stĺpec #"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_sk::ER_SERIALIZER_NOT_CONTENTHANDLER),
			$of(u"Trieda serializátora \'\'{0}\'\' neimplementuje org.xml.sax.ContentHandler."_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_sk::ER_RESOURCE_COULD_NOT_FIND),
			$of(u"Prostriedok [ {0} ] nemohol byť nájdený.\n {1}"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_sk::ER_RESOURCE_COULD_NOT_LOAD),
			$of(u"Prostriedok [ {0} ] sa nedal načítať: {1} \n {2} \t {3}"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_sk::ER_BUFFER_SIZE_LESSTHAN_ZERO),
			$of(u"Veľkosť vyrovnávacej pamäte <=0"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_sk::ER_INVALID_UTF16_SURROGATE),
			$of(u"Bolo zistené neplatné nahradenie UTF-16: {0} ?"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_sk::ER_OIERROR),
			$of("chyba IO"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_sk::ER_ILLEGAL_ATTRIBUTE_POSITION),
			$of(u"Nie je možné pridať atribút {0} po uzloch potomka alebo pred vytvorením elementu.  Atribút bude ignorovaný."_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_sk::ER_NAMESPACE_PREFIX),
			$of(u"Názvový priestor pre predponu \'\'{0}\'\' nebol deklarovaný."_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_sk::ER_STRAY_ATTRIBUTE),
			$of(u"Atribút \'\'{0}\'\' je mimo elementu."_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_sk::ER_STRAY_NAMESPACE),
			$of(u"Deklarácia názvového priestoru \'\'{0}\'\'=\'\'{1}\'\' je mimo elementu."_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_sk::ER_COULD_NOT_LOAD_RESOURCE),
			$of(u"Nedalo sa načítať \'\'{0}\'\' (skontrolujte CLASSPATH), používajú sa predvolené hodnoty"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_sk::ER_COULD_NOT_LOAD_METHOD_PROPERTY),
			$of(u"Nedal sa načítať súbor vlastností \'\'{0}\'\' pre výstupnú metódu \'\'{1}\'\' (skontrolujte CLASSPATH)"_s)
		})
	}));
}

XMLErrorResources_sk::XMLErrorResources_sk() {
}

$Class* XMLErrorResources_sk::load$($String* name, bool initialize) {
	$loadClass(XMLErrorResources_sk, name, initialize, &_XMLErrorResources_sk_ClassInfo_, clinit$XMLErrorResources_sk, allocate$XMLErrorResources_sk);
	return class$;
}

$Class* XMLErrorResources_sk::class$ = nullptr;

						} // res
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com