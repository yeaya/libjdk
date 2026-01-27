#ifndef _com_sun_xml_internal_stream_events_DTDEvent_h_
#define _com_sun_xml_internal_stream_events_DTDEvent_h_
//$ class com.sun.xml.internal.stream.events.DTDEvent
//$ extends com.sun.xml.internal.stream.events.DummyEvent
//$ implements javax.xml.stream.events.DTD

#include <com/sun/xml/internal/stream/events/DummyEvent.h>
#include <javax/xml/stream/events/DTD.h>

namespace java {
	namespace io {
		class Writer;
	}
}
namespace java {
	namespace util {
		class List;
	}
}

namespace com {
	namespace sun {
		namespace xml {
			namespace internal {
				namespace stream {
					namespace events {

class DTDEvent : public ::com::sun::xml::internal::stream::events::DummyEvent, public ::javax::xml::stream::events::DTD {
	$class(DTDEvent, $NO_CLASS_INIT, ::com::sun::xml::internal::stream::events::DummyEvent, ::javax::xml::stream::events::DTD)
public:
	DTDEvent();
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
	void init$($String* doctypeDeclaration);
	virtual $String* getDocumentTypeDeclaration() override;
	virtual ::java::util::List* getEntities() override;
	virtual ::java::util::List* getNotations() override;
	virtual $Object* getProcessedDTD() override;
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
	virtual void setDocumentTypeDeclaration($String* doctypeDeclaration);
	virtual void setEntities(::java::util::List* entites);
	virtual void setNotations(::java::util::List* notations);
	virtual $String* toString() override;
	virtual void writeAsEncodedUnicode(::java::io::Writer* writer) override;
	virtual void writeAsEncodedUnicodeEx(::java::io::Writer* writer) override;
	$String* fDoctypeDeclaration = nullptr;
	::java::util::List* fNotations = nullptr;
	::java::util::List* fEntities = nullptr;
};

					} // events
				} // stream
			} // internal
		} // xml
	} // sun
} // com

#endif // _com_sun_xml_internal_stream_events_DTDEvent_h_