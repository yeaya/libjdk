#ifndef _javax_xml_stream_events_XMLEvent_h_
#define _javax_xml_stream_events_XMLEvent_h_
//$ interface javax.xml.stream.events.XMLEvent
//$ extends javax.xml.stream.XMLStreamConstants

#include <javax/xml/stream/XMLStreamConstants.h>

namespace java {
	namespace io {
		class Writer;
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
			class Location;
		}
	}
}
namespace javax {
	namespace xml {
		namespace stream {
			namespace events {
				class Characters;
				class EndElement;
				class StartElement;
			}
		}
	}
}

namespace javax {
	namespace xml {
		namespace stream {
			namespace events {

class $export XMLEvent : public ::javax::xml::stream::XMLStreamConstants {
	$interface(XMLEvent, $NO_CLASS_INIT, ::javax::xml::stream::XMLStreamConstants)
public:
	virtual ::javax::xml::stream::events::Characters* asCharacters() {return nullptr;}
	virtual ::javax::xml::stream::events::EndElement* asEndElement() {return nullptr;}
	virtual ::javax::xml::stream::events::StartElement* asStartElement() {return nullptr;}
	virtual int32_t getEventType() {return 0;}
	virtual ::javax::xml::stream::Location* getLocation() {return nullptr;}
	virtual ::javax::xml::namespace$::QName* getSchemaType() {return nullptr;}
	virtual bool isAttribute() {return false;}
	virtual bool isCharacters() {return false;}
	virtual bool isEndDocument() {return false;}
	virtual bool isEndElement() {return false;}
	virtual bool isEntityReference() {return false;}
	virtual bool isNamespace() {return false;}
	virtual bool isProcessingInstruction() {return false;}
	virtual bool isStartDocument() {return false;}
	virtual bool isStartElement() {return false;}
	virtual void writeAsEncodedUnicode(::java::io::Writer* writer) {}
};

			} // events
		} // stream
	} // xml
} // javax

#endif // _javax_xml_stream_events_XMLEvent_h_