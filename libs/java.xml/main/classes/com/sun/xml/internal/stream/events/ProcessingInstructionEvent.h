#ifndef _com_sun_xml_internal_stream_events_ProcessingInstructionEvent_h_
#define _com_sun_xml_internal_stream_events_ProcessingInstructionEvent_h_
//$ class com.sun.xml.internal.stream.events.ProcessingInstructionEvent
//$ extends com.sun.xml.internal.stream.events.DummyEvent
//$ implements javax.xml.stream.events.ProcessingInstruction

#include <com/sun/xml/internal/stream/events/DummyEvent.h>
#include <javax/xml/stream/events/ProcessingInstruction.h>

namespace java {
	namespace io {
		class Writer;
	}
}
namespace javax {
	namespace xml {
		namespace stream {
			class Location;
		}
	}
}

namespace com {
	namespace sun {
		namespace xml {
			namespace internal {
				namespace stream {
					namespace events {

class ProcessingInstructionEvent : public ::com::sun::xml::internal::stream::events::DummyEvent, public ::javax::xml::stream::events::ProcessingInstruction {
	$class(ProcessingInstructionEvent, $NO_CLASS_INIT, ::com::sun::xml::internal::stream::events::DummyEvent, ::javax::xml::stream::events::ProcessingInstruction)
public:
	ProcessingInstructionEvent();
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
	void init$($String* targetName, $String* data);
	void init$($String* targetName, $String* data, ::javax::xml::stream::Location* loc);
	virtual $String* getData() override;
	virtual $String* getTarget() override;
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
	virtual void setData($String* data);
	virtual void setTarget($String* targetName);
	virtual $String* toString() override;
	virtual void writeAsEncodedUnicode(::java::io::Writer* writer) override;
	virtual void writeAsEncodedUnicodeEx(::java::io::Writer* writer) override;
	$String* fName = nullptr;
	$String* fContent = nullptr;
};

					} // events
				} // stream
			} // internal
		} // xml
	} // sun
} // com

#endif // _com_sun_xml_internal_stream_events_ProcessingInstructionEvent_h_