#ifndef _javax_xml_stream_events_StartElement_h_
#define _javax_xml_stream_events_StartElement_h_
//$ interface javax.xml.stream.events.StartElement
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
			class NamespaceContext;
			class QName;
		}
	}
}
namespace javax {
	namespace xml {
		namespace stream {
			namespace events {
				class Attribute;
			}
		}
	}
}

namespace javax {
	namespace xml {
		namespace stream {
			namespace events {

class $export StartElement : public ::javax::xml::stream::events::XMLEvent {
	$interface(StartElement, $NO_CLASS_INIT, ::javax::xml::stream::events::XMLEvent)
public:
	virtual ::javax::xml::stream::events::Attribute* getAttributeByName(::javax::xml::namespace$::QName* name) {return nullptr;}
	virtual ::java::util::Iterator* getAttributes() {return nullptr;}
	virtual ::javax::xml::namespace$::QName* getName() {return nullptr;}
	virtual ::javax::xml::namespace$::NamespaceContext* getNamespaceContext() {return nullptr;}
	virtual $String* getNamespaceURI($String* prefix) {return nullptr;}
	virtual ::java::util::Iterator* getNamespaces() {return nullptr;}
};

			} // events
		} // stream
	} // xml
} // javax

#endif // _javax_xml_stream_events_StartElement_h_