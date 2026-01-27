#include <com/sun/org/apache/xml/internal/res/XMLErrorResources_ko.h>

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

$FieldInfo _XMLErrorResources_ko_FieldInfo_[] = {
	{"MAX_CODE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XMLErrorResources_ko, MAX_CODE)},
	{"MAX_WARNING", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XMLErrorResources_ko, MAX_WARNING)},
	{"MAX_OTHERS", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XMLErrorResources_ko, MAX_OTHERS)},
	{"MAX_MESSAGES", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XMLErrorResources_ko, MAX_MESSAGES)},
	{"ER_FUNCTION_NOT_SUPPORTED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ko, ER_FUNCTION_NOT_SUPPORTED)},
	{"ER_CANNOT_OVERWRITE_CAUSE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ko, ER_CANNOT_OVERWRITE_CAUSE)},
	{"ER_NO_DEFAULT_IMPL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ko, ER_NO_DEFAULT_IMPL)},
	{"ER_CHUNKEDINTARRAY_NOT_SUPPORTED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ko, ER_CHUNKEDINTARRAY_NOT_SUPPORTED)},
	{"ER_OFFSET_BIGGER_THAN_SLOT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ko, ER_OFFSET_BIGGER_THAN_SLOT)},
	{"ER_COROUTINE_NOT_AVAIL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ko, ER_COROUTINE_NOT_AVAIL)},
	{"ER_COROUTINE_CO_EXIT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ko, ER_COROUTINE_CO_EXIT)},
	{"ER_COJOINROUTINESET_FAILED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ko, ER_COJOINROUTINESET_FAILED)},
	{"ER_COROUTINE_PARAM", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ko, ER_COROUTINE_PARAM)},
	{"ER_PARSER_DOTERMINATE_ANSWERS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ko, ER_PARSER_DOTERMINATE_ANSWERS)},
	{"ER_NO_PARSE_CALL_WHILE_PARSING", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ko, ER_NO_PARSE_CALL_WHILE_PARSING)},
	{"ER_TYPED_ITERATOR_AXIS_NOT_IMPLEMENTED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ko, ER_TYPED_ITERATOR_AXIS_NOT_IMPLEMENTED)},
	{"ER_ITERATOR_AXIS_NOT_IMPLEMENTED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ko, ER_ITERATOR_AXIS_NOT_IMPLEMENTED)},
	{"ER_ITERATOR_CLONE_NOT_SUPPORTED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ko, ER_ITERATOR_CLONE_NOT_SUPPORTED)},
	{"ER_UNKNOWN_AXIS_TYPE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ko, ER_UNKNOWN_AXIS_TYPE)},
	{"ER_AXIS_NOT_SUPPORTED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ko, ER_AXIS_NOT_SUPPORTED)},
	{"ER_NO_DTMIDS_AVAIL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ko, ER_NO_DTMIDS_AVAIL)},
	{"ER_NOT_SUPPORTED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ko, ER_NOT_SUPPORTED)},
	{"ER_NODE_NON_NULL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ko, ER_NODE_NON_NULL)},
	{"ER_COULD_NOT_RESOLVE_NODE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ko, ER_COULD_NOT_RESOLVE_NODE)},
	{"ER_STARTPARSE_WHILE_PARSING", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ko, ER_STARTPARSE_WHILE_PARSING)},
	{"ER_STARTPARSE_NEEDS_SAXPARSER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ko, ER_STARTPARSE_NEEDS_SAXPARSER)},
	{"ER_COULD_NOT_INIT_PARSER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ko, ER_COULD_NOT_INIT_PARSER)},
	{"ER_EXCEPTION_CREATING_POOL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ko, ER_EXCEPTION_CREATING_POOL)},
	{"ER_PATH_CONTAINS_INVALID_ESCAPE_SEQUENCE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ko, ER_PATH_CONTAINS_INVALID_ESCAPE_SEQUENCE)},
	{"ER_SCHEME_REQUIRED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ko, ER_SCHEME_REQUIRED)},
	{"ER_NO_SCHEME_IN_URI", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ko, ER_NO_SCHEME_IN_URI)},
	{"ER_NO_SCHEME_INURI", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ko, ER_NO_SCHEME_INURI)},
	{"ER_PATH_INVALID_CHAR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ko, ER_PATH_INVALID_CHAR)},
	{"ER_SCHEME_FROM_NULL_STRING", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ko, ER_SCHEME_FROM_NULL_STRING)},
	{"ER_SCHEME_NOT_CONFORMANT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ko, ER_SCHEME_NOT_CONFORMANT)},
	{"ER_HOST_ADDRESS_NOT_WELLFORMED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ko, ER_HOST_ADDRESS_NOT_WELLFORMED)},
	{"ER_PORT_WHEN_HOST_NULL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ko, ER_PORT_WHEN_HOST_NULL)},
	{"ER_INVALID_PORT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ko, ER_INVALID_PORT)},
	{"ER_FRAG_FOR_GENERIC_URI", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ko, ER_FRAG_FOR_GENERIC_URI)},
	{"ER_FRAG_WHEN_PATH_NULL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ko, ER_FRAG_WHEN_PATH_NULL)},
	{"ER_FRAG_INVALID_CHAR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ko, ER_FRAG_INVALID_CHAR)},
	{"ER_PARSER_IN_USE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ko, ER_PARSER_IN_USE)},
	{"ER_CANNOT_CHANGE_WHILE_PARSING", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ko, ER_CANNOT_CHANGE_WHILE_PARSING)},
	{"ER_SELF_CAUSATION_NOT_PERMITTED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ko, ER_SELF_CAUSATION_NOT_PERMITTED)},
	{"ER_NO_USERINFO_IF_NO_HOST", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ko, ER_NO_USERINFO_IF_NO_HOST)},
	{"ER_NO_PORT_IF_NO_HOST", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ko, ER_NO_PORT_IF_NO_HOST)},
	{"ER_NO_QUERY_STRING_IN_PATH", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ko, ER_NO_QUERY_STRING_IN_PATH)},
	{"ER_NO_FRAGMENT_STRING_IN_PATH", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ko, ER_NO_FRAGMENT_STRING_IN_PATH)},
	{"ER_CANNOT_INIT_URI_EMPTY_PARMS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ko, ER_CANNOT_INIT_URI_EMPTY_PARMS)},
	{"ER_METHOD_NOT_SUPPORTED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ko, ER_METHOD_NOT_SUPPORTED)},
	{"ER_INCRSAXSRCFILTER_NOT_RESTARTABLE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ko, ER_INCRSAXSRCFILTER_NOT_RESTARTABLE)},
	{"ER_XMLRDR_NOT_BEFORE_STARTPARSE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ko, ER_XMLRDR_NOT_BEFORE_STARTPARSE)},
	{"ER_AXIS_TRAVERSER_NOT_SUPPORTED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ko, ER_AXIS_TRAVERSER_NOT_SUPPORTED)},
	{"ER_ERRORHANDLER_CREATED_WITH_NULL_PRINTWRITER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ko, ER_ERRORHANDLER_CREATED_WITH_NULL_PRINTWRITER)},
	{"ER_SYSTEMID_UNKNOWN", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ko, ER_SYSTEMID_UNKNOWN)},
	{"ER_LOCATION_UNKNOWN", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ko, ER_LOCATION_UNKNOWN)},
	{"ER_PREFIX_MUST_RESOLVE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ko, ER_PREFIX_MUST_RESOLVE)},
	{"ER_CREATEDOCUMENT_NOT_SUPPORTED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ko, ER_CREATEDOCUMENT_NOT_SUPPORTED)},
	{"ER_CHILD_HAS_NO_OWNER_DOCUMENT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ko, ER_CHILD_HAS_NO_OWNER_DOCUMENT)},
	{"ER_CHILD_HAS_NO_OWNER_DOCUMENT_ELEMENT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ko, ER_CHILD_HAS_NO_OWNER_DOCUMENT_ELEMENT)},
	{"ER_CANT_OUTPUT_TEXT_BEFORE_DOC", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ko, ER_CANT_OUTPUT_TEXT_BEFORE_DOC)},
	{"ER_CANT_HAVE_MORE_THAN_ONE_ROOT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ko, ER_CANT_HAVE_MORE_THAN_ONE_ROOT)},
	{"ER_ARG_LOCALNAME_NULL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ko, ER_ARG_LOCALNAME_NULL)},
	{"ER_ARG_LOCALNAME_INVALID", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ko, ER_ARG_LOCALNAME_INVALID)},
	{"ER_ARG_PREFIX_INVALID", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ko, ER_ARG_PREFIX_INVALID)},
	{"ER_NAME_CANT_START_WITH_COLON", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ko, ER_NAME_CANT_START_WITH_COLON)},
	{"ER_RESOURCE_COULD_NOT_FIND", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ko, ER_RESOURCE_COULD_NOT_FIND)},
	{"ER_RESOURCE_COULD_NOT_LOAD", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ko, ER_RESOURCE_COULD_NOT_LOAD)},
	{"ER_BUFFER_SIZE_LESSTHAN_ZERO", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ko, ER_BUFFER_SIZE_LESSTHAN_ZERO)},
	{"ER_INVALID_UTF16_SURROGATE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ko, ER_INVALID_UTF16_SURROGATE)},
	{"ER_OIERROR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ko, ER_OIERROR)},
	{"ER_NAMESPACE_PREFIX", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ko, ER_NAMESPACE_PREFIX)},
	{"ER_STRAY_ATTRIBUTE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ko, ER_STRAY_ATTRIBUTE)},
	{"ER_STRAY_NAMESPACE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ko, ER_STRAY_NAMESPACE)},
	{"ER_COULD_NOT_LOAD_RESOURCE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ko, ER_COULD_NOT_LOAD_RESOURCE)},
	{"ER_COULD_NOT_LOAD_METHOD_PROPERTY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ko, ER_COULD_NOT_LOAD_METHOD_PROPERTY)},
	{"ER_SERIALIZER_NOT_CONTENTHANDLER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ko, ER_SERIALIZER_NOT_CONTENTHANDLER)},
	{"ER_ILLEGAL_ATTRIBUTE_POSITION", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ko, ER_ILLEGAL_ATTRIBUTE_POSITION)},
	{"ER_ILLEGAL_CHARACTER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ko, ER_ILLEGAL_CHARACTER)},
	{"contents", "[[Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XMLErrorResources_ko, contents)},
	{}
};

$MethodInfo _XMLErrorResources_ko_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(XMLErrorResources_ko, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED, $virtualMethod(XMLErrorResources_ko, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _XMLErrorResources_ko_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.res.XMLErrorResources_ko",
	"java.util.ListResourceBundle",
	nullptr,
	_XMLErrorResources_ko_FieldInfo_,
	_XMLErrorResources_ko_MethodInfo_
};

$Object* allocate$XMLErrorResources_ko($Class* clazz) {
	return $of($alloc(XMLErrorResources_ko));
}

$String* XMLErrorResources_ko::ER_FUNCTION_NOT_SUPPORTED = nullptr;
$String* XMLErrorResources_ko::ER_CANNOT_OVERWRITE_CAUSE = nullptr;
$String* XMLErrorResources_ko::ER_NO_DEFAULT_IMPL = nullptr;
$String* XMLErrorResources_ko::ER_CHUNKEDINTARRAY_NOT_SUPPORTED = nullptr;
$String* XMLErrorResources_ko::ER_OFFSET_BIGGER_THAN_SLOT = nullptr;
$String* XMLErrorResources_ko::ER_COROUTINE_NOT_AVAIL = nullptr;
$String* XMLErrorResources_ko::ER_COROUTINE_CO_EXIT = nullptr;
$String* XMLErrorResources_ko::ER_COJOINROUTINESET_FAILED = nullptr;
$String* XMLErrorResources_ko::ER_COROUTINE_PARAM = nullptr;
$String* XMLErrorResources_ko::ER_PARSER_DOTERMINATE_ANSWERS = nullptr;
$String* XMLErrorResources_ko::ER_NO_PARSE_CALL_WHILE_PARSING = nullptr;
$String* XMLErrorResources_ko::ER_TYPED_ITERATOR_AXIS_NOT_IMPLEMENTED = nullptr;
$String* XMLErrorResources_ko::ER_ITERATOR_AXIS_NOT_IMPLEMENTED = nullptr;
$String* XMLErrorResources_ko::ER_ITERATOR_CLONE_NOT_SUPPORTED = nullptr;
$String* XMLErrorResources_ko::ER_UNKNOWN_AXIS_TYPE = nullptr;
$String* XMLErrorResources_ko::ER_AXIS_NOT_SUPPORTED = nullptr;
$String* XMLErrorResources_ko::ER_NO_DTMIDS_AVAIL = nullptr;
$String* XMLErrorResources_ko::ER_NOT_SUPPORTED = nullptr;
$String* XMLErrorResources_ko::ER_NODE_NON_NULL = nullptr;
$String* XMLErrorResources_ko::ER_COULD_NOT_RESOLVE_NODE = nullptr;
$String* XMLErrorResources_ko::ER_STARTPARSE_WHILE_PARSING = nullptr;
$String* XMLErrorResources_ko::ER_STARTPARSE_NEEDS_SAXPARSER = nullptr;
$String* XMLErrorResources_ko::ER_COULD_NOT_INIT_PARSER = nullptr;
$String* XMLErrorResources_ko::ER_EXCEPTION_CREATING_POOL = nullptr;
$String* XMLErrorResources_ko::ER_PATH_CONTAINS_INVALID_ESCAPE_SEQUENCE = nullptr;
$String* XMLErrorResources_ko::ER_SCHEME_REQUIRED = nullptr;
$String* XMLErrorResources_ko::ER_NO_SCHEME_IN_URI = nullptr;
$String* XMLErrorResources_ko::ER_NO_SCHEME_INURI = nullptr;
$String* XMLErrorResources_ko::ER_PATH_INVALID_CHAR = nullptr;
$String* XMLErrorResources_ko::ER_SCHEME_FROM_NULL_STRING = nullptr;
$String* XMLErrorResources_ko::ER_SCHEME_NOT_CONFORMANT = nullptr;
$String* XMLErrorResources_ko::ER_HOST_ADDRESS_NOT_WELLFORMED = nullptr;
$String* XMLErrorResources_ko::ER_PORT_WHEN_HOST_NULL = nullptr;
$String* XMLErrorResources_ko::ER_INVALID_PORT = nullptr;
$String* XMLErrorResources_ko::ER_FRAG_FOR_GENERIC_URI = nullptr;
$String* XMLErrorResources_ko::ER_FRAG_WHEN_PATH_NULL = nullptr;
$String* XMLErrorResources_ko::ER_FRAG_INVALID_CHAR = nullptr;
$String* XMLErrorResources_ko::ER_PARSER_IN_USE = nullptr;
$String* XMLErrorResources_ko::ER_CANNOT_CHANGE_WHILE_PARSING = nullptr;
$String* XMLErrorResources_ko::ER_SELF_CAUSATION_NOT_PERMITTED = nullptr;
$String* XMLErrorResources_ko::ER_NO_USERINFO_IF_NO_HOST = nullptr;
$String* XMLErrorResources_ko::ER_NO_PORT_IF_NO_HOST = nullptr;
$String* XMLErrorResources_ko::ER_NO_QUERY_STRING_IN_PATH = nullptr;
$String* XMLErrorResources_ko::ER_NO_FRAGMENT_STRING_IN_PATH = nullptr;
$String* XMLErrorResources_ko::ER_CANNOT_INIT_URI_EMPTY_PARMS = nullptr;
$String* XMLErrorResources_ko::ER_METHOD_NOT_SUPPORTED = nullptr;
$String* XMLErrorResources_ko::ER_INCRSAXSRCFILTER_NOT_RESTARTABLE = nullptr;
$String* XMLErrorResources_ko::ER_XMLRDR_NOT_BEFORE_STARTPARSE = nullptr;
$String* XMLErrorResources_ko::ER_AXIS_TRAVERSER_NOT_SUPPORTED = nullptr;
$String* XMLErrorResources_ko::ER_ERRORHANDLER_CREATED_WITH_NULL_PRINTWRITER = nullptr;
$String* XMLErrorResources_ko::ER_SYSTEMID_UNKNOWN = nullptr;
$String* XMLErrorResources_ko::ER_LOCATION_UNKNOWN = nullptr;
$String* XMLErrorResources_ko::ER_PREFIX_MUST_RESOLVE = nullptr;
$String* XMLErrorResources_ko::ER_CREATEDOCUMENT_NOT_SUPPORTED = nullptr;
$String* XMLErrorResources_ko::ER_CHILD_HAS_NO_OWNER_DOCUMENT = nullptr;
$String* XMLErrorResources_ko::ER_CHILD_HAS_NO_OWNER_DOCUMENT_ELEMENT = nullptr;
$String* XMLErrorResources_ko::ER_CANT_OUTPUT_TEXT_BEFORE_DOC = nullptr;
$String* XMLErrorResources_ko::ER_CANT_HAVE_MORE_THAN_ONE_ROOT = nullptr;
$String* XMLErrorResources_ko::ER_ARG_LOCALNAME_NULL = nullptr;
$String* XMLErrorResources_ko::ER_ARG_LOCALNAME_INVALID = nullptr;
$String* XMLErrorResources_ko::ER_ARG_PREFIX_INVALID = nullptr;
$String* XMLErrorResources_ko::ER_NAME_CANT_START_WITH_COLON = nullptr;
$String* XMLErrorResources_ko::ER_RESOURCE_COULD_NOT_FIND = nullptr;
$String* XMLErrorResources_ko::ER_RESOURCE_COULD_NOT_LOAD = nullptr;
$String* XMLErrorResources_ko::ER_BUFFER_SIZE_LESSTHAN_ZERO = nullptr;
$String* XMLErrorResources_ko::ER_INVALID_UTF16_SURROGATE = nullptr;
$String* XMLErrorResources_ko::ER_OIERROR = nullptr;
$String* XMLErrorResources_ko::ER_NAMESPACE_PREFIX = nullptr;
$String* XMLErrorResources_ko::ER_STRAY_ATTRIBUTE = nullptr;
$String* XMLErrorResources_ko::ER_STRAY_NAMESPACE = nullptr;
$String* XMLErrorResources_ko::ER_COULD_NOT_LOAD_RESOURCE = nullptr;
$String* XMLErrorResources_ko::ER_COULD_NOT_LOAD_METHOD_PROPERTY = nullptr;
$String* XMLErrorResources_ko::ER_SERIALIZER_NOT_CONTENTHANDLER = nullptr;
$String* XMLErrorResources_ko::ER_ILLEGAL_ATTRIBUTE_POSITION = nullptr;
$String* XMLErrorResources_ko::ER_ILLEGAL_CHARACTER = nullptr;
$ObjectArray2* XMLErrorResources_ko::contents = nullptr;

void XMLErrorResources_ko::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* XMLErrorResources_ko::getContents() {
	return XMLErrorResources_ko::contents;
}

void clinit$XMLErrorResources_ko($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(XMLErrorResources_ko::ER_FUNCTION_NOT_SUPPORTED, "ER_FUNCTION_NOT_SUPPORTED"_s);
	$assignStatic(XMLErrorResources_ko::ER_CANNOT_OVERWRITE_CAUSE, "ER_CANNOT_OVERWRITE_CAUSE"_s);
	$assignStatic(XMLErrorResources_ko::ER_NO_DEFAULT_IMPL, "ER_NO_DEFAULT_IMPL"_s);
	$assignStatic(XMLErrorResources_ko::ER_CHUNKEDINTARRAY_NOT_SUPPORTED, "ER_CHUNKEDINTARRAY_NOT_SUPPORTED"_s);
	$assignStatic(XMLErrorResources_ko::ER_OFFSET_BIGGER_THAN_SLOT, "ER_OFFSET_BIGGER_THAN_SLOT"_s);
	$assignStatic(XMLErrorResources_ko::ER_COROUTINE_NOT_AVAIL, "ER_COROUTINE_NOT_AVAIL"_s);
	$assignStatic(XMLErrorResources_ko::ER_COROUTINE_CO_EXIT, "ER_COROUTINE_CO_EXIT"_s);
	$assignStatic(XMLErrorResources_ko::ER_COJOINROUTINESET_FAILED, "ER_COJOINROUTINESET_FAILED"_s);
	$assignStatic(XMLErrorResources_ko::ER_COROUTINE_PARAM, "ER_COROUTINE_PARAM"_s);
	$assignStatic(XMLErrorResources_ko::ER_PARSER_DOTERMINATE_ANSWERS, "ER_PARSER_DOTERMINATE_ANSWERS"_s);
	$assignStatic(XMLErrorResources_ko::ER_NO_PARSE_CALL_WHILE_PARSING, "ER_NO_PARSE_CALL_WHILE_PARSING"_s);
	$assignStatic(XMLErrorResources_ko::ER_TYPED_ITERATOR_AXIS_NOT_IMPLEMENTED, "ER_TYPED_ITERATOR_AXIS_NOT_IMPLEMENTED"_s);
	$assignStatic(XMLErrorResources_ko::ER_ITERATOR_AXIS_NOT_IMPLEMENTED, "ER_ITERATOR_AXIS_NOT_IMPLEMENTED"_s);
	$assignStatic(XMLErrorResources_ko::ER_ITERATOR_CLONE_NOT_SUPPORTED, "ER_ITERATOR_CLONE_NOT_SUPPORTED"_s);
	$assignStatic(XMLErrorResources_ko::ER_UNKNOWN_AXIS_TYPE, "ER_UNKNOWN_AXIS_TYPE"_s);
	$assignStatic(XMLErrorResources_ko::ER_AXIS_NOT_SUPPORTED, "ER_AXIS_NOT_SUPPORTED"_s);
	$assignStatic(XMLErrorResources_ko::ER_NO_DTMIDS_AVAIL, "ER_NO_DTMIDS_AVAIL"_s);
	$assignStatic(XMLErrorResources_ko::ER_NOT_SUPPORTED, "ER_NOT_SUPPORTED"_s);
	$assignStatic(XMLErrorResources_ko::ER_NODE_NON_NULL, "ER_NODE_NON_NULL"_s);
	$assignStatic(XMLErrorResources_ko::ER_COULD_NOT_RESOLVE_NODE, "ER_COULD_NOT_RESOLVE_NODE"_s);
	$assignStatic(XMLErrorResources_ko::ER_STARTPARSE_WHILE_PARSING, "ER_STARTPARSE_WHILE_PARSING"_s);
	$assignStatic(XMLErrorResources_ko::ER_STARTPARSE_NEEDS_SAXPARSER, "ER_STARTPARSE_NEEDS_SAXPARSER"_s);
	$assignStatic(XMLErrorResources_ko::ER_COULD_NOT_INIT_PARSER, "ER_COULD_NOT_INIT_PARSER"_s);
	$assignStatic(XMLErrorResources_ko::ER_EXCEPTION_CREATING_POOL, "ER_EXCEPTION_CREATING_POOL"_s);
	$assignStatic(XMLErrorResources_ko::ER_PATH_CONTAINS_INVALID_ESCAPE_SEQUENCE, "ER_PATH_CONTAINS_INVALID_ESCAPE_SEQUENCE"_s);
	$assignStatic(XMLErrorResources_ko::ER_SCHEME_REQUIRED, "ER_SCHEME_REQUIRED"_s);
	$assignStatic(XMLErrorResources_ko::ER_NO_SCHEME_IN_URI, "ER_NO_SCHEME_IN_URI"_s);
	$assignStatic(XMLErrorResources_ko::ER_NO_SCHEME_INURI, "ER_NO_SCHEME_INURI"_s);
	$assignStatic(XMLErrorResources_ko::ER_PATH_INVALID_CHAR, "ER_PATH_INVALID_CHAR"_s);
	$assignStatic(XMLErrorResources_ko::ER_SCHEME_FROM_NULL_STRING, "ER_SCHEME_FROM_NULL_STRING"_s);
	$assignStatic(XMLErrorResources_ko::ER_SCHEME_NOT_CONFORMANT, "ER_SCHEME_NOT_CONFORMANT"_s);
	$assignStatic(XMLErrorResources_ko::ER_HOST_ADDRESS_NOT_WELLFORMED, "ER_HOST_ADDRESS_NOT_WELLFORMED"_s);
	$assignStatic(XMLErrorResources_ko::ER_PORT_WHEN_HOST_NULL, "ER_PORT_WHEN_HOST_NULL"_s);
	$assignStatic(XMLErrorResources_ko::ER_INVALID_PORT, "ER_INVALID_PORT"_s);
	$assignStatic(XMLErrorResources_ko::ER_FRAG_FOR_GENERIC_URI, "ER_FRAG_FOR_GENERIC_URI"_s);
	$assignStatic(XMLErrorResources_ko::ER_FRAG_WHEN_PATH_NULL, "ER_FRAG_WHEN_PATH_NULL"_s);
	$assignStatic(XMLErrorResources_ko::ER_FRAG_INVALID_CHAR, "ER_FRAG_INVALID_CHAR"_s);
	$assignStatic(XMLErrorResources_ko::ER_PARSER_IN_USE, "ER_PARSER_IN_USE"_s);
	$assignStatic(XMLErrorResources_ko::ER_CANNOT_CHANGE_WHILE_PARSING, "ER_CANNOT_CHANGE_WHILE_PARSING"_s);
	$assignStatic(XMLErrorResources_ko::ER_SELF_CAUSATION_NOT_PERMITTED, "ER_SELF_CAUSATION_NOT_PERMITTED"_s);
	$assignStatic(XMLErrorResources_ko::ER_NO_USERINFO_IF_NO_HOST, "ER_NO_USERINFO_IF_NO_HOST"_s);
	$assignStatic(XMLErrorResources_ko::ER_NO_PORT_IF_NO_HOST, "ER_NO_PORT_IF_NO_HOST"_s);
	$assignStatic(XMLErrorResources_ko::ER_NO_QUERY_STRING_IN_PATH, "ER_NO_QUERY_STRING_IN_PATH"_s);
	$assignStatic(XMLErrorResources_ko::ER_NO_FRAGMENT_STRING_IN_PATH, "ER_NO_FRAGMENT_STRING_IN_PATH"_s);
	$assignStatic(XMLErrorResources_ko::ER_CANNOT_INIT_URI_EMPTY_PARMS, "ER_CANNOT_INIT_URI_EMPTY_PARMS"_s);
	$assignStatic(XMLErrorResources_ko::ER_METHOD_NOT_SUPPORTED, "ER_METHOD_NOT_SUPPORTED"_s);
	$assignStatic(XMLErrorResources_ko::ER_INCRSAXSRCFILTER_NOT_RESTARTABLE, "ER_INCRSAXSRCFILTER_NOT_RESTARTABLE"_s);
	$assignStatic(XMLErrorResources_ko::ER_XMLRDR_NOT_BEFORE_STARTPARSE, "ER_XMLRDR_NOT_BEFORE_STARTPARSE"_s);
	$assignStatic(XMLErrorResources_ko::ER_AXIS_TRAVERSER_NOT_SUPPORTED, "ER_AXIS_TRAVERSER_NOT_SUPPORTED"_s);
	$assignStatic(XMLErrorResources_ko::ER_ERRORHANDLER_CREATED_WITH_NULL_PRINTWRITER, "ER_ERRORHANDLER_CREATED_WITH_NULL_PRINTWRITER"_s);
	$assignStatic(XMLErrorResources_ko::ER_SYSTEMID_UNKNOWN, "ER_SYSTEMID_UNKNOWN"_s);
	$assignStatic(XMLErrorResources_ko::ER_LOCATION_UNKNOWN, "ER_LOCATION_UNKNOWN"_s);
	$assignStatic(XMLErrorResources_ko::ER_PREFIX_MUST_RESOLVE, "ER_PREFIX_MUST_RESOLVE"_s);
	$assignStatic(XMLErrorResources_ko::ER_CREATEDOCUMENT_NOT_SUPPORTED, "ER_CREATEDOCUMENT_NOT_SUPPORTED"_s);
	$assignStatic(XMLErrorResources_ko::ER_CHILD_HAS_NO_OWNER_DOCUMENT, "ER_CHILD_HAS_NO_OWNER_DOCUMENT"_s);
	$assignStatic(XMLErrorResources_ko::ER_CHILD_HAS_NO_OWNER_DOCUMENT_ELEMENT, "ER_CHILD_HAS_NO_OWNER_DOCUMENT_ELEMENT"_s);
	$assignStatic(XMLErrorResources_ko::ER_CANT_OUTPUT_TEXT_BEFORE_DOC, "ER_CANT_OUTPUT_TEXT_BEFORE_DOC"_s);
	$assignStatic(XMLErrorResources_ko::ER_CANT_HAVE_MORE_THAN_ONE_ROOT, "ER_CANT_HAVE_MORE_THAN_ONE_ROOT"_s);
	$assignStatic(XMLErrorResources_ko::ER_ARG_LOCALNAME_NULL, "ER_ARG_LOCALNAME_NULL"_s);
	$assignStatic(XMLErrorResources_ko::ER_ARG_LOCALNAME_INVALID, "ER_ARG_LOCALNAME_INVALID"_s);
	$assignStatic(XMLErrorResources_ko::ER_ARG_PREFIX_INVALID, "ER_ARG_PREFIX_INVALID"_s);
	$assignStatic(XMLErrorResources_ko::ER_NAME_CANT_START_WITH_COLON, "ER_NAME_CANT_START_WITH_COLON"_s);
	$assignStatic(XMLErrorResources_ko::ER_RESOURCE_COULD_NOT_FIND, "ER_RESOURCE_COULD_NOT_FIND"_s);
	$assignStatic(XMLErrorResources_ko::ER_RESOURCE_COULD_NOT_LOAD, "ER_RESOURCE_COULD_NOT_LOAD"_s);
	$assignStatic(XMLErrorResources_ko::ER_BUFFER_SIZE_LESSTHAN_ZERO, "ER_BUFFER_SIZE_LESSTHAN_ZERO"_s);
	$assignStatic(XMLErrorResources_ko::ER_INVALID_UTF16_SURROGATE, "ER_INVALID_UTF16_SURROGATE"_s);
	$assignStatic(XMLErrorResources_ko::ER_OIERROR, "ER_OIERROR"_s);
	$assignStatic(XMLErrorResources_ko::ER_NAMESPACE_PREFIX, "ER_NAMESPACE_PREFIX"_s);
	$assignStatic(XMLErrorResources_ko::ER_STRAY_ATTRIBUTE, "ER_STRAY_ATTIRBUTE"_s);
	$assignStatic(XMLErrorResources_ko::ER_STRAY_NAMESPACE, "ER_STRAY_NAMESPACE"_s);
	$assignStatic(XMLErrorResources_ko::ER_COULD_NOT_LOAD_RESOURCE, "ER_COULD_NOT_LOAD_RESOURCE"_s);
	$assignStatic(XMLErrorResources_ko::ER_COULD_NOT_LOAD_METHOD_PROPERTY, "ER_COULD_NOT_LOAD_METHOD_PROPERTY"_s);
	$assignStatic(XMLErrorResources_ko::ER_SERIALIZER_NOT_CONTENTHANDLER, "ER_SERIALIZER_NOT_CONTENTHANDLER"_s);
	$assignStatic(XMLErrorResources_ko::ER_ILLEGAL_ATTRIBUTE_POSITION, "ER_ILLEGAL_ATTRIBUTE_POSITION"_s);
	$assignStatic(XMLErrorResources_ko::ER_ILLEGAL_CHARACTER, "ER_ILLEGAL_CHARACTER"_s);
	$assignStatic(XMLErrorResources_ko::contents, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("ER0000"_s),
			$of("{0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ko::ER_FUNCTION_NOT_SUPPORTED),
			$of(u"함수가 지원되지 않습니다!"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ko::ER_CANNOT_OVERWRITE_CAUSE),
			$of(u"원인을 겹쳐 쓸 수 없습니다."_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ko::ER_NO_DEFAULT_IMPL),
			$of(u"기본 구현을 찾을 수 없습니다. "_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ko::ER_CHUNKEDINTARRAY_NOT_SUPPORTED),
			$of(u"ChunkedIntArray({0})는 현재 지원되지 않습니다."_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ko::ER_OFFSET_BIGGER_THAN_SLOT),
			$of(u"오프셋이 슬롯보다 큽니다."_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ko::ER_COROUTINE_NOT_AVAIL),
			$of(u"Coroutine을 사용할 수 없습니다. ID={0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ko::ER_COROUTINE_CO_EXIT),
			$of(u"CoroutineManager가 co_exit() 요청을 수신했습니다."_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ko::ER_COJOINROUTINESET_FAILED),
			$of(u"co_joinCoroutineSet()를 실패했습니다."_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ko::ER_COROUTINE_PARAM),
			$of(u"Coroutine 매개변수 오류({0})"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ko::ER_PARSER_DOTERMINATE_ANSWERS),
			$of(u"\n예상치 않은 오류: 구문 분석기 doTerminate가 {0}에 응답합니다."_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ko::ER_NO_PARSE_CALL_WHILE_PARSING),
			$of(u"구문 분석 중 parse를 호출할 수 없습니다."_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ko::ER_TYPED_ITERATOR_AXIS_NOT_IMPLEMENTED),
			$of(u"오류: {0} 축에 대해 입력된 이터레이터가 구현되지 않았습니다."_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ko::ER_ITERATOR_AXIS_NOT_IMPLEMENTED),
			$of(u"오류: {0} 축에 대한 이터레이터가 구현되지 않았습니다. "_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ko::ER_ITERATOR_CLONE_NOT_SUPPORTED),
			$of(u"이터레이터 복제는 지원되지 않습니다."_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ko::ER_UNKNOWN_AXIS_TYPE),
			$of(u"알 수 없는 축 순회 유형: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ko::ER_AXIS_NOT_SUPPORTED),
			$of(u"축 순환기가 지원되지 않음: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ko::ER_NO_DTMIDS_AVAIL),
			$of(u"더 이상 사용 가능한 DTM ID가 없습니다."_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ko::ER_NOT_SUPPORTED),
			$of(u"지원되지 않음: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ko::ER_NODE_NON_NULL),
			$of(u"노드는 getDTMHandleFromNode에 대해 널이 아니어야 합니다."_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ko::ER_COULD_NOT_RESOLVE_NODE),
			$of(u"노드를 핸들로 분석할 수 없습니다."_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ko::ER_STARTPARSE_WHILE_PARSING),
			$of(u"구문 분석 중 startParse를 호출할 수 없습니다."_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ko::ER_STARTPARSE_NEEDS_SAXPARSER),
			$of(u"startParse에는 널이 아닌 SAXParser가 필요합니다."_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ko::ER_COULD_NOT_INIT_PARSER),
			$of(u"구문 분석기를 초기화할 수 없습니다."_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ko::ER_EXCEPTION_CREATING_POOL),
			$of(u"풀에 대한 새 인스턴스를 생성하는 중 예외사항이 발생했습니다."_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ko::ER_PATH_CONTAINS_INVALID_ESCAPE_SEQUENCE),
			$of(u"경로에 부적합한 이스케이프 시퀀스가 포함되어 있습니다."_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ko::ER_SCHEME_REQUIRED),
			$of(u"체계가 필요합니다!"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ko::ER_NO_SCHEME_IN_URI),
			$of(u"URI에서 체계를 찾을 수 없음: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ko::ER_NO_SCHEME_INURI),
			$of(u"URI에서 체계를 찾을 수 없습니다."_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ko::ER_PATH_INVALID_CHAR),
			$of(u"경로에 부적합한 문자가 포함됨: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ko::ER_SCHEME_FROM_NULL_STRING),
			$of(u"널 문자열에서 체계를 설정할 수 없습니다."_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ko::ER_SCHEME_NOT_CONFORMANT),
			$of(u"체계가 일치하지 않습니다."_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ko::ER_HOST_ADDRESS_NOT_WELLFORMED),
			$of(u"호스트가 완전한 주소가 아닙니다."_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ko::ER_PORT_WHEN_HOST_NULL),
			$of(u"호스트가 널일 경우 포트를 설정할 수 없습니다."_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ko::ER_INVALID_PORT),
			$of(u"포트 번호가 부적합합니다."_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ko::ER_FRAG_FOR_GENERIC_URI),
			$of(u"일반 URI에 대해서만 부분을 설정할 수 있습니다."_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ko::ER_FRAG_WHEN_PATH_NULL),
			$of(u"경로가 널일 경우 부분을 설정할 수 없습니다."_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ko::ER_FRAG_INVALID_CHAR),
			$of(u"부분에 부적합한 문자가 포함되어 있습니다."_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ko::ER_PARSER_IN_USE),
			$of(u"구문 분석기가 이미 사용되고 있습니다."_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ko::ER_CANNOT_CHANGE_WHILE_PARSING),
			$of(u"구문 분석 중 {0} {1}을(를) 변경할 수 없습니다."_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ko::ER_SELF_CAUSATION_NOT_PERMITTED),
			$of(u"자체 인과 관계는 허용되지 않습니다."_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ko::ER_NO_USERINFO_IF_NO_HOST),
			$of(u"호스트를 지정하지 않은 경우에는 Userinfo를 지정할 수 없습니다."_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ko::ER_NO_PORT_IF_NO_HOST),
			$of(u"호스트를 지정하지 않은 경우에는 포트를 지정할 수 없습니다."_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ko::ER_NO_QUERY_STRING_IN_PATH),
			$of(u"경로 및 질의 문자열에 질의 문자열을 지정할 수 없습니다."_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ko::ER_NO_FRAGMENT_STRING_IN_PATH),
			$of(u"경로와 부분에 모두 부분을 지정할 수는 없습니다."_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ko::ER_CANNOT_INIT_URI_EMPTY_PARMS),
			$of(u"빈 매개변수로 URI를 초기화할 수 없습니다."_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ko::ER_METHOD_NOT_SUPPORTED),
			$of(u"메소드가 아직 지원되지 않습니다. "_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ko::ER_INCRSAXSRCFILTER_NOT_RESTARTABLE),
			$of(u"현재 IncrementalSAXSource_Filter를 재시작할 수 없습니다."_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ko::ER_XMLRDR_NOT_BEFORE_STARTPARSE),
			$of(u"startParse 요청 전에 XMLReader가 실행되지 않았습니다."_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ko::ER_AXIS_TRAVERSER_NOT_SUPPORTED),
			$of(u"축 순환기가 지원되지 않음: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ko::ER_ERRORHANDLER_CREATED_WITH_NULL_PRINTWRITER),
			$of(u"널 PrintWriter로 ListingErrorHandler가 생성되었습니다!"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ko::ER_SYSTEMID_UNKNOWN),
			$of(u"SystemId를 알 수 없습니다."_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ko::ER_LOCATION_UNKNOWN),
			$of(u"오류 위치를 알 수 없습니다."_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ko::ER_PREFIX_MUST_RESOLVE),
			$of(u"접두어는 네임스페이스로 분석되어야 함: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ko::ER_CREATEDOCUMENT_NOT_SUPPORTED),
			$of(u"XPathContext에서는 createDocument()가 지원되지 않습니다!"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ko::ER_CHILD_HAS_NO_OWNER_DOCUMENT),
			$of(u"속성 하위에 소유자 문서가 없습니다!"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ko::ER_CHILD_HAS_NO_OWNER_DOCUMENT_ELEMENT),
			$of(u"속성 하위에 소유자 문서 요소가 없습니다!"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ko::ER_CANT_OUTPUT_TEXT_BEFORE_DOC),
			$of(u"경고: 문서 요소 앞에 텍스트를 출력할 수 없습니다! 무시하는 중..."_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ko::ER_CANT_HAVE_MORE_THAN_ONE_ROOT),
			$of(u"DOM에서 루트를 두 개 이상 사용할 수 없습니다!"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ko::ER_ARG_LOCALNAME_NULL),
			$of(u"\'localName\' 인수가 널입니다."_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ko::ER_ARG_LOCALNAME_INVALID),
			$of(u"QNAME의 Localname은 적합한 NCName이어야 합니다."_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ko::ER_ARG_PREFIX_INVALID),
			$of(u"QNAME의 접두어는 적합한 NCName이어야 합니다."_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ko::ER_NAME_CANT_START_WITH_COLON),
			$of(u"이름은 콜론으로 시작할 수 없습니다."_s)
		}),
		$$new($ObjectArray, {
			$of("BAD_CODE"_s),
			$of(u"createMessage에 대한 매개변수가 범위를 벗어났습니다."_s)
		}),
		$$new($ObjectArray, {
			$of("FORMAT_FAILED"_s),
			$of(u"messageFormat 호출 중 예외사항이 발생했습니다."_s)
		}),
		$$new($ObjectArray, {
			$of("line"_s),
			$of(u"행 번호"_s)
		}),
		$$new($ObjectArray, {
			$of("column"_s),
			$of(u"열 번호"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ko::ER_SERIALIZER_NOT_CONTENTHANDLER),
			$of(u"Serializer 클래스 \'\'{0}\'\'이(가) org.xml.sax.ContentHandler를 구현하지 않았습니다."_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ko::ER_RESOURCE_COULD_NOT_FIND),
			$of(u"[{0}] 리소스를 찾을 수 없습니다.\n {1}"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ko::ER_RESOURCE_COULD_NOT_LOAD),
			$of(u"[{0}] 리소스가 다음을 로드할 수 없음: {1} \n {2} \t {3}"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ko::ER_BUFFER_SIZE_LESSTHAN_ZERO),
			$of(u"버퍼 크기 <=0"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ko::ER_INVALID_UTF16_SURROGATE),
			$of(u"부적합한 UTF-16 대리 요소가 감지됨: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ko::ER_OIERROR),
			$of(u"IO 오류"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ko::ER_ILLEGAL_ATTRIBUTE_POSITION),
			$of(u"하위 노드가 생성된 후 또는 요소가 생성되기 전에 {0} 속성을 추가할 수 없습니다. 속성이 무시됩니다."_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ko::ER_NAMESPACE_PREFIX),
			$of(u"\'\'{0}\'\' 접두어에 대한 네임스페이스가 선언되지 않았습니다."_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ko::ER_STRAY_ATTRIBUTE),
			$of(u"\'\'{0}\'\' 속성이 요소에 포함되어 있지 않습니다."_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ko::ER_STRAY_NAMESPACE),
			$of(u"네임스페이스 선언 \'\'{0}\'\'=\'\'{1}\'\'이(가) 요소에 포함되어 있지 않습니다."_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ko::ER_COULD_NOT_LOAD_RESOURCE),
			$of(u"{0}을(를) 로드할 수 없습니다. CLASSPATH를 확인하십시오. 현재 기본값만 사용하는 중입니다."_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ko::ER_ILLEGAL_CHARACTER),
			$of(u"{1}의 지정된 출력 인코딩에서 표시되지 않는 정수 값 {0}의 문자를 출력하려고 시도했습니다."_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ko::ER_COULD_NOT_LOAD_METHOD_PROPERTY),
			$of(u"출력 메소드 \'\'{1}\'\'에 대한 속성 파일 \'\'{0}\'\'을(를) 로드할 수 없습니다. CLASSPATH를 확인하십시오."_s)
		})
	}));
}

XMLErrorResources_ko::XMLErrorResources_ko() {
}

$Class* XMLErrorResources_ko::load$($String* name, bool initialize) {
	$loadClass(XMLErrorResources_ko, name, initialize, &_XMLErrorResources_ko_ClassInfo_, clinit$XMLErrorResources_ko, allocate$XMLErrorResources_ko);
	return class$;
}

$Class* XMLErrorResources_ko::class$ = nullptr;

						} // res
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com