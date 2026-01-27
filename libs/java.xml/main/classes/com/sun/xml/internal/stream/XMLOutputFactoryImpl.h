#ifndef _com_sun_xml_internal_stream_XMLOutputFactoryImpl_h_
#define _com_sun_xml_internal_stream_XMLOutputFactoryImpl_h_
//$ class com.sun.xml.internal.stream.XMLOutputFactoryImpl
//$ extends javax.xml.stream.XMLOutputFactory

#include <javax/xml/stream/XMLOutputFactory.h>

#pragma push_macro("DEBUG")
#undef DEBUG

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							class PropertyManager;
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
	namespace io {
		class OutputStream;
		class Writer;
	}
}
namespace javax {
	namespace xml {
		namespace stream {
			class XMLEventWriter;
			class XMLStreamWriter;
		}
	}
}
namespace javax {
	namespace xml {
		namespace transform {
			class Result;
		}
	}
}
namespace javax {
	namespace xml {
		namespace transform {
			namespace stream {
				class StreamResult;
			}
		}
	}
}

namespace com {
	namespace sun {
		namespace xml {
			namespace internal {
				namespace stream {

class XMLOutputFactoryImpl : public ::javax::xml::stream::XMLOutputFactory {
	$class(XMLOutputFactoryImpl, $NO_CLASS_INIT, ::javax::xml::stream::XMLOutputFactory)
public:
	XMLOutputFactoryImpl();
	void init$();
	virtual ::javax::xml::stream::XMLEventWriter* createXMLEventWriter(::java::io::OutputStream* outputStream) override;
	virtual ::javax::xml::stream::XMLEventWriter* createXMLEventWriter(::java::io::OutputStream* outputStream, $String* encoding) override;
	virtual ::javax::xml::stream::XMLEventWriter* createXMLEventWriter(::javax::xml::transform::Result* result) override;
	virtual ::javax::xml::stream::XMLEventWriter* createXMLEventWriter(::java::io::Writer* writer) override;
	virtual ::javax::xml::stream::XMLStreamWriter* createXMLStreamWriter(::javax::xml::transform::Result* result) override;
	virtual ::javax::xml::stream::XMLStreamWriter* createXMLStreamWriter(::java::io::Writer* writer) override;
	virtual ::javax::xml::stream::XMLStreamWriter* createXMLStreamWriter(::java::io::OutputStream* outputStream) override;
	virtual ::javax::xml::stream::XMLStreamWriter* createXMLStreamWriter(::java::io::OutputStream* outputStream, $String* encoding) override;
	virtual ::javax::xml::stream::XMLStreamWriter* createXMLStreamWriter(::javax::xml::transform::stream::StreamResult* sr, $String* encoding);
	virtual $Object* getProperty($String* name) override;
	virtual bool isPropertySupported($String* name) override;
	virtual void setProperty($String* name, Object$* value) override;
	virtual ::javax::xml::transform::stream::StreamResult* toStreamResult(::java::io::OutputStream* os, ::java::io::Writer* writer, $String* systemId);
	::com::sun::org::apache::xerces::internal::impl::PropertyManager* fPropertyManager = nullptr;
	::com::sun::xml::internal::stream::writers::XMLStreamWriterImpl* fStreamWriter = nullptr;
	bool fReuseInstance = false;
	static const bool DEBUG = false;
	bool fPropertyChanged = false;
};

				} // stream
			} // internal
		} // xml
	} // sun
} // com

#pragma pop_macro("DEBUG")

#endif // _com_sun_xml_internal_stream_XMLOutputFactoryImpl_h_