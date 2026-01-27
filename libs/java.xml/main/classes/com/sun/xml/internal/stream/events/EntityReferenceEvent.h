#ifndef _com_sun_xml_internal_stream_events_EntityReferenceEvent_h_
#define _com_sun_xml_internal_stream_events_EntityReferenceEvent_h_
//$ class com.sun.xml.internal.stream.events.EntityReferenceEvent
//$ extends com.sun.xml.internal.stream.events.DummyEvent
//$ implements javax.xml.stream.events.EntityReference

#include <com/sun/xml/internal/stream/events/DummyEvent.h>
#include <javax/xml/stream/events/EntityReference.h>

namespace java {
	namespace io {
		class Writer;
	}
}
namespace javax {
	namespace xml {
		namespace stream {
			namespace events {
				class EntityDeclaration;
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

class EntityReferenceEvent : public ::com::sun::xml::internal::stream::events::DummyEvent, public ::javax::xml::stream::events::EntityReference {
	$class(EntityReferenceEvent, $NO_CLASS_INIT, ::com::sun::xml::internal::stream::events::DummyEvent, ::javax::xml::stream::events::EntityReference)
public:
	EntityReferenceEvent();
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
	void init$($String* entityName, ::javax::xml::stream::events::EntityDeclaration* entityDeclaration);
	virtual ::javax::xml::stream::events::EntityDeclaration* getDeclaration() override;
	virtual $String* getName() override;
	virtual void init();
	virtual bool isAttribute() override;
	virtual bool isCharacters() override;
	virtual bool isEndDocument() override;
	virtual bool isEndElement() override;
	virtual bool isEntityReference() override;
	virtual bool isNamespace() override;
	virtual bool isProcessingInstruction() override;
	virtual bool isStartDocument() override;
	virtual bool isStartElement() override;
	virtual $String* toString() override;
	virtual void writeAsEncodedUnicode(::java::io::Writer* writer) override;
	virtual void writeAsEncodedUnicodeEx(::java::io::Writer* writer) override;
	::javax::xml::stream::events::EntityDeclaration* fEntityDeclaration = nullptr;
	$String* fEntityName = nullptr;
};

					} // events
				} // stream
			} // internal
		} // xml
	} // sun
} // com

#endif // _com_sun_xml_internal_stream_events_EntityReferenceEvent_h_