#include <com/sun/org/apache/xml/internal/serializer/utils/MsgKey.h>

#include <jcpp.h>

#undef BAD_MSGFORMAT
#undef BAD_MSGKEY
#undef ER_ATTR_UNBOUND_PREFIX_IN_ENTREF
#undef ER_BUFFER_SIZE_LESSTHAN_ZERO
#undef ER_CANNOT_INIT_URI_EMPTY_PARMS
#undef ER_CDATA_SECTIONS_SPLIT
#undef ER_COULD_NOT_LOAD_METHOD_PROPERTY
#undef ER_COULD_NOT_LOAD_RESOURCE
#undef ER_ELEM_UNBOUND_PREFIX_IN_ENTREF
#undef ER_ENCODING_NOT_SUPPORTED
#undef ER_FACTORY_PROPERTY_MISSING
#undef ER_FEATURE_NOT_FOUND
#undef ER_FEATURE_NOT_SUPPORTED
#undef ER_FRAG_FOR_GENERIC_URI
#undef ER_FRAG_INVALID_CHAR
#undef ER_FRAG_WHEN_PATH_NULL
#undef ER_HOST_ADDRESS_NOT_WELLFORMED
#undef ER_ILLEGAL_ATTRIBUTE_POSITION
#undef ER_ILLEGAL_CHARACTER
#undef ER_INVALID_PORT
#undef ER_INVALID_UTF16_SURROGATE
#undef ER_NAMESPACE_PREFIX
#undef ER_NO_FRAGMENT_STRING_IN_PATH
#undef ER_NO_OUTPUT_SPECIFIED
#undef ER_NO_PORT_IF_NO_HOST
#undef ER_NO_QUERY_STRING_IN_PATH
#undef ER_NO_SCHEME_INURI
#undef ER_NO_SCHEME_IN_URI
#undef ER_NO_USERINFO_IF_NO_HOST
#undef ER_NS_PREFIX_CANNOT_BE_BOUND
#undef ER_NULL_LOCAL_ATTR_NAME
#undef ER_NULL_LOCAL_ELEMENT_NAME
#undef ER_OIERROR
#undef ER_PATH_CONTAINS_INVALID_ESCAPE_SEQUENCE
#undef ER_PATH_INVALID_CHAR
#undef ER_PORT_WHEN_HOST_NULL
#undef ER_RESOURCE_COULD_NOT_FIND
#undef ER_RESOURCE_COULD_NOT_LOAD
#undef ER_SCHEME_FROM_NULL_STRING
#undef ER_SCHEME_NOT_CONFORMANT
#undef ER_SCHEME_REQUIRED
#undef ER_SERIALIZER_NOT_CONTENTHANDLER
#undef ER_STRAY_ATTRIBUTE
#undef ER_STRAY_NAMESPACE
#undef ER_STRING_TOO_LONG
#undef ER_TYPE_MISMATCH_ERR
#undef ER_UNABLE_TO_SERIALIZE_NODE
#undef ER_UNSUPPORTED_ENCODING
#undef ER_WARNING_WF_NOT_CHECKED
#undef ER_WF_DASH_IN_COMMENT
#undef ER_WF_INVALID_CHARACTER
#undef ER_WF_INVALID_CHARACTER_IN_CDATA
#undef ER_WF_INVALID_CHARACTER_IN_COMMENT
#undef ER_WF_INVALID_CHARACTER_IN_NODE_NAME
#undef ER_WF_INVALID_CHARACTER_IN_PI
#undef ER_WF_INVALID_CHARACTER_IN_TEXT
#undef ER_WF_LT_IN_ATTVAL
#undef ER_WF_REF_TO_EXTERNAL_ENT
#undef ER_WF_REF_TO_UNPARSED_ENT
#undef ER_WRITING_INTERNAL_SUBSET
#undef ER_XML_VERSION_NOT_SUPPORTED

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace serializer {
							namespace utils {

$FieldInfo _MsgKey_FieldInfo_[] = {
	{"BAD_MSGKEY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MsgKey, BAD_MSGKEY)},
	{"BAD_MSGFORMAT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MsgKey, BAD_MSGFORMAT)},
	{"ER_RESOURCE_COULD_NOT_FIND", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MsgKey, ER_RESOURCE_COULD_NOT_FIND)},
	{"ER_RESOURCE_COULD_NOT_LOAD", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MsgKey, ER_RESOURCE_COULD_NOT_LOAD)},
	{"ER_BUFFER_SIZE_LESSTHAN_ZERO", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MsgKey, ER_BUFFER_SIZE_LESSTHAN_ZERO)},
	{"ER_INVALID_UTF16_SURROGATE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MsgKey, ER_INVALID_UTF16_SURROGATE)},
	{"ER_OIERROR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MsgKey, ER_OIERROR)},
	{"ER_NAMESPACE_PREFIX", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MsgKey, ER_NAMESPACE_PREFIX)},
	{"ER_STRAY_ATTRIBUTE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MsgKey, ER_STRAY_ATTRIBUTE)},
	{"ER_STRAY_NAMESPACE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MsgKey, ER_STRAY_NAMESPACE)},
	{"ER_COULD_NOT_LOAD_RESOURCE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MsgKey, ER_COULD_NOT_LOAD_RESOURCE)},
	{"ER_COULD_NOT_LOAD_METHOD_PROPERTY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MsgKey, ER_COULD_NOT_LOAD_METHOD_PROPERTY)},
	{"ER_SERIALIZER_NOT_CONTENTHANDLER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MsgKey, ER_SERIALIZER_NOT_CONTENTHANDLER)},
	{"ER_ILLEGAL_ATTRIBUTE_POSITION", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MsgKey, ER_ILLEGAL_ATTRIBUTE_POSITION)},
	{"ER_ILLEGAL_CHARACTER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MsgKey, ER_ILLEGAL_CHARACTER)},
	{"ER_INVALID_PORT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MsgKey, ER_INVALID_PORT)},
	{"ER_PORT_WHEN_HOST_NULL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MsgKey, ER_PORT_WHEN_HOST_NULL)},
	{"ER_HOST_ADDRESS_NOT_WELLFORMED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MsgKey, ER_HOST_ADDRESS_NOT_WELLFORMED)},
	{"ER_SCHEME_NOT_CONFORMANT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MsgKey, ER_SCHEME_NOT_CONFORMANT)},
	{"ER_SCHEME_FROM_NULL_STRING", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MsgKey, ER_SCHEME_FROM_NULL_STRING)},
	{"ER_PATH_CONTAINS_INVALID_ESCAPE_SEQUENCE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MsgKey, ER_PATH_CONTAINS_INVALID_ESCAPE_SEQUENCE)},
	{"ER_PATH_INVALID_CHAR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MsgKey, ER_PATH_INVALID_CHAR)},
	{"ER_NO_SCHEME_INURI", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MsgKey, ER_NO_SCHEME_INURI)},
	{"ER_FRAG_INVALID_CHAR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MsgKey, ER_FRAG_INVALID_CHAR)},
	{"ER_FRAG_WHEN_PATH_NULL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MsgKey, ER_FRAG_WHEN_PATH_NULL)},
	{"ER_FRAG_FOR_GENERIC_URI", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MsgKey, ER_FRAG_FOR_GENERIC_URI)},
	{"ER_NO_SCHEME_IN_URI", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MsgKey, ER_NO_SCHEME_IN_URI)},
	{"ER_CANNOT_INIT_URI_EMPTY_PARMS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MsgKey, ER_CANNOT_INIT_URI_EMPTY_PARMS)},
	{"ER_NO_FRAGMENT_STRING_IN_PATH", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MsgKey, ER_NO_FRAGMENT_STRING_IN_PATH)},
	{"ER_NO_QUERY_STRING_IN_PATH", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MsgKey, ER_NO_QUERY_STRING_IN_PATH)},
	{"ER_NO_PORT_IF_NO_HOST", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MsgKey, ER_NO_PORT_IF_NO_HOST)},
	{"ER_NO_USERINFO_IF_NO_HOST", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MsgKey, ER_NO_USERINFO_IF_NO_HOST)},
	{"ER_SCHEME_REQUIRED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MsgKey, ER_SCHEME_REQUIRED)},
	{"ER_XML_VERSION_NOT_SUPPORTED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MsgKey, ER_XML_VERSION_NOT_SUPPORTED)},
	{"ER_FACTORY_PROPERTY_MISSING", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MsgKey, ER_FACTORY_PROPERTY_MISSING)},
	{"ER_ENCODING_NOT_SUPPORTED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MsgKey, ER_ENCODING_NOT_SUPPORTED)},
	{"ER_FEATURE_NOT_FOUND", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MsgKey, ER_FEATURE_NOT_FOUND)},
	{"ER_FEATURE_NOT_SUPPORTED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MsgKey, ER_FEATURE_NOT_SUPPORTED)},
	{"ER_STRING_TOO_LONG", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MsgKey, ER_STRING_TOO_LONG)},
	{"ER_TYPE_MISMATCH_ERR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MsgKey, ER_TYPE_MISMATCH_ERR)},
	{"ER_NO_OUTPUT_SPECIFIED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MsgKey, ER_NO_OUTPUT_SPECIFIED)},
	{"ER_UNSUPPORTED_ENCODING", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MsgKey, ER_UNSUPPORTED_ENCODING)},
	{"ER_ELEM_UNBOUND_PREFIX_IN_ENTREF", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MsgKey, ER_ELEM_UNBOUND_PREFIX_IN_ENTREF)},
	{"ER_ATTR_UNBOUND_PREFIX_IN_ENTREF", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MsgKey, ER_ATTR_UNBOUND_PREFIX_IN_ENTREF)},
	{"ER_CDATA_SECTIONS_SPLIT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MsgKey, ER_CDATA_SECTIONS_SPLIT)},
	{"ER_WF_INVALID_CHARACTER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MsgKey, ER_WF_INVALID_CHARACTER)},
	{"ER_WF_INVALID_CHARACTER_IN_NODE_NAME", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MsgKey, ER_WF_INVALID_CHARACTER_IN_NODE_NAME)},
	{"ER_UNABLE_TO_SERIALIZE_NODE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MsgKey, ER_UNABLE_TO_SERIALIZE_NODE)},
	{"ER_WARNING_WF_NOT_CHECKED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MsgKey, ER_WARNING_WF_NOT_CHECKED)},
	{"ER_WF_INVALID_CHARACTER_IN_COMMENT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MsgKey, ER_WF_INVALID_CHARACTER_IN_COMMENT)},
	{"ER_WF_INVALID_CHARACTER_IN_PI", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MsgKey, ER_WF_INVALID_CHARACTER_IN_PI)},
	{"ER_WF_INVALID_CHARACTER_IN_CDATA", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MsgKey, ER_WF_INVALID_CHARACTER_IN_CDATA)},
	{"ER_WF_INVALID_CHARACTER_IN_TEXT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MsgKey, ER_WF_INVALID_CHARACTER_IN_TEXT)},
	{"ER_WF_DASH_IN_COMMENT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MsgKey, ER_WF_DASH_IN_COMMENT)},
	{"ER_WF_LT_IN_ATTVAL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MsgKey, ER_WF_LT_IN_ATTVAL)},
	{"ER_WF_REF_TO_UNPARSED_ENT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MsgKey, ER_WF_REF_TO_UNPARSED_ENT)},
	{"ER_WF_REF_TO_EXTERNAL_ENT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MsgKey, ER_WF_REF_TO_EXTERNAL_ENT)},
	{"ER_NS_PREFIX_CANNOT_BE_BOUND", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MsgKey, ER_NS_PREFIX_CANNOT_BE_BOUND)},
	{"ER_NULL_LOCAL_ELEMENT_NAME", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MsgKey, ER_NULL_LOCAL_ELEMENT_NAME)},
	{"ER_NULL_LOCAL_ATTR_NAME", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MsgKey, ER_NULL_LOCAL_ATTR_NAME)},
	{"ER_WRITING_INTERNAL_SUBSET", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MsgKey, ER_WRITING_INTERNAL_SUBSET)},
	{}
};

$MethodInfo _MsgKey_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(MsgKey, init$, void)},
	{}
};

$ClassInfo _MsgKey_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.serializer.utils.MsgKey",
	"java.lang.Object",
	nullptr,
	_MsgKey_FieldInfo_,
	_MsgKey_MethodInfo_
};

$Object* allocate$MsgKey($Class* clazz) {
	return $of($alloc(MsgKey));
}

$String* MsgKey::BAD_MSGKEY = nullptr;
$String* MsgKey::BAD_MSGFORMAT = nullptr;
$String* MsgKey::ER_RESOURCE_COULD_NOT_FIND = nullptr;
$String* MsgKey::ER_RESOURCE_COULD_NOT_LOAD = nullptr;
$String* MsgKey::ER_BUFFER_SIZE_LESSTHAN_ZERO = nullptr;
$String* MsgKey::ER_INVALID_UTF16_SURROGATE = nullptr;
$String* MsgKey::ER_OIERROR = nullptr;
$String* MsgKey::ER_NAMESPACE_PREFIX = nullptr;
$String* MsgKey::ER_STRAY_ATTRIBUTE = nullptr;
$String* MsgKey::ER_STRAY_NAMESPACE = nullptr;
$String* MsgKey::ER_COULD_NOT_LOAD_RESOURCE = nullptr;
$String* MsgKey::ER_COULD_NOT_LOAD_METHOD_PROPERTY = nullptr;
$String* MsgKey::ER_SERIALIZER_NOT_CONTENTHANDLER = nullptr;
$String* MsgKey::ER_ILLEGAL_ATTRIBUTE_POSITION = nullptr;
$String* MsgKey::ER_ILLEGAL_CHARACTER = nullptr;
$String* MsgKey::ER_INVALID_PORT = nullptr;
$String* MsgKey::ER_PORT_WHEN_HOST_NULL = nullptr;
$String* MsgKey::ER_HOST_ADDRESS_NOT_WELLFORMED = nullptr;
$String* MsgKey::ER_SCHEME_NOT_CONFORMANT = nullptr;
$String* MsgKey::ER_SCHEME_FROM_NULL_STRING = nullptr;
$String* MsgKey::ER_PATH_CONTAINS_INVALID_ESCAPE_SEQUENCE = nullptr;
$String* MsgKey::ER_PATH_INVALID_CHAR = nullptr;
$String* MsgKey::ER_NO_SCHEME_INURI = nullptr;
$String* MsgKey::ER_FRAG_INVALID_CHAR = nullptr;
$String* MsgKey::ER_FRAG_WHEN_PATH_NULL = nullptr;
$String* MsgKey::ER_FRAG_FOR_GENERIC_URI = nullptr;
$String* MsgKey::ER_NO_SCHEME_IN_URI = nullptr;
$String* MsgKey::ER_CANNOT_INIT_URI_EMPTY_PARMS = nullptr;
$String* MsgKey::ER_NO_FRAGMENT_STRING_IN_PATH = nullptr;
$String* MsgKey::ER_NO_QUERY_STRING_IN_PATH = nullptr;
$String* MsgKey::ER_NO_PORT_IF_NO_HOST = nullptr;
$String* MsgKey::ER_NO_USERINFO_IF_NO_HOST = nullptr;
$String* MsgKey::ER_SCHEME_REQUIRED = nullptr;
$String* MsgKey::ER_XML_VERSION_NOT_SUPPORTED = nullptr;
$String* MsgKey::ER_FACTORY_PROPERTY_MISSING = nullptr;
$String* MsgKey::ER_ENCODING_NOT_SUPPORTED = nullptr;
$String* MsgKey::ER_FEATURE_NOT_FOUND = nullptr;
$String* MsgKey::ER_FEATURE_NOT_SUPPORTED = nullptr;
$String* MsgKey::ER_STRING_TOO_LONG = nullptr;
$String* MsgKey::ER_TYPE_MISMATCH_ERR = nullptr;
$String* MsgKey::ER_NO_OUTPUT_SPECIFIED = nullptr;
$String* MsgKey::ER_UNSUPPORTED_ENCODING = nullptr;
$String* MsgKey::ER_ELEM_UNBOUND_PREFIX_IN_ENTREF = nullptr;
$String* MsgKey::ER_ATTR_UNBOUND_PREFIX_IN_ENTREF = nullptr;
$String* MsgKey::ER_CDATA_SECTIONS_SPLIT = nullptr;
$String* MsgKey::ER_WF_INVALID_CHARACTER = nullptr;
$String* MsgKey::ER_WF_INVALID_CHARACTER_IN_NODE_NAME = nullptr;
$String* MsgKey::ER_UNABLE_TO_SERIALIZE_NODE = nullptr;
$String* MsgKey::ER_WARNING_WF_NOT_CHECKED = nullptr;
$String* MsgKey::ER_WF_INVALID_CHARACTER_IN_COMMENT = nullptr;
$String* MsgKey::ER_WF_INVALID_CHARACTER_IN_PI = nullptr;
$String* MsgKey::ER_WF_INVALID_CHARACTER_IN_CDATA = nullptr;
$String* MsgKey::ER_WF_INVALID_CHARACTER_IN_TEXT = nullptr;
$String* MsgKey::ER_WF_DASH_IN_COMMENT = nullptr;
$String* MsgKey::ER_WF_LT_IN_ATTVAL = nullptr;
$String* MsgKey::ER_WF_REF_TO_UNPARSED_ENT = nullptr;
$String* MsgKey::ER_WF_REF_TO_EXTERNAL_ENT = nullptr;
$String* MsgKey::ER_NS_PREFIX_CANNOT_BE_BOUND = nullptr;
$String* MsgKey::ER_NULL_LOCAL_ELEMENT_NAME = nullptr;
$String* MsgKey::ER_NULL_LOCAL_ATTR_NAME = nullptr;
$String* MsgKey::ER_WRITING_INTERNAL_SUBSET = nullptr;

void MsgKey::init$() {
}

MsgKey::MsgKey() {
}

void clinit$MsgKey($Class* class$) {
	$assignStatic(MsgKey::BAD_MSGKEY, "BAD_MSGKEY"_s);
	$assignStatic(MsgKey::BAD_MSGFORMAT, "BAD_MSGFORMAT"_s);
	$assignStatic(MsgKey::ER_RESOURCE_COULD_NOT_FIND, "ER_RESOURCE_COULD_NOT_FIND"_s);
	$assignStatic(MsgKey::ER_RESOURCE_COULD_NOT_LOAD, "ER_RESOURCE_COULD_NOT_LOAD"_s);
	$assignStatic(MsgKey::ER_BUFFER_SIZE_LESSTHAN_ZERO, "ER_BUFFER_SIZE_LESSTHAN_ZERO"_s);
	$assignStatic(MsgKey::ER_INVALID_UTF16_SURROGATE, "ER_INVALID_UTF16_SURROGATE"_s);
	$assignStatic(MsgKey::ER_OIERROR, "ER_OIERROR"_s);
	$assignStatic(MsgKey::ER_NAMESPACE_PREFIX, "ER_NAMESPACE_PREFIX"_s);
	$assignStatic(MsgKey::ER_STRAY_ATTRIBUTE, "ER_STRAY_ATTRIBUTE"_s);
	$assignStatic(MsgKey::ER_STRAY_NAMESPACE, "ER_STRAY_NAMESPACE"_s);
	$assignStatic(MsgKey::ER_COULD_NOT_LOAD_RESOURCE, "ER_COULD_NOT_LOAD_RESOURCE"_s);
	$assignStatic(MsgKey::ER_COULD_NOT_LOAD_METHOD_PROPERTY, "ER_COULD_NOT_LOAD_METHOD_PROPERTY"_s);
	$assignStatic(MsgKey::ER_SERIALIZER_NOT_CONTENTHANDLER, "ER_SERIALIZER_NOT_CONTENTHANDLER"_s);
	$assignStatic(MsgKey::ER_ILLEGAL_ATTRIBUTE_POSITION, "ER_ILLEGAL_ATTRIBUTE_POSITION"_s);
	$assignStatic(MsgKey::ER_ILLEGAL_CHARACTER, "ER_ILLEGAL_CHARACTER"_s);
	$assignStatic(MsgKey::ER_INVALID_PORT, "ER_INVALID_PORT"_s);
	$assignStatic(MsgKey::ER_PORT_WHEN_HOST_NULL, "ER_PORT_WHEN_HOST_NULL"_s);
	$assignStatic(MsgKey::ER_HOST_ADDRESS_NOT_WELLFORMED, "ER_HOST_ADDRESS_NOT_WELLFORMED"_s);
	$assignStatic(MsgKey::ER_SCHEME_NOT_CONFORMANT, "ER_SCHEME_NOT_CONFORMANT"_s);
	$assignStatic(MsgKey::ER_SCHEME_FROM_NULL_STRING, "ER_SCHEME_FROM_NULL_STRING"_s);
	$assignStatic(MsgKey::ER_PATH_CONTAINS_INVALID_ESCAPE_SEQUENCE, "ER_PATH_CONTAINS_INVALID_ESCAPE_SEQUENCE"_s);
	$assignStatic(MsgKey::ER_PATH_INVALID_CHAR, "ER_PATH_INVALID_CHAR"_s);
	$assignStatic(MsgKey::ER_NO_SCHEME_INURI, "ER_NO_SCHEME_INURI"_s);
	$assignStatic(MsgKey::ER_FRAG_INVALID_CHAR, "ER_FRAG_INVALID_CHAR"_s);
	$assignStatic(MsgKey::ER_FRAG_WHEN_PATH_NULL, "ER_FRAG_WHEN_PATH_NULL"_s);
	$assignStatic(MsgKey::ER_FRAG_FOR_GENERIC_URI, "ER_FRAG_FOR_GENERIC_URI"_s);
	$assignStatic(MsgKey::ER_NO_SCHEME_IN_URI, "ER_NO_SCHEME_IN_URI"_s);
	$assignStatic(MsgKey::ER_CANNOT_INIT_URI_EMPTY_PARMS, "ER_CANNOT_INIT_URI_EMPTY_PARMS"_s);
	$assignStatic(MsgKey::ER_NO_FRAGMENT_STRING_IN_PATH, "ER_NO_FRAGMENT_STRING_IN_PATH"_s);
	$assignStatic(MsgKey::ER_NO_QUERY_STRING_IN_PATH, "ER_NO_QUERY_STRING_IN_PATH"_s);
	$assignStatic(MsgKey::ER_NO_PORT_IF_NO_HOST, "ER_NO_PORT_IF_NO_HOST"_s);
	$assignStatic(MsgKey::ER_NO_USERINFO_IF_NO_HOST, "ER_NO_USERINFO_IF_NO_HOST"_s);
	$assignStatic(MsgKey::ER_SCHEME_REQUIRED, "ER_SCHEME_REQUIRED"_s);
	$assignStatic(MsgKey::ER_XML_VERSION_NOT_SUPPORTED, "ER_XML_VERSION_NOT_SUPPORTED"_s);
	$assignStatic(MsgKey::ER_FACTORY_PROPERTY_MISSING, "ER_FACTORY_PROPERTY_MISSING"_s);
	$assignStatic(MsgKey::ER_ENCODING_NOT_SUPPORTED, "ER_ENCODING_NOT_SUPPORTED"_s);
	$assignStatic(MsgKey::ER_FEATURE_NOT_FOUND, "FEATURE_NOT_FOUND"_s);
	$assignStatic(MsgKey::ER_FEATURE_NOT_SUPPORTED, "FEATURE_NOT_SUPPORTED"_s);
	$assignStatic(MsgKey::ER_STRING_TOO_LONG, "DOMSTRING_SIZE_ERR"_s);
	$assignStatic(MsgKey::ER_TYPE_MISMATCH_ERR, "TYPE_MISMATCH_ERR"_s);
	$assignStatic(MsgKey::ER_NO_OUTPUT_SPECIFIED, "no-output-specified"_s);
	$assignStatic(MsgKey::ER_UNSUPPORTED_ENCODING, "unsupported-encoding"_s);
	$assignStatic(MsgKey::ER_ELEM_UNBOUND_PREFIX_IN_ENTREF, "unbound-prefix-in-entity-reference"_s);
	$assignStatic(MsgKey::ER_ATTR_UNBOUND_PREFIX_IN_ENTREF, "unbound-prefix-in-entity-reference"_s);
	$assignStatic(MsgKey::ER_CDATA_SECTIONS_SPLIT, "cdata-sections-splitted"_s);
	$assignStatic(MsgKey::ER_WF_INVALID_CHARACTER, "wf-invalid-character"_s);
	$assignStatic(MsgKey::ER_WF_INVALID_CHARACTER_IN_NODE_NAME, "wf-invalid-character-in-node-name"_s);
	$assignStatic(MsgKey::ER_UNABLE_TO_SERIALIZE_NODE, "ER_UNABLE_TO_SERIALIZE_NODE"_s);
	$assignStatic(MsgKey::ER_WARNING_WF_NOT_CHECKED, "ER_WARNING_WF_NOT_CHECKED"_s);
	$assignStatic(MsgKey::ER_WF_INVALID_CHARACTER_IN_COMMENT, "ER_WF_INVALID_CHARACTER_IN_COMMENT"_s);
	$assignStatic(MsgKey::ER_WF_INVALID_CHARACTER_IN_PI, "ER_WF_INVALID_CHARACTER_IN_PI"_s);
	$assignStatic(MsgKey::ER_WF_INVALID_CHARACTER_IN_CDATA, "ER_WF_INVALID_CHARACTER_IN_CDATA"_s);
	$assignStatic(MsgKey::ER_WF_INVALID_CHARACTER_IN_TEXT, "ER_WF_INVALID_CHARACTER_IN_TEXT"_s);
	$assignStatic(MsgKey::ER_WF_DASH_IN_COMMENT, "ER_WF_DASH_IN_COMMENT"_s);
	$assignStatic(MsgKey::ER_WF_LT_IN_ATTVAL, "ER_WF_LT_IN_ATTVAL"_s);
	$assignStatic(MsgKey::ER_WF_REF_TO_UNPARSED_ENT, "ER_WF_REF_TO_UNPARSED_ENT"_s);
	$assignStatic(MsgKey::ER_WF_REF_TO_EXTERNAL_ENT, "ER_WF_REF_TO_EXTERNAL_ENT"_s);
	$assignStatic(MsgKey::ER_NS_PREFIX_CANNOT_BE_BOUND, "ER_NS_PREFIX_CANNOT_BE_BOUND"_s);
	$assignStatic(MsgKey::ER_NULL_LOCAL_ELEMENT_NAME, "ER_NULL_LOCAL_ELEMENT_NAME"_s);
	$assignStatic(MsgKey::ER_NULL_LOCAL_ATTR_NAME, "ER_NULL_LOCAL_ATTR_NAME"_s);
	$assignStatic(MsgKey::ER_WRITING_INTERNAL_SUBSET, "ER_WRITING_INTERNAL_SUBSET"_s);
}

$Class* MsgKey::load$($String* name, bool initialize) {
	$loadClass(MsgKey, name, initialize, &_MsgKey_ClassInfo_, clinit$MsgKey, allocate$MsgKey);
	return class$;
}

$Class* MsgKey::class$ = nullptr;

							} // utils
						} // serializer
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com