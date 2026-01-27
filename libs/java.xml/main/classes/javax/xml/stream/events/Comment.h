#ifndef _javax_xml_stream_events_Comment_h_
#define _javax_xml_stream_events_Comment_h_
//$ interface javax.xml.stream.events.Comment
//$ extends javax.xml.stream.events.XMLEvent

#include <javax/xml/stream/events/XMLEvent.h>

namespace javax {
	namespace xml {
		namespace stream {
			namespace events {

class $export Comment : public ::javax::xml::stream::events::XMLEvent {
	$interface(Comment, $NO_CLASS_INIT, ::javax::xml::stream::events::XMLEvent)
public:
	virtual $String* getText() {return nullptr;}
};

			} // events
		} // stream
	} // xml
} // javax

#endif // _javax_xml_stream_events_Comment_h_