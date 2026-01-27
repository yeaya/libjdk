#ifndef _javax_xml_stream_util_XMLEventConsumer_h_
#define _javax_xml_stream_util_XMLEventConsumer_h_
//$ interface javax.xml.stream.util.XMLEventConsumer
//$ extends java.lang.Object

#include <java/lang/Object.h>

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

class $export XMLEventConsumer : public ::java::lang::Object {
	$interface(XMLEventConsumer, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void add(::javax::xml::stream::events::XMLEvent* event) {}
};

			} // util
		} // stream
	} // xml
} // javax

#endif // _javax_xml_stream_util_XMLEventConsumer_h_