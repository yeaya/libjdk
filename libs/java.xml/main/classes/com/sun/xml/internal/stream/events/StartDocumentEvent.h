#ifndef _com_sun_xml_internal_stream_events_StartDocumentEvent_h_
#define _com_sun_xml_internal_stream_events_StartDocumentEvent_h_
//$ class com.sun.xml.internal.stream.events.StartDocumentEvent
//$ extends com.sun.xml.internal.stream.events.DummyEvent
//$ implements javax.xml.stream.events.StartDocument

#include <com/sun/xml/internal/stream/events/DummyEvent.h>
#include <javax/xml/stream/events/StartDocument.h>

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

class StartDocumentEvent : public ::com::sun::xml::internal::stream::events::DummyEvent, public ::javax::xml::stream::events::StartDocument {
	$class(StartDocumentEvent, $NO_CLASS_INIT, ::com::sun::xml::internal::stream::events::DummyEvent, ::javax::xml::stream::events::StartDocument)
public:
	StartDocumentEvent();
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
	void init$($String* encoding);
	void init$($String* encoding, $String* version);
	void init$($String* encoding, $String* version, bool standalone);
	void init$($String* encoding, $String* version, bool standalone, ::javax::xml::stream::Location* loc);
	virtual void clear();
	virtual bool encodingSet() override;
	virtual $String* getCharacterEncodingScheme() override;
	virtual $String* getSystemId() override;
	virtual $String* getVersion() override;
	virtual void init($String* encoding, $String* version, bool standalone, ::javax::xml::stream::Location* loc);
	virtual bool isAttribute() override;
	virtual bool isCharacters() override;
	virtual bool isEndDocument() override;
	virtual bool isEndElement() override;
	virtual bool isEntityReference() override;
	virtual bool isNamespace() override;
	virtual bool isProcessingInstruction() override;
	virtual bool isStandalone() override;
	virtual bool isStartDocument() override;
	virtual bool isStartElement() override;
	virtual void setDeclaredEncoding(bool value);
	virtual void setEncoding($String* encoding);
	virtual void setStandalone(bool isStandalone, bool standaloneSet);
	virtual void setStandalone($String* s);
	virtual void setVersion($String* s);
	virtual bool standaloneSet() override;
	virtual $String* toString() override;
	virtual void writeAsEncodedUnicode(::java::io::Writer* writer) override;
	virtual void writeAsEncodedUnicodeEx(::java::io::Writer* writer) override;
	$String* fSystemId = nullptr;
	$String* fEncodingScheam = nullptr;
	bool fStandalone = false;
	$String* fVersion = nullptr;
	bool fEncodingSchemeSet = false;
	bool fStandaloneSet = false;
	bool nestedCall = false;
};

					} // events
				} // stream
			} // internal
		} // xml
	} // sun
} // com

#endif // _com_sun_xml_internal_stream_events_StartDocumentEvent_h_