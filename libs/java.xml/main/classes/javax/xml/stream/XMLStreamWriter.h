#ifndef _javax_xml_stream_XMLStreamWriter_h_
#define _javax_xml_stream_XMLStreamWriter_h_
//$ interface javax.xml.stream.XMLStreamWriter
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace javax {
	namespace xml {
		namespace namespace$ {
			class NamespaceContext;
		}
	}
}

namespace javax {
	namespace xml {
		namespace stream {

class $export XMLStreamWriter : public ::java::lang::Object {
	$interface(XMLStreamWriter, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void close() {}
	virtual void flush() {}
	virtual ::javax::xml::namespace$::NamespaceContext* getNamespaceContext() {return nullptr;}
	virtual $String* getPrefix($String* uri) {return nullptr;}
	virtual $Object* getProperty($String* name) {return nullptr;}
	virtual void setDefaultNamespace($String* uri) {}
	virtual void setNamespaceContext(::javax::xml::namespace$::NamespaceContext* context) {}
	virtual void setPrefix($String* prefix, $String* uri) {}
	virtual void writeAttribute($String* localName, $String* value) {}
	virtual void writeAttribute($String* prefix, $String* namespaceURI, $String* localName, $String* value) {}
	virtual void writeAttribute($String* namespaceURI, $String* localName, $String* value) {}
	virtual void writeCData($String* data) {}
	virtual void writeCharacters($String* text) {}
	virtual void writeCharacters($chars* text, int32_t start, int32_t len) {}
	virtual void writeComment($String* data) {}
	virtual void writeDTD($String* dtd) {}
	virtual void writeDefaultNamespace($String* namespaceURI) {}
	virtual void writeEmptyElement($String* namespaceURI, $String* localName) {}
	virtual void writeEmptyElement($String* prefix, $String* localName, $String* namespaceURI) {}
	virtual void writeEmptyElement($String* localName) {}
	virtual void writeEndDocument() {}
	virtual void writeEndElement() {}
	virtual void writeEntityRef($String* name) {}
	virtual void writeNamespace($String* prefix, $String* namespaceURI) {}
	virtual void writeProcessingInstruction($String* target) {}
	virtual void writeProcessingInstruction($String* target, $String* data) {}
	virtual void writeStartDocument() {}
	virtual void writeStartDocument($String* version) {}
	virtual void writeStartDocument($String* encoding, $String* version) {}
	virtual void writeStartElement($String* localName) {}
	virtual void writeStartElement($String* namespaceURI, $String* localName) {}
	virtual void writeStartElement($String* prefix, $String* localName, $String* namespaceURI) {}
};

		} // stream
	} // xml
} // javax

#endif // _javax_xml_stream_XMLStreamWriter_h_