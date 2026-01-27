#ifndef _com_sun_xml_internal_stream_events_XMLEventFactoryImpl_h_
#define _com_sun_xml_internal_stream_events_XMLEventFactoryImpl_h_
//$ class com.sun.xml.internal.stream.events.XMLEventFactoryImpl
//$ extends javax.xml.stream.XMLEventFactory

#include <javax/xml/stream/XMLEventFactory.h>

namespace java {
	namespace util {
		class Iterator;
	}
}
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
			namespace events {
				class Attribute;
				class Characters;
				class Comment;
				class DTD;
				class EndDocument;
				class EndElement;
				class EntityDeclaration;
				class EntityReference;
				class Namespace;
				class ProcessingInstruction;
				class StartDocument;
				class StartElement;
			}
		}
	}
}

namespace com {
	namespace sun {
		namespace xml {
			namespace internal {
				namespace stream {
					namespace events {

class XMLEventFactoryImpl : public ::javax::xml::stream::XMLEventFactory {
	$class(XMLEventFactoryImpl, $NO_CLASS_INIT, ::javax::xml::stream::XMLEventFactory)
public:
	XMLEventFactoryImpl();
	void init$();
	virtual ::javax::xml::stream::events::Attribute* createAttribute($String* localName, $String* value) override;
	virtual ::javax::xml::stream::events::Attribute* createAttribute(::javax::xml::namespace$::QName* name, $String* value) override;
	virtual ::javax::xml::stream::events::Attribute* createAttribute($String* prefix, $String* namespaceURI, $String* localName, $String* value) override;
	virtual ::javax::xml::stream::events::Characters* createCData($String* content) override;
	virtual ::javax::xml::stream::events::Characters* createCharacters($String* content) override;
	virtual ::javax::xml::stream::events::Comment* createComment($String* text) override;
	virtual ::javax::xml::stream::events::DTD* createDTD($String* dtd) override;
	virtual ::javax::xml::stream::events::EndDocument* createEndDocument() override;
	virtual ::javax::xml::stream::events::EndElement* createEndElement(::javax::xml::namespace$::QName* name, ::java::util::Iterator* namespaces) override;
	virtual ::javax::xml::stream::events::EndElement* createEndElement($String* prefix, $String* namespaceUri, $String* localName) override;
	virtual ::javax::xml::stream::events::EndElement* createEndElement($String* prefix, $String* namespaceUri, $String* localName, ::java::util::Iterator* namespaces) override;
	virtual ::javax::xml::stream::events::EntityReference* createEntityReference($String* name, ::javax::xml::stream::events::EntityDeclaration* entityDeclaration) override;
	virtual ::javax::xml::stream::events::Characters* createIgnorableSpace($String* content) override;
	virtual ::javax::xml::stream::events::Namespace* createNamespace($String* namespaceURI) override;
	virtual ::javax::xml::stream::events::Namespace* createNamespace($String* prefix, $String* namespaceURI) override;
	virtual ::javax::xml::stream::events::ProcessingInstruction* createProcessingInstruction($String* target, $String* data) override;
	virtual ::javax::xml::stream::events::Characters* createSpace($String* content) override;
	virtual ::javax::xml::stream::events::StartDocument* createStartDocument() override;
	virtual ::javax::xml::stream::events::StartDocument* createStartDocument($String* encoding) override;
	virtual ::javax::xml::stream::events::StartDocument* createStartDocument($String* encoding, $String* version) override;
	virtual ::javax::xml::stream::events::StartDocument* createStartDocument($String* encoding, $String* version, bool standalone) override;
	virtual ::javax::xml::stream::events::StartElement* createStartElement(::javax::xml::namespace$::QName* name, ::java::util::Iterator* attributes, ::java::util::Iterator* namespaces) override;
	virtual ::javax::xml::stream::events::StartElement* createStartElement($String* prefix, $String* namespaceUri, $String* localName) override;
	virtual ::javax::xml::stream::events::StartElement* createStartElement($String* prefix, $String* namespaceUri, $String* localName, ::java::util::Iterator* attributes, ::java::util::Iterator* namespaces) override;
	virtual ::javax::xml::stream::events::StartElement* createStartElement($String* prefix, $String* namespaceUri, $String* localName, ::java::util::Iterator* attributes, ::java::util::Iterator* namespaces, ::javax::xml::namespace$::NamespaceContext* context) override;
	virtual void setLocation(::javax::xml::stream::Location* location) override;
	::javax::xml::stream::Location* location = nullptr;
};

					} // events
				} // stream
			} // internal
		} // xml
	} // sun
} // com

#endif // _com_sun_xml_internal_stream_events_XMLEventFactoryImpl_h_