#ifndef _javax_xml_stream_util_StreamReaderDelegate_h_
#define _javax_xml_stream_util_StreamReaderDelegate_h_
//$ class javax.xml.stream.util.StreamReaderDelegate
//$ extends javax.xml.stream.XMLStreamReader

#include <java/lang/Array.h>
#include <javax/xml/stream/XMLStreamReader.h>

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
			namespace util {

class $import StreamReaderDelegate : public ::javax::xml::stream::XMLStreamReader {
	$class(StreamReaderDelegate, $NO_CLASS_INIT, ::javax::xml::stream::XMLStreamReader)
public:
	StreamReaderDelegate();
	void init$();
	void init$(::javax::xml::stream::XMLStreamReader* reader);
	virtual void close() override;
	virtual int32_t getAttributeCount() override;
	virtual $String* getAttributeLocalName(int32_t index) override;
	virtual ::javax::xml::namespace$::QName* getAttributeName(int32_t index) override;
	virtual $String* getAttributeNamespace(int32_t index) override;
	virtual $String* getAttributePrefix(int32_t index) override;
	virtual $String* getAttributeType(int32_t index) override;
	virtual $String* getAttributeValue($String* namespaceUri, $String* localName) override;
	virtual $String* getAttributeValue(int32_t index) override;
	virtual $String* getCharacterEncodingScheme() override;
	virtual $String* getElementText() override;
	virtual $String* getEncoding() override;
	virtual int32_t getEventType() override;
	virtual $String* getLocalName() override;
	virtual ::javax::xml::stream::Location* getLocation() override;
	virtual ::javax::xml::namespace$::QName* getName() override;
	virtual ::javax::xml::namespace$::NamespaceContext* getNamespaceContext() override;
	virtual int32_t getNamespaceCount() override;
	virtual $String* getNamespacePrefix(int32_t index) override;
	virtual $String* getNamespaceURI($String* prefix) override;
	virtual $String* getNamespaceURI(int32_t index) override;
	virtual $String* getNamespaceURI() override;
	virtual $String* getPIData() override;
	virtual $String* getPITarget() override;
	virtual ::javax::xml::stream::XMLStreamReader* getParent();
	virtual $String* getPrefix() override;
	virtual $Object* getProperty($String* name) override;
	virtual $String* getText() override;
	virtual int32_t getTextCharacters(int32_t sourceStart, $chars* target, int32_t targetStart, int32_t length) override;
	virtual $chars* getTextCharacters() override;
	virtual int32_t getTextLength() override;
	virtual int32_t getTextStart() override;
	virtual $String* getVersion() override;
	virtual bool hasName() override;
	virtual bool hasNext() override;
	virtual bool hasText() override;
	virtual bool isAttributeSpecified(int32_t index) override;
	virtual bool isCharacters() override;
	virtual bool isEndElement() override;
	virtual bool isStandalone() override;
	virtual bool isStartElement() override;
	virtual bool isWhiteSpace() override;
	virtual int32_t next() override;
	virtual int32_t nextTag() override;
	virtual void require(int32_t type, $String* namespaceURI, $String* localName) override;
	virtual void setParent(::javax::xml::stream::XMLStreamReader* reader);
	virtual bool standaloneSet() override;
	::javax::xml::stream::XMLStreamReader* reader = nullptr;
};

			} // util
		} // stream
	} // xml
} // javax

#endif // _javax_xml_stream_util_StreamReaderDelegate_h_