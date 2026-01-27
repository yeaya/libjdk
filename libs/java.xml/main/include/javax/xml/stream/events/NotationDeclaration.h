#ifndef _javax_xml_stream_events_NotationDeclaration_h_
#define _javax_xml_stream_events_NotationDeclaration_h_
//$ interface javax.xml.stream.events.NotationDeclaration
//$ extends javax.xml.stream.events.XMLEvent

#include <javax/xml/stream/events/XMLEvent.h>

namespace javax {
	namespace xml {
		namespace stream {
			namespace events {

class $import NotationDeclaration : public ::javax::xml::stream::events::XMLEvent {
	$interface(NotationDeclaration, $NO_CLASS_INIT, ::javax::xml::stream::events::XMLEvent)
public:
	virtual $String* getName() {return nullptr;}
	virtual $String* getPublicId() {return nullptr;}
	virtual $String* getSystemId() {return nullptr;}
};

			} // events
		} // stream
	} // xml
} // javax

#endif // _javax_xml_stream_events_NotationDeclaration_h_