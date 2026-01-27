#include <com/sun/org/apache/xml/internal/res/XMLErrorResources_fr.h>

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

$FieldInfo _XMLErrorResources_fr_FieldInfo_[] = {
	{"MAX_CODE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XMLErrorResources_fr, MAX_CODE)},
	{"MAX_WARNING", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XMLErrorResources_fr, MAX_WARNING)},
	{"MAX_OTHERS", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XMLErrorResources_fr, MAX_OTHERS)},
	{"MAX_MESSAGES", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XMLErrorResources_fr, MAX_MESSAGES)},
	{"ER_FUNCTION_NOT_SUPPORTED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_fr, ER_FUNCTION_NOT_SUPPORTED)},
	{"ER_CANNOT_OVERWRITE_CAUSE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_fr, ER_CANNOT_OVERWRITE_CAUSE)},
	{"ER_NO_DEFAULT_IMPL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_fr, ER_NO_DEFAULT_IMPL)},
	{"ER_CHUNKEDINTARRAY_NOT_SUPPORTED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_fr, ER_CHUNKEDINTARRAY_NOT_SUPPORTED)},
	{"ER_OFFSET_BIGGER_THAN_SLOT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_fr, ER_OFFSET_BIGGER_THAN_SLOT)},
	{"ER_COROUTINE_NOT_AVAIL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_fr, ER_COROUTINE_NOT_AVAIL)},
	{"ER_COROUTINE_CO_EXIT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_fr, ER_COROUTINE_CO_EXIT)},
	{"ER_COJOINROUTINESET_FAILED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_fr, ER_COJOINROUTINESET_FAILED)},
	{"ER_COROUTINE_PARAM", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_fr, ER_COROUTINE_PARAM)},
	{"ER_PARSER_DOTERMINATE_ANSWERS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_fr, ER_PARSER_DOTERMINATE_ANSWERS)},
	{"ER_NO_PARSE_CALL_WHILE_PARSING", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_fr, ER_NO_PARSE_CALL_WHILE_PARSING)},
	{"ER_TYPED_ITERATOR_AXIS_NOT_IMPLEMENTED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_fr, ER_TYPED_ITERATOR_AXIS_NOT_IMPLEMENTED)},
	{"ER_ITERATOR_AXIS_NOT_IMPLEMENTED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_fr, ER_ITERATOR_AXIS_NOT_IMPLEMENTED)},
	{"ER_ITERATOR_CLONE_NOT_SUPPORTED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_fr, ER_ITERATOR_CLONE_NOT_SUPPORTED)},
	{"ER_UNKNOWN_AXIS_TYPE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_fr, ER_UNKNOWN_AXIS_TYPE)},
	{"ER_AXIS_NOT_SUPPORTED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_fr, ER_AXIS_NOT_SUPPORTED)},
	{"ER_NO_DTMIDS_AVAIL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_fr, ER_NO_DTMIDS_AVAIL)},
	{"ER_NOT_SUPPORTED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_fr, ER_NOT_SUPPORTED)},
	{"ER_NODE_NON_NULL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_fr, ER_NODE_NON_NULL)},
	{"ER_COULD_NOT_RESOLVE_NODE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_fr, ER_COULD_NOT_RESOLVE_NODE)},
	{"ER_STARTPARSE_WHILE_PARSING", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_fr, ER_STARTPARSE_WHILE_PARSING)},
	{"ER_STARTPARSE_NEEDS_SAXPARSER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_fr, ER_STARTPARSE_NEEDS_SAXPARSER)},
	{"ER_COULD_NOT_INIT_PARSER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_fr, ER_COULD_NOT_INIT_PARSER)},
	{"ER_EXCEPTION_CREATING_POOL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_fr, ER_EXCEPTION_CREATING_POOL)},
	{"ER_PATH_CONTAINS_INVALID_ESCAPE_SEQUENCE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_fr, ER_PATH_CONTAINS_INVALID_ESCAPE_SEQUENCE)},
	{"ER_SCHEME_REQUIRED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_fr, ER_SCHEME_REQUIRED)},
	{"ER_NO_SCHEME_IN_URI", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_fr, ER_NO_SCHEME_IN_URI)},
	{"ER_NO_SCHEME_INURI", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_fr, ER_NO_SCHEME_INURI)},
	{"ER_PATH_INVALID_CHAR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_fr, ER_PATH_INVALID_CHAR)},
	{"ER_SCHEME_FROM_NULL_STRING", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_fr, ER_SCHEME_FROM_NULL_STRING)},
	{"ER_SCHEME_NOT_CONFORMANT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_fr, ER_SCHEME_NOT_CONFORMANT)},
	{"ER_HOST_ADDRESS_NOT_WELLFORMED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_fr, ER_HOST_ADDRESS_NOT_WELLFORMED)},
	{"ER_PORT_WHEN_HOST_NULL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_fr, ER_PORT_WHEN_HOST_NULL)},
	{"ER_INVALID_PORT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_fr, ER_INVALID_PORT)},
	{"ER_FRAG_FOR_GENERIC_URI", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_fr, ER_FRAG_FOR_GENERIC_URI)},
	{"ER_FRAG_WHEN_PATH_NULL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_fr, ER_FRAG_WHEN_PATH_NULL)},
	{"ER_FRAG_INVALID_CHAR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_fr, ER_FRAG_INVALID_CHAR)},
	{"ER_PARSER_IN_USE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_fr, ER_PARSER_IN_USE)},
	{"ER_CANNOT_CHANGE_WHILE_PARSING", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_fr, ER_CANNOT_CHANGE_WHILE_PARSING)},
	{"ER_SELF_CAUSATION_NOT_PERMITTED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_fr, ER_SELF_CAUSATION_NOT_PERMITTED)},
	{"ER_NO_USERINFO_IF_NO_HOST", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_fr, ER_NO_USERINFO_IF_NO_HOST)},
	{"ER_NO_PORT_IF_NO_HOST", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_fr, ER_NO_PORT_IF_NO_HOST)},
	{"ER_NO_QUERY_STRING_IN_PATH", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_fr, ER_NO_QUERY_STRING_IN_PATH)},
	{"ER_NO_FRAGMENT_STRING_IN_PATH", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_fr, ER_NO_FRAGMENT_STRING_IN_PATH)},
	{"ER_CANNOT_INIT_URI_EMPTY_PARMS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_fr, ER_CANNOT_INIT_URI_EMPTY_PARMS)},
	{"ER_METHOD_NOT_SUPPORTED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_fr, ER_METHOD_NOT_SUPPORTED)},
	{"ER_INCRSAXSRCFILTER_NOT_RESTARTABLE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_fr, ER_INCRSAXSRCFILTER_NOT_RESTARTABLE)},
	{"ER_XMLRDR_NOT_BEFORE_STARTPARSE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_fr, ER_XMLRDR_NOT_BEFORE_STARTPARSE)},
	{"ER_AXIS_TRAVERSER_NOT_SUPPORTED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_fr, ER_AXIS_TRAVERSER_NOT_SUPPORTED)},
	{"ER_ERRORHANDLER_CREATED_WITH_NULL_PRINTWRITER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_fr, ER_ERRORHANDLER_CREATED_WITH_NULL_PRINTWRITER)},
	{"ER_SYSTEMID_UNKNOWN", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_fr, ER_SYSTEMID_UNKNOWN)},
	{"ER_LOCATION_UNKNOWN", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_fr, ER_LOCATION_UNKNOWN)},
	{"ER_PREFIX_MUST_RESOLVE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_fr, ER_PREFIX_MUST_RESOLVE)},
	{"ER_CREATEDOCUMENT_NOT_SUPPORTED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_fr, ER_CREATEDOCUMENT_NOT_SUPPORTED)},
	{"ER_CHILD_HAS_NO_OWNER_DOCUMENT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_fr, ER_CHILD_HAS_NO_OWNER_DOCUMENT)},
	{"ER_CHILD_HAS_NO_OWNER_DOCUMENT_ELEMENT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_fr, ER_CHILD_HAS_NO_OWNER_DOCUMENT_ELEMENT)},
	{"ER_CANT_OUTPUT_TEXT_BEFORE_DOC", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_fr, ER_CANT_OUTPUT_TEXT_BEFORE_DOC)},
	{"ER_CANT_HAVE_MORE_THAN_ONE_ROOT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_fr, ER_CANT_HAVE_MORE_THAN_ONE_ROOT)},
	{"ER_ARG_LOCALNAME_NULL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_fr, ER_ARG_LOCALNAME_NULL)},
	{"ER_ARG_LOCALNAME_INVALID", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_fr, ER_ARG_LOCALNAME_INVALID)},
	{"ER_ARG_PREFIX_INVALID", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_fr, ER_ARG_PREFIX_INVALID)},
	{"ER_NAME_CANT_START_WITH_COLON", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_fr, ER_NAME_CANT_START_WITH_COLON)},
	{"ER_RESOURCE_COULD_NOT_FIND", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_fr, ER_RESOURCE_COULD_NOT_FIND)},
	{"ER_RESOURCE_COULD_NOT_LOAD", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_fr, ER_RESOURCE_COULD_NOT_LOAD)},
	{"ER_BUFFER_SIZE_LESSTHAN_ZERO", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_fr, ER_BUFFER_SIZE_LESSTHAN_ZERO)},
	{"ER_INVALID_UTF16_SURROGATE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_fr, ER_INVALID_UTF16_SURROGATE)},
	{"ER_OIERROR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_fr, ER_OIERROR)},
	{"ER_NAMESPACE_PREFIX", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_fr, ER_NAMESPACE_PREFIX)},
	{"ER_STRAY_ATTRIBUTE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_fr, ER_STRAY_ATTRIBUTE)},
	{"ER_STRAY_NAMESPACE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_fr, ER_STRAY_NAMESPACE)},
	{"ER_COULD_NOT_LOAD_RESOURCE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_fr, ER_COULD_NOT_LOAD_RESOURCE)},
	{"ER_COULD_NOT_LOAD_METHOD_PROPERTY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_fr, ER_COULD_NOT_LOAD_METHOD_PROPERTY)},
	{"ER_SERIALIZER_NOT_CONTENTHANDLER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_fr, ER_SERIALIZER_NOT_CONTENTHANDLER)},
	{"ER_ILLEGAL_ATTRIBUTE_POSITION", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_fr, ER_ILLEGAL_ATTRIBUTE_POSITION)},
	{"ER_ILLEGAL_CHARACTER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLErrorResources_fr, ER_ILLEGAL_CHARACTER)},
	{"contents", "[[Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XMLErrorResources_fr, contents)},
	{}
};

$MethodInfo _XMLErrorResources_fr_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(XMLErrorResources_fr, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED, $virtualMethod(XMLErrorResources_fr, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _XMLErrorResources_fr_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.res.XMLErrorResources_fr",
	"java.util.ListResourceBundle",
	nullptr,
	_XMLErrorResources_fr_FieldInfo_,
	_XMLErrorResources_fr_MethodInfo_
};

$Object* allocate$XMLErrorResources_fr($Class* clazz) {
	return $of($alloc(XMLErrorResources_fr));
}

$String* XMLErrorResources_fr::ER_FUNCTION_NOT_SUPPORTED = nullptr;
$String* XMLErrorResources_fr::ER_CANNOT_OVERWRITE_CAUSE = nullptr;
$String* XMLErrorResources_fr::ER_NO_DEFAULT_IMPL = nullptr;
$String* XMLErrorResources_fr::ER_CHUNKEDINTARRAY_NOT_SUPPORTED = nullptr;
$String* XMLErrorResources_fr::ER_OFFSET_BIGGER_THAN_SLOT = nullptr;
$String* XMLErrorResources_fr::ER_COROUTINE_NOT_AVAIL = nullptr;
$String* XMLErrorResources_fr::ER_COROUTINE_CO_EXIT = nullptr;
$String* XMLErrorResources_fr::ER_COJOINROUTINESET_FAILED = nullptr;
$String* XMLErrorResources_fr::ER_COROUTINE_PARAM = nullptr;
$String* XMLErrorResources_fr::ER_PARSER_DOTERMINATE_ANSWERS = nullptr;
$String* XMLErrorResources_fr::ER_NO_PARSE_CALL_WHILE_PARSING = nullptr;
$String* XMLErrorResources_fr::ER_TYPED_ITERATOR_AXIS_NOT_IMPLEMENTED = nullptr;
$String* XMLErrorResources_fr::ER_ITERATOR_AXIS_NOT_IMPLEMENTED = nullptr;
$String* XMLErrorResources_fr::ER_ITERATOR_CLONE_NOT_SUPPORTED = nullptr;
$String* XMLErrorResources_fr::ER_UNKNOWN_AXIS_TYPE = nullptr;
$String* XMLErrorResources_fr::ER_AXIS_NOT_SUPPORTED = nullptr;
$String* XMLErrorResources_fr::ER_NO_DTMIDS_AVAIL = nullptr;
$String* XMLErrorResources_fr::ER_NOT_SUPPORTED = nullptr;
$String* XMLErrorResources_fr::ER_NODE_NON_NULL = nullptr;
$String* XMLErrorResources_fr::ER_COULD_NOT_RESOLVE_NODE = nullptr;
$String* XMLErrorResources_fr::ER_STARTPARSE_WHILE_PARSING = nullptr;
$String* XMLErrorResources_fr::ER_STARTPARSE_NEEDS_SAXPARSER = nullptr;
$String* XMLErrorResources_fr::ER_COULD_NOT_INIT_PARSER = nullptr;
$String* XMLErrorResources_fr::ER_EXCEPTION_CREATING_POOL = nullptr;
$String* XMLErrorResources_fr::ER_PATH_CONTAINS_INVALID_ESCAPE_SEQUENCE = nullptr;
$String* XMLErrorResources_fr::ER_SCHEME_REQUIRED = nullptr;
$String* XMLErrorResources_fr::ER_NO_SCHEME_IN_URI = nullptr;
$String* XMLErrorResources_fr::ER_NO_SCHEME_INURI = nullptr;
$String* XMLErrorResources_fr::ER_PATH_INVALID_CHAR = nullptr;
$String* XMLErrorResources_fr::ER_SCHEME_FROM_NULL_STRING = nullptr;
$String* XMLErrorResources_fr::ER_SCHEME_NOT_CONFORMANT = nullptr;
$String* XMLErrorResources_fr::ER_HOST_ADDRESS_NOT_WELLFORMED = nullptr;
$String* XMLErrorResources_fr::ER_PORT_WHEN_HOST_NULL = nullptr;
$String* XMLErrorResources_fr::ER_INVALID_PORT = nullptr;
$String* XMLErrorResources_fr::ER_FRAG_FOR_GENERIC_URI = nullptr;
$String* XMLErrorResources_fr::ER_FRAG_WHEN_PATH_NULL = nullptr;
$String* XMLErrorResources_fr::ER_FRAG_INVALID_CHAR = nullptr;
$String* XMLErrorResources_fr::ER_PARSER_IN_USE = nullptr;
$String* XMLErrorResources_fr::ER_CANNOT_CHANGE_WHILE_PARSING = nullptr;
$String* XMLErrorResources_fr::ER_SELF_CAUSATION_NOT_PERMITTED = nullptr;
$String* XMLErrorResources_fr::ER_NO_USERINFO_IF_NO_HOST = nullptr;
$String* XMLErrorResources_fr::ER_NO_PORT_IF_NO_HOST = nullptr;
$String* XMLErrorResources_fr::ER_NO_QUERY_STRING_IN_PATH = nullptr;
$String* XMLErrorResources_fr::ER_NO_FRAGMENT_STRING_IN_PATH = nullptr;
$String* XMLErrorResources_fr::ER_CANNOT_INIT_URI_EMPTY_PARMS = nullptr;
$String* XMLErrorResources_fr::ER_METHOD_NOT_SUPPORTED = nullptr;
$String* XMLErrorResources_fr::ER_INCRSAXSRCFILTER_NOT_RESTARTABLE = nullptr;
$String* XMLErrorResources_fr::ER_XMLRDR_NOT_BEFORE_STARTPARSE = nullptr;
$String* XMLErrorResources_fr::ER_AXIS_TRAVERSER_NOT_SUPPORTED = nullptr;
$String* XMLErrorResources_fr::ER_ERRORHANDLER_CREATED_WITH_NULL_PRINTWRITER = nullptr;
$String* XMLErrorResources_fr::ER_SYSTEMID_UNKNOWN = nullptr;
$String* XMLErrorResources_fr::ER_LOCATION_UNKNOWN = nullptr;
$String* XMLErrorResources_fr::ER_PREFIX_MUST_RESOLVE = nullptr;
$String* XMLErrorResources_fr::ER_CREATEDOCUMENT_NOT_SUPPORTED = nullptr;
$String* XMLErrorResources_fr::ER_CHILD_HAS_NO_OWNER_DOCUMENT = nullptr;
$String* XMLErrorResources_fr::ER_CHILD_HAS_NO_OWNER_DOCUMENT_ELEMENT = nullptr;
$String* XMLErrorResources_fr::ER_CANT_OUTPUT_TEXT_BEFORE_DOC = nullptr;
$String* XMLErrorResources_fr::ER_CANT_HAVE_MORE_THAN_ONE_ROOT = nullptr;
$String* XMLErrorResources_fr::ER_ARG_LOCALNAME_NULL = nullptr;
$String* XMLErrorResources_fr::ER_ARG_LOCALNAME_INVALID = nullptr;
$String* XMLErrorResources_fr::ER_ARG_PREFIX_INVALID = nullptr;
$String* XMLErrorResources_fr::ER_NAME_CANT_START_WITH_COLON = nullptr;
$String* XMLErrorResources_fr::ER_RESOURCE_COULD_NOT_FIND = nullptr;
$String* XMLErrorResources_fr::ER_RESOURCE_COULD_NOT_LOAD = nullptr;
$String* XMLErrorResources_fr::ER_BUFFER_SIZE_LESSTHAN_ZERO = nullptr;
$String* XMLErrorResources_fr::ER_INVALID_UTF16_SURROGATE = nullptr;
$String* XMLErrorResources_fr::ER_OIERROR = nullptr;
$String* XMLErrorResources_fr::ER_NAMESPACE_PREFIX = nullptr;
$String* XMLErrorResources_fr::ER_STRAY_ATTRIBUTE = nullptr;
$String* XMLErrorResources_fr::ER_STRAY_NAMESPACE = nullptr;
$String* XMLErrorResources_fr::ER_COULD_NOT_LOAD_RESOURCE = nullptr;
$String* XMLErrorResources_fr::ER_COULD_NOT_LOAD_METHOD_PROPERTY = nullptr;
$String* XMLErrorResources_fr::ER_SERIALIZER_NOT_CONTENTHANDLER = nullptr;
$String* XMLErrorResources_fr::ER_ILLEGAL_ATTRIBUTE_POSITION = nullptr;
$String* XMLErrorResources_fr::ER_ILLEGAL_CHARACTER = nullptr;
$ObjectArray2* XMLErrorResources_fr::contents = nullptr;

void XMLErrorResources_fr::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* XMLErrorResources_fr::getContents() {
	return XMLErrorResources_fr::contents;
}

void clinit$XMLErrorResources_fr($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(XMLErrorResources_fr::ER_FUNCTION_NOT_SUPPORTED, "ER_FUNCTION_NOT_SUPPORTED"_s);
	$assignStatic(XMLErrorResources_fr::ER_CANNOT_OVERWRITE_CAUSE, "ER_CANNOT_OVERWRITE_CAUSE"_s);
	$assignStatic(XMLErrorResources_fr::ER_NO_DEFAULT_IMPL, "ER_NO_DEFAULT_IMPL"_s);
	$assignStatic(XMLErrorResources_fr::ER_CHUNKEDINTARRAY_NOT_SUPPORTED, "ER_CHUNKEDINTARRAY_NOT_SUPPORTED"_s);
	$assignStatic(XMLErrorResources_fr::ER_OFFSET_BIGGER_THAN_SLOT, "ER_OFFSET_BIGGER_THAN_SLOT"_s);
	$assignStatic(XMLErrorResources_fr::ER_COROUTINE_NOT_AVAIL, "ER_COROUTINE_NOT_AVAIL"_s);
	$assignStatic(XMLErrorResources_fr::ER_COROUTINE_CO_EXIT, "ER_COROUTINE_CO_EXIT"_s);
	$assignStatic(XMLErrorResources_fr::ER_COJOINROUTINESET_FAILED, "ER_COJOINROUTINESET_FAILED"_s);
	$assignStatic(XMLErrorResources_fr::ER_COROUTINE_PARAM, "ER_COROUTINE_PARAM"_s);
	$assignStatic(XMLErrorResources_fr::ER_PARSER_DOTERMINATE_ANSWERS, "ER_PARSER_DOTERMINATE_ANSWERS"_s);
	$assignStatic(XMLErrorResources_fr::ER_NO_PARSE_CALL_WHILE_PARSING, "ER_NO_PARSE_CALL_WHILE_PARSING"_s);
	$assignStatic(XMLErrorResources_fr::ER_TYPED_ITERATOR_AXIS_NOT_IMPLEMENTED, "ER_TYPED_ITERATOR_AXIS_NOT_IMPLEMENTED"_s);
	$assignStatic(XMLErrorResources_fr::ER_ITERATOR_AXIS_NOT_IMPLEMENTED, "ER_ITERATOR_AXIS_NOT_IMPLEMENTED"_s);
	$assignStatic(XMLErrorResources_fr::ER_ITERATOR_CLONE_NOT_SUPPORTED, "ER_ITERATOR_CLONE_NOT_SUPPORTED"_s);
	$assignStatic(XMLErrorResources_fr::ER_UNKNOWN_AXIS_TYPE, "ER_UNKNOWN_AXIS_TYPE"_s);
	$assignStatic(XMLErrorResources_fr::ER_AXIS_NOT_SUPPORTED, "ER_AXIS_NOT_SUPPORTED"_s);
	$assignStatic(XMLErrorResources_fr::ER_NO_DTMIDS_AVAIL, "ER_NO_DTMIDS_AVAIL"_s);
	$assignStatic(XMLErrorResources_fr::ER_NOT_SUPPORTED, "ER_NOT_SUPPORTED"_s);
	$assignStatic(XMLErrorResources_fr::ER_NODE_NON_NULL, "ER_NODE_NON_NULL"_s);
	$assignStatic(XMLErrorResources_fr::ER_COULD_NOT_RESOLVE_NODE, "ER_COULD_NOT_RESOLVE_NODE"_s);
	$assignStatic(XMLErrorResources_fr::ER_STARTPARSE_WHILE_PARSING, "ER_STARTPARSE_WHILE_PARSING"_s);
	$assignStatic(XMLErrorResources_fr::ER_STARTPARSE_NEEDS_SAXPARSER, "ER_STARTPARSE_NEEDS_SAXPARSER"_s);
	$assignStatic(XMLErrorResources_fr::ER_COULD_NOT_INIT_PARSER, "ER_COULD_NOT_INIT_PARSER"_s);
	$assignStatic(XMLErrorResources_fr::ER_EXCEPTION_CREATING_POOL, "ER_EXCEPTION_CREATING_POOL"_s);
	$assignStatic(XMLErrorResources_fr::ER_PATH_CONTAINS_INVALID_ESCAPE_SEQUENCE, "ER_PATH_CONTAINS_INVALID_ESCAPE_SEQUENCE"_s);
	$assignStatic(XMLErrorResources_fr::ER_SCHEME_REQUIRED, "ER_SCHEME_REQUIRED"_s);
	$assignStatic(XMLErrorResources_fr::ER_NO_SCHEME_IN_URI, "ER_NO_SCHEME_IN_URI"_s);
	$assignStatic(XMLErrorResources_fr::ER_NO_SCHEME_INURI, "ER_NO_SCHEME_INURI"_s);
	$assignStatic(XMLErrorResources_fr::ER_PATH_INVALID_CHAR, "ER_PATH_INVALID_CHAR"_s);
	$assignStatic(XMLErrorResources_fr::ER_SCHEME_FROM_NULL_STRING, "ER_SCHEME_FROM_NULL_STRING"_s);
	$assignStatic(XMLErrorResources_fr::ER_SCHEME_NOT_CONFORMANT, "ER_SCHEME_NOT_CONFORMANT"_s);
	$assignStatic(XMLErrorResources_fr::ER_HOST_ADDRESS_NOT_WELLFORMED, "ER_HOST_ADDRESS_NOT_WELLFORMED"_s);
	$assignStatic(XMLErrorResources_fr::ER_PORT_WHEN_HOST_NULL, "ER_PORT_WHEN_HOST_NULL"_s);
	$assignStatic(XMLErrorResources_fr::ER_INVALID_PORT, "ER_INVALID_PORT"_s);
	$assignStatic(XMLErrorResources_fr::ER_FRAG_FOR_GENERIC_URI, "ER_FRAG_FOR_GENERIC_URI"_s);
	$assignStatic(XMLErrorResources_fr::ER_FRAG_WHEN_PATH_NULL, "ER_FRAG_WHEN_PATH_NULL"_s);
	$assignStatic(XMLErrorResources_fr::ER_FRAG_INVALID_CHAR, "ER_FRAG_INVALID_CHAR"_s);
	$assignStatic(XMLErrorResources_fr::ER_PARSER_IN_USE, "ER_PARSER_IN_USE"_s);
	$assignStatic(XMLErrorResources_fr::ER_CANNOT_CHANGE_WHILE_PARSING, "ER_CANNOT_CHANGE_WHILE_PARSING"_s);
	$assignStatic(XMLErrorResources_fr::ER_SELF_CAUSATION_NOT_PERMITTED, "ER_SELF_CAUSATION_NOT_PERMITTED"_s);
	$assignStatic(XMLErrorResources_fr::ER_NO_USERINFO_IF_NO_HOST, "ER_NO_USERINFO_IF_NO_HOST"_s);
	$assignStatic(XMLErrorResources_fr::ER_NO_PORT_IF_NO_HOST, "ER_NO_PORT_IF_NO_HOST"_s);
	$assignStatic(XMLErrorResources_fr::ER_NO_QUERY_STRING_IN_PATH, "ER_NO_QUERY_STRING_IN_PATH"_s);
	$assignStatic(XMLErrorResources_fr::ER_NO_FRAGMENT_STRING_IN_PATH, "ER_NO_FRAGMENT_STRING_IN_PATH"_s);
	$assignStatic(XMLErrorResources_fr::ER_CANNOT_INIT_URI_EMPTY_PARMS, "ER_CANNOT_INIT_URI_EMPTY_PARMS"_s);
	$assignStatic(XMLErrorResources_fr::ER_METHOD_NOT_SUPPORTED, "ER_METHOD_NOT_SUPPORTED"_s);
	$assignStatic(XMLErrorResources_fr::ER_INCRSAXSRCFILTER_NOT_RESTARTABLE, "ER_INCRSAXSRCFILTER_NOT_RESTARTABLE"_s);
	$assignStatic(XMLErrorResources_fr::ER_XMLRDR_NOT_BEFORE_STARTPARSE, "ER_XMLRDR_NOT_BEFORE_STARTPARSE"_s);
	$assignStatic(XMLErrorResources_fr::ER_AXIS_TRAVERSER_NOT_SUPPORTED, "ER_AXIS_TRAVERSER_NOT_SUPPORTED"_s);
	$assignStatic(XMLErrorResources_fr::ER_ERRORHANDLER_CREATED_WITH_NULL_PRINTWRITER, "ER_ERRORHANDLER_CREATED_WITH_NULL_PRINTWRITER"_s);
	$assignStatic(XMLErrorResources_fr::ER_SYSTEMID_UNKNOWN, "ER_SYSTEMID_UNKNOWN"_s);
	$assignStatic(XMLErrorResources_fr::ER_LOCATION_UNKNOWN, "ER_LOCATION_UNKNOWN"_s);
	$assignStatic(XMLErrorResources_fr::ER_PREFIX_MUST_RESOLVE, "ER_PREFIX_MUST_RESOLVE"_s);
	$assignStatic(XMLErrorResources_fr::ER_CREATEDOCUMENT_NOT_SUPPORTED, "ER_CREATEDOCUMENT_NOT_SUPPORTED"_s);
	$assignStatic(XMLErrorResources_fr::ER_CHILD_HAS_NO_OWNER_DOCUMENT, "ER_CHILD_HAS_NO_OWNER_DOCUMENT"_s);
	$assignStatic(XMLErrorResources_fr::ER_CHILD_HAS_NO_OWNER_DOCUMENT_ELEMENT, "ER_CHILD_HAS_NO_OWNER_DOCUMENT_ELEMENT"_s);
	$assignStatic(XMLErrorResources_fr::ER_CANT_OUTPUT_TEXT_BEFORE_DOC, "ER_CANT_OUTPUT_TEXT_BEFORE_DOC"_s);
	$assignStatic(XMLErrorResources_fr::ER_CANT_HAVE_MORE_THAN_ONE_ROOT, "ER_CANT_HAVE_MORE_THAN_ONE_ROOT"_s);
	$assignStatic(XMLErrorResources_fr::ER_ARG_LOCALNAME_NULL, "ER_ARG_LOCALNAME_NULL"_s);
	$assignStatic(XMLErrorResources_fr::ER_ARG_LOCALNAME_INVALID, "ER_ARG_LOCALNAME_INVALID"_s);
	$assignStatic(XMLErrorResources_fr::ER_ARG_PREFIX_INVALID, "ER_ARG_PREFIX_INVALID"_s);
	$assignStatic(XMLErrorResources_fr::ER_NAME_CANT_START_WITH_COLON, "ER_NAME_CANT_START_WITH_COLON"_s);
	$assignStatic(XMLErrorResources_fr::ER_RESOURCE_COULD_NOT_FIND, "ER_RESOURCE_COULD_NOT_FIND"_s);
	$assignStatic(XMLErrorResources_fr::ER_RESOURCE_COULD_NOT_LOAD, "ER_RESOURCE_COULD_NOT_LOAD"_s);
	$assignStatic(XMLErrorResources_fr::ER_BUFFER_SIZE_LESSTHAN_ZERO, "ER_BUFFER_SIZE_LESSTHAN_ZERO"_s);
	$assignStatic(XMLErrorResources_fr::ER_INVALID_UTF16_SURROGATE, "ER_INVALID_UTF16_SURROGATE"_s);
	$assignStatic(XMLErrorResources_fr::ER_OIERROR, "ER_OIERROR"_s);
	$assignStatic(XMLErrorResources_fr::ER_NAMESPACE_PREFIX, "ER_NAMESPACE_PREFIX"_s);
	$assignStatic(XMLErrorResources_fr::ER_STRAY_ATTRIBUTE, "ER_STRAY_ATTIRBUTE"_s);
	$assignStatic(XMLErrorResources_fr::ER_STRAY_NAMESPACE, "ER_STRAY_NAMESPACE"_s);
	$assignStatic(XMLErrorResources_fr::ER_COULD_NOT_LOAD_RESOURCE, "ER_COULD_NOT_LOAD_RESOURCE"_s);
	$assignStatic(XMLErrorResources_fr::ER_COULD_NOT_LOAD_METHOD_PROPERTY, "ER_COULD_NOT_LOAD_METHOD_PROPERTY"_s);
	$assignStatic(XMLErrorResources_fr::ER_SERIALIZER_NOT_CONTENTHANDLER, "ER_SERIALIZER_NOT_CONTENTHANDLER"_s);
	$assignStatic(XMLErrorResources_fr::ER_ILLEGAL_ATTRIBUTE_POSITION, "ER_ILLEGAL_ATTRIBUTE_POSITION"_s);
	$assignStatic(XMLErrorResources_fr::ER_ILLEGAL_CHARACTER, "ER_ILLEGAL_CHARACTER"_s);
	$assignStatic(XMLErrorResources_fr::contents, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("ER0000"_s),
			$of("{0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_fr::ER_FUNCTION_NOT_SUPPORTED),
			$of("Fonction non prise en charge."_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_fr::ER_CANNOT_OVERWRITE_CAUSE),
			$of("Impossible de remplacer la cause"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_fr::ER_NO_DEFAULT_IMPL),
			$of(u"Aucune implémentation par défaut trouvée "_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_fr::ER_CHUNKEDINTARRAY_NOT_SUPPORTED),
			$of("ChunkedIntArray({0}) n\'\'est actuellement pas pris en charge"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_fr::ER_OFFSET_BIGGER_THAN_SLOT),
			$of(u"Décalage supérieur à l\'emplacement"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_fr::ER_COROUTINE_NOT_AVAIL),
			$of("Coroutine non disponible, id={0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_fr::ER_COROUTINE_CO_EXIT),
			$of(u"CoroutineManager a reçu la demande co_exit()"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_fr::ER_COJOINROUTINESET_FAILED),
			$of("Echec de co_joinCoroutineSet()"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_fr::ER_COROUTINE_PARAM),
			$of(u"Erreur de paramètre de coroutine ({0})"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_fr::ER_PARSER_DOTERMINATE_ANSWERS),
			$of(u"\nINATTENDU : réponses doTerminate de l\'\'analyseur - {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_fr::ER_NO_PARSE_CALL_WHILE_PARSING),
			$of("impossible d\'appeler l\'analyse lorsqu\'elle est en cours"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_fr::ER_TYPED_ITERATOR_AXIS_NOT_IMPLEMENTED),
			$of(u"Erreur : itérateur saisi pour l\'\'axe {0} non implémenté"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_fr::ER_ITERATOR_AXIS_NOT_IMPLEMENTED),
			$of(u"Erreur : itérateur pour l\'\'axe {0} non implémenté "_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_fr::ER_ITERATOR_CLONE_NOT_SUPPORTED),
			$of(u"Clone d\'itérateur non pris en charge"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_fr::ER_UNKNOWN_AXIS_TYPE),
			$of("Type de parcours d\'\'axe inconnu : {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_fr::ER_AXIS_NOT_SUPPORTED),
			$of("Parcours d\'\'axe non pris en charge : {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_fr::ER_NO_DTMIDS_AVAIL),
			$of("Aucun autre ID DTM n\'est disponible"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_fr::ER_NOT_SUPPORTED),
			$of("Non pris en charge : {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_fr::ER_NODE_NON_NULL),
			$of(u"Le noeud doit être non NULL pour getDTMHandleFromNode"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_fr::ER_COULD_NOT_RESOLVE_NODE),
			$of(u"Impossible de résoudre le noeud sur un descripteur"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_fr::ER_STARTPARSE_WHILE_PARSING),
			$of("impossible d\'appeler startParse lorsque l\'analyse est en cours"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_fr::ER_STARTPARSE_NEEDS_SAXPARSER),
			$of(u"startParse nécessite un SAXParser non NULL"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_fr::ER_COULD_NOT_INIT_PARSER),
			$of("impossible d\'initialiser l\'analyseur avec"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_fr::ER_EXCEPTION_CREATING_POOL),
			$of(u"exception lors de la création de l\'instance du pool"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_fr::ER_PATH_CONTAINS_INVALID_ESCAPE_SEQUENCE),
			$of(u"Le chemin d\'accès contient une séquence d\'échappement non valide"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_fr::ER_SCHEME_REQUIRED),
			$of(u"Modèle obligatoire."_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_fr::ER_NO_SCHEME_IN_URI),
			$of(u"Modèle introuvable dans l\'\'URI: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_fr::ER_NO_SCHEME_INURI),
			$of(u"Modèle introuvable dans l\'URI"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_fr::ER_PATH_INVALID_CHAR),
			$of(u"Le chemin contient un caractère non valide : {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_fr::ER_SCHEME_FROM_NULL_STRING),
			$of(u"Impossible de définir le modèle à partir de la chaîne NULL"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_fr::ER_SCHEME_NOT_CONFORMANT),
			$of(u"Le modèle n\'est pas conforme."_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_fr::ER_HOST_ADDRESS_NOT_WELLFORMED),
			$of(u"Le format de l\'adresse de l\'hôte n\'est pas correct"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_fr::ER_PORT_WHEN_HOST_NULL),
			$of(u"Impossible de définir le port quand l\'hôte est NULL"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_fr::ER_INVALID_PORT),
			$of(u"Numéro de port non valide"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_fr::ER_FRAG_FOR_GENERIC_URI),
			$of(u"Le fragment ne peut être défini que pour un URI générique"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_fr::ER_FRAG_WHEN_PATH_NULL),
			$of(u"Impossible de définir le fragment quand le chemin d\'accès est NULL"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_fr::ER_FRAG_INVALID_CHAR),
			$of(u"Le fragment contient un caractère non valide"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_fr::ER_PARSER_IN_USE),
			$of(u"L\'analyseur est déjà utilisé"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_fr::ER_CANNOT_CHANGE_WHILE_PARSING),
			$of("Impossible de modifier {0} {1} pendant l\'\'analyse"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_fr::ER_SELF_CAUSATION_NOT_PERMITTED),
			$of(u"Causalité circulaire non autorisée"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_fr::ER_NO_USERINFO_IF_NO_HOST),
			$of(u"Userinfo peut ne pas être spécifié si l\'hôte ne l\'est pas"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_fr::ER_NO_PORT_IF_NO_HOST),
			$of(u"Le port peut ne pas être spécifié si l\'hôte ne l\'est pas"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_fr::ER_NO_QUERY_STRING_IN_PATH),
			$of(u"La chaîne de requête ne doit pas figurer dans un chemin et une chaîne de requête"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_fr::ER_NO_FRAGMENT_STRING_IN_PATH),
			$of(u"Le fragment ne doit pas être indiqué à la fois dans le chemin et dans le fragment"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_fr::ER_CANNOT_INIT_URI_EMPTY_PARMS),
			$of(u"Impossible d\'initialiser l\'URI avec des paramètres vides"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_fr::ER_METHOD_NOT_SUPPORTED),
			$of(u"La méthode n\'est pas encore prise en charge "_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_fr::ER_INCRSAXSRCFILTER_NOT_RESTARTABLE),
			$of(u"IncrementalSAXSource_Filter ne peut actuellement pas être redémarré"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_fr::ER_XMLRDR_NOT_BEFORE_STARTPARSE),
			$of("XMLReader pas avant la demande startParse"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_fr::ER_AXIS_TRAVERSER_NOT_SUPPORTED),
			$of("Parcours d\'\'axe non pris en charge : {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_fr::ER_ERRORHANDLER_CREATED_WITH_NULL_PRINTWRITER),
			$of(u"ListingErrorHandler créé avec PrintWriter NULL."_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_fr::ER_SYSTEMID_UNKNOWN),
			$of(u"ID système inconnu"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_fr::ER_LOCATION_UNKNOWN),
			$of("Emplacement de l\'erreur inconnu"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_fr::ER_PREFIX_MUST_RESOLVE),
			$of(u"Le préfixe doit être résolu en espace de noms : {0}"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_fr::ER_CREATEDOCUMENT_NOT_SUPPORTED),
			$of("createDocument() non pris en charge dans XPathContext."_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_fr::ER_CHILD_HAS_NO_OWNER_DOCUMENT),
			$of(u"L\'enfant de l\'attribut ne possède pas de document propriétaire."_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_fr::ER_CHILD_HAS_NO_OWNER_DOCUMENT_ELEMENT),
			$of(u"L\'enfant de l\'attribut ne possède pas d\'élément de document propriétaire."_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_fr::ER_CANT_OUTPUT_TEXT_BEFORE_DOC),
			$of(u"Avertissement : impossible de générer une sortie du texte avant l\'élément de document. Non pris en compte..."_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_fr::ER_CANT_HAVE_MORE_THAN_ONE_ROOT),
			$of("Impossible d\'avoir plus d\'une racine sur un DOM."_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_fr::ER_ARG_LOCALNAME_NULL),
			$of("L\'argument \"localName\" est NULL"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_fr::ER_ARG_LOCALNAME_INVALID),
			$of(u"Le nom local du QName doit être un NCName valide"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_fr::ER_ARG_PREFIX_INVALID),
			$of(u"Le préfixe du QName doit être un NCName valide"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_fr::ER_NAME_CANT_START_WITH_COLON),
			$of("Le nom ne peut pas commencer par deux-points"_s)
		}),
		$$new($ObjectArray, {
			$of("BAD_CODE"_s),
			$of(u"Le paramètre createMessage était hors limites"_s)
		}),
		$$new($ObjectArray, {
			$of("FORMAT_FAILED"_s),
			$of(u"Exception générée pendant l\'appel messageFormat"_s)
		}),
		$$new($ObjectArray, {
			$of("line"_s),
			$of(u"Ligne n°"_s)
		}),
		$$new($ObjectArray, {
			$of("column"_s),
			$of(u"Colonne n°"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_fr::ER_SERIALIZER_NOT_CONTENTHANDLER),
			$of(u"La classe de serializer \'\'{0}\'\' n\'\'implémente pas org.xml.sax.ContentHandler."_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_fr::ER_RESOURCE_COULD_NOT_FIND),
			$of("La ressource [ {0} ] est introuvable.\n {1}"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_fr::ER_RESOURCE_COULD_NOT_LOAD),
			$of("La ressource [ {0} ] n\'\'a pas pu charger : {1} \n {2} \t {3}"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_fr::ER_BUFFER_SIZE_LESSTHAN_ZERO),
			$of("Taille du tampon <=0"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_fr::ER_INVALID_UTF16_SURROGATE),
			$of(u"Substitut UTF-16 non valide détecté : {0} ?"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_fr::ER_OIERROR),
			$of("Erreur d\'E-S"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_fr::ER_ILLEGAL_ATTRIBUTE_POSITION),
			$of(u"Impossible d\'\'ajouter l\'\'attribut {0} après des noeuds enfant ou avant la production d\'\'un élément. L\'\'attribut est ignoré."_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_fr::ER_NAMESPACE_PREFIX),
			$of(u"L\'\'espace de noms du préfixe \'\'{0}\'\' n\'\'a pas été déclaré."_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_fr::ER_STRAY_ATTRIBUTE),
			$of(u"Attribut \'\'{0}\'\' à l\'\'extérieur de l\'\'élément."_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_fr::ER_STRAY_NAMESPACE),
			$of(u"La déclaration d\'\'espace de noms \'\'{0}\'\'=\'\'{1}\'\' est à l\'\'extérieur de l\'\'élément."_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_fr::ER_COULD_NOT_LOAD_RESOURCE),
			$of(u"Impossible de charger \'\'{0}\'\' (vérifier CLASSPATH), les valeurs par défaut sont donc employées"_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_fr::ER_ILLEGAL_CHARACTER),
			$of(u"Tentative de sortie d\'\'un caractère avec une valeur entière {0}, non représenté dans l\'\'encodage de sortie spécifié pour {1}."_s)
		}),
		$$new($ObjectArray, {
			$of(XMLErrorResources_fr::ER_COULD_NOT_LOAD_METHOD_PROPERTY),
			$of(u"Impossible de charger le fichier de propriétés \'\'{0}\'\' pour la méthode de sortie \'\'{1}\'\' (vérifier CLASSPATH)"_s)
		})
	}));
}

XMLErrorResources_fr::XMLErrorResources_fr() {
}

$Class* XMLErrorResources_fr::load$($String* name, bool initialize) {
	$loadClass(XMLErrorResources_fr, name, initialize, &_XMLErrorResources_fr_ClassInfo_, clinit$XMLErrorResources_fr, allocate$XMLErrorResources_fr);
	return class$;
}

$Class* XMLErrorResources_fr::class$ = nullptr;

						} // res
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com