#ifndef _javax_xml_stream_EventFilter_h_
#define _javax_xml_stream_EventFilter_h_
//$ interface javax.xml.stream.EventFilter
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

class $export EventFilter : public ::java::lang::Object {
	$interface(EventFilter, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual bool accept(::javax::xml::stream::events::XMLEvent* event) {return false;}
};

		} // stream
	} // xml
} // javax

#endif // _javax_xml_stream_EventFilter_h_