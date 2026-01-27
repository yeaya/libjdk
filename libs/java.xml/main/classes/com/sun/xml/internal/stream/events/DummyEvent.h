#ifndef _com_sun_xml_internal_stream_events_DummyEvent_h_
#define _com_sun_xml_internal_stream_events_DummyEvent_h_
//$ class com.sun.xml.internal.stream.events.DummyEvent
//$ extends javax.xml.stream.events.XMLEvent

#include <javax/xml/stream/events/XMLEvent.h>

namespace com {
	namespace sun {
		namespace xml {
			namespace internal {
				namespace stream {
					namespace events {
						class DummyEvent$DummyLocation;
					}
				}
			}
		}
	}
}
namespace java {
	namespace io {
		class Writer;
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
			class Location;
		}
	}
}
namespace javax {
	namespace xml {
		namespace stream {
			namespace events {
				class Characters;
				class EndElement;
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

class DummyEvent : public ::javax::xml::stream::events::XMLEvent {
	$class(DummyEvent, 0, ::javax::xml::stream::events::XMLEvent)
public:
	DummyEvent();
	void init$();
	void init$(int32_t i);
	virtual ::javax::xml::stream::events::Characters* asCharacters() override;
	virtual ::javax::xml::stream::events::EndElement* asEndElement() override;
	virtual ::javax::xml::stream::events::StartElement* asStartElement() override;
	virtual void charEncode(::java::io::Writer* writer, $String* data);
	virtual int32_t getEventType() override;
	virtual ::javax::xml::stream::Location* getLocation() override;
	virtual ::javax::xml::namespace$::QName* getSchemaType() override;
	virtual bool isAttribute() override;
	virtual bool isCharacterData();
	virtual bool isCharacters() override;
	virtual bool isEndDocument() override;
	virtual bool isEndElement() override;
	virtual bool isEntityReference() override;
	virtual bool isNamespace() override;
	virtual bool isProcessingInstruction() override;
	virtual bool isStartDocument() override;
	virtual bool isStartElement() override;
	virtual void setEventType(int32_t eventType);
	virtual void setLocation(::javax::xml::stream::Location* loc);
	virtual void writeAsEncodedUnicode(::java::io::Writer* writer) override;
	virtual void writeAsEncodedUnicodeEx(::java::io::Writer* writer) {}
	static ::com::sun::xml::internal::stream::events::DummyEvent$DummyLocation* nowhere;
	int32_t fEventType = 0;
	::javax::xml::stream::Location* fLocation = nullptr;
};

					} // events
				} // stream
			} // internal
		} // xml
	} // sun
} // com

#endif // _com_sun_xml_internal_stream_events_DummyEvent_h_