#ifndef _javax_xml_stream_events_Characters_h_
#define _javax_xml_stream_events_Characters_h_
//$ interface javax.xml.stream.events.Characters
//$ extends javax.xml.stream.events.XMLEvent

#include <javax/xml/stream/events/XMLEvent.h>

namespace javax {
	namespace xml {
		namespace stream {
			namespace events {

class $export Characters : public ::javax::xml::stream::events::XMLEvent {
	$interface(Characters, $NO_CLASS_INIT, ::javax::xml::stream::events::XMLEvent)
public:
	virtual $String* getData() {return nullptr;}
	virtual bool isCData() {return false;}
	virtual bool isIgnorableWhiteSpace() {return false;}
	virtual bool isWhiteSpace() {return false;}
};

			} // events
		} // stream
	} // xml
} // javax

#endif // _javax_xml_stream_events_Characters_h_