#ifndef _com_sun_xml_internal_stream_writers_XMLStreamWriterImpl$NamespaceContextImpl_h_
#define _com_sun_xml_internal_stream_writers_XMLStreamWriterImpl$NamespaceContextImpl_h_
//$ class com.sun.xml.internal.stream.writers.XMLStreamWriterImpl$NamespaceContextImpl
//$ extends javax.xml.namespace.NamespaceContext

#include <javax/xml/namespace/NamespaceContext.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace util {
							class NamespaceSupport;
						}
					}
				}
			}
		}
	}
}
namespace com {
	namespace sun {
		namespace xml {
			namespace internal {
				namespace stream {
					namespace writers {
						class XMLStreamWriterImpl;
					}
				}
			}
		}
	}
}
namespace java {
	namespace util {
		class Iterator;
	}
}

namespace com {
	namespace sun {
		namespace xml {
			namespace internal {
				namespace stream {
					namespace writers {

class XMLStreamWriterImpl$NamespaceContextImpl : public ::javax::xml::namespace$::NamespaceContext {
	$class(XMLStreamWriterImpl$NamespaceContextImpl, $NO_CLASS_INIT, ::javax::xml::namespace$::NamespaceContext)
public:
	XMLStreamWriterImpl$NamespaceContextImpl();
	void init$(::com::sun::xml::internal::stream::writers::XMLStreamWriterImpl* this$0);
	virtual $String* getNamespaceURI($String* prefix) override;
	virtual $String* getPrefix($String* uri) override;
	virtual ::java::util::Iterator* getPrefixes($String* uri) override;
	::com::sun::xml::internal::stream::writers::XMLStreamWriterImpl* this$0 = nullptr;
	::javax::xml::namespace$::NamespaceContext* userContext = nullptr;
	::com::sun::org::apache::xerces::internal::util::NamespaceSupport* internalContext = nullptr;
};

					} // writers
				} // stream
			} // internal
		} // xml
	} // sun
} // com

#endif // _com_sun_xml_internal_stream_writers_XMLStreamWriterImpl$NamespaceContextImpl_h_