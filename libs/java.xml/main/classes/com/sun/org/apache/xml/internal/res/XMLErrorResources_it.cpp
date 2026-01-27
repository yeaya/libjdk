#include <com/sun/org/apache/xml/internal/res/XMLErrorResources_it.h>

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

$FieldInfo _XMLErrorResources_it_FieldInfo_[] = {
	{"MAX_CODE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XMLErrorResources_it, MAX_CODE)},
	{"MAX_WARNING", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XMLErrorResources_it, MAX_WARNING)},
	{"MAX_OTHERS", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XMLErrorResources_it, MAX_OTHERS)},
	{"MAX_MESSAGES", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XMLErrorResources_it, MAX_MESSAGES)},
	{"ER_FUNCTION_NOT_SUPPORTED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_it, ER_FUNCTION_NOT_SUPPORTED)},
	{"ER_CANNOT_OVERWRITE_CAUSE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_it, ER_CANNOT_OVERWRITE_CAUSE)},
	{"ER_NO_DEFAULT_IMPL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_it, ER_NO_DEFAULT_IMPL)},
	{"ER_CHUNKEDINTARRAY_NOT_SUPPORTED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_it, ER_CHUNKEDINTARRAY_NOT_SUPPORTED)},
	{"ER_OFFSET_BIGGER_THAN_SLOT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_it, ER_OFFSET_BIGGER_THAN_SLOT)},
	{"ER_COROUTINE_NOT_AVAIL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_it, ER_COROUTINE_NOT_AVAIL)},
	{"ER_COROUTINE_CO_EXIT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_it, ER_COROUTINE_CO_EXIT)},
	{"ER_COJOINROUTINESET_FAILED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_it, ER_COJOINROUTINESET_FAILED)},
	{"ER_COROUTINE_PARAM", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_it, ER_COROUTINE_PARAM)},
	{"ER_PARSER_DOTERMINATE_ANSWERS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_it, ER_PARSER_DOTERMINATE_ANSWERS)},
	{"ER_NO_PARSE_CALL_WHILE_PARSING", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_it, ER_NO_PARSE_CALL_WHILE_PARSING)},
	{"ER_TYPED_ITERATOR_AXIS_NOT_IMPLEMENTED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_it, ER_TYPED_ITERATOR_AXIS_NOT_IMPLEMENTED)},
	{"ER_ITERATOR_AXIS_NOT_IMPLEMENTED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_it, ER_ITERATOR_AXIS_NOT_IMPLEMENTED)},
	{"ER_ITERATOR_CLONE_NOT_SUPPORTED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_it, ER_ITERATOR_CLONE_NOT_SUPPORTED)},
	{"ER_UNKNOWN_AXIS_TYPE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_it, ER_UNKNOWN_AXIS_TYPE)},
	{"ER_AXIS_NOT_SUPPORTED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_it, ER_AXIS_NOT_SUPPORTED)},
	{"ER_NO_DTMIDS_AVAIL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_it, ER_NO_DTMIDS_AVAIL)},
	{"ER_NOT_SUPPORTED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_it, ER_NOT_SUPPORTED)},
	{"ER_NODE_NON_NULL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_it, ER_NODE_NON_NULL)},
	{"ER_COULD_NOT_RESOLVE_NODE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_it, ER_COULD_NOT_RESOLVE_NODE)},
	{"ER_STARTPARSE_WHILE_PARSING", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_it, ER_STARTPARSE_WHILE_PARSING)},
	{"ER_STARTPARSE_NEEDS_SAXPARSER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_it, ER_STARTPARSE_NEEDS_SAXPARSER)},
	{"ER_COULD_NOT_INIT_PARSER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_it, ER_COULD_NOT_INIT_PARSER)},
	{"ER_EXCEPTION_CREATING_POOL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_it, ER_EXCEPTION_CREATING_POOL)},
	{"ER_PATH_CONTAINS_INVALID_ESCAPE_SEQUENCE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_it, ER_PATH_CONTAINS_INVALID_ESCAPE_SEQUENCE)},
	{"ER_SCHEME_REQUIRED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_it, ER_SCHEME_REQUIRED)},
	{"ER_NO_SCHEME_IN_URI", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_it, ER_NO_SCHEME_IN_URI)},
	{"ER_NO_SCHEME_INURI", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_it, ER_NO_SCHEME_INURI)},
	{"ER_PATH_INVALID_CHAR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_it, ER_PATH_INVALID_CHAR)},
	{"ER_SCHEME_FROM_NULL_STRING", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_it, ER_SCHEME_FROM_NULL_STRING)},
	{"ER_SCHEME_NOT_CONFORMANT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_it, ER_SCHEME_NOT_CONFORMANT)},
	{"ER_HOST_ADDRESS_NOT_WELLFORMED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_it, ER_HOST_ADDRESS_NOT_WELLFORMED)},
	{"ER_PORT_WHEN_HOST_NULL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_it, ER_PORT_WHEN_HOST_NULL)},
	{"ER_INVALID_PORT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_it, ER_INVALID_PORT)},
	{"ER_FRAG_FOR_GENERIC_URI", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_it, ER_FRAG_FOR_GENERIC_URI)},
	{"ER_FRAG_WHEN_PATH_NULL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_it, ER_FRAG_WHEN_PATH_NULL)},
	{"ER_FRAG_INVALID_CHAR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_it, ER_FRAG_INVALID_CHAR)},
	{"ER_PARSER_IN_USE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_it, ER_PARSER_IN_USE)},
	{"ER_CANNOT_CHANGE_WHILE_PARSING", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_it, ER_CANNOT_CHANGE_WHILE_PARSING)},
	{"ER_SELF_CAUSATION_NOT_PERMITTED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_it, ER_SELF_CAUSATION_NOT_PERMITTED)},
	{"ER_NO_USERINFO_IF_NO_HOST", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_it, ER_NO_USERINFO_IF_NO_HOST)},
	{"ER_NO_PORT_IF_NO_HOST", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_it, ER_NO_PORT_IF_NO_HOST)},
	{"ER_NO_QUERY_STRING_IN_PATH", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_it, ER_NO_QUERY_STRING_IN_PATH)},
	{"ER_NO_FRAGMENT_STRING_IN_PATH", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_it, ER_NO_FRAGMENT_STRING_IN_PATH)},
	{"ER_CANNOT_INIT_URI_EMPTY_PARMS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_it, ER_CANNOT_INIT_URI_EMPTY_PARMS)},
	{"ER_METHOD_NOT_SUPPORTED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_it, ER_METHOD_NOT_SUPPORTED)},
	{"ER_INCRSAXSRCFILTER_NOT_RESTARTABLE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_it, ER_INCRSAXSRCFILTER_NOT_RESTARTABLE)},
	{"ER_XMLRDR_NOT_BEFORE_STARTPARSE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_it, ER_XMLRDR_NOT_BEFORE_STARTPARSE)},
	{"ER_AXIS_TRAVERSER_NOT_SUPPORTED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_it, ER_AXIS_TRAVERSER_NOT_SUPPORTED)},
	{"ER_ERRORHANDLER_CREATED_WITH_NULL_PRINTWRITER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_it, ER_ERRORHANDLER_CREATED_WITH_NULL_PRINTWRITER)},
	{"ER_SYSTEMID_UNKNOWN", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_it, ER_SYSTEMID_UNKNOWN)},
	{"ER_LOCATION_UNKNOWN", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_it, ER_LOCATION_UNKNOWN)},
	{"ER_PREFIX_MUST_RESOLVE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_it, ER_PREFIX_MUST_RESOLVE)},
	{"ER_CREATEDOCUMENT_NOT_SUPPORTED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_it, ER_CREATEDOCUMENT_NOT_SUPPORTED)},
	{"ER_CHILD_HAS_NO_OWNER_DOCUMENT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_it, ER_CHILD_HAS_NO_OWNER_DOCUMENT)},
	{"ER_CHILD_HAS_NO_OWNER_DOCUMENT_ELEMENT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_it, ER_CHILD_HAS_NO_OWNER_DOCUMENT_ELEMENT)},
	{"ER_CANT_OUTPUT_TEXT_BEFORE_DOC", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_it, ER_CANT_OUTPUT_TEXT_BEFORE_DOC)},
	{"ER_CANT_HAVE_MORE_THAN_ONE_ROOT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_it, ER_CANT_HAVE_MORE_THAN_ONE_ROOT)},
	{"ER_ARG_LOCALNAME_NULL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_it, ER_ARG_LOCALNAME_NULL)},
	{"ER_ARG_LOCALNAME_INVALID", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_it, ER_ARG_LOCALNAME_INVALID)},
	{"ER_ARG_PREFIX_INVALID", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_it, ER_ARG_PREFIX_INVALID)},
	{"ER_NAME_CANT_START_WITH_COLON", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_it, ER_NAME_CANT_START_WITH_COLON)},
	{"ER_RESOURCE_COULD_NOT_FIND", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_it, ER_RESOURCE_COULD_NOT_FIND)},
	{"ER_RESOURCE_COULD_NOT_LOAD", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_it, ER_RESOURCE_COULD_NOT_LOAD)},
	{"ER_BUFFER_SIZE_LESSTHAN_ZERO", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_it, ER_BUFFER_SIZE_LESSTHAN_ZERO)},
	{"ER_INVALID_UTF16_SURROGATE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_it, ER_INVALID_UTF16_SURROGATE)},
	{"ER_OIERROR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_it, ER_OIERROR)},
	{"ER_NAMESPACE_PREFIX", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_it, ER_NAMESPACE_PREFIX)},
	{"ER_STRAY_ATTRIBUTE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_it, ER_STRAY_ATTRIBUTE)},
	{"ER_STRAY_NAMESPACE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_it, ER_STRAY_NAMESPACE)},
	{"ER_COULD_NOT_LOAD_RESOURCE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_it, ER_COULD_NOT_LOAD_RESOURCE)},
	{"ER_COULD_NOT_LOAD_METHOD_PROPERTY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_it, ER_COULD_NOT_LOAD_METHOD_PROPERTY)},
	{"ER_SERIALIZER_NOT_CONTENTHANDLER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_it, ER_SERIALIZER_NOT_CONTENTHANDLER)},
	{"ER_ILLEGAL_ATTRIBUTE_POSITION", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_it, ER_ILLEGAL_ATTRIBUTE_POSITION)},
	{"ER_ILLEGAL_CHARACTER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_it, ER_ILLEGAL_CHARACTER)},
	{"contents", "[[Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XMLErrorResources_it, contents)},
	{}
};

$MethodInfo _XMLErrorResources_it_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(XMLErrorResources_it, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED, $virtualMethod(XMLErrorResources_it, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _XMLErrorResources_it_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.res.XMLErrorResources_it",
	"java.util.ListResourceBundle",
	nullptr,
	_XMLErrorResources_it_FieldInfo_,
	_XMLErrorResources_it_MethodInfo_
};

$Object* allocate$XMLErrorResources_it($Class* clazz) {
	return $of($alloc(XMLErrorResources_it));
}

$String* XMLErrorResources_it::ER_FUNCTION_NOT_SUPPORTED = nullptr;
$String* XMLErrorResources_it::ER_CANNOT_OVERWRITE_CAUSE = nullptr;
$String* XMLErrorResources_it::ER_NO_DEFAULT_IMPL = nullptr;
$String* XMLErrorResources_it::ER_CHUNKEDINTARRAY_NOT_SUPPORTED = nullptr;
$String* XMLErrorResources_it::ER_OFFSET_BIGGER_THAN_SLOT = nullptr;
$String* XMLErrorResources_it::ER_COROUTINE_NOT_AVAIL = nullptr;
$String* XMLErrorResources_it::ER_COROUTINE_CO_EXIT = nullptr;
$String* XMLErrorResources_it::ER_COJOINROUTINESET_FAILED = nullptr;
$String* XMLErrorResources_it::ER_COROUTINE_PARAM = nullptr;
$String* XMLErrorResources_it::ER_PARSER_DOTERMINATE_ANSWERS = nullptr;
$String* XMLErrorResources_it::ER_NO_PARSE_CALL_WHILE_PARSING = nullptr;
$String* XMLErrorResources_it::ER_TYPED_ITERATOR_AXIS_NOT_IMPLEMENTED = nullptr;
$String* XMLErrorResources_it::ER_ITERATOR_AXIS_NOT_IMPLEMENTED = nullptr;
$String* XMLErrorResources_it::ER_ITERATOR_CLONE_NOT_SUPPORTED = nullptr;
$String* XMLErrorResources_it::ER_UNKNOWN_AXIS_TYPE = nullptr;
$String* XMLErrorResources_it::ER_AXIS_NOT_SUPPORTED = nullptr;
$String* XMLErrorResources_it::ER_NO_DTMIDS_AVAIL = nullptr;
$String* XMLErrorResources_it::ER_NOT_SUPPORTED = nullptr;
$String* XMLErrorResources_it::ER_NODE_NON_NULL = nullptr;
$String* XMLErrorResources_it::ER_COULD_NOT_RESOLVE_NODE = nullptr;
$String* XMLErrorResources_it::ER_STARTPARSE_WHILE_PARSING = nullptr;
$String* XMLErrorResources_it::ER_STARTPARSE_NEEDS_SAXPARSER = nullptr;
$String* XMLErrorResources_it::ER_COULD_NOT_INIT_PARSER = nullptr;
$String* XMLErrorResources_it::ER_EXCEPTION_CREATING_POOL = nullptr;
$String* XMLErrorResources_it::ER_PATH_CONTAINS_INVALID_ESCAPE_SEQUENCE = nullptr;
$String* XMLErrorResources_it::ER_SCHEME_REQUIRED = nullptr;
$String* XMLErrorResources_it::ER_NO_SCHEME_IN_URI = nullptr;
$String* XMLErrorResources_it::ER_NO_SCHEME_INURI = nullptr;
$String* XMLErrorResources_it::ER_PATH_INVALID_CHAR = nullptr;
$String* XMLErrorResources_it::ER_SCHEME_FROM_NULL_STRING = nullptr;
$String* XMLErrorResources_it::ER_SCHEME_NOT_CONFORMANT = nullptr;
$String* XMLErrorResources_it::ER_HOST_ADDRESS_NOT_WELLFORMED = nullptr;
$String* XMLErrorResources_it::ER_PORT_WHEN_HOST_NULL = nullptr;
$String* XMLErrorResources_it::ER_INVALID_PORT = nullptr;
$String* XMLErrorResources_it::ER_FRAG_FOR_GENERIC_URI = nullptr;
$String* XMLErrorResources_it::ER_FRAG_WHEN_PATH_NULL = nullptr;
$String* XMLErrorResources_it::ER_FRAG_INVALID_CHAR = nullptr;
$String* XMLErrorResources_it::ER_PARSER_IN_USE = nullptr;
$String* XMLErrorResources_it::ER_CANNOT_CHANGE_WHILE_PARSING = nullptr;
$String* XMLErrorResources_it::ER_SELF_CAUSATION_NOT_PERMITTED = nullptr;
$String* XMLErrorResources_it::ER_NO_USERINFO_IF_NO_HOST = nullptr;
$String* XMLErrorResources_it::ER_NO_PORT_IF_NO_HOST = nullptr;
$String* XMLErrorResources_it::ER_NO_QUERY_STRING_IN_PATH = nullptr;
$String* XMLErrorResources_it::ER_NO_FRAGMENT_STRING_IN_PATH = nullptr;
$String* XMLErrorResources_it::ER_CANNOT_INIT_URI_EMPTY_PARMS = nullptr;
$String* XMLErrorResources_it::ER_METHOD_NOT_SUPPORTED = nullptr;
$String* XMLErrorResources_it::ER_INCRSAXSRCFILTER_NOT_RESTARTABLE = nullptr;
$String* XMLErrorResources_it::ER_XMLRDR_NOT_BEFORE_STARTPARSE = nullptr;
$String* XMLErrorResources_it::ER_AXIS_TRAVERSER_NOT_SUPPORTED = nullptr;
$String* XMLErrorResources_it::ER_ERRORHANDLER_CREATED_WITH_NULL_PRINTWRITER = nullptr;
$String* XMLErrorResources_it::ER_SYSTEMID_UNKNOWN = nullptr;
$String* XMLErrorResources_it::ER_LOCATION_UNKNOWN = nullptr;
$String* XMLErrorResources_it::ER_PREFIX_MUST_RESOLVE = nullptr;
$String* XMLErrorResources_it::ER_CREATEDOCUMENT_NOT_SUPPORTED = nullptr;
$String* XMLErrorResources_it::ER_CHILD_HAS_NO_OWNER_DOCUMENT = nullptr;
$String* XMLErrorResources_it::ER_CHILD_HAS_NO_OWNER_DOCUMENT_ELEMENT = nullptr;
$String* XMLErrorResources_it::ER_CANT_OUTPUT_TEXT_BEFORE_DOC = nullptr;
$String* XMLErrorResources_it::ER_CANT_HAVE_MORE_THAN_ONE_ROOT = nullptr;
$String* XMLErrorResources_it::ER_ARG_LOCALNAME_NULL = nullptr;
$String* XMLErrorResources_it::ER_ARG_LOCALNAME_INVALID = nullptr;
$String* XMLErrorResources_it::ER_ARG_PREFIX_INVALID = nullptr;
$String* XMLErrorResources_it::ER_NAME_CANT_START_WITH_COLON = nullptr;
$String* XMLErrorResources_it::ER_RESOURCE_COULD_NOT_FIND = nullptr;
$String* XMLErrorResources_it::ER_RESOURCE_COULD_NOT_LOAD = nullptr;
$String* XMLErrorResources_it::ER_BUFFER_SIZE_LESSTHAN_ZERO = nullptr;
$String* XMLErrorResources_it::ER_INVALID_UTF16_SURROGATE = nullptr;
$String* XMLErrorResources_it::ER_OIERROR = nullptr;
$String* XMLErrorResources_it::ER_NAMESPACE_PREFIX = nullptr;
$String* XMLErrorResources_it::ER_STRAY_ATTRIBUTE = nullptr;
$String* XMLErrorResources_it::ER_STRAY_NAMESPACE = nullptr;
$String* XMLErrorResources_it::ER_COULD_NOT_LOAD_RESOURCE = nullptr;
$String* XMLErrorResources_it::ER_COULD_NOT_LOAD_METHOD_PROPERTY = nullptr;
$String* XMLErrorResources_it::ER_SERIALIZER_NOT_CONTENTHANDLER = nullptr;
$String* XMLErrorResources_it::ER_ILLEGAL_ATTRIBUTE_POSITION = nullptr;
$String* XMLErrorResources_it::ER_ILLEGAL_CHARACTER = nullptr;
$ObjectArray2* XMLErrorResources_it::contents = nullptr;

void XMLErrorResources_it::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* XMLErrorResources_it::getContents() {
	return XMLErrorResources_it::contents;
}

void clinit$XMLErrorResources_it($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(XMLErrorResources_it::ER_FUNCTION_NOT_SUPPORTED, "ER_FUNCTION_NOT_SUPPORTED"_s);
	$assignStatic(XMLErrorResources_it::ER_CANNOT_OVERWRITE_CAUSE, "ER_CANNOT_OVERWRITE_CAUSE"_s);
	$assignStatic(XMLErrorResources_it::ER_NO_DEFAULT_IMPL, "ER_NO_DEFAULT_IMPL"_s);
	$assignStatic(XMLErrorResources_it::ER_CHUNKEDINTARRAY_NOT_SUPPORTED, "ER_CHUNKEDINTARRAY_NOT_SUPPORTED"_s);
	$assignStatic(XMLErrorResources_it::ER_OFFSET_BIGGER_THAN_SLOT, "ER_OFFSET_BIGGER_THAN_SLOT"_s);
	$assignStatic(XMLErrorResources_it::ER_COROUTINE_NOT_AVAIL, "ER_COROUTINE_NOT_AVAIL"_s);
	$assignStatic(XMLErrorResources_it::ER_COROUTINE_CO_EXIT, "ER_COROUTINE_CO_EXIT"_s);
	$assignStatic(XMLErrorResources_it::ER_COJOINROUTINESET_FAILED, "ER_COJOINROUTINESET_FAILED"_s);
	$assignStatic(XMLErrorResources_it::ER_COROUTINE_PARAM, "ER_COROUTINE_PARAM"_s);
	$assignStatic(XMLErrorResources_it::ER_PARSER_DOTERMINATE_ANSWERS, "ER_PARSER_DOTERMINATE_ANSWERS"_s);
	$assignStatic(XMLErrorResources_it::ER_NO_PARSE_CALL_WHILE_PARSING, "ER_NO_PARSE_CALL_WHILE_PARSING"_s);
	$assignStatic(XMLErrorResources_it::ER_TYPED_ITERATOR_AXIS_NOT_IMPLEMENTED, "ER_TYPED_ITERATOR_AXIS_NOT_IMPLEMENTED"_s);
	$assignStatic(XMLErrorResources_it::ER_ITERATOR_AXIS_NOT_IMPLEMENTED, "ER_ITERATOR_AXIS_NOT_IMPLEMENTED"_s);
	$assignStatic(XMLErrorResources_it::ER_ITERATOR_CLONE_NOT_SUPPORTED, "ER_ITERATOR_CLONE_NOT_SUPPORTED"_s);
	$assignStatic(XMLErrorResources_it::ER_UNKNOWN_AXIS_TYPE, "ER_UNKNOWN_AXIS_TYPE"_s);
	$assignStatic(XMLErrorResources_it::ER_AXIS_NOT_SUPPORTED, "ER_AXIS_NOT_SUPPORTED"_s);
	$assignStatic(XMLErrorResources_it::ER_NO_DTMIDS_AVAIL, "ER_NO_DTMIDS_AVAIL"_s);
	$assignStatic(XMLErrorResources_it::ER_NOT_SUPPORTED, "ER_NOT_SUPPORTED"_s);
	$assignStatic(XMLErrorResources_it::ER_NODE_NON_NULL, "ER_NODE_NON_NULL"_s);
	$assignStatic(XMLErrorResources_it::ER_COULD_NOT_RESOLVE_NODE, "ER_COULD_NOT_RESOLVE_NODE"_s);
	$assignStatic(XMLErrorResources_it::ER_STARTPARSE_WHILE_PARSING, "ER_STARTPARSE_WHILE_PARSING"_s);
	$assignStatic(XMLErrorResources_it::ER_STARTPARSE_NEEDS_SAXPARSER, "ER_STARTPARSE_NEEDS_SAXPARSER"_s);
	$assignStatic(XMLErrorResources_it::ER_COULD_NOT_INIT_PARSER, "ER_COULD_NOT_INIT_PARSER"_s);
	$assignStatic(XMLErrorResources_it::ER_EXCEPTION_CREATING_POOL, "ER_EXCEPTION_CREATING_POOL"_s);
	$assignStatic(XMLErrorResources_it::ER_PATH_CONTAINS_INVALID_ESCAPE_SEQUENCE, "ER_PATH_CONTAINS_INVALID_ESCAPE_SEQUENCE"_s);
	$assignStatic(XMLErrorResources_it::ER_SCHEME_REQUIRED, "ER_SCHEME_REQUIRED"_s);
	$assignStatic(XMLErrorResources_it::ER_NO_SCHEME_IN_URI, "ER_NO_SCHEME_IN_URI"_s);
	$assignStatic(XMLErrorResources_it::ER_NO_SCHEME_INURI, "ER_NO_SCHEME_INURI"_s);
	$assignStatic(XMLErrorResources_it::ER_PATH_INVALID_CHAR, "ER_PATH_INVALID_CHAR"_s);
	$assignStatic(XMLErrorResources_it::ER_SCHEME_FROM_NULL_STRING, "ER_SCHEME_FROM_NULL_STRING"_s);
	$assignStatic(XMLErrorResources_it::ER_SCHEME_NOT_CONFORMANT, "ER_SCHEME_NOT_CONFORMANT"_s);
	$assignStatic(XMLErrorResources_it::ER_HOST_ADDRESS_NOT_WELLFORMED, "ER_HOST_ADDRESS_NOT_WELLFORMED"_s);
	$assignStatic(XMLErrorResources_it::ER_PORT_WHEN_HOST_NULL, "ER_PORT_WHEN_HOST_NULL"_s);
	$assignStatic(XMLErrorResources_it::ER_INVALID_PORT, "ER_INVALID_PORT"_s);
	$assignStatic(XMLErrorResources_it::ER_FRAG_FOR_GENERIC_URI, "ER_FRAG_FOR_GENERIC_URI"_s);
	$assignStatic(XMLErrorResources_it::ER_FRAG_WHEN_PATH_NULL, "ER_FRAG_WHEN_PATH_NULL"_s);
	$assignStatic(XMLErrorResources_it::ER_FRAG_INVALID_CHAR, "ER_FRAG_INVALID_CHAR"_s);
	$assignStatic(XMLErrorResources_it::ER_PARSER_IN_USE, "ER_PARSER_IN_USE"_s);
	$assignStatic(XMLErrorResources_it::ER_CANNOT_CHANGE_WHILE_PARSING, "ER_CANNOT_CHANGE_WHILE_PARSING"_s);
	$assignStatic(XMLErrorResources_it::ER_SELF_CAUSATION_NOT_PERMITTED, "ER_SELF_CAUSATION_NOT_PERMITTED"_s);
	$assignStatic(XMLErrorResources_it::ER_NO_USERINFO_IF_NO_HOST, "ER_NO_USERINFO_IF_NO_HOST"_s);
	$assignStatic(XMLErrorResources_it::ER_NO_PORT_IF_NO_HOST, "ER_NO_PORT_IF_NO_HOST"_s);
	$assignStatic(XMLErrorResources_it::ER_NO_QUERY_STRING_IN_PATH, "ER_NO_QUERY_STRING_IN_PATH"_s);
	$assignStatic(XMLErrorResources_it::ER_NO_FRAGMENT_STRING_IN_PATH, "ER_NO_FRAGMENT_STRING_IN_PATH"_s);
	$assignStatic(XMLErrorResources_it::ER_CANNOT_INIT_URI_EMPTY_PARMS, "ER_CANNOT_INIT_URI_EMPTY_PARMS"_s);
	$assignStatic(XMLErrorResources_it::ER_METHOD_NOT_SUPPORTED, "ER_METHOD_NOT_SUPPORTED"_s);
	$assignStatic(XMLErrorResources_it::ER_INCRSAXSRCFILTER_NOT_RESTARTABLE, "ER_INCRSAXSRCFILTER_NOT_RESTARTABLE"_s);
	$assignStatic(XMLErrorResources_it::ER_XMLRDR_NOT_BEFORE_STARTPARSE, "ER_XMLRDR_NOT_BEFORE_STARTPARSE"_s);
	$assignStatic(XMLErrorResources_it::ER_AXIS_TRAVERSER_NOT_SUPPORTED, "ER_AXIS_TRAVERSER_NOT_SUPPORTED"_s);
	$assignStatic(XMLErrorResources_it::ER_ERRORHANDLER_CREATED_WITH_NULL_PRINTWRITER, "ER_ERRORHANDLER_CREATED_WITH_NULL_PRINTWRITER"_s);
	$assignStatic(XMLErrorResources_it::ER_SYSTEMID_UNKNOWN, "ER_SYSTEMID_UNKNOWN"_s);
	$assignStatic(XMLErrorResources_it::ER_LOCATION_UNKNOWN, "ER_LOCATION_UNKNOWN"_s);
	$assignStatic(XMLErrorResources_it::ER_PREFIX_MUST_RESOLVE, "ER_PREFIX_MUST_RESOLVE"_s);
	$assignStatic(XMLErrorResources_it::ER_CREATEDOCUMENT_NOT_SUPPORTED, "ER_CREATEDOCUMENT_NOT_SUPPORTED"_s);
	$assignStatic(XMLErrorResources_it::ER_CHILD_HAS_NO_OWNER_DOCUMENT, "ER_CHILD_HAS_NO_OWNER_DOCUMENT"_s);
	$assignStatic(XMLErrorResources_it::ER_CHILD_HAS_NO_OWNER_DOCUMENT_ELEMENT, "ER_CHILD_HAS_NO_OWNER_DOCUMENT_ELEMENT"_s);
	$assignStatic(XMLErrorResources_it::ER_CANT_OUTPUT_TEXT_BEFORE_DOC, "ER_CANT_OUTPUT_TEXT_BEFORE_DOC"_s);
	$assignStatic(XMLErrorResources_it::ER_CANT_HAVE_MORE_THAN_ONE_ROOT, "ER_CANT_HAVE_MORE_THAN_ONE_ROOT"_s);
	$assignStatic(XMLErrorResources_it::ER_ARG_LOCALNAME_NULL, "ER_ARG_LOCALNAME_NULL"_s);
	$assignStatic(XMLErrorResources_it::ER_ARG_LOCALNAME_INVALID, "ER_ARG_LOCALNAME_INVALID"_s);
	$assignStatic(XMLErrorResources_it::ER_ARG_PREFIX_INVALID, "ER_ARG_PREFIX_INVALID"_s);
	$assignStatic(XMLErrorResources_it::ER_NAME_CANT_START_WITH_COLON, "ER_NAME_CANT_START_WITH_COLON"_s);
	$assignStatic(XMLErrorResources_it::ER_RESOURCE_COULD_NOT_FIND, "ER_RESOURCE_COULD_NOT_FIND"_s);
	$assignStatic(XMLErrorResources_it::ER_RESOURCE_COULD_NOT_LOAD, "ER_RESOURCE_COULD_NOT_LOAD"_s);
	$assignStatic(XMLErrorResources_it::ER_BUFFER_SIZE_LESSTHAN_ZERO, "ER_BUFFER_SIZE_LESSTHAN_ZERO"_s);
	$assignStatic(XMLErrorResources_it::ER_INVALID_UTF16_SURROGATE, "ER_INVALID_UTF16_SURROGATE"_s);
	$assignStatic(XMLErrorResources_it::ER_OIERROR, "ER_OIERROR"_s);
	$assignStatic(XMLErrorResources_it::ER_NAMESPACE_PREFIX, "ER_NAMESPACE_PREFIX"_s);
	$assignStatic(XMLErrorResources_it::ER_STRAY_ATTRIBUTE, "ER_STRAY_ATTIRBUTE"_s);
	$assignStatic(XMLErrorResources_it::ER_STRAY_NAMESPACE, "ER_STRAY_NAMESPACE"_s);
	$assignStatic(XMLErrorResources_it::ER_COULD_NOT_LOAD_RESOURCE, "ER_COULD_NOT_LOAD_RESOURCE"_s);
	$assignStatic(XMLErrorResources_it::ER_COULD_NOT_LOAD_METHOD_PROPERTY, "ER_COULD_NOT_LOAD_METHOD_PROPERTY"_s);
	$assignStatic(XMLErrorResources_it::ER_SERIALIZER_NOT_CONTENTHANDLER, "ER_SERIALIZER_NOT_CONTENTHANDLER"_s);
	$assignStatic(XMLErrorResources_it::ER_ILLEGAL_ATTRIBUTE_POSITION, "ER_ILLEGAL_ATTRIBUTE_POSITION"_s);
	$assignStatic(XMLErrorResources_it::ER_ILLEGAL_CHARACTER, "ER_ILLEGAL_CHARACTER"_s);
	$assignStatic(XMLErrorResources_it::contents, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("ER0000"_s),
			$of("{0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_it::ER_FUNCTION_NOT_SUPPORTED),
			$of("Funzione non supportata."_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_it::ER_CANNOT_OVERWRITE_CAUSE),
			$of("Impossibile sovrascrivere la causa"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_it::ER_NO_DEFAULT_IMPL),
			$of("Nessuna implementazione predefinita trovata "_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_it::ER_CHUNKEDINTARRAY_NOT_SUPPORTED),
			$of("ChunkedIntArray({0}) non supportato al momento"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_it::ER_OFFSET_BIGGER_THAN_SLOT),
			$of(u"Offset più grande dello slot"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_it::ER_COROUTINE_NOT_AVAIL),
			$of("Co-routine non disponibile, ID={0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_it::ER_COROUTINE_CO_EXIT),
			$of("CoroutineManager ha ricevuto una richiesta co_exit()"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_it::ER_COJOINROUTINESET_FAILED),
			$of("co_joinCoroutineSet() non riuscito"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_it::ER_COROUTINE_PARAM),
			$of("Errore del parametro di co-routine ({0})"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_it::ER_PARSER_DOTERMINATE_ANSWERS),
			$of("\nIMPREVISTO: risposte doTerminate del parser {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_it::ER_NO_PARSE_CALL_WHILE_PARSING),
			$of(u"impossibile richiamare parse mentre è in corso un\'analisi"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_it::ER_TYPED_ITERATOR_AXIS_NOT_IMPLEMENTED),
			$of(u"Errore: l\'\'iteratore con tipo per l\'\'asse {0} non è implementato"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_it::ER_ITERATOR_AXIS_NOT_IMPLEMENTED),
			$of(u"Errore: l\'\'iteratore per l\'\'asse {0} non è implementato "_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_it::ER_ITERATOR_CLONE_NOT_SUPPORTED),
			$of("Duplicazione dell\'iteratore non supportata"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_it::ER_UNKNOWN_AXIS_TYPE),
			$of("Tipo di asse trasversale sconosciuto: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_it::ER_AXIS_NOT_SUPPORTED),
			$of("Asse trasversale non supportato: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_it::ER_NO_DTMIDS_AVAIL),
			$of("Non sono disponibili altri ID DTM"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_it::ER_NOT_SUPPORTED),
			$of("Non supportato: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_it::ER_NODE_NON_NULL),
			$of("Il nodo deve essere non nullo per getDTMHandleFromNode"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_it::ER_COULD_NOT_RESOLVE_NODE),
			$of("Impossibile risolvere il nodo in un handle"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_it::ER_STARTPARSE_WHILE_PARSING),
			$of(u"impossibile richiamare startParse mentre è in corso un\'analisi"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_it::ER_STARTPARSE_NEEDS_SAXPARSER),
			$of("startParse richiede un valore non nullo per SAXParser"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_it::ER_COULD_NOT_INIT_PARSER),
			$of("impossibile inizializzare il parser con"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_it::ER_EXCEPTION_CREATING_POOL),
			$of("eccezione durante la creazione di una nuova istanza per il pool"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_it::ER_PATH_CONTAINS_INVALID_ESCAPE_SEQUENCE),
			$of("Il percorso contiene sequenza di escape non valida"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_it::ER_SCHEME_REQUIRED),
			$of(u"Lo schema è obbligatorio."_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_it::ER_NO_SCHEME_IN_URI),
			$of("Nessuno schema trovato nell\'\'URI: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_it::ER_NO_SCHEME_INURI),
			$of("Nessuno schema trovato nell\'URI"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_it::ER_PATH_INVALID_CHAR),
			$of("Il percorso contiene un carattere non valido: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_it::ER_SCHEME_FROM_NULL_STRING),
			$of("Impossibile impostare lo schema da una stringa nulla"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_it::ER_SCHEME_NOT_CONFORMANT),
			$of(u"Lo schema non è conforme."_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_it::ER_HOST_ADDRESS_NOT_WELLFORMED),
			$of(u"Host non è un indirizzo corretto"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_it::ER_PORT_WHEN_HOST_NULL),
			$of(u"La porta non può essere impostata se l\'host è nullo"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_it::ER_INVALID_PORT),
			$of("Numero di porta non valido"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_it::ER_FRAG_FOR_GENERIC_URI),
			$of(u"Il frammento può essere impostato solo per un URI generico"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_it::ER_FRAG_WHEN_PATH_NULL),
			$of(u"Il frammento non può essere impostato se il percorso è nullo"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_it::ER_FRAG_INVALID_CHAR),
			$of("Il frammento contiene un carattere non valido"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_it::ER_PARSER_IN_USE),
			$of(u"Parser già in uso"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_it::ER_CANNOT_CHANGE_WHILE_PARSING),
			$of("Impossibile modificare {0} {1} durante l\'\'analisi"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_it::ER_SELF_CAUSATION_NOT_PERMITTED),
			$of("Creazione automatica della causa non consentita"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_it::ER_NO_USERINFO_IF_NO_HOST),
			$of(u"Userinfo non può essere specificato se l\'host non è specificato"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_it::ER_NO_PORT_IF_NO_HOST),
			$of(u"La porta non può essere specificata se l\'host non è specificato"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_it::ER_NO_QUERY_STRING_IN_PATH),
			$of(u"La stringa di query non può essere specificata nella stringa di percorso e query."_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_it::ER_NO_FRAGMENT_STRING_IN_PATH),
			$of(u"Il frammento non può essere specificato sia nel percorso che nel frammento"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_it::ER_CANNOT_INIT_URI_EMPTY_PARMS),
			$of("Impossibile inizializzare l\'URI con i parametri vuoti"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_it::ER_METHOD_NOT_SUPPORTED),
			$of("Metodo attualmente non supportato "_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_it::ER_INCRSAXSRCFILTER_NOT_RESTARTABLE),
			$of("IncrementalSAXSource_Filter attualmente non riavviabile"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_it::ER_XMLRDR_NOT_BEFORE_STARTPARSE),
			$of("XMLReader non si trova prima della richiesta startParse"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_it::ER_AXIS_TRAVERSER_NOT_SUPPORTED),
			$of("Asse trasversale non supportato: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_it::ER_ERRORHANDLER_CREATED_WITH_NULL_PRINTWRITER),
			$of("ListingErrorHandler creato con PrintWriter nullo."_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_it::ER_SYSTEMID_UNKNOWN),
			$of("SystemId sconosciuto"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_it::ER_LOCATION_UNKNOWN),
			$of("Posizione sconosciuta dell\'errore"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_it::ER_PREFIX_MUST_RESOLVE),
			$of("Il prefisso deve essere risolto in uno spazio di nomi: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_it::ER_CREATEDOCUMENT_NOT_SUPPORTED),
			$of("createDocument() non supportato in XPathContext"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_it::ER_CHILD_HAS_NO_OWNER_DOCUMENT),
			$of("L\'elemento figlio dell\'attributo non dispone di un documento proprietario."_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_it::ER_CHILD_HAS_NO_OWNER_DOCUMENT_ELEMENT),
			$of("L\'elemento figlio dell\'attributo non dispone di un elemento di documento proprietario."_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_it::ER_CANT_OUTPUT_TEXT_BEFORE_DOC),
			$of("Avvertenza: impossibile creare l\'output del testo prima dell\'elemento del documento. Operazione ignorata..."_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_it::ER_CANT_HAVE_MORE_THAN_ONE_ROOT),
			$of(u"Non possono esistere più radici in un DOM."_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_it::ER_ARG_LOCALNAME_NULL),
			$of(u"L\'argomento \'localName\' è nullo"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_it::ER_ARG_LOCALNAME_INVALID),
			$of("Localname in QNAME deve essere un NCName valido"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_it::ER_ARG_PREFIX_INVALID),
			$of("Il prefisso in QNAME deve essere un NCName valido"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_it::ER_NAME_CANT_START_WITH_COLON),
			$of(u"Il nome non può iniziare con i due punti"_s)
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
			$of("line"_s),
			$of("N. riga"_s)
		}),
		$$new($ObjectArray, {
			$of("column"_s),
			$of("N. colonna"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_it::ER_SERIALIZER_NOT_CONTENTHANDLER),
			$of("La classe serializzatore \'\'{0}\'\' non implementa org.xml.sax.ContentHandler."_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_it::ER_RESOURCE_COULD_NOT_FIND),
			$of("Risorsa [ {0} ] non trovata.\n {1}"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_it::ER_RESOURCE_COULD_NOT_LOAD),
			$of("Impossibile caricare la risorsa [ {0} ]: {1} \n {2} \t {3}"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_it::ER_BUFFER_SIZE_LESSTHAN_ZERO),
			$of("Dimensione buffer <=0"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_it::ER_INVALID_UTF16_SURROGATE),
			$of("Rilevato surrogato UTF-16 non valido: {0}?"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_it::ER_OIERROR),
			$of("Errore IO"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_it::ER_ILLEGAL_ATTRIBUTE_POSITION),
			$of(u"Impossibile aggiungere l\'\'attributo {0} dopo i nodi figlio o prima che sia prodotto un elemento. L\'\'attributo verrà ignorato."_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_it::ER_NAMESPACE_PREFIX),
			$of(u"Lo spazio di nomi per il prefisso \'\'{0}\'\' non è stato dichiarato."_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_it::ER_STRAY_ATTRIBUTE),
			$of("Attributo \'\'{0}\'\' al di fuori dell\'\'elemento."_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_it::ER_STRAY_NAMESPACE),
			$of("Dichiarazione dello spazio di nomi \'\'{0}\'\'=\'\'{1}\'\' al di fuori dell\'\'elemento."_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_it::ER_COULD_NOT_LOAD_RESOURCE),
			$of("Impossibile caricare \'\'{0}\'\' (verificare CLASSPATH); verranno utilizzati i valori predefiniti"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_it::ER_ILLEGAL_CHARACTER),
			$of("Tentativo di eseguire l\'\'output di un carattere di valore integrale {0} non rappresentato nella codifica di output {1} specificata."_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_it::ER_COULD_NOT_LOAD_METHOD_PROPERTY),
			$of(u"Impossibile caricare il file delle proprietà \'\'{0}\'\' per il metodo di emissione \'\'{1}\'\' (verificare CLASSPATH)"_s)
		})
	}));
}

XMLErrorResources_it::XMLErrorResources_it() {
}

$Class* XMLErrorResources_it::load$($String* name, bool initialize) {
	$loadClass(XMLErrorResources_it, name, initialize, &_XMLErrorResources_it_ClassInfo_, clinit$XMLErrorResources_it, allocate$XMLErrorResources_it);
	return class$;
}

$Class* XMLErrorResources_it::class$ = nullptr;

						} // res
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com