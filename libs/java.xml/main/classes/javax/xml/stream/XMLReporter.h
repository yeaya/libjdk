#ifndef _javax_xml_stream_XMLReporter_h_
#define _javax_xml_stream_XMLReporter_h_
//$ interface javax.xml.stream.XMLReporter
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace javax {
	namespace xml {
		namespace stream {
			class Location;
		}
	}
}

namespace javax {
	namespace xml {
		namespace stream {

class $export XMLReporter : public ::java::lang::Object {
	$interface(XMLReporter, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void report($String* message, $String* errorType, Object$* relatedInformation, ::javax::xml::stream::Location* location) {}
};

		} // stream
	} // xml
} // javax

#endif // _javax_xml_stream_XMLReporter_h_