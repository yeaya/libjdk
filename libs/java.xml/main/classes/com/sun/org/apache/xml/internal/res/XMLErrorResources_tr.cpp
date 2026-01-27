#include <com/sun/org/apache/xml/internal/res/XMLErrorResources_tr.h>

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

$FieldInfo _XMLErrorResources_tr_FieldInfo_[] = {
	{"MAX_CODE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XMLErrorResources_tr, MAX_CODE)},
	{"MAX_WARNING", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XMLErrorResources_tr, MAX_WARNING)},
	{"MAX_OTHERS", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XMLErrorResources_tr, MAX_OTHERS)},
	{"MAX_MESSAGES", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XMLErrorResources_tr, MAX_MESSAGES)},
	{"ER_FUNCTION_NOT_SUPPORTED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_tr, ER_FUNCTION_NOT_SUPPORTED)},
	{"ER_CANNOT_OVERWRITE_CAUSE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_tr, ER_CANNOT_OVERWRITE_CAUSE)},
	{"ER_NO_DEFAULT_IMPL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_tr, ER_NO_DEFAULT_IMPL)},
	{"ER_CHUNKEDINTARRAY_NOT_SUPPORTED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_tr, ER_CHUNKEDINTARRAY_NOT_SUPPORTED)},
	{"ER_OFFSET_BIGGER_THAN_SLOT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_tr, ER_OFFSET_BIGGER_THAN_SLOT)},
	{"ER_COROUTINE_NOT_AVAIL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_tr, ER_COROUTINE_NOT_AVAIL)},
	{"ER_COROUTINE_CO_EXIT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_tr, ER_COROUTINE_CO_EXIT)},
	{"ER_COJOINROUTINESET_FAILED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_tr, ER_COJOINROUTINESET_FAILED)},
	{"ER_COROUTINE_PARAM", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_tr, ER_COROUTINE_PARAM)},
	{"ER_PARSER_DOTERMINATE_ANSWERS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_tr, ER_PARSER_DOTERMINATE_ANSWERS)},
	{"ER_NO_PARSE_CALL_WHILE_PARSING", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_tr, ER_NO_PARSE_CALL_WHILE_PARSING)},
	{"ER_TYPED_ITERATOR_AXIS_NOT_IMPLEMENTED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_tr, ER_TYPED_ITERATOR_AXIS_NOT_IMPLEMENTED)},
	{"ER_ITERATOR_AXIS_NOT_IMPLEMENTED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_tr, ER_ITERATOR_AXIS_NOT_IMPLEMENTED)},
	{"ER_ITERATOR_CLONE_NOT_SUPPORTED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_tr, ER_ITERATOR_CLONE_NOT_SUPPORTED)},
	{"ER_UNKNOWN_AXIS_TYPE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_tr, ER_UNKNOWN_AXIS_TYPE)},
	{"ER_AXIS_NOT_SUPPORTED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_tr, ER_AXIS_NOT_SUPPORTED)},
	{"ER_NO_DTMIDS_AVAIL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_tr, ER_NO_DTMIDS_AVAIL)},
	{"ER_NOT_SUPPORTED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_tr, ER_NOT_SUPPORTED)},
	{"ER_NODE_NON_NULL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_tr, ER_NODE_NON_NULL)},
	{"ER_COULD_NOT_RESOLVE_NODE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_tr, ER_COULD_NOT_RESOLVE_NODE)},
	{"ER_STARTPARSE_WHILE_PARSING", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_tr, ER_STARTPARSE_WHILE_PARSING)},
	{"ER_STARTPARSE_NEEDS_SAXPARSER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_tr, ER_STARTPARSE_NEEDS_SAXPARSER)},
	{"ER_COULD_NOT_INIT_PARSER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_tr, ER_COULD_NOT_INIT_PARSER)},
	{"ER_EXCEPTION_CREATING_POOL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_tr, ER_EXCEPTION_CREATING_POOL)},
	{"ER_PATH_CONTAINS_INVALID_ESCAPE_SEQUENCE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_tr, ER_PATH_CONTAINS_INVALID_ESCAPE_SEQUENCE)},
	{"ER_SCHEME_REQUIRED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_tr, ER_SCHEME_REQUIRED)},
	{"ER_NO_SCHEME_IN_URI", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_tr, ER_NO_SCHEME_IN_URI)},
	{"ER_NO_SCHEME_INURI", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_tr, ER_NO_SCHEME_INURI)},
	{"ER_PATH_INVALID_CHAR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_tr, ER_PATH_INVALID_CHAR)},
	{"ER_SCHEME_FROM_NULL_STRING", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_tr, ER_SCHEME_FROM_NULL_STRING)},
	{"ER_SCHEME_NOT_CONFORMANT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_tr, ER_SCHEME_NOT_CONFORMANT)},
	{"ER_HOST_ADDRESS_NOT_WELLFORMED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_tr, ER_HOST_ADDRESS_NOT_WELLFORMED)},
	{"ER_PORT_WHEN_HOST_NULL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_tr, ER_PORT_WHEN_HOST_NULL)},
	{"ER_INVALID_PORT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_tr, ER_INVALID_PORT)},
	{"ER_FRAG_FOR_GENERIC_URI", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_tr, ER_FRAG_FOR_GENERIC_URI)},
	{"ER_FRAG_WHEN_PATH_NULL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_tr, ER_FRAG_WHEN_PATH_NULL)},
	{"ER_FRAG_INVALID_CHAR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_tr, ER_FRAG_INVALID_CHAR)},
	{"ER_PARSER_IN_USE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_tr, ER_PARSER_IN_USE)},
	{"ER_CANNOT_CHANGE_WHILE_PARSING", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_tr, ER_CANNOT_CHANGE_WHILE_PARSING)},
	{"ER_SELF_CAUSATION_NOT_PERMITTED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_tr, ER_SELF_CAUSATION_NOT_PERMITTED)},
	{"ER_NO_USERINFO_IF_NO_HOST", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_tr, ER_NO_USERINFO_IF_NO_HOST)},
	{"ER_NO_PORT_IF_NO_HOST", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_tr, ER_NO_PORT_IF_NO_HOST)},
	{"ER_NO_QUERY_STRING_IN_PATH", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_tr, ER_NO_QUERY_STRING_IN_PATH)},
	{"ER_NO_FRAGMENT_STRING_IN_PATH", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_tr, ER_NO_FRAGMENT_STRING_IN_PATH)},
	{"ER_CANNOT_INIT_URI_EMPTY_PARMS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_tr, ER_CANNOT_INIT_URI_EMPTY_PARMS)},
	{"ER_METHOD_NOT_SUPPORTED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_tr, ER_METHOD_NOT_SUPPORTED)},
	{"ER_INCRSAXSRCFILTER_NOT_RESTARTABLE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_tr, ER_INCRSAXSRCFILTER_NOT_RESTARTABLE)},
	{"ER_XMLRDR_NOT_BEFORE_STARTPARSE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_tr, ER_XMLRDR_NOT_BEFORE_STARTPARSE)},
	{"ER_AXIS_TRAVERSER_NOT_SUPPORTED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_tr, ER_AXIS_TRAVERSER_NOT_SUPPORTED)},
	{"ER_ERRORHANDLER_CREATED_WITH_NULL_PRINTWRITER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_tr, ER_ERRORHANDLER_CREATED_WITH_NULL_PRINTWRITER)},
	{"ER_SYSTEMID_UNKNOWN", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_tr, ER_SYSTEMID_UNKNOWN)},
	{"ER_LOCATION_UNKNOWN", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_tr, ER_LOCATION_UNKNOWN)},
	{"ER_PREFIX_MUST_RESOLVE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_tr, ER_PREFIX_MUST_RESOLVE)},
	{"ER_CREATEDOCUMENT_NOT_SUPPORTED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_tr, ER_CREATEDOCUMENT_NOT_SUPPORTED)},
	{"ER_CHILD_HAS_NO_OWNER_DOCUMENT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_tr, ER_CHILD_HAS_NO_OWNER_DOCUMENT)},
	{"ER_CHILD_HAS_NO_OWNER_DOCUMENT_ELEMENT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_tr, ER_CHILD_HAS_NO_OWNER_DOCUMENT_ELEMENT)},
	{"ER_CANT_OUTPUT_TEXT_BEFORE_DOC", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_tr, ER_CANT_OUTPUT_TEXT_BEFORE_DOC)},
	{"ER_CANT_HAVE_MORE_THAN_ONE_ROOT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_tr, ER_CANT_HAVE_MORE_THAN_ONE_ROOT)},
	{"ER_ARG_LOCALNAME_NULL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_tr, ER_ARG_LOCALNAME_NULL)},
	{"ER_ARG_LOCALNAME_INVALID", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_tr, ER_ARG_LOCALNAME_INVALID)},
	{"ER_ARG_PREFIX_INVALID", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_tr, ER_ARG_PREFIX_INVALID)},
	{"ER_RESOURCE_COULD_NOT_FIND", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_tr, ER_RESOURCE_COULD_NOT_FIND)},
	{"ER_RESOURCE_COULD_NOT_LOAD", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_tr, ER_RESOURCE_COULD_NOT_LOAD)},
	{"ER_BUFFER_SIZE_LESSTHAN_ZERO", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_tr, ER_BUFFER_SIZE_LESSTHAN_ZERO)},
	{"ER_INVALID_UTF16_SURROGATE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_tr, ER_INVALID_UTF16_SURROGATE)},
	{"ER_OIERROR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_tr, ER_OIERROR)},
	{"ER_NAMESPACE_PREFIX", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_tr, ER_NAMESPACE_PREFIX)},
	{"ER_STRAY_ATTRIBUTE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_tr, ER_STRAY_ATTRIBUTE)},
	{"ER_STRAY_NAMESPACE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_tr, ER_STRAY_NAMESPACE)},
	{"ER_COULD_NOT_LOAD_RESOURCE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_tr, ER_COULD_NOT_LOAD_RESOURCE)},
	{"ER_COULD_NOT_LOAD_METHOD_PROPERTY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_tr, ER_COULD_NOT_LOAD_METHOD_PROPERTY)},
	{"ER_SERIALIZER_NOT_CONTENTHANDLER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_tr, ER_SERIALIZER_NOT_CONTENTHANDLER)},
	{"ER_ILLEGAL_ATTRIBUTE_POSITION", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_tr, ER_ILLEGAL_ATTRIBUTE_POSITION)},
	{"_contents", "[[Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XMLErrorResources_tr, _contents)},
	{}
};

$MethodInfo _XMLErrorResources_tr_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(XMLErrorResources_tr, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(XMLErrorResources_tr, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _XMLErrorResources_tr_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.res.XMLErrorResources_tr",
	"java.util.ListResourceBundle",
	nullptr,
	_XMLErrorResources_tr_FieldInfo_,
	_XMLErrorResources_tr_MethodInfo_
};

$Object* allocate$XMLErrorResources_tr($Class* clazz) {
	return $of($alloc(XMLErrorResources_tr));
}

$String* XMLErrorResources_tr::ER_FUNCTION_NOT_SUPPORTED = nullptr;
$String* XMLErrorResources_tr::ER_CANNOT_OVERWRITE_CAUSE = nullptr;
$String* XMLErrorResources_tr::ER_NO_DEFAULT_IMPL = nullptr;
$String* XMLErrorResources_tr::ER_CHUNKEDINTARRAY_NOT_SUPPORTED = nullptr;
$String* XMLErrorResources_tr::ER_OFFSET_BIGGER_THAN_SLOT = nullptr;
$String* XMLErrorResources_tr::ER_COROUTINE_NOT_AVAIL = nullptr;
$String* XMLErrorResources_tr::ER_COROUTINE_CO_EXIT = nullptr;
$String* XMLErrorResources_tr::ER_COJOINROUTINESET_FAILED = nullptr;
$String* XMLErrorResources_tr::ER_COROUTINE_PARAM = nullptr;
$String* XMLErrorResources_tr::ER_PARSER_DOTERMINATE_ANSWERS = nullptr;
$String* XMLErrorResources_tr::ER_NO_PARSE_CALL_WHILE_PARSING = nullptr;
$String* XMLErrorResources_tr::ER_TYPED_ITERATOR_AXIS_NOT_IMPLEMENTED = nullptr;
$String* XMLErrorResources_tr::ER_ITERATOR_AXIS_NOT_IMPLEMENTED = nullptr;
$String* XMLErrorResources_tr::ER_ITERATOR_CLONE_NOT_SUPPORTED = nullptr;
$String* XMLErrorResources_tr::ER_UNKNOWN_AXIS_TYPE = nullptr;
$String* XMLErrorResources_tr::ER_AXIS_NOT_SUPPORTED = nullptr;
$String* XMLErrorResources_tr::ER_NO_DTMIDS_AVAIL = nullptr;
$String* XMLErrorResources_tr::ER_NOT_SUPPORTED = nullptr;
$String* XMLErrorResources_tr::ER_NODE_NON_NULL = nullptr;
$String* XMLErrorResources_tr::ER_COULD_NOT_RESOLVE_NODE = nullptr;
$String* XMLErrorResources_tr::ER_STARTPARSE_WHILE_PARSING = nullptr;
$String* XMLErrorResources_tr::ER_STARTPARSE_NEEDS_SAXPARSER = nullptr;
$String* XMLErrorResources_tr::ER_COULD_NOT_INIT_PARSER = nullptr;
$String* XMLErrorResources_tr::ER_EXCEPTION_CREATING_POOL = nullptr;
$String* XMLErrorResources_tr::ER_PATH_CONTAINS_INVALID_ESCAPE_SEQUENCE = nullptr;
$String* XMLErrorResources_tr::ER_SCHEME_REQUIRED = nullptr;
$String* XMLErrorResources_tr::ER_NO_SCHEME_IN_URI = nullptr;
$String* XMLErrorResources_tr::ER_NO_SCHEME_INURI = nullptr;
$String* XMLErrorResources_tr::ER_PATH_INVALID_CHAR = nullptr;
$String* XMLErrorResources_tr::ER_SCHEME_FROM_NULL_STRING = nullptr;
$String* XMLErrorResources_tr::ER_SCHEME_NOT_CONFORMANT = nullptr;
$String* XMLErrorResources_tr::ER_HOST_ADDRESS_NOT_WELLFORMED = nullptr;
$String* XMLErrorResources_tr::ER_PORT_WHEN_HOST_NULL = nullptr;
$String* XMLErrorResources_tr::ER_INVALID_PORT = nullptr;
$String* XMLErrorResources_tr::ER_FRAG_FOR_GENERIC_URI = nullptr;
$String* XMLErrorResources_tr::ER_FRAG_WHEN_PATH_NULL = nullptr;
$String* XMLErrorResources_tr::ER_FRAG_INVALID_CHAR = nullptr;
$String* XMLErrorResources_tr::ER_PARSER_IN_USE = nullptr;
$String* XMLErrorResources_tr::ER_CANNOT_CHANGE_WHILE_PARSING = nullptr;
$String* XMLErrorResources_tr::ER_SELF_CAUSATION_NOT_PERMITTED = nullptr;
$String* XMLErrorResources_tr::ER_NO_USERINFO_IF_NO_HOST = nullptr;
$String* XMLErrorResources_tr::ER_NO_PORT_IF_NO_HOST = nullptr;
$String* XMLErrorResources_tr::ER_NO_QUERY_STRING_IN_PATH = nullptr;
$String* XMLErrorResources_tr::ER_NO_FRAGMENT_STRING_IN_PATH = nullptr;
$String* XMLErrorResources_tr::ER_CANNOT_INIT_URI_EMPTY_PARMS = nullptr;
$String* XMLErrorResources_tr::ER_METHOD_NOT_SUPPORTED = nullptr;
$String* XMLErrorResources_tr::ER_INCRSAXSRCFILTER_NOT_RESTARTABLE = nullptr;
$String* XMLErrorResources_tr::ER_XMLRDR_NOT_BEFORE_STARTPARSE = nullptr;
$String* XMLErrorResources_tr::ER_AXIS_TRAVERSER_NOT_SUPPORTED = nullptr;
$String* XMLErrorResources_tr::ER_ERRORHANDLER_CREATED_WITH_NULL_PRINTWRITER = nullptr;
$String* XMLErrorResources_tr::ER_SYSTEMID_UNKNOWN = nullptr;
$String* XMLErrorResources_tr::ER_LOCATION_UNKNOWN = nullptr;
$String* XMLErrorResources_tr::ER_PREFIX_MUST_RESOLVE = nullptr;
$String* XMLErrorResources_tr::ER_CREATEDOCUMENT_NOT_SUPPORTED = nullptr;
$String* XMLErrorResources_tr::ER_CHILD_HAS_NO_OWNER_DOCUMENT = nullptr;
$String* XMLErrorResources_tr::ER_CHILD_HAS_NO_OWNER_DOCUMENT_ELEMENT = nullptr;
$String* XMLErrorResources_tr::ER_CANT_OUTPUT_TEXT_BEFORE_DOC = nullptr;
$String* XMLErrorResources_tr::ER_CANT_HAVE_MORE_THAN_ONE_ROOT = nullptr;
$String* XMLErrorResources_tr::ER_ARG_LOCALNAME_NULL = nullptr;
$String* XMLErrorResources_tr::ER_ARG_LOCALNAME_INVALID = nullptr;
$String* XMLErrorResources_tr::ER_ARG_PREFIX_INVALID = nullptr;
$String* XMLErrorResources_tr::ER_RESOURCE_COULD_NOT_FIND = nullptr;
$String* XMLErrorResources_tr::ER_RESOURCE_COULD_NOT_LOAD = nullptr;
$String* XMLErrorResources_tr::ER_BUFFER_SIZE_LESSTHAN_ZERO = nullptr;
$String* XMLErrorResources_tr::ER_INVALID_UTF16_SURROGATE = nullptr;
$String* XMLErrorResources_tr::ER_OIERROR = nullptr;
$String* XMLErrorResources_tr::ER_NAMESPACE_PREFIX = nullptr;
$String* XMLErrorResources_tr::ER_STRAY_ATTRIBUTE = nullptr;
$String* XMLErrorResources_tr::ER_STRAY_NAMESPACE = nullptr;
$String* XMLErrorResources_tr::ER_COULD_NOT_LOAD_RESOURCE = nullptr;
$String* XMLErrorResources_tr::ER_COULD_NOT_LOAD_METHOD_PROPERTY = nullptr;
$String* XMLErrorResources_tr::ER_SERIALIZER_NOT_CONTENTHANDLER = nullptr;
$String* XMLErrorResources_tr::ER_ILLEGAL_ATTRIBUTE_POSITION = nullptr;
$ObjectArray2* XMLErrorResources_tr::_contents = nullptr;

void XMLErrorResources_tr::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* XMLErrorResources_tr::getContents() {
	return XMLErrorResources_tr::_contents;
}

void clinit$XMLErrorResources_tr($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(XMLErrorResources_tr::ER_FUNCTION_NOT_SUPPORTED, "ER_FUNCTION_NOT_SUPPORTED"_s);
	$assignStatic(XMLErrorResources_tr::ER_CANNOT_OVERWRITE_CAUSE, "ER_CANNOT_OVERWRITE_CAUSE"_s);
	$assignStatic(XMLErrorResources_tr::ER_NO_DEFAULT_IMPL, "ER_NO_DEFAULT_IMPL"_s);
	$assignStatic(XMLErrorResources_tr::ER_CHUNKEDINTARRAY_NOT_SUPPORTED, "ER_CHUNKEDINTARRAY_NOT_SUPPORTED"_s);
	$assignStatic(XMLErrorResources_tr::ER_OFFSET_BIGGER_THAN_SLOT, "ER_OFFSET_BIGGER_THAN_SLOT"_s);
	$assignStatic(XMLErrorResources_tr::ER_COROUTINE_NOT_AVAIL, "ER_COROUTINE_NOT_AVAIL"_s);
	$assignStatic(XMLErrorResources_tr::ER_COROUTINE_CO_EXIT, "ER_COROUTINE_CO_EXIT"_s);
	$assignStatic(XMLErrorResources_tr::ER_COJOINROUTINESET_FAILED, "ER_COJOINROUTINESET_FAILED"_s);
	$assignStatic(XMLErrorResources_tr::ER_COROUTINE_PARAM, "ER_COROUTINE_PARAM"_s);
	$assignStatic(XMLErrorResources_tr::ER_PARSER_DOTERMINATE_ANSWERS, "ER_PARSER_DOTERMINATE_ANSWERS"_s);
	$assignStatic(XMLErrorResources_tr::ER_NO_PARSE_CALL_WHILE_PARSING, "ER_NO_PARSE_CALL_WHILE_PARSING"_s);
	$assignStatic(XMLErrorResources_tr::ER_TYPED_ITERATOR_AXIS_NOT_IMPLEMENTED, "ER_TYPED_ITERATOR_AXIS_NOT_IMPLEMENTED"_s);
	$assignStatic(XMLErrorResources_tr::ER_ITERATOR_AXIS_NOT_IMPLEMENTED, "ER_ITERATOR_AXIS_NOT_IMPLEMENTED"_s);
	$assignStatic(XMLErrorResources_tr::ER_ITERATOR_CLONE_NOT_SUPPORTED, "ER_ITERATOR_CLONE_NOT_SUPPORTED"_s);
	$assignStatic(XMLErrorResources_tr::ER_UNKNOWN_AXIS_TYPE, "ER_UNKNOWN_AXIS_TYPE"_s);
	$assignStatic(XMLErrorResources_tr::ER_AXIS_NOT_SUPPORTED, "ER_AXIS_NOT_SUPPORTED"_s);
	$assignStatic(XMLErrorResources_tr::ER_NO_DTMIDS_AVAIL, "ER_NO_DTMIDS_AVAIL"_s);
	$assignStatic(XMLErrorResources_tr::ER_NOT_SUPPORTED, "ER_NOT_SUPPORTED"_s);
	$assignStatic(XMLErrorResources_tr::ER_NODE_NON_NULL, "ER_NODE_NON_NULL"_s);
	$assignStatic(XMLErrorResources_tr::ER_COULD_NOT_RESOLVE_NODE, "ER_COULD_NOT_RESOLVE_NODE"_s);
	$assignStatic(XMLErrorResources_tr::ER_STARTPARSE_WHILE_PARSING, "ER_STARTPARSE_WHILE_PARSING"_s);
	$assignStatic(XMLErrorResources_tr::ER_STARTPARSE_NEEDS_SAXPARSER, "ER_STARTPARSE_NEEDS_SAXPARSER"_s);
	$assignStatic(XMLErrorResources_tr::ER_COULD_NOT_INIT_PARSER, "ER_COULD_NOT_INIT_PARSER"_s);
	$assignStatic(XMLErrorResources_tr::ER_EXCEPTION_CREATING_POOL, "ER_EXCEPTION_CREATING_POOL"_s);
	$assignStatic(XMLErrorResources_tr::ER_PATH_CONTAINS_INVALID_ESCAPE_SEQUENCE, "ER_PATH_CONTAINS_INVALID_ESCAPE_SEQUENCE"_s);
	$assignStatic(XMLErrorResources_tr::ER_SCHEME_REQUIRED, "ER_SCHEME_REQUIRED"_s);
	$assignStatic(XMLErrorResources_tr::ER_NO_SCHEME_IN_URI, "ER_NO_SCHEME_IN_URI"_s);
	$assignStatic(XMLErrorResources_tr::ER_NO_SCHEME_INURI, "ER_NO_SCHEME_INURI"_s);
	$assignStatic(XMLErrorResources_tr::ER_PATH_INVALID_CHAR, "ER_PATH_INVALID_CHAR"_s);
	$assignStatic(XMLErrorResources_tr::ER_SCHEME_FROM_NULL_STRING, "ER_SCHEME_FROM_NULL_STRING"_s);
	$assignStatic(XMLErrorResources_tr::ER_SCHEME_NOT_CONFORMANT, "ER_SCHEME_NOT_CONFORMANT"_s);
	$assignStatic(XMLErrorResources_tr::ER_HOST_ADDRESS_NOT_WELLFORMED, "ER_HOST_ADDRESS_NOT_WELLFORMED"_s);
	$assignStatic(XMLErrorResources_tr::ER_PORT_WHEN_HOST_NULL, "ER_PORT_WHEN_HOST_NULL"_s);
	$assignStatic(XMLErrorResources_tr::ER_INVALID_PORT, "ER_INVALID_PORT"_s);
	$assignStatic(XMLErrorResources_tr::ER_FRAG_FOR_GENERIC_URI, "ER_FRAG_FOR_GENERIC_URI"_s);
	$assignStatic(XMLErrorResources_tr::ER_FRAG_WHEN_PATH_NULL, "ER_FRAG_WHEN_PATH_NULL"_s);
	$assignStatic(XMLErrorResources_tr::ER_FRAG_INVALID_CHAR, "ER_FRAG_INVALID_CHAR"_s);
	$assignStatic(XMLErrorResources_tr::ER_PARSER_IN_USE, "ER_PARSER_IN_USE"_s);
	$assignStatic(XMLErrorResources_tr::ER_CANNOT_CHANGE_WHILE_PARSING, "ER_CANNOT_CHANGE_WHILE_PARSING"_s);
	$assignStatic(XMLErrorResources_tr::ER_SELF_CAUSATION_NOT_PERMITTED, "ER_SELF_CAUSATION_NOT_PERMITTED"_s);
	$assignStatic(XMLErrorResources_tr::ER_NO_USERINFO_IF_NO_HOST, "ER_NO_USERINFO_IF_NO_HOST"_s);
	$assignStatic(XMLErrorResources_tr::ER_NO_PORT_IF_NO_HOST, "ER_NO_PORT_IF_NO_HOST"_s);
	$assignStatic(XMLErrorResources_tr::ER_NO_QUERY_STRING_IN_PATH, "ER_NO_QUERY_STRING_IN_PATH"_s);
	$assignStatic(XMLErrorResources_tr::ER_NO_FRAGMENT_STRING_IN_PATH, "ER_NO_FRAGMENT_STRING_IN_PATH"_s);
	$assignStatic(XMLErrorResources_tr::ER_CANNOT_INIT_URI_EMPTY_PARMS, "ER_CANNOT_INIT_URI_EMPTY_PARMS"_s);
	$assignStatic(XMLErrorResources_tr::ER_METHOD_NOT_SUPPORTED, "ER_METHOD_NOT_SUPPORTED"_s);
	$assignStatic(XMLErrorResources_tr::ER_INCRSAXSRCFILTER_NOT_RESTARTABLE, "ER_INCRSAXSRCFILTER_NOT_RESTARTABLE"_s);
	$assignStatic(XMLErrorResources_tr::ER_XMLRDR_NOT_BEFORE_STARTPARSE, "ER_XMLRDR_NOT_BEFORE_STARTPARSE"_s);
	$assignStatic(XMLErrorResources_tr::ER_AXIS_TRAVERSER_NOT_SUPPORTED, "ER_AXIS_TRAVERSER_NOT_SUPPORTED"_s);
	$assignStatic(XMLErrorResources_tr::ER_ERRORHANDLER_CREATED_WITH_NULL_PRINTWRITER, "ER_ERRORHANDLER_CREATED_WITH_NULL_PRINTWRITER"_s);
	$assignStatic(XMLErrorResources_tr::ER_SYSTEMID_UNKNOWN, "ER_SYSTEMID_UNKNOWN"_s);
	$assignStatic(XMLErrorResources_tr::ER_LOCATION_UNKNOWN, "ER_LOCATION_UNKNOWN"_s);
	$assignStatic(XMLErrorResources_tr::ER_PREFIX_MUST_RESOLVE, "ER_PREFIX_MUST_RESOLVE"_s);
	$assignStatic(XMLErrorResources_tr::ER_CREATEDOCUMENT_NOT_SUPPORTED, "ER_CREATEDOCUMENT_NOT_SUPPORTED"_s);
	$assignStatic(XMLErrorResources_tr::ER_CHILD_HAS_NO_OWNER_DOCUMENT, "ER_CHILD_HAS_NO_OWNER_DOCUMENT"_s);
	$assignStatic(XMLErrorResources_tr::ER_CHILD_HAS_NO_OWNER_DOCUMENT_ELEMENT, "ER_CHILD_HAS_NO_OWNER_DOCUMENT_ELEMENT"_s);
	$assignStatic(XMLErrorResources_tr::ER_CANT_OUTPUT_TEXT_BEFORE_DOC, "ER_CANT_OUTPUT_TEXT_BEFORE_DOC"_s);
	$assignStatic(XMLErrorResources_tr::ER_CANT_HAVE_MORE_THAN_ONE_ROOT, "ER_CANT_HAVE_MORE_THAN_ONE_ROOT"_s);
	$assignStatic(XMLErrorResources_tr::ER_ARG_LOCALNAME_NULL, "ER_ARG_LOCALNAME_NULL"_s);
	$assignStatic(XMLErrorResources_tr::ER_ARG_LOCALNAME_INVALID, "ER_ARG_LOCALNAME_INVALID"_s);
	$assignStatic(XMLErrorResources_tr::ER_ARG_PREFIX_INVALID, "ER_ARG_PREFIX_INVALID"_s);
	$assignStatic(XMLErrorResources_tr::ER_RESOURCE_COULD_NOT_FIND, "ER_RESOURCE_COULD_NOT_FIND"_s);
	$assignStatic(XMLErrorResources_tr::ER_RESOURCE_COULD_NOT_LOAD, "ER_RESOURCE_COULD_NOT_LOAD"_s);
	$assignStatic(XMLErrorResources_tr::ER_BUFFER_SIZE_LESSTHAN_ZERO, "ER_BUFFER_SIZE_LESSTHAN_ZERO"_s);
	$assignStatic(XMLErrorResources_tr::ER_INVALID_UTF16_SURROGATE, "ER_INVALID_UTF16_SURROGATE"_s);
	$assignStatic(XMLErrorResources_tr::ER_OIERROR, "ER_OIERROR"_s);
	$assignStatic(XMLErrorResources_tr::ER_NAMESPACE_PREFIX, "ER_NAMESPACE_PREFIX"_s);
	$assignStatic(XMLErrorResources_tr::ER_STRAY_ATTRIBUTE, "ER_STRAY_ATTIRBUTE"_s);
	$assignStatic(XMLErrorResources_tr::ER_STRAY_NAMESPACE, "ER_STRAY_NAMESPACE"_s);
	$assignStatic(XMLErrorResources_tr::ER_COULD_NOT_LOAD_RESOURCE, "ER_COULD_NOT_LOAD_RESOURCE"_s);
	$assignStatic(XMLErrorResources_tr::ER_COULD_NOT_LOAD_METHOD_PROPERTY, "ER_COULD_NOT_LOAD_METHOD_PROPERTY"_s);
	$assignStatic(XMLErrorResources_tr::ER_SERIALIZER_NOT_CONTENTHANDLER, "ER_SERIALIZER_NOT_CONTENTHANDLER"_s);
	$assignStatic(XMLErrorResources_tr::ER_ILLEGAL_ATTRIBUTE_POSITION, "ER_ILLEGAL_ATTRIBUTE_POSITION"_s);
	$assignStatic(XMLErrorResources_tr::_contents, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("ER0000"_s),
			$of("{0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_tr::ER_FUNCTION_NOT_SUPPORTED),
			$of(u"İşlev desteklenmiyor!"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_tr::ER_CANNOT_OVERWRITE_CAUSE),
			$of(u"Nedenin üzerine yazılamaz"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_tr::ER_NO_DEFAULT_IMPL),
			$of(u"Varsayılan uygulama bulunamadı"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_tr::ER_CHUNKEDINTARRAY_NOT_SUPPORTED),
			$of(u"ChunkedIntArray({0}) şu an desteklenmiyor"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_tr::ER_OFFSET_BIGGER_THAN_SLOT),
			$of(u"Göreli konum yuvadan büyük"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_tr::ER_COROUTINE_NOT_AVAIL),
			$of(u"Coroutine kullanılamıyor, id={0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_tr::ER_COROUTINE_CO_EXIT),
			$of(u"CoroutineManager co_exit() isteği aldı"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_tr::ER_COJOINROUTINESET_FAILED),
			$of(u"co_joinCoroutineSet() başarısız oldu"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_tr::ER_COROUTINE_PARAM),
			$of(u"Coroutine değiştirgesi hatası ({0})"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_tr::ER_PARSER_DOTERMINATE_ANSWERS),
			$of(u"\nBEKLENMEYEN: Parser doTerminate yanıtı {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_tr::ER_NO_PARSE_CALL_WHILE_PARSING),
			$of(u"Ayrıştırma sırasında parse çağrılamaz"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_tr::ER_TYPED_ITERATOR_AXIS_NOT_IMPLEMENTED),
			$of(u"Hata: {0} ekseni için tip atanmış yineleyici gerçekleştirilmedi"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_tr::ER_ITERATOR_AXIS_NOT_IMPLEMENTED),
			$of(u"Hata: {0} ekseni için yineleyici gerçekleştirilmedi"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_tr::ER_ITERATOR_CLONE_NOT_SUPPORTED),
			$of(u"Yineleyici eşkopyası desteklenmiyor"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_tr::ER_UNKNOWN_AXIS_TYPE),
			$of(u"Bilinmeyen eksen dolaşma tipi: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_tr::ER_AXIS_NOT_SUPPORTED),
			$of(u"Eksen dolaşıcı desteklenmiyor: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_tr::ER_NO_DTMIDS_AVAIL),
			$of(u"Kullanılabilecek başka DTM tanıtıcısı yok"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_tr::ER_NOT_SUPPORTED),
			$of("Desteklenmiyor: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_tr::ER_NODE_NON_NULL),
			$of(u"getDTMHandleFromNode için düğüm boş değerli olmamalıdır"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_tr::ER_COULD_NOT_RESOLVE_NODE),
			$of(u"Düğüm tanıtıcı değere çözülemedi"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_tr::ER_STARTPARSE_WHILE_PARSING),
			$of(u"Ayrıştırma sırasında startParse çağrılamaz"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_tr::ER_STARTPARSE_NEEDS_SAXPARSER),
			$of(u"startParse için boş değerli olmayan SAXParser gerekiyor"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_tr::ER_COULD_NOT_INIT_PARSER),
			$of(u"Ayrıştırıcı bununla kullanıma hazırlanamadı"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_tr::ER_EXCEPTION_CREATING_POOL),
			$of(u"Havuz için yeni örnek yaratılırken kural dışı durum"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_tr::ER_PATH_CONTAINS_INVALID_ESCAPE_SEQUENCE),
			$of(u"Yol geçersiz kaçış dizisi içeriyor"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_tr::ER_SCHEME_REQUIRED),
			$of(u"Şema gerekli!"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_tr::ER_NO_SCHEME_IN_URI),
			$of(u"URI içinde şema bulunamadı: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_tr::ER_NO_SCHEME_INURI),
			$of(u"URI içinde şema bulunamadı"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_tr::ER_PATH_INVALID_CHAR),
			$of(u"Yol geçersiz karakter içeriyor: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_tr::ER_SCHEME_FROM_NULL_STRING),
			$of(u"Boş değerli dizgiden şema tanımlanamaz"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_tr::ER_SCHEME_NOT_CONFORMANT),
			$of(u"Şema uyumlu değil."_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_tr::ER_HOST_ADDRESS_NOT_WELLFORMED),
			$of(u"Anasistem doğru biçimli bir adres değil"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_tr::ER_PORT_WHEN_HOST_NULL),
			$of(u"Anasistem boş değerliyken kapı tanımlanamaz"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_tr::ER_INVALID_PORT),
			$of(u"Kapı numarası geçersiz"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_tr::ER_FRAG_FOR_GENERIC_URI),
			$of(u"Parça yalnızca soysal URI için tanımlanabilir"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_tr::ER_FRAG_WHEN_PATH_NULL),
			$of(u"Yol boş değerliyken parça tanımlanamaz"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_tr::ER_FRAG_INVALID_CHAR),
			$of(u"Parça geçersiz karakter içeriyor"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_tr::ER_PARSER_IN_USE),
			$of(u"Ayrıştırıcı kullanımda"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_tr::ER_CANNOT_CHANGE_WHILE_PARSING),
			$of(u"Ayrıştırma sırasında {0} {1} değiştirilemez"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_tr::ER_SELF_CAUSATION_NOT_PERMITTED),
			$of(u"Öznedenselliğe izin verilmez"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_tr::ER_NO_USERINFO_IF_NO_HOST),
			$of(u"Anasistem belirtilmediyse kullanıcı bilgisi belirtilemez"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_tr::ER_NO_PORT_IF_NO_HOST),
			$of(u"Anasistem belirtilmediyse kapı belirtilemez"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_tr::ER_NO_QUERY_STRING_IN_PATH),
			$of("Yol ve sorgu dizgisinde sorgu dizgisi belirtilemez"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_tr::ER_NO_FRAGMENT_STRING_IN_PATH),
			$of(u"Parça hem yolda, hem de parçada belirtilemez"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_tr::ER_CANNOT_INIT_URI_EMPTY_PARMS),
			$of(u"Boş değiştirgelerle URI kullanıma hazırlanamaz"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_tr::ER_METHOD_NOT_SUPPORTED),
			$of(u"Yöntem henüz desteklenmiyor"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_tr::ER_INCRSAXSRCFILTER_NOT_RESTARTABLE),
			$of(u"IncrementalSAXSource_Filter şu an yeniden başlatılabilir durumda değil"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_tr::ER_XMLRDR_NOT_BEFORE_STARTPARSE),
			$of(u"XMLReader, startParse isteğinden önce olmaz"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_tr::ER_AXIS_TRAVERSER_NOT_SUPPORTED),
			$of(u"Eksen dolaşıcı desteklenmiyor: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_tr::ER_ERRORHANDLER_CREATED_WITH_NULL_PRINTWRITER),
			$of(u"ListingErrorHandler boş değerli PrintWriter ile yaratıldı!"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_tr::ER_SYSTEMID_UNKNOWN),
			$of("SystemId bilinmiyor"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_tr::ER_LOCATION_UNKNOWN),
			$of("Hata yeri bilinmiyor"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_tr::ER_PREFIX_MUST_RESOLVE),
			$of(u"Önek bir ad alanına çözülmelidir: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_tr::ER_CREATEDOCUMENT_NOT_SUPPORTED),
			$of(u"XPathContext içinde createDocument() desteklenmiyor!"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_tr::ER_CHILD_HAS_NO_OWNER_DOCUMENT),
			$of(u"Özniteliğin alt öğesinin iye belgesi yok!"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_tr::ER_CHILD_HAS_NO_OWNER_DOCUMENT_ELEMENT),
			$of(u"Özniteliğin alt öğesinin iye belge öğesi yok!"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_tr::ER_CANT_OUTPUT_TEXT_BEFORE_DOC),
			$of(u"Uyarı: Belge öğesinden önce metin çıkışı olamaz!  Yoksayılıyor..."_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_tr::ER_CANT_HAVE_MORE_THAN_ONE_ROOT),
			$of(u"DOM üzerinde birden fazla kök olamaz!"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_tr::ER_ARG_LOCALNAME_NULL),
			$of(u"\'localName\' bağımsız değiştirgesi boş değerli"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_tr::ER_ARG_LOCALNAME_INVALID),
			$of(u"QNAME içindeki yerel ad (localname) geçerli bir NCName olmalıdır"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_tr::ER_ARG_PREFIX_INVALID),
			$of(u"QNAME içindeki önek geçerli bir NCName olmalıdır"_s)
		}),
		$$new($ObjectArray, {
			$of("BAD_CODE"_s),
			$of(u"createMessage için kullanılan değiştirge sınırların dışında"_s)
		}),
		$$new($ObjectArray, {
			$of("FORMAT_FAILED"_s),
			$of(u"messageFormat çağrısı sırasında kural dışı durum yayınlandı"_s)
		}),
		$$new($ObjectArray, {
			$of("line"_s),
			$of(u"Satır #"_s)
		}),
		$$new($ObjectArray, {
			$of("column"_s),
			$of("Kolon #"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_tr::ER_SERIALIZER_NOT_CONTENTHANDLER),
			$of(u"Diziselleştirici sınıfı \'\'{0}\'\' org.xml.sax.ContentHandler işlevini uygulamıyor."_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_tr::ER_RESOURCE_COULD_NOT_FIND),
			$of(u"Kaynak [ {0} ] bulunamadı.\n {1}"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_tr::ER_RESOURCE_COULD_NOT_LOAD),
			$of(u"Kaynak [ {0} ] yükleyemedi: {1} \n {2} \t {3}"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_tr::ER_BUFFER_SIZE_LESSTHAN_ZERO),
			$of(u"Arabellek büyüklüğü <=0"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_tr::ER_INVALID_UTF16_SURROGATE),
			$of(u"UTF-16 yerine kullanılan değer geçersiz: {0} ?"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_tr::ER_OIERROR),
			$of(u"GÇ hatası"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_tr::ER_ILLEGAL_ATTRIBUTE_POSITION),
			$of(u"Alt düğümlerden sonra ya da bir öğe üretilmeden önce {0} özniteliği eklenemez. Öznitelik yoksayılacak."_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_tr::ER_NAMESPACE_PREFIX),
			$of(u"\'\'{0}\'\' önekine ilişkin ad alanı bildirilmedi."_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_tr::ER_STRAY_ATTRIBUTE),
			$of(u"\'\'{0}\'\' özniteliği öğenin dışında."_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_tr::ER_STRAY_NAMESPACE),
			$of(u"\'\'{0}\'\'=\'\'{1}\'\' ad alanı bildirimi öğenin dışında."_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_tr::ER_COULD_NOT_LOAD_RESOURCE),
			$of(u"\'\'{0}\'\' yüklenemedi (CLASSPATH değişkeninizi inceleyin), yalnızca varsayılanlar kullanılıyor"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_tr::ER_COULD_NOT_LOAD_METHOD_PROPERTY),
			$of(u"\'\'{1}\'\' çıkış yöntemi için \'\'{0}\'\' özellik dosyası yüklenemedi (CLASSPATH değişkenini inceleyin)"_s)
		})
	}));
}

XMLErrorResources_tr::XMLErrorResources_tr() {
}

$Class* XMLErrorResources_tr::load$($String* name, bool initialize) {
	$loadClass(XMLErrorResources_tr, name, initialize, &_XMLErrorResources_tr_ClassInfo_, clinit$XMLErrorResources_tr, allocate$XMLErrorResources_tr);
	return class$;
}

$Class* XMLErrorResources_tr::class$ = nullptr;

						} // res
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com