#ifndef _javax_xml_stream_XMLStreamReader_h_
#define _javax_xml_stream_XMLStreamReader_h_
//$ interface javax.xml.stream.XMLStreamReader
//$ extends javax.xml.stream.XMLStreamConstants

#include <java/lang/Array.h>
#include <javax/xml/stream/XMLStreamConstants.h>

namespace javax {
	namespace xml {
		namespace namespace$ {
			class NamespaceContext;
			class QName;
		}
	}
}
namespace javax {
	namespace xml {
		namespace stream {
			class Location;
		}
	}
}

namespace javax {
	namespace xml {
		namespace stream {

class $export XMLStreamReader : public ::javax::xml::stream::XMLStreamConstants {
	$interface(XMLStreamReader, $NO_CLASS_INIT, ::javax::xml::stream::XMLStreamConstants)
public:
	virtual void close() {}
	virtual int32_t getAttributeCount() {return 0;}
	virtual $String* getAttributeLocalName(int32_t index) {return nullptr;}
	virtual ::javax::xml::namespace$::QName* getAttributeName(int32_t index) {return nullptr;}
	virtual $String* getAttributeNamespace(int32_t index) {return nullptr;}
	virtual $String* getAttributePrefix(int32_t index) {return nullptr;}
	virtual $String* getAttributeType(int32_t index) {return nullptr;}
	virtual $String* getAttributeValue($String* namespaceURI, $String* localName) {return nullptr;}
	virtual $String* getAttributeValue(int32_t index) {return nullptr;}
	virtual $String* getCharacterEncodingScheme() {return nullptr;}
	virtual $String* getElementText() {return nullptr;}
	virtual $String* getEncoding() {return nullptr;}
	virtual int32_t getEventType() {return 0;}
	virtual $String* getLocalName() {return nullptr;}
	virtual ::javax::xml::stream::Location* getLocation() {return nullptr;}
	virtual ::javax::xml::namespace$::QName* getName() {return nullptr;}
	virtual ::javax::xml::namespace$::NamespaceContext* getNamespaceContext() {return nullptr;}
	virtual int32_t getNamespaceCount() {return 0;}
	virtual $String* getNamespacePrefix(int32_t index) {return nullptr;}
	virtual $String* getNamespaceURI($String* prefix) {return nullptr;}
	virtual $String* getNamespaceURI(int32_t index) {return nullptr;}
	virtual $String* getNamespaceURI() {return nullptr;}
	virtual $String* getPIData() {return nullptr;}
	virtual $String* getPITarget() {return nullptr;}
	virtual $String* getPrefix() {return nullptr;}
	virtual $Object* getProperty($String* name) {return nullptr;}
	virtual $String* getText() {return nullptr;}
	virtual $chars* getTextCharacters() {return nullptr;}
	virtual int32_t getTextCharacters(int32_t sourceStart, $chars* target, int32_t targetStart, int32_t length) {return 0;}
	virtual int32_t getTextLength() {return 0;}
	virtual int32_t getTextStart() {return 0;}
	virtual $String* getVersion() {return nullptr;}
	virtual bool hasName() {return false;}
	virtual bool hasNext() {return false;}
	virtual bool hasText() {return false;}
	virtual bool isAttributeSpecified(int32_t index) {return false;}
	virtual bool isCharacters() {return false;}
	virtual bool isEndElement() {return false;}
	virtual bool isStandalone() {return false;}
	virtual bool isStartElement() {return false;}
	virtual bool isWhiteSpace() {return false;}
	virtual int32_t next() {return 0;}
	virtual int32_t nextTag() {return 0;}
	virtual void require(int32_t type, $String* namespaceURI, $String* localName) {}
	virtual bool standaloneSet() {return false;}
};

		} // stream
	} // xml
} // javax

#endif // _javax_xml_stream_XMLStreamReader_h_