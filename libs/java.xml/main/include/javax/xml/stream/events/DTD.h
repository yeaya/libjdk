#ifndef _javax_xml_stream_events_DTD_h_
#define _javax_xml_stream_events_DTD_h_
//$ interface javax.xml.stream.events.DTD
//$ extends javax.xml.stream.events.XMLEvent

#include <javax/xml/stream/events/XMLEvent.h>

#pragma push_macro("DTD")
#undef DTD

namespace java {
	namespace util {
		class List;
	}
}

namespace javax {
	namespace xml {
		namespace stream {
			namespace events {

class $import DTD : public ::javax::xml::stream::events::XMLEvent {
	$interface(DTD, $NO_CLASS_INIT, ::javax::xml::stream::events::XMLEvent)
public:
	virtual $String* getDocumentTypeDeclaration() {return nullptr;}
	virtual ::java::util::List* getEntities() {return nullptr;}
	virtual ::java::util::List* getNotations() {return nullptr;}
	virtual $Object* getProcessedDTD() {return nullptr;}
};

			} // events
		} // stream
	} // xml
} // javax

#pragma pop_macro("DTD")

#endif // _javax_xml_stream_events_DTD_h_