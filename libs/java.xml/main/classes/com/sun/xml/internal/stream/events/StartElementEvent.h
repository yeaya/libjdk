#ifndef _com_sun_xml_internal_stream_events_StartElementEvent_h_
#define _com_sun_xml_internal_stream_events_StartElementEvent_h_
//$ class com.sun.xml.internal.stream.events.StartElementEvent
//$ extends com.sun.xml.internal.stream.events.DummyEvent
//$ implements javax.xml.stream.events.StartElement

#include <com/sun/xml/internal/stream/events/DummyEvent.h>
#include <javax/xml/stream/events/StartElement.h>

namespace java {
	namespace io {
		class Writer;
	}
}
namespace java {
	namespace util {
		class Iterator;
		class List;
		class Map;
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
			namespace events {
				class Attribute;
				class Namespace;
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

class StartElementEvent : public ::com::sun::xml::internal::stream::events::DummyEvent, public ::javax::xml::stream::events::StartElement {
	$class(StartElementEvent, $NO_CLASS_INIT, ::com::sun::xml::internal::stream::events::DummyEvent, ::javax::xml::stream::events::StartElement)
public:
	StartElementEvent();
	virtual ::javax::xml::stream::events::Characters* asCharacters() override;
	virtual ::javax::xml::stream::events::EndElement* asEndElement() override;
	virtual ::javax::xml::stream::events::StartElement* asStartElement() override;
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t getEventType() override;
	virtual ::javax::xml::stream::Location* getLocation() override;
	virtual ::javax::xml::namespace$::QName* getSchemaType() override;
	virtual int32_t hashCode() override;
	void init$($String* prefix, $String* uri, $String* localpart);
	void init$(::javax::xml::namespace$::QName* qname);
	void init$(::javax::xml::stream::events::StartElement* startelement);
	virtual void addAttribute(::javax::xml::stream::events::Attribute* attr);
	void addAttributes(::java::util::Iterator* attrs);
	virtual void addNamespaceAttribute(::javax::xml::stream::events::Namespace* attr);
	void addNamespaceAttributes(::java::util::Iterator* attrs);
	virtual ::javax::xml::stream::events::Attribute* getAttributeByName(::javax::xml::namespace$::QName* qname) override;
	virtual ::java::util::Iterator* getAttributes() override;
	virtual ::javax::xml::namespace$::QName* getName() override;
	virtual $String* getNamespace();
	virtual ::javax::xml::namespace$::NamespaceContext* getNamespaceContext() override;
	virtual $String* getNamespaceURI($String* prefix) override;
	virtual ::java::util::Iterator* getNamespaces() override;
	void init();
	virtual bool isAttribute() override;
	virtual bool isCharacters() override;
	virtual bool isEndDocument() override;
	virtual bool isEndElement() override;
	virtual bool isEntityReference() override;
	virtual bool isNamespace() override;
	virtual bool isProcessingInstruction() override;
	virtual bool isStartDocument() override;
	virtual bool isStartElement() override;
	virtual $String* nameAsString();
	virtual void setName(::javax::xml::namespace$::QName* qname);
	virtual void setNamespaceContext(::javax::xml::namespace$::NamespaceContext* nc);
	virtual $String* toString() override;
	virtual void writeAsEncodedUnicode(::java::io::Writer* writer) override;
	virtual void writeAsEncodedUnicodeEx(::java::io::Writer* writer) override;
	::java::util::Map* fAttributes = nullptr;
	::java::util::List* fNamespaces = nullptr;
	::javax::xml::namespace$::NamespaceContext* fNamespaceContext = nullptr;
	::javax::xml::namespace$::QName* fQName = nullptr;
};

					} // events
				} // stream
			} // internal
		} // xml
	} // sun
} // com

#endif // _com_sun_xml_internal_stream_events_StartElementEvent_h_