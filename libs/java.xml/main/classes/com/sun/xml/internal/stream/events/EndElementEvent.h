#ifndef _com_sun_xml_internal_stream_events_EndElementEvent_h_
#define _com_sun_xml_internal_stream_events_EndElementEvent_h_
//$ class com.sun.xml.internal.stream.events.EndElementEvent
//$ extends com.sun.xml.internal.stream.events.DummyEvent
//$ implements javax.xml.stream.events.EndElement

#include <com/sun/xml/internal/stream/events/DummyEvent.h>
#include <javax/xml/stream/events/EndElement.h>

namespace java {
	namespace io {
		class Writer;
	}
}
namespace java {
	namespace util {
		class Iterator;
		class List;
	}
}
namespace javax {
	namespace xml {
		namespace namespace$ {
			class QName;
		}
	}
}
namespace javax {
	namespace xml {
		namespace stream {
			namespace events {
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

class EndElementEvent : public ::com::sun::xml::internal::stream::events::DummyEvent, public ::javax::xml::stream::events::EndElement {
	$class(EndElementEvent, $NO_CLASS_INIT, ::com::sun::xml::internal::stream::events::DummyEvent, ::javax::xml::stream::events::EndElement)
public:
	EndElementEvent();
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
	void init$();
	void init$($String* prefix, $String* uri, $String* localpart);
	void init$(::javax::xml::namespace$::QName* qname);
	virtual void addNamespace(::javax::xml::stream::events::Namespace* ns);
	virtual ::javax::xml::namespace$::QName* getName() override;
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
	virtual $String* toString() override;
	virtual void writeAsEncodedUnicode(::java::io::Writer* writer) override;
	virtual void writeAsEncodedUnicodeEx(::java::io::Writer* writer) override;
	::java::util::List* fNamespaces = nullptr;
	::javax::xml::namespace$::QName* fQName = nullptr;
};

					} // events
				} // stream
			} // internal
		} // xml
	} // sun
} // com

#endif // _com_sun_xml_internal_stream_events_EndElementEvent_h_