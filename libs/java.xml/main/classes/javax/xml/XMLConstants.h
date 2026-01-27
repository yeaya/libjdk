#ifndef _javax_xml_XMLConstants_h_
#define _javax_xml_XMLConstants_h_
//$ class javax.xml.XMLConstants
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("ACCESS_EXTERNAL_DTD")
#undef ACCESS_EXTERNAL_DTD
#pragma push_macro("ACCESS_EXTERNAL_SCHEMA")
#undef ACCESS_EXTERNAL_SCHEMA
#pragma push_macro("ACCESS_EXTERNAL_STYLESHEET")
#undef ACCESS_EXTERNAL_STYLESHEET
#pragma push_macro("DEFAULT_NS_PREFIX")
#undef DEFAULT_NS_PREFIX
#pragma push_macro("FEATURE_SECURE_PROCESSING")
#undef FEATURE_SECURE_PROCESSING
#pragma push_macro("NULL_NS_URI")
#undef NULL_NS_URI
#pragma push_macro("RELAXNG_NS_URI")
#undef RELAXNG_NS_URI
#pragma push_macro("USE_CATALOG")
#undef USE_CATALOG
#pragma push_macro("W3C_XML_SCHEMA_INSTANCE_NS_URI")
#undef W3C_XML_SCHEMA_INSTANCE_NS_URI
#pragma push_macro("W3C_XML_SCHEMA_NS_URI")
#undef W3C_XML_SCHEMA_NS_URI
#pragma push_macro("W3C_XPATH_DATATYPE_NS_URI")
#undef W3C_XPATH_DATATYPE_NS_URI
#pragma push_macro("XMLNS_ATTRIBUTE")
#undef XMLNS_ATTRIBUTE
#pragma push_macro("XMLNS_ATTRIBUTE_NS_URI")
#undef XMLNS_ATTRIBUTE_NS_URI
#pragma push_macro("XML_DTD_NS_URI")
#undef XML_DTD_NS_URI
#pragma push_macro("XML_NS_PREFIX")
#undef XML_NS_PREFIX
#pragma push_macro("XML_NS_URI")
#undef XML_NS_URI

namespace javax {
	namespace xml {

class $export XMLConstants : public ::java::lang::Object {
	$class(XMLConstants, 0, ::java::lang::Object)
public:
	XMLConstants();
	void init$();
	static $String* NULL_NS_URI;
	static $String* DEFAULT_NS_PREFIX;
	static $String* XML_NS_URI;
	static $String* XML_NS_PREFIX;
	static $String* XMLNS_ATTRIBUTE_NS_URI;
	static $String* XMLNS_ATTRIBUTE;
	static $String* W3C_XML_SCHEMA_NS_URI;
	static $String* W3C_XML_SCHEMA_INSTANCE_NS_URI;
	static $String* W3C_XPATH_DATATYPE_NS_URI;
	static $String* XML_DTD_NS_URI;
	static $String* RELAXNG_NS_URI;
	static $String* FEATURE_SECURE_PROCESSING;
	static $String* ACCESS_EXTERNAL_DTD;
	static $String* ACCESS_EXTERNAL_SCHEMA;
	static $String* ACCESS_EXTERNAL_STYLESHEET;
	static $String* USE_CATALOG;
};

	} // xml
} // javax

#pragma pop_macro("ACCESS_EXTERNAL_DTD")
#pragma pop_macro("ACCESS_EXTERNAL_SCHEMA")
#pragma pop_macro("ACCESS_EXTERNAL_STYLESHEET")
#pragma pop_macro("DEFAULT_NS_PREFIX")
#pragma pop_macro("FEATURE_SECURE_PROCESSING")
#pragma pop_macro("NULL_NS_URI")
#pragma pop_macro("RELAXNG_NS_URI")
#pragma pop_macro("USE_CATALOG")
#pragma pop_macro("W3C_XML_SCHEMA_INSTANCE_NS_URI")
#pragma pop_macro("W3C_XML_SCHEMA_NS_URI")
#pragma pop_macro("W3C_XPATH_DATATYPE_NS_URI")
#pragma pop_macro("XMLNS_ATTRIBUTE")
#pragma pop_macro("XMLNS_ATTRIBUTE_NS_URI")
#pragma pop_macro("XML_DTD_NS_URI")
#pragma pop_macro("XML_NS_PREFIX")
#pragma pop_macro("XML_NS_URI")

#endif // _javax_xml_XMLConstants_h_