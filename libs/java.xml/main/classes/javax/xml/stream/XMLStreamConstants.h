#ifndef _javax_xml_stream_XMLStreamConstants_h_
#define _javax_xml_stream_XMLStreamConstants_h_
//$ interface javax.xml.stream.XMLStreamConstants
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("ATTRIBUTE")
#undef ATTRIBUTE
#pragma push_macro("CDATA")
#undef CDATA
#pragma push_macro("CHARACTERS")
#undef CHARACTERS
#pragma push_macro("COMMENT")
#undef COMMENT
#pragma push_macro("DTD")
#undef DTD
#pragma push_macro("END_DOCUMENT")
#undef END_DOCUMENT
#pragma push_macro("END_ELEMENT")
#undef END_ELEMENT
#pragma push_macro("ENTITY_DECLARATION")
#undef ENTITY_DECLARATION
#pragma push_macro("ENTITY_REFERENCE")
#undef ENTITY_REFERENCE
#pragma push_macro("NAMESPACE")
#undef NAMESPACE
#pragma push_macro("NOTATION_DECLARATION")
#undef NOTATION_DECLARATION
#pragma push_macro("PROCESSING_INSTRUCTION")
#undef PROCESSING_INSTRUCTION
#pragma push_macro("SPACE")
#undef SPACE
#pragma push_macro("START_DOCUMENT")
#undef START_DOCUMENT
#pragma push_macro("START_ELEMENT")
#undef START_ELEMENT

namespace javax {
	namespace xml {
		namespace stream {

class $export XMLStreamConstants : public ::java::lang::Object {
	$interface(XMLStreamConstants, $NO_CLASS_INIT, ::java::lang::Object)
public:
	static const int32_t START_ELEMENT = 1;
	static const int32_t END_ELEMENT = 2;
	static const int32_t PROCESSING_INSTRUCTION = 3;
	static const int32_t CHARACTERS = 4;
	static const int32_t COMMENT = 5;
	static const int32_t SPACE = 6;
	static const int32_t START_DOCUMENT = 7;
	static const int32_t END_DOCUMENT = 8;
	static const int32_t ENTITY_REFERENCE = 9;
	static const int32_t ATTRIBUTE = 10;
	static const int32_t DTD = 11;
	static const int32_t CDATA = 12;
	static const int32_t NAMESPACE = 13;
	static const int32_t NOTATION_DECLARATION = 14;
	static const int32_t ENTITY_DECLARATION = 15;
};

		} // stream
	} // xml
} // javax

#pragma pop_macro("ATTRIBUTE")
#pragma pop_macro("CDATA")
#pragma pop_macro("CHARACTERS")
#pragma pop_macro("COMMENT")
#pragma pop_macro("DTD")
#pragma pop_macro("END_DOCUMENT")
#pragma pop_macro("END_ELEMENT")
#pragma pop_macro("ENTITY_DECLARATION")
#pragma pop_macro("ENTITY_REFERENCE")
#pragma pop_macro("NAMESPACE")
#pragma pop_macro("NOTATION_DECLARATION")
#pragma pop_macro("PROCESSING_INSTRUCTION")
#pragma pop_macro("SPACE")
#pragma pop_macro("START_DOCUMENT")
#pragma pop_macro("START_ELEMENT")

#endif // _javax_xml_stream_XMLStreamConstants_h_