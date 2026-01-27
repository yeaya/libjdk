#ifndef _javax_xml_stream_util_EventReaderDelegate_h_
#define _javax_xml_stream_util_EventReaderDelegate_h_
//$ class javax.xml.stream.util.EventReaderDelegate
//$ extends javax.xml.stream.XMLEventReader

#include <javax/xml/stream/XMLEventReader.h>

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

class $import EventReaderDelegate : public ::javax::xml::stream::XMLEventReader {
	$class(EventReaderDelegate, $NO_CLASS_INIT, ::javax::xml::stream::XMLEventReader)
public:
	EventReaderDelegate();
	void init$();
	void init$(::javax::xml::stream::XMLEventReader* reader);
	virtual void close() override;
	virtual $String* getElementText() override;
	virtual ::javax::xml::stream::XMLEventReader* getParent();
	virtual $Object* getProperty($String* name) override;
	virtual bool hasNext() override;
	virtual $Object* next() override;
	virtual ::javax::xml::stream::events::XMLEvent* nextEvent() override;
	virtual ::javax::xml::stream::events::XMLEvent* nextTag() override;
	virtual ::javax::xml::stream::events::XMLEvent* peek() override;
	virtual void remove() override;
	virtual void setParent(::javax::xml::stream::XMLEventReader* reader);
	::javax::xml::stream::XMLEventReader* reader = nullptr;
};

			} // util
		} // stream
	} // xml
} // javax

#endif // _javax_xml_stream_util_EventReaderDelegate_h_