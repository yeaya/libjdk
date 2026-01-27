#ifndef _com_sun_org_apache_xml_internal_serializer_dom3_DOMConstants_h_
#define _com_sun_org_apache_xml_internal_serializer_dom3_DOMConstants_h_
//$ class com.sun.org.apache.xml.internal.serializer.dom3.DOMConstants
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("DOM3_DEFAULT_FALSE")
#undef DOM3_DEFAULT_FALSE
#pragma push_macro("DOM3_DEFAULT_TRUE")
#undef DOM3_DEFAULT_TRUE
#pragma push_macro("DOM3_EXPLICIT_FALSE")
#undef DOM3_EXPLICIT_FALSE
#pragma push_macro("DOM3_EXPLICIT_TRUE")
#undef DOM3_EXPLICIT_TRUE
#pragma push_macro("DOM3_REC_URL")
#undef DOM3_REC_URL
#pragma push_macro("DOM_CANONICAL_FORM")
#undef DOM_CANONICAL_FORM
#pragma push_macro("DOM_CDATA_SECTIONS")
#undef DOM_CDATA_SECTIONS
#pragma push_macro("DOM_CHECK_CHAR_NORMALIZATION")
#undef DOM_CHECK_CHAR_NORMALIZATION
#pragma push_macro("DOM_COMMENTS")
#undef DOM_COMMENTS
#pragma push_macro("DOM_DATATYPE_NORMALIZATION")
#undef DOM_DATATYPE_NORMALIZATION
#pragma push_macro("DOM_DISCARD_DEFAULT_CONTENT")
#undef DOM_DISCARD_DEFAULT_CONTENT
#pragma push_macro("DOM_ELEMENT_CONTENT_WHITESPACE")
#undef DOM_ELEMENT_CONTENT_WHITESPACE
#pragma push_macro("DOM_ENTITIES")
#undef DOM_ENTITIES
#pragma push_macro("DOM_ERROR_HANDLER")
#undef DOM_ERROR_HANDLER
#pragma push_macro("DOM_EXCEPTION_FEATURE_NOT_FOUND")
#undef DOM_EXCEPTION_FEATURE_NOT_FOUND
#pragma push_macro("DOM_EXCEPTION_FEATURE_NOT_SUPPORTED")
#undef DOM_EXCEPTION_FEATURE_NOT_SUPPORTED
#pragma push_macro("DOM_FORMAT_PRETTY_PRINT")
#undef DOM_FORMAT_PRETTY_PRINT
#pragma push_macro("DOM_IGNORE_UNKNOWN_CHARACTER_DENORMALIZATIONS")
#undef DOM_IGNORE_UNKNOWN_CHARACTER_DENORMALIZATIONS
#pragma push_macro("DOM_INFOSET")
#undef DOM_INFOSET
#pragma push_macro("DOM_LSEXCEPTION_SERIALIZER_ERR")
#undef DOM_LSEXCEPTION_SERIALIZER_ERR
#pragma push_macro("DOM_NAMESPACES")
#undef DOM_NAMESPACES
#pragma push_macro("DOM_NAMESPACE_DECLARATIONS")
#undef DOM_NAMESPACE_DECLARATIONS
#pragma push_macro("DOM_NORMALIZE_CHARACTERS")
#undef DOM_NORMALIZE_CHARACTERS
#pragma push_macro("DOM_SCHEMA_LOCATION")
#undef DOM_SCHEMA_LOCATION
#pragma push_macro("DOM_SCHEMA_TYPE")
#undef DOM_SCHEMA_TYPE
#pragma push_macro("DOM_SPLIT_CDATA")
#undef DOM_SPLIT_CDATA
#pragma push_macro("DOM_VALIDATE")
#undef DOM_VALIDATE
#pragma push_macro("DOM_VALIDATE_IF_SCHEMA")
#undef DOM_VALIDATE_IF_SCHEMA
#pragma push_macro("DOM_WELLFORMED")
#undef DOM_WELLFORMED
#pragma push_macro("DOM_XMLDECL")
#undef DOM_XMLDECL
#pragma push_macro("NS_IS_STANDALONE")
#undef NS_IS_STANDALONE
#pragma push_macro("ORACLE_URL")
#undef ORACLE_URL
#pragma push_macro("S_DOM3_PROPERTIES_NS")
#undef S_DOM3_PROPERTIES_NS
#pragma push_macro("S_JDK_PROPERTIES_NS")
#undef S_JDK_PROPERTIES_NS
#pragma push_macro("S_XERCES_PROPERTIES_NS")
#undef S_XERCES_PROPERTIES_NS
#pragma push_macro("S_XML_VERSION")
#undef S_XML_VERSION
#pragma push_macro("S_XSL_OUTPUT_ENCODING")
#undef S_XSL_OUTPUT_ENCODING
#pragma push_macro("S_XSL_OUTPUT_INDENT")
#undef S_XSL_OUTPUT_INDENT
#pragma push_macro("S_XSL_OUTPUT_OMIT_XML_DECL")
#undef S_XSL_OUTPUT_OMIT_XML_DECL
#pragma push_macro("S_XSL_VALUE_ENTITIES")
#undef S_XSL_VALUE_ENTITIES
#pragma push_macro("XERCES_URL")
#undef XERCES_URL
#pragma push_macro("XMLNS_PREFIX")
#undef XMLNS_PREFIX
#pragma push_macro("XMLNS_URI")
#undef XMLNS_URI

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace serializer {
							namespace dom3 {

class DOMConstants : public ::java::lang::Object {
	$class(DOMConstants, 0, ::java::lang::Object)
public:
	DOMConstants();
	void init$();
	static $String* DOM3_REC_URL;
	static $String* XERCES_URL;
	static $String* ORACLE_URL;
	static $String* S_DOM3_PROPERTIES_NS;
	static $String* S_XERCES_PROPERTIES_NS;
	static $String* S_JDK_PROPERTIES_NS;
	static $String* XMLNS_URI;
	static $String* XMLNS_PREFIX;
	static $String* DOM_CANONICAL_FORM;
	static $String* DOM_CDATA_SECTIONS;
	static $String* DOM_CHECK_CHAR_NORMALIZATION;
	static $String* DOM_COMMENTS;
	static $String* DOM_DATATYPE_NORMALIZATION;
	static $String* DOM_ELEMENT_CONTENT_WHITESPACE;
	static $String* DOM_ENTITIES;
	static $String* DOM_INFOSET;
	static $String* DOM_NAMESPACES;
	static $String* DOM_NAMESPACE_DECLARATIONS;
	static $String* DOM_NORMALIZE_CHARACTERS;
	static $String* DOM_SPLIT_CDATA;
	static $String* DOM_VALIDATE_IF_SCHEMA;
	static $String* DOM_VALIDATE;
	static $String* DOM_WELLFORMED;
	static $String* DOM_DISCARD_DEFAULT_CONTENT;
	static $String* DOM_FORMAT_PRETTY_PRINT;
	static $String* DOM_IGNORE_UNKNOWN_CHARACTER_DENORMALIZATIONS;
	static $String* DOM_XMLDECL;
	static $String* DOM_ERROR_HANDLER;
	static $String* DOM_SCHEMA_TYPE;
	static $String* DOM_SCHEMA_LOCATION;
	static $String* S_XSL_OUTPUT_INDENT;
	static $String* S_XSL_OUTPUT_ENCODING;
	static $String* S_XSL_OUTPUT_OMIT_XML_DECL;
	static $String* S_XML_VERSION;
	static $String* NS_IS_STANDALONE;
	static $String* S_XSL_VALUE_ENTITIES;
	static $String* DOM3_EXPLICIT_TRUE;
	static $String* DOM3_DEFAULT_TRUE;
	static $String* DOM3_EXPLICIT_FALSE;
	static $String* DOM3_DEFAULT_FALSE;
	static $String* DOM_EXCEPTION_FEATURE_NOT_FOUND;
	static $String* DOM_EXCEPTION_FEATURE_NOT_SUPPORTED;
	static $String* DOM_LSEXCEPTION_SERIALIZER_ERR;
};

							} // dom3
						} // serializer
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("DOM3_DEFAULT_FALSE")
#pragma pop_macro("DOM3_DEFAULT_TRUE")
#pragma pop_macro("DOM3_EXPLICIT_FALSE")
#pragma pop_macro("DOM3_EXPLICIT_TRUE")
#pragma pop_macro("DOM3_REC_URL")
#pragma pop_macro("DOM_CANONICAL_FORM")
#pragma pop_macro("DOM_CDATA_SECTIONS")
#pragma pop_macro("DOM_CHECK_CHAR_NORMALIZATION")
#pragma pop_macro("DOM_COMMENTS")
#pragma pop_macro("DOM_DATATYPE_NORMALIZATION")
#pragma pop_macro("DOM_DISCARD_DEFAULT_CONTENT")
#pragma pop_macro("DOM_ELEMENT_CONTENT_WHITESPACE")
#pragma pop_macro("DOM_ENTITIES")
#pragma pop_macro("DOM_ERROR_HANDLER")
#pragma pop_macro("DOM_EXCEPTION_FEATURE_NOT_FOUND")
#pragma pop_macro("DOM_EXCEPTION_FEATURE_NOT_SUPPORTED")
#pragma pop_macro("DOM_FORMAT_PRETTY_PRINT")
#pragma pop_macro("DOM_IGNORE_UNKNOWN_CHARACTER_DENORMALIZATIONS")
#pragma pop_macro("DOM_INFOSET")
#pragma pop_macro("DOM_LSEXCEPTION_SERIALIZER_ERR")
#pragma pop_macro("DOM_NAMESPACES")
#pragma pop_macro("DOM_NAMESPACE_DECLARATIONS")
#pragma pop_macro("DOM_NORMALIZE_CHARACTERS")
#pragma pop_macro("DOM_SCHEMA_LOCATION")
#pragma pop_macro("DOM_SCHEMA_TYPE")
#pragma pop_macro("DOM_SPLIT_CDATA")
#pragma pop_macro("DOM_VALIDATE")
#pragma pop_macro("DOM_VALIDATE_IF_SCHEMA")
#pragma pop_macro("DOM_WELLFORMED")
#pragma pop_macro("DOM_XMLDECL")
#pragma pop_macro("NS_IS_STANDALONE")
#pragma pop_macro("ORACLE_URL")
#pragma pop_macro("S_DOM3_PROPERTIES_NS")
#pragma pop_macro("S_JDK_PROPERTIES_NS")
#pragma pop_macro("S_XERCES_PROPERTIES_NS")
#pragma pop_macro("S_XML_VERSION")
#pragma pop_macro("S_XSL_OUTPUT_ENCODING")
#pragma pop_macro("S_XSL_OUTPUT_INDENT")
#pragma pop_macro("S_XSL_OUTPUT_OMIT_XML_DECL")
#pragma pop_macro("S_XSL_VALUE_ENTITIES")
#pragma pop_macro("XERCES_URL")
#pragma pop_macro("XMLNS_PREFIX")
#pragma pop_macro("XMLNS_URI")

#endif // _com_sun_org_apache_xml_internal_serializer_dom3_DOMConstants_h_