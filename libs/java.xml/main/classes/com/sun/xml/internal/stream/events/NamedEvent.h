#ifndef _com_sun_xml_internal_stream_events_NamedEvent_h_
#define _com_sun_xml_internal_stream_events_NamedEvent_h_
//$ class com.sun.xml.internal.stream.events.NamedEvent
//$ extends com.sun.xml.internal.stream.events.DummyEvent

#include <com/sun/xml/internal/stream/events/DummyEvent.h>

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

namespace com {
	namespace sun {
		namespace xml {
			namespace internal {
				namespace stream {
					namespace events {

class NamedEvent : public ::com::sun::xml::internal::stream::events::DummyEvent {
	$class(NamedEvent, $NO_CLASS_INIT, ::com::sun::xml::internal::stream::events::DummyEvent)
public:
	NamedEvent();
	void init$();
	void init$(::javax::xml::namespace$::QName* qname);
	void init$($String* prefix, $String* uri, $String* localpart);
	virtual ::javax::xml::namespace$::QName* getName();
	virtual $String* getNamespace();
	virtual $String* getPrefix();
	virtual $String* nameAsString();
	virtual void setName(::javax::xml::namespace$::QName* qname);
	virtual void writeAsEncodedUnicodeEx(::java::io::Writer* writer) override;
	::javax::xml::namespace$::QName* name = nullptr;
};

					} // events
				} // stream
			} // internal
		} // xml
	} // sun
} // com

#endif // _com_sun_xml_internal_stream_events_NamedEvent_h_