#ifndef _javax_xml_stream_StreamFilter_h_
#define _javax_xml_stream_StreamFilter_h_
//$ interface javax.xml.stream.StreamFilter
//$ extends java.lang.Object

#include <java/lang/Object.h>

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

class $import StreamFilter : public ::java::lang::Object {
	$interface(StreamFilter, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual bool accept(::javax::xml::stream::XMLStreamReader* reader) {return false;}
};

		} // stream
	} // xml
} // javax

#endif // _javax_xml_stream_StreamFilter_h_