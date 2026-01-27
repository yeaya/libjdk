#ifndef _javax_xml_stream_XMLEventReader_h_
#define _javax_xml_stream_XMLEventReader_h_
//$ interface javax.xml.stream.XMLEventReader
//$ extends java.util.Iterator

#include <java/util/Iterator.h>

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

class $import XMLEventReader : public ::java::util::Iterator {
	$interface(XMLEventReader, $NO_CLASS_INIT, ::java::util::Iterator)
public:
	virtual void close() {}
	virtual $String* getElementText() {return nullptr;}
	virtual $Object* getProperty($String* name) {return nullptr;}
	virtual bool hasNext() override {return false;}
	virtual ::javax::xml::stream::events::XMLEvent* nextEvent() {return nullptr;}
	virtual ::javax::xml::stream::events::XMLEvent* nextTag() {return nullptr;}
	virtual ::javax::xml::stream::events::XMLEvent* peek() {return nullptr;}
};

		} // stream
	} // xml
} // javax

#endif // _javax_xml_stream_XMLEventReader_h_