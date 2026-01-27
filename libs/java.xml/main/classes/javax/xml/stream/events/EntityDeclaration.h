#ifndef _javax_xml_stream_events_EntityDeclaration_h_
#define _javax_xml_stream_events_EntityDeclaration_h_
//$ interface javax.xml.stream.events.EntityDeclaration
//$ extends javax.xml.stream.events.XMLEvent

#include <javax/xml/stream/events/XMLEvent.h>

namespace javax {
	namespace xml {
		namespace stream {
			namespace events {

class $export EntityDeclaration : public ::javax::xml::stream::events::XMLEvent {
	$interface(EntityDeclaration, $NO_CLASS_INIT, ::javax::xml::stream::events::XMLEvent)
public:
	virtual $String* getBaseURI() {return nullptr;}
	virtual $String* getName() {return nullptr;}
	virtual $String* getNotationName() {return nullptr;}
	virtual $String* getPublicId() {return nullptr;}
	virtual $String* getReplacementText() {return nullptr;}
	virtual $String* getSystemId() {return nullptr;}
};

			} // events
		} // stream
	} // xml
} // javax

#endif // _javax_xml_stream_events_EntityDeclaration_h_