#include <com/sun/org/apache/xml/internal/res/XMLErrorResources_ja.h>

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

$FieldInfo _XMLErrorResources_ja_FieldInfo_[] = {
	{"MAX_CODE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XMLErrorResources_ja, MAX_CODE)},
	{"MAX_WARNING", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XMLErrorResources_ja, MAX_WARNING)},
	{"MAX_OTHERS", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XMLErrorResources_ja, MAX_OTHERS)},
	{"MAX_MESSAGES", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XMLErrorResources_ja, MAX_MESSAGES)},
	{"ER_FUNCTION_NOT_SUPPORTED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ja, ER_FUNCTION_NOT_SUPPORTED)},
	{"ER_CANNOT_OVERWRITE_CAUSE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ja, ER_CANNOT_OVERWRITE_CAUSE)},
	{"ER_NO_DEFAULT_IMPL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ja, ER_NO_DEFAULT_IMPL)},
	{"ER_CHUNKEDINTARRAY_NOT_SUPPORTED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ja, ER_CHUNKEDINTARRAY_NOT_SUPPORTED)},
	{"ER_OFFSET_BIGGER_THAN_SLOT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ja, ER_OFFSET_BIGGER_THAN_SLOT)},
	{"ER_COROUTINE_NOT_AVAIL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ja, ER_COROUTINE_NOT_AVAIL)},
	{"ER_COROUTINE_CO_EXIT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ja, ER_COROUTINE_CO_EXIT)},
	{"ER_COJOINROUTINESET_FAILED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ja, ER_COJOINROUTINESET_FAILED)},
	{"ER_COROUTINE_PARAM", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ja, ER_COROUTINE_PARAM)},
	{"ER_PARSER_DOTERMINATE_ANSWERS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ja, ER_PARSER_DOTERMINATE_ANSWERS)},
	{"ER_NO_PARSE_CALL_WHILE_PARSING", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ja, ER_NO_PARSE_CALL_WHILE_PARSING)},
	{"ER_TYPED_ITERATOR_AXIS_NOT_IMPLEMENTED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ja, ER_TYPED_ITERATOR_AXIS_NOT_IMPLEMENTED)},
	{"ER_ITERATOR_AXIS_NOT_IMPLEMENTED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ja, ER_ITERATOR_AXIS_NOT_IMPLEMENTED)},
	{"ER_ITERATOR_CLONE_NOT_SUPPORTED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ja, ER_ITERATOR_CLONE_NOT_SUPPORTED)},
	{"ER_UNKNOWN_AXIS_TYPE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ja, ER_UNKNOWN_AXIS_TYPE)},
	{"ER_AXIS_NOT_SUPPORTED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ja, ER_AXIS_NOT_SUPPORTED)},
	{"ER_NO_DTMIDS_AVAIL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ja, ER_NO_DTMIDS_AVAIL)},
	{"ER_NOT_SUPPORTED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ja, ER_NOT_SUPPORTED)},
	{"ER_NODE_NON_NULL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ja, ER_NODE_NON_NULL)},
	{"ER_COULD_NOT_RESOLVE_NODE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ja, ER_COULD_NOT_RESOLVE_NODE)},
	{"ER_STARTPARSE_WHILE_PARSING", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ja, ER_STARTPARSE_WHILE_PARSING)},
	{"ER_STARTPARSE_NEEDS_SAXPARSER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ja, ER_STARTPARSE_NEEDS_SAXPARSER)},
	{"ER_COULD_NOT_INIT_PARSER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ja, ER_COULD_NOT_INIT_PARSER)},
	{"ER_EXCEPTION_CREATING_POOL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ja, ER_EXCEPTION_CREATING_POOL)},
	{"ER_PATH_CONTAINS_INVALID_ESCAPE_SEQUENCE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ja, ER_PATH_CONTAINS_INVALID_ESCAPE_SEQUENCE)},
	{"ER_SCHEME_REQUIRED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ja, ER_SCHEME_REQUIRED)},
	{"ER_NO_SCHEME_IN_URI", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ja, ER_NO_SCHEME_IN_URI)},
	{"ER_NO_SCHEME_INURI", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ja, ER_NO_SCHEME_INURI)},
	{"ER_PATH_INVALID_CHAR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ja, ER_PATH_INVALID_CHAR)},
	{"ER_SCHEME_FROM_NULL_STRING", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ja, ER_SCHEME_FROM_NULL_STRING)},
	{"ER_SCHEME_NOT_CONFORMANT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ja, ER_SCHEME_NOT_CONFORMANT)},
	{"ER_HOST_ADDRESS_NOT_WELLFORMED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ja, ER_HOST_ADDRESS_NOT_WELLFORMED)},
	{"ER_PORT_WHEN_HOST_NULL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ja, ER_PORT_WHEN_HOST_NULL)},
	{"ER_INVALID_PORT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ja, ER_INVALID_PORT)},
	{"ER_FRAG_FOR_GENERIC_URI", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ja, ER_FRAG_FOR_GENERIC_URI)},
	{"ER_FRAG_WHEN_PATH_NULL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ja, ER_FRAG_WHEN_PATH_NULL)},
	{"ER_FRAG_INVALID_CHAR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ja, ER_FRAG_INVALID_CHAR)},
	{"ER_PARSER_IN_USE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ja, ER_PARSER_IN_USE)},
	{"ER_CANNOT_CHANGE_WHILE_PARSING", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ja, ER_CANNOT_CHANGE_WHILE_PARSING)},
	{"ER_SELF_CAUSATION_NOT_PERMITTED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ja, ER_SELF_CAUSATION_NOT_PERMITTED)},
	{"ER_NO_USERINFO_IF_NO_HOST", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ja, ER_NO_USERINFO_IF_NO_HOST)},
	{"ER_NO_PORT_IF_NO_HOST", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ja, ER_NO_PORT_IF_NO_HOST)},
	{"ER_NO_QUERY_STRING_IN_PATH", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ja, ER_NO_QUERY_STRING_IN_PATH)},
	{"ER_NO_FRAGMENT_STRING_IN_PATH", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ja, ER_NO_FRAGMENT_STRING_IN_PATH)},
	{"ER_CANNOT_INIT_URI_EMPTY_PARMS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ja, ER_CANNOT_INIT_URI_EMPTY_PARMS)},
	{"ER_METHOD_NOT_SUPPORTED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ja, ER_METHOD_NOT_SUPPORTED)},
	{"ER_INCRSAXSRCFILTER_NOT_RESTARTABLE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ja, ER_INCRSAXSRCFILTER_NOT_RESTARTABLE)},
	{"ER_XMLRDR_NOT_BEFORE_STARTPARSE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ja, ER_XMLRDR_NOT_BEFORE_STARTPARSE)},
	{"ER_AXIS_TRAVERSER_NOT_SUPPORTED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ja, ER_AXIS_TRAVERSER_NOT_SUPPORTED)},
	{"ER_ERRORHANDLER_CREATED_WITH_NULL_PRINTWRITER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ja, ER_ERRORHANDLER_CREATED_WITH_NULL_PRINTWRITER)},
	{"ER_SYSTEMID_UNKNOWN", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ja, ER_SYSTEMID_UNKNOWN)},
	{"ER_LOCATION_UNKNOWN", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ja, ER_LOCATION_UNKNOWN)},
	{"ER_PREFIX_MUST_RESOLVE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ja, ER_PREFIX_MUST_RESOLVE)},
	{"ER_CREATEDOCUMENT_NOT_SUPPORTED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ja, ER_CREATEDOCUMENT_NOT_SUPPORTED)},
	{"ER_CHILD_HAS_NO_OWNER_DOCUMENT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ja, ER_CHILD_HAS_NO_OWNER_DOCUMENT)},
	{"ER_CHILD_HAS_NO_OWNER_DOCUMENT_ELEMENT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ja, ER_CHILD_HAS_NO_OWNER_DOCUMENT_ELEMENT)},
	{"ER_CANT_OUTPUT_TEXT_BEFORE_DOC", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ja, ER_CANT_OUTPUT_TEXT_BEFORE_DOC)},
	{"ER_CANT_HAVE_MORE_THAN_ONE_ROOT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ja, ER_CANT_HAVE_MORE_THAN_ONE_ROOT)},
	{"ER_ARG_LOCALNAME_NULL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ja, ER_ARG_LOCALNAME_NULL)},
	{"ER_ARG_LOCALNAME_INVALID", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ja, ER_ARG_LOCALNAME_INVALID)},
	{"ER_ARG_PREFIX_INVALID", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ja, ER_ARG_PREFIX_INVALID)},
	{"ER_NAME_CANT_START_WITH_COLON", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ja, ER_NAME_CANT_START_WITH_COLON)},
	{"ER_RESOURCE_COULD_NOT_FIND", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ja, ER_RESOURCE_COULD_NOT_FIND)},
	{"ER_RESOURCE_COULD_NOT_LOAD", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ja, ER_RESOURCE_COULD_NOT_LOAD)},
	{"ER_BUFFER_SIZE_LESSTHAN_ZERO", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ja, ER_BUFFER_SIZE_LESSTHAN_ZERO)},
	{"ER_INVALID_UTF16_SURROGATE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ja, ER_INVALID_UTF16_SURROGATE)},
	{"ER_OIERROR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ja, ER_OIERROR)},
	{"ER_NAMESPACE_PREFIX", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ja, ER_NAMESPACE_PREFIX)},
	{"ER_STRAY_ATTRIBUTE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ja, ER_STRAY_ATTRIBUTE)},
	{"ER_STRAY_NAMESPACE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ja, ER_STRAY_NAMESPACE)},
	{"ER_COULD_NOT_LOAD_RESOURCE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ja, ER_COULD_NOT_LOAD_RESOURCE)},
	{"ER_COULD_NOT_LOAD_METHOD_PROPERTY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ja, ER_COULD_NOT_LOAD_METHOD_PROPERTY)},
	{"ER_SERIALIZER_NOT_CONTENTHANDLER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ja, ER_SERIALIZER_NOT_CONTENTHANDLER)},
	{"ER_ILLEGAL_ATTRIBUTE_POSITION", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ja, ER_ILLEGAL_ATTRIBUTE_POSITION)},
	{"ER_ILLEGAL_CHARACTER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_ja, ER_ILLEGAL_CHARACTER)},
	{"contents", "[[Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XMLErrorResources_ja, contents)},
	{}
};

$MethodInfo _XMLErrorResources_ja_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(XMLErrorResources_ja, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED, $virtualMethod(XMLErrorResources_ja, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _XMLErrorResources_ja_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.res.XMLErrorResources_ja",
	"java.util.ListResourceBundle",
	nullptr,
	_XMLErrorResources_ja_FieldInfo_,
	_XMLErrorResources_ja_MethodInfo_
};

$Object* allocate$XMLErrorResources_ja($Class* clazz) {
	return $of($alloc(XMLErrorResources_ja));
}

$String* XMLErrorResources_ja::ER_FUNCTION_NOT_SUPPORTED = nullptr;
$String* XMLErrorResources_ja::ER_CANNOT_OVERWRITE_CAUSE = nullptr;
$String* XMLErrorResources_ja::ER_NO_DEFAULT_IMPL = nullptr;
$String* XMLErrorResources_ja::ER_CHUNKEDINTARRAY_NOT_SUPPORTED = nullptr;
$String* XMLErrorResources_ja::ER_OFFSET_BIGGER_THAN_SLOT = nullptr;
$String* XMLErrorResources_ja::ER_COROUTINE_NOT_AVAIL = nullptr;
$String* XMLErrorResources_ja::ER_COROUTINE_CO_EXIT = nullptr;
$String* XMLErrorResources_ja::ER_COJOINROUTINESET_FAILED = nullptr;
$String* XMLErrorResources_ja::ER_COROUTINE_PARAM = nullptr;
$String* XMLErrorResources_ja::ER_PARSER_DOTERMINATE_ANSWERS = nullptr;
$String* XMLErrorResources_ja::ER_NO_PARSE_CALL_WHILE_PARSING = nullptr;
$String* XMLErrorResources_ja::ER_TYPED_ITERATOR_AXIS_NOT_IMPLEMENTED = nullptr;
$String* XMLErrorResources_ja::ER_ITERATOR_AXIS_NOT_IMPLEMENTED = nullptr;
$String* XMLErrorResources_ja::ER_ITERATOR_CLONE_NOT_SUPPORTED = nullptr;
$String* XMLErrorResources_ja::ER_UNKNOWN_AXIS_TYPE = nullptr;
$String* XMLErrorResources_ja::ER_AXIS_NOT_SUPPORTED = nullptr;
$String* XMLErrorResources_ja::ER_NO_DTMIDS_AVAIL = nullptr;
$String* XMLErrorResources_ja::ER_NOT_SUPPORTED = nullptr;
$String* XMLErrorResources_ja::ER_NODE_NON_NULL = nullptr;
$String* XMLErrorResources_ja::ER_COULD_NOT_RESOLVE_NODE = nullptr;
$String* XMLErrorResources_ja::ER_STARTPARSE_WHILE_PARSING = nullptr;
$String* XMLErrorResources_ja::ER_STARTPARSE_NEEDS_SAXPARSER = nullptr;
$String* XMLErrorResources_ja::ER_COULD_NOT_INIT_PARSER = nullptr;
$String* XMLErrorResources_ja::ER_EXCEPTION_CREATING_POOL = nullptr;
$String* XMLErrorResources_ja::ER_PATH_CONTAINS_INVALID_ESCAPE_SEQUENCE = nullptr;
$String* XMLErrorResources_ja::ER_SCHEME_REQUIRED = nullptr;
$String* XMLErrorResources_ja::ER_NO_SCHEME_IN_URI = nullptr;
$String* XMLErrorResources_ja::ER_NO_SCHEME_INURI = nullptr;
$String* XMLErrorResources_ja::ER_PATH_INVALID_CHAR = nullptr;
$String* XMLErrorResources_ja::ER_SCHEME_FROM_NULL_STRING = nullptr;
$String* XMLErrorResources_ja::ER_SCHEME_NOT_CONFORMANT = nullptr;
$String* XMLErrorResources_ja::ER_HOST_ADDRESS_NOT_WELLFORMED = nullptr;
$String* XMLErrorResources_ja::ER_PORT_WHEN_HOST_NULL = nullptr;
$String* XMLErrorResources_ja::ER_INVALID_PORT = nullptr;
$String* XMLErrorResources_ja::ER_FRAG_FOR_GENERIC_URI = nullptr;
$String* XMLErrorResources_ja::ER_FRAG_WHEN_PATH_NULL = nullptr;
$String* XMLErrorResources_ja::ER_FRAG_INVALID_CHAR = nullptr;
$String* XMLErrorResources_ja::ER_PARSER_IN_USE = nullptr;
$String* XMLErrorResources_ja::ER_CANNOT_CHANGE_WHILE_PARSING = nullptr;
$String* XMLErrorResources_ja::ER_SELF_CAUSATION_NOT_PERMITTED = nullptr;
$String* XMLErrorResources_ja::ER_NO_USERINFO_IF_NO_HOST = nullptr;
$String* XMLErrorResources_ja::ER_NO_PORT_IF_NO_HOST = nullptr;
$String* XMLErrorResources_ja::ER_NO_QUERY_STRING_IN_PATH = nullptr;
$String* XMLErrorResources_ja::ER_NO_FRAGMENT_STRING_IN_PATH = nullptr;
$String* XMLErrorResources_ja::ER_CANNOT_INIT_URI_EMPTY_PARMS = nullptr;
$String* XMLErrorResources_ja::ER_METHOD_NOT_SUPPORTED = nullptr;
$String* XMLErrorResources_ja::ER_INCRSAXSRCFILTER_NOT_RESTARTABLE = nullptr;
$String* XMLErrorResources_ja::ER_XMLRDR_NOT_BEFORE_STARTPARSE = nullptr;
$String* XMLErrorResources_ja::ER_AXIS_TRAVERSER_NOT_SUPPORTED = nullptr;
$String* XMLErrorResources_ja::ER_ERRORHANDLER_CREATED_WITH_NULL_PRINTWRITER = nullptr;
$String* XMLErrorResources_ja::ER_SYSTEMID_UNKNOWN = nullptr;
$String* XMLErrorResources_ja::ER_LOCATION_UNKNOWN = nullptr;
$String* XMLErrorResources_ja::ER_PREFIX_MUST_RESOLVE = nullptr;
$String* XMLErrorResources_ja::ER_CREATEDOCUMENT_NOT_SUPPORTED = nullptr;
$String* XMLErrorResources_ja::ER_CHILD_HAS_NO_OWNER_DOCUMENT = nullptr;
$String* XMLErrorResources_ja::ER_CHILD_HAS_NO_OWNER_DOCUMENT_ELEMENT = nullptr;
$String* XMLErrorResources_ja::ER_CANT_OUTPUT_TEXT_BEFORE_DOC = nullptr;
$String* XMLErrorResources_ja::ER_CANT_HAVE_MORE_THAN_ONE_ROOT = nullptr;
$String* XMLErrorResources_ja::ER_ARG_LOCALNAME_NULL = nullptr;
$String* XMLErrorResources_ja::ER_ARG_LOCALNAME_INVALID = nullptr;
$String* XMLErrorResources_ja::ER_ARG_PREFIX_INVALID = nullptr;
$String* XMLErrorResources_ja::ER_NAME_CANT_START_WITH_COLON = nullptr;
$String* XMLErrorResources_ja::ER_RESOURCE_COULD_NOT_FIND = nullptr;
$String* XMLErrorResources_ja::ER_RESOURCE_COULD_NOT_LOAD = nullptr;
$String* XMLErrorResources_ja::ER_BUFFER_SIZE_LESSTHAN_ZERO = nullptr;
$String* XMLErrorResources_ja::ER_INVALID_UTF16_SURROGATE = nullptr;
$String* XMLErrorResources_ja::ER_OIERROR = nullptr;
$String* XMLErrorResources_ja::ER_NAMESPACE_PREFIX = nullptr;
$String* XMLErrorResources_ja::ER_STRAY_ATTRIBUTE = nullptr;
$String* XMLErrorResources_ja::ER_STRAY_NAMESPACE = nullptr;
$String* XMLErrorResources_ja::ER_COULD_NOT_LOAD_RESOURCE = nullptr;
$String* XMLErrorResources_ja::ER_COULD_NOT_LOAD_METHOD_PROPERTY = nullptr;
$String* XMLErrorResources_ja::ER_SERIALIZER_NOT_CONTENTHANDLER = nullptr;
$String* XMLErrorResources_ja::ER_ILLEGAL_ATTRIBUTE_POSITION = nullptr;
$String* XMLErrorResources_ja::ER_ILLEGAL_CHARACTER = nullptr;
$ObjectArray2* XMLErrorResources_ja::contents = nullptr;

void XMLErrorResources_ja::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* XMLErrorResources_ja::getContents() {
	return XMLErrorResources_ja::contents;
}

void clinit$XMLErrorResources_ja($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(XMLErrorResources_ja::ER_FUNCTION_NOT_SUPPORTED, "ER_FUNCTION_NOT_SUPPORTED"_s);
	$assignStatic(XMLErrorResources_ja::ER_CANNOT_OVERWRITE_CAUSE, "ER_CANNOT_OVERWRITE_CAUSE"_s);
	$assignStatic(XMLErrorResources_ja::ER_NO_DEFAULT_IMPL, "ER_NO_DEFAULT_IMPL"_s);
	$assignStatic(XMLErrorResources_ja::ER_CHUNKEDINTARRAY_NOT_SUPPORTED, "ER_CHUNKEDINTARRAY_NOT_SUPPORTED"_s);
	$assignStatic(XMLErrorResources_ja::ER_OFFSET_BIGGER_THAN_SLOT, "ER_OFFSET_BIGGER_THAN_SLOT"_s);
	$assignStatic(XMLErrorResources_ja::ER_COROUTINE_NOT_AVAIL, "ER_COROUTINE_NOT_AVAIL"_s);
	$assignStatic(XMLErrorResources_ja::ER_COROUTINE_CO_EXIT, "ER_COROUTINE_CO_EXIT"_s);
	$assignStatic(XMLErrorResources_ja::ER_COJOINROUTINESET_FAILED, "ER_COJOINROUTINESET_FAILED"_s);
	$assignStatic(XMLErrorResources_ja::ER_COROUTINE_PARAM, "ER_COROUTINE_PARAM"_s);
	$assignStatic(XMLErrorResources_ja::ER_PARSER_DOTERMINATE_ANSWERS, "ER_PARSER_DOTERMINATE_ANSWERS"_s);
	$assignStatic(XMLErrorResources_ja::ER_NO_PARSE_CALL_WHILE_PARSING, "ER_NO_PARSE_CALL_WHILE_PARSING"_s);
	$assignStatic(XMLErrorResources_ja::ER_TYPED_ITERATOR_AXIS_NOT_IMPLEMENTED, "ER_TYPED_ITERATOR_AXIS_NOT_IMPLEMENTED"_s);
	$assignStatic(XMLErrorResources_ja::ER_ITERATOR_AXIS_NOT_IMPLEMENTED, "ER_ITERATOR_AXIS_NOT_IMPLEMENTED"_s);
	$assignStatic(XMLErrorResources_ja::ER_ITERATOR_CLONE_NOT_SUPPORTED, "ER_ITERATOR_CLONE_NOT_SUPPORTED"_s);
	$assignStatic(XMLErrorResources_ja::ER_UNKNOWN_AXIS_TYPE, "ER_UNKNOWN_AXIS_TYPE"_s);
	$assignStatic(XMLErrorResources_ja::ER_AXIS_NOT_SUPPORTED, "ER_AXIS_NOT_SUPPORTED"_s);
	$assignStatic(XMLErrorResources_ja::ER_NO_DTMIDS_AVAIL, "ER_NO_DTMIDS_AVAIL"_s);
	$assignStatic(XMLErrorResources_ja::ER_NOT_SUPPORTED, "ER_NOT_SUPPORTED"_s);
	$assignStatic(XMLErrorResources_ja::ER_NODE_NON_NULL, "ER_NODE_NON_NULL"_s);
	$assignStatic(XMLErrorResources_ja::ER_COULD_NOT_RESOLVE_NODE, "ER_COULD_NOT_RESOLVE_NODE"_s);
	$assignStatic(XMLErrorResources_ja::ER_STARTPARSE_WHILE_PARSING, "ER_STARTPARSE_WHILE_PARSING"_s);
	$assignStatic(XMLErrorResources_ja::ER_STARTPARSE_NEEDS_SAXPARSER, "ER_STARTPARSE_NEEDS_SAXPARSER"_s);
	$assignStatic(XMLErrorResources_ja::ER_COULD_NOT_INIT_PARSER, "ER_COULD_NOT_INIT_PARSER"_s);
	$assignStatic(XMLErrorResources_ja::ER_EXCEPTION_CREATING_POOL, "ER_EXCEPTION_CREATING_POOL"_s);
	$assignStatic(XMLErrorResources_ja::ER_PATH_CONTAINS_INVALID_ESCAPE_SEQUENCE, "ER_PATH_CONTAINS_INVALID_ESCAPE_SEQUENCE"_s);
	$assignStatic(XMLErrorResources_ja::ER_SCHEME_REQUIRED, "ER_SCHEME_REQUIRED"_s);
	$assignStatic(XMLErrorResources_ja::ER_NO_SCHEME_IN_URI, "ER_NO_SCHEME_IN_URI"_s);
	$assignStatic(XMLErrorResources_ja::ER_NO_SCHEME_INURI, "ER_NO_SCHEME_INURI"_s);
	$assignStatic(XMLErrorResources_ja::ER_PATH_INVALID_CHAR, "ER_PATH_INVALID_CHAR"_s);
	$assignStatic(XMLErrorResources_ja::ER_SCHEME_FROM_NULL_STRING, "ER_SCHEME_FROM_NULL_STRING"_s);
	$assignStatic(XMLErrorResources_ja::ER_SCHEME_NOT_CONFORMANT, "ER_SCHEME_NOT_CONFORMANT"_s);
	$assignStatic(XMLErrorResources_ja::ER_HOST_ADDRESS_NOT_WELLFORMED, "ER_HOST_ADDRESS_NOT_WELLFORMED"_s);
	$assignStatic(XMLErrorResources_ja::ER_PORT_WHEN_HOST_NULL, "ER_PORT_WHEN_HOST_NULL"_s);
	$assignStatic(XMLErrorResources_ja::ER_INVALID_PORT, "ER_INVALID_PORT"_s);
	$assignStatic(XMLErrorResources_ja::ER_FRAG_FOR_GENERIC_URI, "ER_FRAG_FOR_GENERIC_URI"_s);
	$assignStatic(XMLErrorResources_ja::ER_FRAG_WHEN_PATH_NULL, "ER_FRAG_WHEN_PATH_NULL"_s);
	$assignStatic(XMLErrorResources_ja::ER_FRAG_INVALID_CHAR, "ER_FRAG_INVALID_CHAR"_s);
	$assignStatic(XMLErrorResources_ja::ER_PARSER_IN_USE, "ER_PARSER_IN_USE"_s);
	$assignStatic(XMLErrorResources_ja::ER_CANNOT_CHANGE_WHILE_PARSING, "ER_CANNOT_CHANGE_WHILE_PARSING"_s);
	$assignStatic(XMLErrorResources_ja::ER_SELF_CAUSATION_NOT_PERMITTED, "ER_SELF_CAUSATION_NOT_PERMITTED"_s);
	$assignStatic(XMLErrorResources_ja::ER_NO_USERINFO_IF_NO_HOST, "ER_NO_USERINFO_IF_NO_HOST"_s);
	$assignStatic(XMLErrorResources_ja::ER_NO_PORT_IF_NO_HOST, "ER_NO_PORT_IF_NO_HOST"_s);
	$assignStatic(XMLErrorResources_ja::ER_NO_QUERY_STRING_IN_PATH, "ER_NO_QUERY_STRING_IN_PATH"_s);
	$assignStatic(XMLErrorResources_ja::ER_NO_FRAGMENT_STRING_IN_PATH, "ER_NO_FRAGMENT_STRING_IN_PATH"_s);
	$assignStatic(XMLErrorResources_ja::ER_CANNOT_INIT_URI_EMPTY_PARMS, "ER_CANNOT_INIT_URI_EMPTY_PARMS"_s);
	$assignStatic(XMLErrorResources_ja::ER_METHOD_NOT_SUPPORTED, "ER_METHOD_NOT_SUPPORTED"_s);
	$assignStatic(XMLErrorResources_ja::ER_INCRSAXSRCFILTER_NOT_RESTARTABLE, "ER_INCRSAXSRCFILTER_NOT_RESTARTABLE"_s);
	$assignStatic(XMLErrorResources_ja::ER_XMLRDR_NOT_BEFORE_STARTPARSE, "ER_XMLRDR_NOT_BEFORE_STARTPARSE"_s);
	$assignStatic(XMLErrorResources_ja::ER_AXIS_TRAVERSER_NOT_SUPPORTED, "ER_AXIS_TRAVERSER_NOT_SUPPORTED"_s);
	$assignStatic(XMLErrorResources_ja::ER_ERRORHANDLER_CREATED_WITH_NULL_PRINTWRITER, "ER_ERRORHANDLER_CREATED_WITH_NULL_PRINTWRITER"_s);
	$assignStatic(XMLErrorResources_ja::ER_SYSTEMID_UNKNOWN, "ER_SYSTEMID_UNKNOWN"_s);
	$assignStatic(XMLErrorResources_ja::ER_LOCATION_UNKNOWN, "ER_LOCATION_UNKNOWN"_s);
	$assignStatic(XMLErrorResources_ja::ER_PREFIX_MUST_RESOLVE, "ER_PREFIX_MUST_RESOLVE"_s);
	$assignStatic(XMLErrorResources_ja::ER_CREATEDOCUMENT_NOT_SUPPORTED, "ER_CREATEDOCUMENT_NOT_SUPPORTED"_s);
	$assignStatic(XMLErrorResources_ja::ER_CHILD_HAS_NO_OWNER_DOCUMENT, "ER_CHILD_HAS_NO_OWNER_DOCUMENT"_s);
	$assignStatic(XMLErrorResources_ja::ER_CHILD_HAS_NO_OWNER_DOCUMENT_ELEMENT, "ER_CHILD_HAS_NO_OWNER_DOCUMENT_ELEMENT"_s);
	$assignStatic(XMLErrorResources_ja::ER_CANT_OUTPUT_TEXT_BEFORE_DOC, "ER_CANT_OUTPUT_TEXT_BEFORE_DOC"_s);
	$assignStatic(XMLErrorResources_ja::ER_CANT_HAVE_MORE_THAN_ONE_ROOT, "ER_CANT_HAVE_MORE_THAN_ONE_ROOT"_s);
	$assignStatic(XMLErrorResources_ja::ER_ARG_LOCALNAME_NULL, "ER_ARG_LOCALNAME_NULL"_s);
	$assignStatic(XMLErrorResources_ja::ER_ARG_LOCALNAME_INVALID, "ER_ARG_LOCALNAME_INVALID"_s);
	$assignStatic(XMLErrorResources_ja::ER_ARG_PREFIX_INVALID, "ER_ARG_PREFIX_INVALID"_s);
	$assignStatic(XMLErrorResources_ja::ER_NAME_CANT_START_WITH_COLON, "ER_NAME_CANT_START_WITH_COLON"_s);
	$assignStatic(XMLErrorResources_ja::ER_RESOURCE_COULD_NOT_FIND, "ER_RESOURCE_COULD_NOT_FIND"_s);
	$assignStatic(XMLErrorResources_ja::ER_RESOURCE_COULD_NOT_LOAD, "ER_RESOURCE_COULD_NOT_LOAD"_s);
	$assignStatic(XMLErrorResources_ja::ER_BUFFER_SIZE_LESSTHAN_ZERO, "ER_BUFFER_SIZE_LESSTHAN_ZERO"_s);
	$assignStatic(XMLErrorResources_ja::ER_INVALID_UTF16_SURROGATE, "ER_INVALID_UTF16_SURROGATE"_s);
	$assignStatic(XMLErrorResources_ja::ER_OIERROR, "ER_OIERROR"_s);
	$assignStatic(XMLErrorResources_ja::ER_NAMESPACE_PREFIX, "ER_NAMESPACE_PREFIX"_s);
	$assignStatic(XMLErrorResources_ja::ER_STRAY_ATTRIBUTE, "ER_STRAY_ATTIRBUTE"_s);
	$assignStatic(XMLErrorResources_ja::ER_STRAY_NAMESPACE, "ER_STRAY_NAMESPACE"_s);
	$assignStatic(XMLErrorResources_ja::ER_COULD_NOT_LOAD_RESOURCE, "ER_COULD_NOT_LOAD_RESOURCE"_s);
	$assignStatic(XMLErrorResources_ja::ER_COULD_NOT_LOAD_METHOD_PROPERTY, "ER_COULD_NOT_LOAD_METHOD_PROPERTY"_s);
	$assignStatic(XMLErrorResources_ja::ER_SERIALIZER_NOT_CONTENTHANDLER, "ER_SERIALIZER_NOT_CONTENTHANDLER"_s);
	$assignStatic(XMLErrorResources_ja::ER_ILLEGAL_ATTRIBUTE_POSITION, "ER_ILLEGAL_ATTRIBUTE_POSITION"_s);
	$assignStatic(XMLErrorResources_ja::ER_ILLEGAL_CHARACTER, "ER_ILLEGAL_CHARACTER"_s);
	$assignStatic(XMLErrorResources_ja::contents, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("ER0000"_s),
			$of("{0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ja::ER_FUNCTION_NOT_SUPPORTED),
			$of(u"関数がサポートされていません。"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ja::ER_CANNOT_OVERWRITE_CAUSE),
			$of(u"原因を上書きできません"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ja::ER_NO_DEFAULT_IMPL),
			$of(u"デフォルト実装が見つかりません "_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ja::ER_CHUNKEDINTARRAY_NOT_SUPPORTED),
			$of(u"ChunkedIntArray({0})は現在サポートされていません"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ja::ER_OFFSET_BIGGER_THAN_SLOT),
			$of(u"オフセットがスロットよりも大きいです"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ja::ER_COROUTINE_NOT_AVAIL),
			$of(u"コルーチンを使用できません。id={0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ja::ER_COROUTINE_CO_EXIT),
			$of(u"CoroutineManagerがco_exit()リクエストを受け取りました"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ja::ER_COJOINROUTINESET_FAILED),
			$of(u"co_joinCoroutineSet()が失敗しました"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ja::ER_COROUTINE_PARAM),
			$of(u"コルーチン・パラメータのエラー({0})"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ja::ER_PARSER_DOTERMINATE_ANSWERS),
			$of(u"\n不明: パーサーdoTerminateの応答は{0}です"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ja::ER_NO_PARSE_CALL_WHILE_PARSING),
			$of(u"解析は構文解析中に呼び出すことができません"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ja::ER_TYPED_ITERATOR_AXIS_NOT_IMPLEMENTED),
			$of(u"エラー: 軸{0}の型指定されたイテレータが実装されていません"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ja::ER_ITERATOR_AXIS_NOT_IMPLEMENTED),
			$of(u"エラー: 軸{0}のイテレータが実装されていません "_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ja::ER_ITERATOR_CLONE_NOT_SUPPORTED),
			$of(u"イテレータのクローンはサポートされていません"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ja::ER_UNKNOWN_AXIS_TYPE),
			$of(u"不明な軸トラバース・タイプです: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ja::ER_AXIS_NOT_SUPPORTED),
			$of(u"軸トラバーサ機能はサポートされていません: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ja::ER_NO_DTMIDS_AVAIL),
			$of(u"DTM IDはこれ以上使用できません"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ja::ER_NOT_SUPPORTED),
			$of(u"サポートされていません: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ja::ER_NODE_NON_NULL),
			$of(u"ノードはgetDTMHandleFromNodeについて非nullである必要があります"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ja::ER_COULD_NOT_RESOLVE_NODE),
			$of(u"ノードをハンドルに解決できませんでした"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ja::ER_STARTPARSE_WHILE_PARSING),
			$of(u"startParseは構文解析中に呼び出すことはできません"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ja::ER_STARTPARSE_NEEDS_SAXPARSER),
			$of(u"startParseには非nullのSAXParserが必要です"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ja::ER_COULD_NOT_INIT_PARSER),
			$of(u"次の理由でパーサーを初期化できませんでした: "_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ja::ER_EXCEPTION_CREATING_POOL),
			$of(u"プール用の新規インスタンスの作成中に発生した例外"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ja::ER_PATH_CONTAINS_INVALID_ESCAPE_SEQUENCE),
			$of(u"パスに無効なエスケープ・シーケンスが含まれています"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ja::ER_SCHEME_REQUIRED),
			$of(u"スキームが必要です。"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ja::ER_NO_SCHEME_IN_URI),
			$of(u"スキームがURIに見つかりません: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ja::ER_NO_SCHEME_INURI),
			$of(u"スキームがURIに見つかりません"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ja::ER_PATH_INVALID_CHAR),
			$of(u"パスに無効な文字が含まれています: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ja::ER_SCHEME_FROM_NULL_STRING),
			$of(u"null文字列からはスキームを設定できません"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ja::ER_SCHEME_NOT_CONFORMANT),
			$of(u"スキームが整合していません。"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ja::ER_HOST_ADDRESS_NOT_WELLFORMED),
			$of(u"ホストは整形式のアドレスではありません"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ja::ER_PORT_WHEN_HOST_NULL),
			$of(u"ホストがnullの場合はポートを設定できません"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ja::ER_INVALID_PORT),
			$of(u"無効なポート番号"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ja::ER_FRAG_FOR_GENERIC_URI),
			$of(u"汎用URIのフラグメントのみ設定できます"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ja::ER_FRAG_WHEN_PATH_NULL),
			$of(u"パスがnullの場合はフラグメントを設定できません"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ja::ER_FRAG_INVALID_CHAR),
			$of(u"フラグメントに無効文字が含まれています"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ja::ER_PARSER_IN_USE),
			$of(u"パーサーはすでに使用中です"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ja::ER_CANNOT_CHANGE_WHILE_PARSING),
			$of(u"解析中に{0} {1}を変更できません"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ja::ER_SELF_CAUSATION_NOT_PERMITTED),
			$of(u"自己原因は許可されません"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ja::ER_NO_USERINFO_IF_NO_HOST),
			$of(u"ホストが指定されていない場合はUserinfoを指定できません"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ja::ER_NO_PORT_IF_NO_HOST),
			$of(u"ホストが指定されていない場合はポートを指定できません"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ja::ER_NO_QUERY_STRING_IN_PATH),
			$of(u"問合せ文字列はパスおよび問合せ文字列内に指定できません"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ja::ER_NO_FRAGMENT_STRING_IN_PATH),
			$of(u"フラグメントはパスとフラグメントの両方に指定できません"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ja::ER_CANNOT_INIT_URI_EMPTY_PARMS),
			$of(u"URIは空のパラメータを使用して初期化できません"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ja::ER_METHOD_NOT_SUPPORTED),
			$of(u"メソッドはまだサポートされていません "_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ja::ER_INCRSAXSRCFILTER_NOT_RESTARTABLE),
			$of(u"IncrementalSAXSource_Filterは現在は再起動可能ではありません"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ja::ER_XMLRDR_NOT_BEFORE_STARTPARSE),
			$of(u"XMLReaderはstartParseリクエストより前にできません"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ja::ER_AXIS_TRAVERSER_NOT_SUPPORTED),
			$of(u"軸トラバーサ機能はサポートされていません: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ja::ER_ERRORHANDLER_CREATED_WITH_NULL_PRINTWRITER),
			$of(u"null PrintWriterによってListingErrorHandlerが作成されました。"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ja::ER_SYSTEMID_UNKNOWN),
			$of(u"不明なSystemId"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ja::ER_LOCATION_UNKNOWN),
			$of(u"エラーの場所が不明です"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ja::ER_PREFIX_MUST_RESOLVE),
			$of(u"接頭辞はネームスペースに解決される必要があります: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ja::ER_CREATEDOCUMENT_NOT_SUPPORTED),
			$of(u"createDocument()はXPathContextでサポートされていません。"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ja::ER_CHILD_HAS_NO_OWNER_DOCUMENT),
			$of(u"属性の子に所有者ドキュメントがありません。"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ja::ER_CHILD_HAS_NO_OWNER_DOCUMENT_ELEMENT),
			$of(u"属性の子に所有者ドキュメント要素がありません。"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ja::ER_CANT_OUTPUT_TEXT_BEFORE_DOC),
			$of(u"警告: ドキュメント要素の前にテキストを出力できません。  無視します..."_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ja::ER_CANT_HAVE_MORE_THAN_ONE_ROOT),
			$of(u"DOMに複数のルートを持つことはできません。"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ja::ER_ARG_LOCALNAME_NULL),
			$of(u"引数\'localName\'はnullです"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ja::ER_ARG_LOCALNAME_INVALID),
			$of(u"QNAMEのLocalnameは有効なNCNameである必要があります"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ja::ER_ARG_PREFIX_INVALID),
			$of(u"QNAMEの接頭辞は有効なNCNameである必要があります"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ja::ER_NAME_CANT_START_WITH_COLON),
			$of(u"名前の先頭をコロンにすることはできません"_s)
		}),
		$$new($ObjectArray, {
			$of("BAD_CODE"_s),
			$of(u"createMessageのパラメータが範囲外です"_s)
		}),
		$$new($ObjectArray, {
			$of("FORMAT_FAILED"_s),
			$of(u"messageFormatの呼出し中に例外がスローされました"_s)
		}),
		$$new($ObjectArray, {
			$of("line"_s),
			$of(u"行番号"_s)
		}),
		$$new($ObjectArray, {
			$of("column"_s),
			$of(u"列番号"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ja::ER_SERIALIZER_NOT_CONTENTHANDLER),
			$of(u"シリアライザ・クラス\'\'{0}\'\'はorg.xml.sax.ContentHandlerを実装しません。"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ja::ER_RESOURCE_COULD_NOT_FIND),
			$of(u"リソース[ {0} ]は見つかりませんでした。\n {1}"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ja::ER_RESOURCE_COULD_NOT_LOAD),
			$of(u"リソース[ {0} ]をロードできませんでした: {1} \n {2} \t {3}"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ja::ER_BUFFER_SIZE_LESSTHAN_ZERO),
			$of(u"バッファ・サイズ<=0"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ja::ER_INVALID_UTF16_SURROGATE),
			$of(u"無効なUTF-16サロゲートが検出されました: {0}。"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ja::ER_OIERROR),
			$of(u"IOエラー"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ja::ER_ILLEGAL_ATTRIBUTE_POSITION),
			$of(u"子ノードの後または要素が生成される前に属性{0}を追加できません。属性は無視されます。"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ja::ER_NAMESPACE_PREFIX),
			$of(u"接頭辞\'\'{0}\'\'のネームスペースが宣言されていません。"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ja::ER_STRAY_ATTRIBUTE),
			$of(u"属性\'\'{0}\'\'が要素の外側にあります。"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ja::ER_STRAY_NAMESPACE),
			$of(u"ネームスペース宣言\'\'{0}\'\'=\'\'{1}\'\'が要素の外側にあります。"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ja::ER_COULD_NOT_LOAD_RESOURCE),
			$of(u"\'\'{0}\'\'をロードできませんでした(CLASSPATHを確認してください)。現在は単にデフォルトを使用しています"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ja::ER_ILLEGAL_CHARACTER),
			$of(u"{1}の指定された出力エンコーディングで示されない整数値{0}の文字を出力しようとしました。"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_ja::ER_COULD_NOT_LOAD_METHOD_PROPERTY),
			$of(u"出力メソッド\'\'{1}\'\'のプロパティ・ファイル\'\'{0}\'\'をロードできませんでした(CLASSPATHを確認してください)"_s)
		})
	}));
}

XMLErrorResources_ja::XMLErrorResources_ja() {
}

$Class* XMLErrorResources_ja::load$($String* name, bool initialize) {
	$loadClass(XMLErrorResources_ja, name, initialize, &_XMLErrorResources_ja_ClassInfo_, clinit$XMLErrorResources_ja, allocate$XMLErrorResources_ja);
	return class$;
}

$Class* XMLErrorResources_ja::class$ = nullptr;

						} // res
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com