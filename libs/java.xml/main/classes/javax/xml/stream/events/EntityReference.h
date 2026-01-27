#ifndef _javax_xml_stream_events_EntityReference_h_
#define _javax_xml_stream_events_EntityReference_h_
//$ interface javax.xml.stream.events.EntityReference
//$ extends javax.xml.stream.events.XMLEvent

#include <javax/xml/stream/events/XMLEvent.h>

namespace javax {
	namespace xml {
		namespace stream {
			namespace events {
				class EntityDeclaration;
			}
		}
	}
}

namespace javax {
	namespace xml {
		namespace stream {
			namespace events {

class $export EntityReference : public ::javax::xml::stream::events::XMLEvent {
	$interface(EntityReference, $NO_CLASS_INIT, ::javax::xml::stream::events::XMLEvent)
public:
	virtual ::javax::xml::stream::events::EntityDeclaration* getDeclaration() {return nullptr;}
	virtual $String* getName() {return nullptr;}
};

			} // events
		} // stream
	} // xml
} // javax

#endif // _javax_xml_stream_events_EntityReference_h_