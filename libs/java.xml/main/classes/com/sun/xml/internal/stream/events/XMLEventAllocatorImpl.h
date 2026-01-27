#ifndef _com_sun_xml_internal_stream_events_XMLEventAllocatorImpl_h_
#define _com_sun_xml_internal_stream_events_XMLEventAllocatorImpl_h_
//$ class com.sun.xml.internal.stream.events.XMLEventAllocatorImpl
//$ extends javax.xml.stream.util.XMLEventAllocator

#include <javax/xml/stream/util/XMLEventAllocator.h>

namespace com {
	namespace sun {
		namespace xml {
			namespace internal {
				namespace stream {
					namespace events {
						class EndElementEvent;
						class StartElementEvent;
					}
				}
			}
		}
	}
}
namespace javax {
	namespace xml {
		namespace namespace$ {
			class QName;
		}
	}
}
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

namespace com {
	namespace sun {
		namespace xml {
			namespace internal {
				namespace stream {
					namespace events {

class XMLEventAllocatorImpl : public ::javax::xml::stream::util::XMLEventAllocator {
	$class(XMLEventAllocatorImpl, $NO_CLASS_INIT, ::javax::xml::stream::util::XMLEventAllocator)
public:
	XMLEventAllocatorImpl();
	void init$();
	virtual ::javax::xml::stream::events::XMLEvent* allocate(::javax::xml::stream::XMLStreamReader* xMLStreamReader) override;
	virtual void allocate(::javax::xml::stream::XMLStreamReader* xMLStreamReader, ::javax::xml::stream::util::XMLEventConsumer* xMLEventConsumer) override;
	virtual void fillAttributes(::com::sun::xml::internal::stream::events::StartElementEvent* event, ::javax::xml::stream::XMLStreamReader* xmlr);
	virtual void fillNamespaceAttributes(::com::sun::xml::internal::stream::events::StartElementEvent* event, ::javax::xml::stream::XMLStreamReader* xmlr);
	virtual void fillNamespaceAttributes(::com::sun::xml::internal::stream::events::EndElementEvent* event, ::javax::xml::stream::XMLStreamReader* xmlr);
	virtual ::javax::xml::stream::events::XMLEvent* getNextEvent(::javax::xml::stream::XMLStreamReader* streamReader);
	::javax::xml::namespace$::QName* getQName(::javax::xml::stream::XMLStreamReader* xmlr);
	virtual ::javax::xml::stream::events::XMLEvent* getXMLEvent(::javax::xml::stream::XMLStreamReader* streamReader);
	virtual ::javax::xml::stream::util::XMLEventAllocator* newInstance() override;
	void setNamespaceContext(::com::sun::xml::internal::stream::events::StartElementEvent* event, ::javax::xml::stream::XMLStreamReader* xmlr);
};

					} // events
				} // stream
			} // internal
		} // xml
	} // sun
} // com

#endif // _com_sun_xml_internal_stream_events_XMLEventAllocatorImpl_h_