#ifndef _com_sun_org_apache_xml_internal_serializer_utils_MsgKey_h_
#define _com_sun_org_apache_xml_internal_serializer_utils_MsgKey_h_
//$ class com.sun.org.apache.xml.internal.serializer.utils.MsgKey
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("BAD_MSGFORMAT")
#undef BAD_MSGFORMAT
#pragma push_macro("BAD_MSGKEY")
#undef BAD_MSGKEY
#pragma push_macro("ER_ATTR_UNBOUND_PREFIX_IN_ENTREF")
#undef ER_ATTR_UNBOUND_PREFIX_IN_ENTREF
#pragma push_macro("ER_BUFFER_SIZE_LESSTHAN_ZERO")
#undef ER_BUFFER_SIZE_LESSTHAN_ZERO
#pragma push_macro("ER_CANNOT_INIT_URI_EMPTY_PARMS")
#undef ER_CANNOT_INIT_URI_EMPTY_PARMS
#pragma push_macro("ER_CDATA_SECTIONS_SPLIT")
#undef ER_CDATA_SECTIONS_SPLIT
#pragma push_macro("ER_COULD_NOT_LOAD_METHOD_PROPERTY")
#undef ER_COULD_NOT_LOAD_METHOD_PROPERTY
#pragma push_macro("ER_COULD_NOT_LOAD_RESOURCE")
#undef ER_COULD_NOT_LOAD_RESOURCE
#pragma push_macro("ER_ELEM_UNBOUND_PREFIX_IN_ENTREF")
#undef ER_ELEM_UNBOUND_PREFIX_IN_ENTREF
#pragma push_macro("ER_ENCODING_NOT_SUPPORTED")
#undef ER_ENCODING_NOT_SUPPORTED
#pragma push_macro("ER_FACTORY_PROPERTY_MISSING")
#undef ER_FACTORY_PROPERTY_MISSING
#pragma push_macro("ER_FEATURE_NOT_FOUND")
#undef ER_FEATURE_NOT_FOUND
#pragma push_macro("ER_FEATURE_NOT_SUPPORTED")
#undef ER_FEATURE_NOT_SUPPORTED
#pragma push_macro("ER_FRAG_FOR_GENERIC_URI")
#undef ER_FRAG_FOR_GENERIC_URI
#pragma push_macro("ER_FRAG_INVALID_CHAR")
#undef ER_FRAG_INVALID_CHAR
#pragma push_macro("ER_FRAG_WHEN_PATH_NULL")
#undef ER_FRAG_WHEN_PATH_NULL
#pragma push_macro("ER_HOST_ADDRESS_NOT_WELLFORMED")
#undef ER_HOST_ADDRESS_NOT_WELLFORMED
#pragma push_macro("ER_ILLEGAL_ATTRIBUTE_POSITION")
#undef ER_ILLEGAL_ATTRIBUTE_POSITION
#pragma push_macro("ER_ILLEGAL_CHARACTER")
#undef ER_ILLEGAL_CHARACTER
#pragma push_macro("ER_INVALID_PORT")
#undef ER_INVALID_PORT
#pragma push_macro("ER_INVALID_UTF16_SURROGATE")
#undef ER_INVALID_UTF16_SURROGATE
#pragma push_macro("ER_NAMESPACE_PREFIX")
#undef ER_NAMESPACE_PREFIX
#pragma push_macro("ER_NO_FRAGMENT_STRING_IN_PATH")
#undef ER_NO_FRAGMENT_STRING_IN_PATH
#pragma push_macro("ER_NO_OUTPUT_SPECIFIED")
#undef ER_NO_OUTPUT_SPECIFIED
#pragma push_macro("ER_NO_PORT_IF_NO_HOST")
#undef ER_NO_PORT_IF_NO_HOST
#pragma push_macro("ER_NO_QUERY_STRING_IN_PATH")
#undef ER_NO_QUERY_STRING_IN_PATH
#pragma push_macro("ER_NO_SCHEME_INURI")
#undef ER_NO_SCHEME_INURI
#pragma push_macro("ER_NO_SCHEME_IN_URI")
#undef ER_NO_SCHEME_IN_URI
#pragma push_macro("ER_NO_USERINFO_IF_NO_HOST")
#undef ER_NO_USERINFO_IF_NO_HOST
#pragma push_macro("ER_NS_PREFIX_CANNOT_BE_BOUND")
#undef ER_NS_PREFIX_CANNOT_BE_BOUND
#pragma push_macro("ER_NULL_LOCAL_ATTR_NAME")
#undef ER_NULL_LOCAL_ATTR_NAME
#pragma push_macro("ER_NULL_LOCAL_ELEMENT_NAME")
#undef ER_NULL_LOCAL_ELEMENT_NAME
#pragma push_macro("ER_OIERROR")
#undef ER_OIERROR
#pragma push_macro("ER_PATH_CONTAINS_INVALID_ESCAPE_SEQUENCE")
#undef ER_PATH_CONTAINS_INVALID_ESCAPE_SEQUENCE
#pragma push_macro("ER_PATH_INVALID_CHAR")
#undef ER_PATH_INVALID_CHAR
#pragma push_macro("ER_PORT_WHEN_HOST_NULL")
#undef ER_PORT_WHEN_HOST_NULL
#pragma push_macro("ER_RESOURCE_COULD_NOT_FIND")
#undef ER_RESOURCE_COULD_NOT_FIND
#pragma push_macro("ER_RESOURCE_COULD_NOT_LOAD")
#undef ER_RESOURCE_COULD_NOT_LOAD
#pragma push_macro("ER_SCHEME_FROM_NULL_STRING")
#undef ER_SCHEME_FROM_NULL_STRING
#pragma push_macro("ER_SCHEME_NOT_CONFORMANT")
#undef ER_SCHEME_NOT_CONFORMANT
#pragma push_macro("ER_SCHEME_REQUIRED")
#undef ER_SCHEME_REQUIRED
#pragma push_macro("ER_SERIALIZER_NOT_CONTENTHANDLER")
#undef ER_SERIALIZER_NOT_CONTENTHANDLER
#pragma push_macro("ER_STRAY_ATTRIBUTE")
#undef ER_STRAY_ATTRIBUTE
#pragma push_macro("ER_STRAY_NAMESPACE")
#undef ER_STRAY_NAMESPACE
#pragma push_macro("ER_STRING_TOO_LONG")
#undef ER_STRING_TOO_LONG
#pragma push_macro("ER_TYPE_MISMATCH_ERR")
#undef ER_TYPE_MISMATCH_ERR
#pragma push_macro("ER_UNABLE_TO_SERIALIZE_NODE")
#undef ER_UNABLE_TO_SERIALIZE_NODE
#pragma push_macro("ER_UNSUPPORTED_ENCODING")
#undef ER_UNSUPPORTED_ENCODING
#pragma push_macro("ER_WARNING_WF_NOT_CHECKED")
#undef ER_WARNING_WF_NOT_CHECKED
#pragma push_macro("ER_WF_DASH_IN_COMMENT")
#undef ER_WF_DASH_IN_COMMENT
#pragma push_macro("ER_WF_INVALID_CHARACTER")
#undef ER_WF_INVALID_CHARACTER
#pragma push_macro("ER_WF_INVALID_CHARACTER_IN_CDATA")
#undef ER_WF_INVALID_CHARACTER_IN_CDATA
#pragma push_macro("ER_WF_INVALID_CHARACTER_IN_COMMENT")
#undef ER_WF_INVALID_CHARACTER_IN_COMMENT
#pragma push_macro("ER_WF_INVALID_CHARACTER_IN_NODE_NAME")
#undef ER_WF_INVALID_CHARACTER_IN_NODE_NAME
#pragma push_macro("ER_WF_INVALID_CHARACTER_IN_PI")
#undef ER_WF_INVALID_CHARACTER_IN_PI
#pragma push_macro("ER_WF_INVALID_CHARACTER_IN_TEXT")
#undef ER_WF_INVALID_CHARACTER_IN_TEXT
#pragma push_macro("ER_WF_LT_IN_ATTVAL")
#undef ER_WF_LT_IN_ATTVAL
#pragma push_macro("ER_WF_REF_TO_EXTERNAL_ENT")
#undef ER_WF_REF_TO_EXTERNAL_ENT
#pragma push_macro("ER_WF_REF_TO_UNPARSED_ENT")
#undef ER_WF_REF_TO_UNPARSED_ENT
#pragma push_macro("ER_WRITING_INTERNAL_SUBSET")
#undef ER_WRITING_INTERNAL_SUBSET
#pragma push_macro("ER_XML_VERSION_NOT_SUPPORTED")
#undef ER_XML_VERSION_NOT_SUPPORTED

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace serializer {
							namespace utils {

class MsgKey : public ::java::lang::Object {
	$class(MsgKey, 0, ::java::lang::Object)
public:
	MsgKey();
	void init$();
	static $String* BAD_MSGKEY;
	static $String* BAD_MSGFORMAT;
	static $String* ER_RESOURCE_COULD_NOT_FIND;
	static $String* ER_RESOURCE_COULD_NOT_LOAD;
	static $String* ER_BUFFER_SIZE_LESSTHAN_ZERO;
	static $String* ER_INVALID_UTF16_SURROGATE;
	static $String* ER_OIERROR;
	static $String* ER_NAMESPACE_PREFIX;
	static $String* ER_STRAY_ATTRIBUTE;
	static $String* ER_STRAY_NAMESPACE;
	static $String* ER_COULD_NOT_LOAD_RESOURCE;
	static $String* ER_COULD_NOT_LOAD_METHOD_PROPERTY;
	static $String* ER_SERIALIZER_NOT_CONTENTHANDLER;
	static $String* ER_ILLEGAL_ATTRIBUTE_POSITION;
	static $String* ER_ILLEGAL_CHARACTER;
	static $String* ER_INVALID_PORT;
	static $String* ER_PORT_WHEN_HOST_NULL;
	static $String* ER_HOST_ADDRESS_NOT_WELLFORMED;
	static $String* ER_SCHEME_NOT_CONFORMANT;
	static $String* ER_SCHEME_FROM_NULL_STRING;
	static $String* ER_PATH_CONTAINS_INVALID_ESCAPE_SEQUENCE;
	static $String* ER_PATH_INVALID_CHAR;
	static $String* ER_NO_SCHEME_INURI;
	static $String* ER_FRAG_INVALID_CHAR;
	static $String* ER_FRAG_WHEN_PATH_NULL;
	static $String* ER_FRAG_FOR_GENERIC_URI;
	static $String* ER_NO_SCHEME_IN_URI;
	static $String* ER_CANNOT_INIT_URI_EMPTY_PARMS;
	static $String* ER_NO_FRAGMENT_STRING_IN_PATH;
	static $String* ER_NO_QUERY_STRING_IN_PATH;
	static $String* ER_NO_PORT_IF_NO_HOST;
	static $String* ER_NO_USERINFO_IF_NO_HOST;
	static $String* ER_SCHEME_REQUIRED;
	static $String* ER_XML_VERSION_NOT_SUPPORTED;
	static $String* ER_FACTORY_PROPERTY_MISSING;
	static $String* ER_ENCODING_NOT_SUPPORTED;
	static $String* ER_FEATURE_NOT_FOUND;
	static $String* ER_FEATURE_NOT_SUPPORTED;
	static $String* ER_STRING_TOO_LONG;
	static $String* ER_TYPE_MISMATCH_ERR;
	static $String* ER_NO_OUTPUT_SPECIFIED;
	static $String* ER_UNSUPPORTED_ENCODING;
	static $String* ER_ELEM_UNBOUND_PREFIX_IN_ENTREF;
	static $String* ER_ATTR_UNBOUND_PREFIX_IN_ENTREF;
	static $String* ER_CDATA_SECTIONS_SPLIT;
	static $String* ER_WF_INVALID_CHARACTER;
	static $String* ER_WF_INVALID_CHARACTER_IN_NODE_NAME;
	static $String* ER_UNABLE_TO_SERIALIZE_NODE;
	static $String* ER_WARNING_WF_NOT_CHECKED;
	static $String* ER_WF_INVALID_CHARACTER_IN_COMMENT;
	static $String* ER_WF_INVALID_CHARACTER_IN_PI;
	static $String* ER_WF_INVALID_CHARACTER_IN_CDATA;
	static $String* ER_WF_INVALID_CHARACTER_IN_TEXT;
	static $String* ER_WF_DASH_IN_COMMENT;
	static $String* ER_WF_LT_IN_ATTVAL;
	static $String* ER_WF_REF_TO_UNPARSED_ENT;
	static $String* ER_WF_REF_TO_EXTERNAL_ENT;
	static $String* ER_NS_PREFIX_CANNOT_BE_BOUND;
	static $String* ER_NULL_LOCAL_ELEMENT_NAME;
	static $String* ER_NULL_LOCAL_ATTR_NAME;
	static $String* ER_WRITING_INTERNAL_SUBSET;
};

							} // utils
						} // serializer
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("BAD_MSGFORMAT")
#pragma pop_macro("BAD_MSGKEY")
#pragma pop_macro("ER_ATTR_UNBOUND_PREFIX_IN_ENTREF")
#pragma pop_macro("ER_BUFFER_SIZE_LESSTHAN_ZERO")
#pragma pop_macro("ER_CANNOT_INIT_URI_EMPTY_PARMS")
#pragma pop_macro("ER_CDATA_SECTIONS_SPLIT")
#pragma pop_macro("ER_COULD_NOT_LOAD_METHOD_PROPERTY")
#pragma pop_macro("ER_COULD_NOT_LOAD_RESOURCE")
#pragma pop_macro("ER_ELEM_UNBOUND_PREFIX_IN_ENTREF")
#pragma pop_macro("ER_ENCODING_NOT_SUPPORTED")
#pragma pop_macro("ER_FACTORY_PROPERTY_MISSING")
#pragma pop_macro("ER_FEATURE_NOT_FOUND")
#pragma pop_macro("ER_FEATURE_NOT_SUPPORTED")
#pragma pop_macro("ER_FRAG_FOR_GENERIC_URI")
#pragma pop_macro("ER_FRAG_INVALID_CHAR")
#pragma pop_macro("ER_FRAG_WHEN_PATH_NULL")
#pragma pop_macro("ER_HOST_ADDRESS_NOT_WELLFORMED")
#pragma pop_macro("ER_ILLEGAL_ATTRIBUTE_POSITION")
#pragma pop_macro("ER_ILLEGAL_CHARACTER")
#pragma pop_macro("ER_INVALID_PORT")
#pragma pop_macro("ER_INVALID_UTF16_SURROGATE")
#pragma pop_macro("ER_NAMESPACE_PREFIX")
#pragma pop_macro("ER_NO_FRAGMENT_STRING_IN_PATH")
#pragma pop_macro("ER_NO_OUTPUT_SPECIFIED")
#pragma pop_macro("ER_NO_PORT_IF_NO_HOST")
#pragma pop_macro("ER_NO_QUERY_STRING_IN_PATH")
#pragma pop_macro("ER_NO_SCHEME_INURI")
#pragma pop_macro("ER_NO_SCHEME_IN_URI")
#pragma pop_macro("ER_NO_USERINFO_IF_NO_HOST")
#pragma pop_macro("ER_NS_PREFIX_CANNOT_BE_BOUND")
#pragma pop_macro("ER_NULL_LOCAL_ATTR_NAME")
#pragma pop_macro("ER_NULL_LOCAL_ELEMENT_NAME")
#pragma pop_macro("ER_OIERROR")
#pragma pop_macro("ER_PATH_CONTAINS_INVALID_ESCAPE_SEQUENCE")
#pragma pop_macro("ER_PATH_INVALID_CHAR")
#pragma pop_macro("ER_PORT_WHEN_HOST_NULL")
#pragma pop_macro("ER_RESOURCE_COULD_NOT_FIND")
#pragma pop_macro("ER_RESOURCE_COULD_NOT_LOAD")
#pragma pop_macro("ER_SCHEME_FROM_NULL_STRING")
#pragma pop_macro("ER_SCHEME_NOT_CONFORMANT")
#pragma pop_macro("ER_SCHEME_REQUIRED")
#pragma pop_macro("ER_SERIALIZER_NOT_CONTENTHANDLER")
#pragma pop_macro("ER_STRAY_ATTRIBUTE")
#pragma pop_macro("ER_STRAY_NAMESPACE")
#pragma pop_macro("ER_STRING_TOO_LONG")
#pragma pop_macro("ER_TYPE_MISMATCH_ERR")
#pragma pop_macro("ER_UNABLE_TO_SERIALIZE_NODE")
#pragma pop_macro("ER_UNSUPPORTED_ENCODING")
#pragma pop_macro("ER_WARNING_WF_NOT_CHECKED")
#pragma pop_macro("ER_WF_DASH_IN_COMMENT")
#pragma pop_macro("ER_WF_INVALID_CHARACTER")
#pragma pop_macro("ER_WF_INVALID_CHARACTER_IN_CDATA")
#pragma pop_macro("ER_WF_INVALID_CHARACTER_IN_COMMENT")
#pragma pop_macro("ER_WF_INVALID_CHARACTER_IN_NODE_NAME")
#pragma pop_macro("ER_WF_INVALID_CHARACTER_IN_PI")
#pragma pop_macro("ER_WF_INVALID_CHARACTER_IN_TEXT")
#pragma pop_macro("ER_WF_LT_IN_ATTVAL")
#pragma pop_macro("ER_WF_REF_TO_EXTERNAL_ENT")
#pragma pop_macro("ER_WF_REF_TO_UNPARSED_ENT")
#pragma pop_macro("ER_WRITING_INTERNAL_SUBSET")
#pragma pop_macro("ER_XML_VERSION_NOT_SUPPORTED")

#endif // _com_sun_org_apache_xml_internal_serializer_utils_MsgKey_h_