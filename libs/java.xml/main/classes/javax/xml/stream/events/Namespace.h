#ifndef _javax_xml_stream_events_Namespace_h_
#define _javax_xml_stream_events_Namespace_h_
//$ interface javax.xml.stream.events.Namespace
//$ extends javax.xml.stream.events.Attribute

#include <javax/xml/stream/events/Attribute.h>

namespace javax {
	namespace xml {
		namespace stream {
			namespace events {

class $export Namespace : public ::javax::xml::stream::events::Attribute {
	$interface(Namespace, $NO_CLASS_INIT, ::javax::xml::stream::events::Attribute)
public:
	virtual $String* getNamespaceURI() {return nullptr;}
	virtual $String* getPrefix() {return nullptr;}
	virtual bool isDefaultNamespaceDeclaration() {return false;}
};

			} // events
		} // stream
	} // xml
} // javax

#endif // _javax_xml_stream_events_Namespace_h_