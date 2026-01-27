#ifndef _com_sun_org_apache_xml_internal_serializer_OutputPropertiesFactory_h_
#define _com_sun_org_apache_xml_internal_serializer_OutputPropertiesFactory_h_
//$ class com.sun.org.apache.xml.internal.serializer.OutputPropertiesFactory
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("PROP_HTML")
#undef PROP_HTML
#pragma push_macro("PROP_HTML_VALUE")
#undef PROP_HTML_VALUE
#pragma push_macro("PROP_TEXT")
#undef PROP_TEXT
#pragma push_macro("PROP_TEXT_VALUE")
#undef PROP_TEXT_VALUE
#pragma push_macro("PROP_UNKNOWN")
#undef PROP_UNKNOWN
#pragma push_macro("PROP_UNKNOWN_VALUE")
#undef PROP_UNKNOWN_VALUE
#pragma push_macro("PROP_XML")
#undef PROP_XML
#pragma push_macro("PROP_XML_VALUE")
#undef PROP_XML_VALUE
#pragma push_macro("S_BUILTIN_EXTENSIONS_UNIVERSAL")
#undef S_BUILTIN_EXTENSIONS_UNIVERSAL
#pragma push_macro("S_BUILTIN_EXTENSIONS_URL")
#undef S_BUILTIN_EXTENSIONS_URL
#pragma push_macro("S_BUILTIN_OLD_EXTENSIONS_UNIVERSAL")
#undef S_BUILTIN_OLD_EXTENSIONS_UNIVERSAL
#pragma push_macro("S_BUILTIN_OLD_EXTENSIONS_UNIVERSAL_LEN")
#undef S_BUILTIN_OLD_EXTENSIONS_UNIVERSAL_LEN
#pragma push_macro("S_BUILTIN_OLD_EXTENSIONS_URL")
#undef S_BUILTIN_OLD_EXTENSIONS_URL
#pragma push_macro("S_KEY_CONTENT_HANDLER")
#undef S_KEY_CONTENT_HANDLER
#pragma push_macro("S_KEY_ENTITIES")
#undef S_KEY_ENTITIES
#pragma push_macro("S_KEY_INDENT_AMOUNT")
#undef S_KEY_INDENT_AMOUNT
#pragma push_macro("S_KEY_LINE_SEPARATOR")
#undef S_KEY_LINE_SEPARATOR
#pragma push_macro("S_OMIT_META_TAG")
#undef S_OMIT_META_TAG
#pragma push_macro("S_USE_URL_ESCAPING")
#undef S_USE_URL_ESCAPING

namespace java {
	namespace util {
		class Properties;
	}
}

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace serializer {

class OutputPropertiesFactory : public ::java::lang::Object {
	$class(OutputPropertiesFactory, 0, ::java::lang::Object)
public:
	OutputPropertiesFactory();
	void init$();
	static ::java::util::Properties* getDefaultMethodProperties($String* method);
	static ::java::util::Properties* initProperties($StringArray* keys, $StringArray* values, ::java::util::Properties* defaults);
	static $String* S_BUILTIN_EXTENSIONS_URL;
	static $String* S_BUILTIN_OLD_EXTENSIONS_URL;
	static $String* S_BUILTIN_EXTENSIONS_UNIVERSAL;
	static $String* S_KEY_INDENT_AMOUNT;
	static $String* S_KEY_LINE_SEPARATOR;
	static $String* S_KEY_CONTENT_HANDLER;
	static $String* S_KEY_ENTITIES;
	static $String* S_USE_URL_ESCAPING;
	static $String* S_OMIT_META_TAG;
	static $String* S_BUILTIN_OLD_EXTENSIONS_UNIVERSAL;
	static int32_t S_BUILTIN_OLD_EXTENSIONS_UNIVERSAL_LEN;
	static $StringArray* PROP_XML;
	static $StringArray* PROP_XML_VALUE;
	static $StringArray* PROP_HTML;
	static $StringArray* PROP_HTML_VALUE;
	static $StringArray* PROP_TEXT;
	static $StringArray* PROP_TEXT_VALUE;
	static $StringArray* PROP_UNKNOWN;
	static $StringArray* PROP_UNKNOWN_VALUE;
	static ::java::util::Properties* m_xml_properties;
	static ::java::util::Properties* m_html_properties;
	static ::java::util::Properties* m_text_properties;
	static ::java::util::Properties* m_unknown_properties;
};

						} // serializer
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("PROP_HTML")
#pragma pop_macro("PROP_HTML_VALUE")
#pragma pop_macro("PROP_TEXT")
#pragma pop_macro("PROP_TEXT_VALUE")
#pragma pop_macro("PROP_UNKNOWN")
#pragma pop_macro("PROP_UNKNOWN_VALUE")
#pragma pop_macro("PROP_XML")
#pragma pop_macro("PROP_XML_VALUE")
#pragma pop_macro("S_BUILTIN_EXTENSIONS_UNIVERSAL")
#pragma pop_macro("S_BUILTIN_EXTENSIONS_URL")
#pragma pop_macro("S_BUILTIN_OLD_EXTENSIONS_UNIVERSAL")
#pragma pop_macro("S_BUILTIN_OLD_EXTENSIONS_UNIVERSAL_LEN")
#pragma pop_macro("S_BUILTIN_OLD_EXTENSIONS_URL")
#pragma pop_macro("S_KEY_CONTENT_HANDLER")
#pragma pop_macro("S_KEY_ENTITIES")
#pragma pop_macro("S_KEY_INDENT_AMOUNT")
#pragma pop_macro("S_KEY_LINE_SEPARATOR")
#pragma pop_macro("S_OMIT_META_TAG")
#pragma pop_macro("S_USE_URL_ESCAPING")

#endif // _com_sun_org_apache_xml_internal_serializer_OutputPropertiesFactory_h_