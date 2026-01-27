#ifndef _com_sun_xml_internal_stream_EventFilterSupport_h_
#define _com_sun_xml_internal_stream_EventFilterSupport_h_
//$ class com.sun.xml.internal.stream.EventFilterSupport
//$ extends javax.xml.stream.util.EventReaderDelegate

#include <javax/xml/stream/util/EventReaderDelegate.h>

namespace javax {
	namespace xml {
		namespace stream {
			class EventFilter;
			class XMLEventReader;
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

class EventFilterSupport : public ::javax::xml::stream::util::EventReaderDelegate {
	$class(EventFilterSupport, $NO_CLASS_INIT, ::javax::xml::stream::util::EventReaderDelegate)
public:
	EventFilterSupport();
	void init$(::javax::xml::stream::XMLEventReader* eventReader, ::javax::xml::stream::EventFilter* eventFilter);
	virtual bool hasNext() override;
	virtual $Object* next() override;
	virtual ::javax::xml::stream::events::XMLEvent* nextEvent() override;
	virtual ::javax::xml::stream::events::XMLEvent* nextTag() override;
	virtual ::javax::xml::stream::events::XMLEvent* peek() override;
	::javax::xml::stream::EventFilter* fEventFilter = nullptr;
};

				} // stream
			} // internal
		} // xml
	} // sun
} // com

#endif // _com_sun_xml_internal_stream_EventFilterSupport_h_