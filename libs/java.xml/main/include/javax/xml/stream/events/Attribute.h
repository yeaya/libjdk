#ifndef _javax_xml_stream_events_Attribute_h_
#define _javax_xml_stream_events_Attribute_h_
//$ interface javax.xml.stream.events.Attribute
//$ extends javax.xml.stream.events.XMLEvent

#include <javax/xml/stream/events/XMLEvent.h>

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

class $import Attribute : public ::javax::xml::stream::events::XMLEvent {
	$interface(Attribute, $NO_CLASS_INIT, ::javax::xml::stream::events::XMLEvent)
public:
	virtual $String* getDTDType() {return nullptr;}
	virtual ::javax::xml::namespace$::QName* getName() {return nullptr;}
	virtual $String* getValue() {return nullptr;}
	virtual bool isSpecified() {return false;}
};

			} // events
		} // stream
	} // xml
} // javax

#endif // _javax_xml_stream_events_Attribute_h_