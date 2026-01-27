#ifndef _com_sun_org_apache_xerces_internal_impl_XMLStreamFilterImpl_h_
#define _com_sun_org_apache_xerces_internal_impl_XMLStreamFilterImpl_h_
//$ class com.sun.org.apache.xerces.internal.impl.XMLStreamFilterImpl
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
			class StreamFilter;
		}
	}
}

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {

class XMLStreamFilterImpl : public ::javax::xml::stream::XMLStreamReader {
	$class(XMLStreamFilterImpl, $NO_CLASS_INIT, ::javax::xml::stream::XMLStreamReader)
public:
	XMLStreamFilterImpl();
	void init$(::javax::xml::stream::XMLStreamReader* reader, ::javax::xml::stream::StreamFilter* filter);
	virtual void close() override;
	int32_t findNextEvent();
	int32_t findNextTag();
	virtual int32_t getAttributeCount() override;
	virtual $String* getAttributeLocalName(int32_t index) override;
	virtual ::javax::xml::namespace$::QName* getAttributeName(int32_t index) override;
	virtual $String* getAttributeNamespace(int32_t index) override;
	virtual $String* getAttributePrefix(int32_t index) override;
	virtual $String* getAttributeType(int32_t index) override;
	virtual $String* getAttributeValue(int32_t index) override;
	virtual $String* getAttributeValue($String* namespaceURI, $String* localName) override;
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
	virtual $String* getNamespaceURI() override;
	virtual $String* getNamespaceURI(int32_t index) override;
	virtual $String* getNamespaceURI($String* prefix) override;
	virtual $String* getPIData() override;
	virtual $String* getPITarget() override;
	virtual $String* getPrefix() override;
	virtual $Object* getProperty($String* name) override;
	virtual $String* getText() override;
	virtual $chars* getTextCharacters() override;
	virtual int32_t getTextCharacters(int32_t sourceStart, $chars* target, int32_t targetStart, int32_t length) override;
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
	virtual void setStreamFilter(::javax::xml::stream::StreamFilter* sf);
	virtual bool standaloneSet() override;
	::javax::xml::stream::StreamFilter* fStreamFilter = nullptr;
	::javax::xml::stream::XMLStreamReader* fStreamReader = nullptr;
	int32_t fCurrentEvent = 0;
	bool fEventAccepted = false;
	bool fStreamAdvancedByHasNext = false;
};

						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_impl_XMLStreamFilterImpl_h_