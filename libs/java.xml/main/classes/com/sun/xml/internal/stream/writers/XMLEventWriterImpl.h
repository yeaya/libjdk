#ifndef _com_sun_xml_internal_stream_writers_XMLEventWriterImpl_h_
#define _com_sun_xml_internal_stream_writers_XMLEventWriterImpl_h_
//$ class com.sun.xml.internal.stream.writers.XMLEventWriterImpl
//$ extends javax.xml.stream.XMLEventWriter

#include <javax/xml/stream/XMLEventWriter.h>

#pragma push_macro("DEBUG")
#undef DEBUG

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
			class XMLStreamWriter;
		}
	}
}
namespace javax {
	namespace xml {
		namespace stream {
			namespace events {
				class XMLEvent;
			}
		}
	}
}

namespace com {
	namespace sun {
		namespace xml {
			namespace internal {
				namespace stream {
					namespace writers {

class XMLEventWriterImpl : public ::javax::xml::stream::XMLEventWriter {
	$class(XMLEventWriterImpl, $NO_CLASS_INIT, ::javax::xml::stream::XMLEventWriter)
public:
	XMLEventWriterImpl();
	void init$(::javax::xml::stream::XMLStreamWriter* streamWriter);
	virtual void add(::javax::xml::stream::XMLEventReader* xMLEventReader) override;
	virtual void add(::javax::xml::stream::events::XMLEvent* xMLEvent) override;
	virtual void close() override;
	virtual void flush() override;
	virtual ::javax::xml::namespace$::NamespaceContext* getNamespaceContext() override;
	virtual $String* getPrefix($String* namespaceURI) override;
	virtual void setDefaultNamespace($String* uri) override;
	virtual void setNamespaceContext(::javax::xml::namespace$::NamespaceContext* namespaceContext) override;
	virtual void setPrefix($String* prefix, $String* uri) override;
	::javax::xml::stream::XMLStreamWriter* fStreamWriter = nullptr;
	static const bool DEBUG = false;
};

					} // writers
				} // stream
			} // internal
		} // xml
	} // sun
} // com

#pragma pop_macro("DEBUG")

#endif // _com_sun_xml_internal_stream_writers_XMLEventWriterImpl_h_