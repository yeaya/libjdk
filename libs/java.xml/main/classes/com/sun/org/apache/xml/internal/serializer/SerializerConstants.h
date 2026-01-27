#ifndef _com_sun_org_apache_xml_internal_serializer_SerializerConstants_h_
#define _com_sun_org_apache_xml_internal_serializer_SerializerConstants_h_
//$ interface com.sun.org.apache.xml.internal.serializer.SerializerConstants
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("CDATA_CONTINUE")
#undef CDATA_CONTINUE
#pragma push_macro("CDATA_DELIMITER_CLOSE")
#undef CDATA_DELIMITER_CLOSE
#pragma push_macro("CDATA_DELIMITER_OPEN")
#undef CDATA_DELIMITER_OPEN
#pragma push_macro("DEFAULT_SAX_SERIALIZER")
#undef DEFAULT_SAX_SERIALIZER
#pragma push_macro("EMPTYSTRING")
#undef EMPTYSTRING
#pragma push_macro("ENTITY_AMP")
#undef ENTITY_AMP
#pragma push_macro("ENTITY_CRLF")
#undef ENTITY_CRLF
#pragma push_macro("ENTITY_GT")
#undef ENTITY_GT
#pragma push_macro("ENTITY_LT")
#undef ENTITY_LT
#pragma push_macro("ENTITY_QUOT")
#undef ENTITY_QUOT
#pragma push_macro("XMLNS_PREFIX")
#undef XMLNS_PREFIX
#pragma push_macro("XMLNS_URI")
#undef XMLNS_URI
#pragma push_macro("XMLVERSION10")
#undef XMLVERSION10
#pragma push_macro("XMLVERSION11")
#undef XMLVERSION11
#pragma push_macro("XML_PREFIX")
#undef XML_PREFIX

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace serializer {

class SerializerConstants : public ::java::lang::Object {
	$interface(SerializerConstants, 0, ::java::lang::Object)
public:
	static $String* CDATA_CONTINUE;
	static $String* CDATA_DELIMITER_CLOSE;
	static $String* CDATA_DELIMITER_OPEN;
	static $String* EMPTYSTRING;
	static $String* ENTITY_AMP;
	static $String* ENTITY_CRLF;
	static $String* ENTITY_GT;
	static $String* ENTITY_LT;
	static $String* ENTITY_QUOT;
	static $String* XML_PREFIX;
	static $String* XMLNS_PREFIX;
	static $String* XMLNS_URI;
	static $String* DEFAULT_SAX_SERIALIZER;
	static $String* XMLVERSION11;
	static $String* XMLVERSION10;
};

						} // serializer
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("CDATA_CONTINUE")
#pragma pop_macro("CDATA_DELIMITER_CLOSE")
#pragma pop_macro("CDATA_DELIMITER_OPEN")
#pragma pop_macro("DEFAULT_SAX_SERIALIZER")
#pragma pop_macro("EMPTYSTRING")
#pragma pop_macro("ENTITY_AMP")
#pragma pop_macro("ENTITY_CRLF")
#pragma pop_macro("ENTITY_GT")
#pragma pop_macro("ENTITY_LT")
#pragma pop_macro("ENTITY_QUOT")
#pragma pop_macro("XMLNS_PREFIX")
#pragma pop_macro("XMLNS_URI")
#pragma pop_macro("XMLVERSION10")
#pragma pop_macro("XMLVERSION11")
#pragma pop_macro("XML_PREFIX")

#endif // _com_sun_org_apache_xml_internal_serializer_SerializerConstants_h_