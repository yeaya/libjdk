#ifndef _javax_xml_stream_events_StartDocument_h_
#define _javax_xml_stream_events_StartDocument_h_
//$ interface javax.xml.stream.events.StartDocument
//$ extends javax.xml.stream.events.XMLEvent

#include <javax/xml/stream/events/XMLEvent.h>

namespace javax {
	namespace xml {
		namespace stream {
			namespace events {

class $export StartDocument : public ::javax::xml::stream::events::XMLEvent {
	$interface(StartDocument, $NO_CLASS_INIT, ::javax::xml::stream::events::XMLEvent)
public:
	virtual bool encodingSet() {return false;}
	virtual $String* getCharacterEncodingScheme() {return nullptr;}
	virtual $String* getSystemId() {return nullptr;}
	virtual $String* getVersion() {return nullptr;}
	virtual bool isStandalone() {return false;}
	virtual bool standaloneSet() {return false;}
};

			} // events
		} // stream
	} // xml
} // javax

#endif // _javax_xml_stream_events_StartDocument_h_