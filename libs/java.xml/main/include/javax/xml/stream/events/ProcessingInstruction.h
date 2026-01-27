#ifndef _javax_xml_stream_events_ProcessingInstruction_h_
#define _javax_xml_stream_events_ProcessingInstruction_h_
//$ interface javax.xml.stream.events.ProcessingInstruction
//$ extends javax.xml.stream.events.XMLEvent

#include <javax/xml/stream/events/XMLEvent.h>

namespace javax {
	namespace xml {
		namespace stream {
			namespace events {

class $import ProcessingInstruction : public ::javax::xml::stream::events::XMLEvent {
	$interface(ProcessingInstruction, $NO_CLASS_INIT, ::javax::xml::stream::events::XMLEvent)
public:
	virtual $String* getData() {return nullptr;}
	virtual $String* getTarget() {return nullptr;}
};

			} // events
		} // stream
	} // xml
} // javax

#endif // _javax_xml_stream_events_ProcessingInstruction_h_