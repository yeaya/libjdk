#ifndef _javax_xml_stream_XMLEventWriter_h_
#define _javax_xml_stream_XMLEventWriter_h_
//$ interface javax.xml.stream.XMLEventWriter
//$ extends javax.xml.stream.util.XMLEventConsumer

#include <javax/xml/stream/util/XMLEventConsumer.h>

namespace javax {
	namespace xml {
		namespace namespace$ {
			class NamespaceContext;
		}
	}
}
namespace javax {
	namespace xml {
		namespace stream {
			class XMLEventReader;
		}
	}
}

namespace javax {
	namespace xml {
		namespace stream {

class $import XMLEventWriter : public ::javax::xml::stream::util::XMLEventConsumer {
	$interface(XMLEventWriter, $NO_CLASS_INIT, ::javax::xml::stream::util::XMLEventConsumer)
public:
	virtual void add(::javax::xml::stream::events::XMLEvent* event) override {}
	virtual void add(::javax::xml::stream::XMLEventReader* reader) {}
	virtual void close() {}
	virtual void flush() {}
	virtual ::javax::xml::namespace$::NamespaceContext* getNamespaceContext() {return nullptr;}
	virtual $String* getPrefix($String* uri) {return nullptr;}
	virtual void setDefaultNamespace($String* uri) {}
	virtual void setNamespaceContext(::javax::xml::namespace$::NamespaceContext* context) {}
	virtual void setPrefix($String* prefix, $String* uri) {}
};

		} // stream
	} // xml
} // javax

#endif // _javax_xml_stream_XMLEventWriter_h_