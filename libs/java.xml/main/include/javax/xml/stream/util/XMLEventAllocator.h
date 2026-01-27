#ifndef _javax_xml_stream_util_XMLEventAllocator_h_
#define _javax_xml_stream_util_XMLEventAllocator_h_
//$ interface javax.xml.stream.util.XMLEventAllocator
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
				class XMLEventConsumer;
			}
		}
	}
}

namespace javax {
	namespace xml {
		namespace stream {
			namespace util {

class $import XMLEventAllocator : public ::java::lang::Object {
	$interface(XMLEventAllocator, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::javax::xml::stream::events::XMLEvent* allocate(::javax::xml::stream::XMLStreamReader* reader) {return nullptr;}
	virtual void allocate(::javax::xml::stream::XMLStreamReader* reader, ::javax::xml::stream::util::XMLEventConsumer* consumer) {}
	virtual ::javax::xml::stream::util::XMLEventAllocator* newInstance() {return nullptr;}
};

			} // util
		} // stream
	} // xml
} // javax

#endif // _javax_xml_stream_util_XMLEventAllocator_h_