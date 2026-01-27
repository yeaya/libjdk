#ifndef _com_sun_xml_internal_stream_events_CharacterEvent_h_
#define _com_sun_xml_internal_stream_events_CharacterEvent_h_
//$ class com.sun.xml.internal.stream.events.CharacterEvent
//$ extends com.sun.xml.internal.stream.events.DummyEvent
//$ implements javax.xml.stream.events.Characters

#include <com/sun/xml/internal/stream/events/DummyEvent.h>
#include <javax/xml/stream/events/Characters.h>

namespace java {
	namespace io {
		class Writer;
	}
}

namespace com {
	namespace sun {
		namespace xml {
			namespace internal {
				namespace stream {
					namespace events {

class CharacterEvent : public ::com::sun::xml::internal::stream::events::DummyEvent, public ::javax::xml::stream::events::Characters {
	$class(CharacterEvent, $NO_CLASS_INIT, ::com::sun::xml::internal::stream::events::DummyEvent, ::javax::xml::stream::events::Characters)
public:
	CharacterEvent();
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
	void init$($String* data);
	void init$($String* data, bool flag);
	void init$($String* data, bool flag, bool isIgnorableWhiteSpace);
	void checkWhiteSpace();
	virtual $String* getData() override;
	virtual void init();
	virtual bool isAttribute() override;
	virtual bool isCData() override;
	virtual bool isCharacters() override;
	virtual bool isEndDocument() override;
	virtual bool isEndElement() override;
	virtual bool isEntityReference() override;
	virtual bool isIgnorableWhiteSpace() override;
	virtual bool isNamespace() override;
	virtual bool isProcessingInstruction() override;
	virtual bool isStartDocument() override;
	virtual bool isStartElement() override;
	virtual bool isWhiteSpace() override;
	virtual void setData($String* data);
	virtual $String* toString() override;
	virtual void writeAsEncodedUnicode(::java::io::Writer* writer) override;
	virtual void writeAsEncodedUnicodeEx(::java::io::Writer* writer) override;
	$String* fData = nullptr;
	bool fIsCData = false;
	bool fIsIgnorableWhitespace = false;
	bool fIsSpace = false;
	bool fCheckIfSpaceNeeded = false;
};

					} // events
				} // stream
			} // internal
		} // xml
	} // sun
} // com

#endif // _com_sun_xml_internal_stream_events_CharacterEvent_h_