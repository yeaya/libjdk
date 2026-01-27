#ifndef _com_sun_org_apache_xml_internal_serializer_SerializerTrace_h_
#define _com_sun_org_apache_xml_internal_serializer_SerializerTrace_h_
//$ interface com.sun.org.apache.xml.internal.serializer.SerializerTrace
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("EVENTTYPE_CDATA")
#undef EVENTTYPE_CDATA
#pragma push_macro("EVENTTYPE_CHARACTERS")
#undef EVENTTYPE_CHARACTERS
#pragma push_macro("EVENTTYPE_COMMENT")
#undef EVENTTYPE_COMMENT
#pragma push_macro("EVENTTYPE_ENDDOCUMENT")
#undef EVENTTYPE_ENDDOCUMENT
#pragma push_macro("EVENTTYPE_ENDELEMENT")
#undef EVENTTYPE_ENDELEMENT
#pragma push_macro("EVENTTYPE_ENTITYREF")
#undef EVENTTYPE_ENTITYREF
#pragma push_macro("EVENTTYPE_IGNORABLEWHITESPACE")
#undef EVENTTYPE_IGNORABLEWHITESPACE
#pragma push_macro("EVENTTYPE_OUTPUT_CHARACTERS")
#undef EVENTTYPE_OUTPUT_CHARACTERS
#pragma push_macro("EVENTTYPE_OUTPUT_PSEUDO_CHARACTERS")
#undef EVENTTYPE_OUTPUT_PSEUDO_CHARACTERS
#pragma push_macro("EVENTTYPE_PI")
#undef EVENTTYPE_PI
#pragma push_macro("EVENTTYPE_STARTDOCUMENT")
#undef EVENTTYPE_STARTDOCUMENT
#pragma push_macro("EVENTTYPE_STARTELEMENT")
#undef EVENTTYPE_STARTELEMENT

namespace org {
	namespace xml {
		namespace sax {
			class Attributes;
		}
	}
}

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace serializer {

class SerializerTrace : public ::java::lang::Object {
	$interface(SerializerTrace, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void fireGenerateEvent(int32_t eventType) {}
	virtual void fireGenerateEvent(int32_t eventType, $String* name, ::org::xml::sax::Attributes* atts) {}
	virtual void fireGenerateEvent(int32_t eventType, $chars* ch, int32_t start, int32_t length) {}
	virtual void fireGenerateEvent(int32_t eventType, $String* name, $String* data) {}
	virtual void fireGenerateEvent(int32_t eventType, $String* data) {}
	virtual bool hasTraceListeners() {return false;}
	static const int32_t EVENTTYPE_STARTDOCUMENT = 1;
	static const int32_t EVENTTYPE_ENDDOCUMENT = 2;
	static const int32_t EVENTTYPE_STARTELEMENT = 3;
	static const int32_t EVENTTYPE_ENDELEMENT = 4;
	static const int32_t EVENTTYPE_CHARACTERS = 5;
	static const int32_t EVENTTYPE_IGNORABLEWHITESPACE = 6;
	static const int32_t EVENTTYPE_PI = 7;
	static const int32_t EVENTTYPE_COMMENT = 8;
	static const int32_t EVENTTYPE_ENTITYREF = 9;
	static const int32_t EVENTTYPE_CDATA = 10;
	static const int32_t EVENTTYPE_OUTPUT_PSEUDO_CHARACTERS = 11;
	static const int32_t EVENTTYPE_OUTPUT_CHARACTERS = 12;
};

						} // serializer
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("EVENTTYPE_CDATA")
#pragma pop_macro("EVENTTYPE_CHARACTERS")
#pragma pop_macro("EVENTTYPE_COMMENT")
#pragma pop_macro("EVENTTYPE_ENDDOCUMENT")
#pragma pop_macro("EVENTTYPE_ENDELEMENT")
#pragma pop_macro("EVENTTYPE_ENTITYREF")
#pragma pop_macro("EVENTTYPE_IGNORABLEWHITESPACE")
#pragma pop_macro("EVENTTYPE_OUTPUT_CHARACTERS")
#pragma pop_macro("EVENTTYPE_OUTPUT_PSEUDO_CHARACTERS")
#pragma pop_macro("EVENTTYPE_PI")
#pragma pop_macro("EVENTTYPE_STARTDOCUMENT")
#pragma pop_macro("EVENTTYPE_STARTELEMENT")

#endif // _com_sun_org_apache_xml_internal_serializer_SerializerTrace_h_