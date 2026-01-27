#ifndef _javax_xml_stream_events_EndElement_h_
#define _javax_xml_stream_events_EndElement_h_
//$ interface javax.xml.stream.events.EndElement
//$ extends javax.xml.stream.events.XMLEvent

#include <javax/xml/stream/events/XMLEvent.h>

namespace java {
	namespace util {
		class Iterator;
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
			namespace events {

class $export EndElement : public ::javax::xml::stream::events::XMLEvent {
	$interface(EndElement, $NO_CLASS_INIT, ::javax::xml::stream::events::XMLEvent)
public:
	virtual ::javax::xml::namespace$::QName* getName() {return nullptr;}
	virtual ::java::util::Iterator* getNamespaces() {return nullptr;}
};

			} // events
		} // stream
	} // xml
} // javax

#endif // _javax_xml_stream_events_EndElement_h_