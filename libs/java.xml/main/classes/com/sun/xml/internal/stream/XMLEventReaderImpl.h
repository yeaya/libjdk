#ifndef _com_sun_xml_internal_stream_XMLEventReaderImpl_h_
#define _com_sun_xml_internal_stream_XMLEventReaderImpl_h_
//$ class com.sun.xml.internal.stream.XMLEventReaderImpl
//$ extends javax.xml.stream.XMLEventReader

#include <javax/xml/stream/XMLEventReader.h>

namespace javax {
	namespace xml {
		namespace stream {
			class XMLStreamReader;
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
namespace javax {
	namespace xml {
		namespace stream {
			namespace util {
				class XMLEventAllocator;
			}
		}
	}
}

namespace com {
	namespace sun {
		namespace xml {
			namespace internal {
				namespace stream {

class XMLEventReaderImpl : public ::javax::xml::stream::XMLEventReader {
	$class(XMLEventReaderImpl, $NO_CLASS_INIT, ::javax::xml::stream::XMLEventReader)
public:
	XMLEventReaderImpl();
	void init$(::javax::xml::stream::XMLStreamReader* reader);
	virtual void close() override;
	virtual $String* getElementText() override;
	virtual $Object* getProperty($String* name) override;
	virtual bool hasNext() override;
	virtual $Object* next() override;
	virtual ::javax::xml::stream::events::XMLEvent* nextEvent() override;
	virtual ::javax::xml::stream::events::XMLEvent* nextTag() override;
	virtual ::javax::xml::stream::events::XMLEvent* peek() override;
	virtual void remove() override;
	::javax::xml::stream::XMLStreamReader* fXMLReader = nullptr;
	::javax::xml::stream::util::XMLEventAllocator* fXMLEventAllocator = nullptr;
	::javax::xml::stream::events::XMLEvent* fPeekedEvent = nullptr;
	::javax::xml::stream::events::XMLEvent* fLastEvent = nullptr;
};

				} // stream
			} // internal
		} // xml
	} // sun
} // com

#endif // _com_sun_xml_internal_stream_XMLEventReaderImpl_h_