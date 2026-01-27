#ifndef _com_sun_xml_internal_stream_XMLInputFactoryImpl_h_
#define _com_sun_xml_internal_stream_XMLInputFactoryImpl_h_
//$ class com.sun.xml.internal.stream.XMLInputFactoryImpl
//$ extends javax.xml.stream.XMLInputFactory

#include <javax/xml/stream/XMLInputFactory.h>

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
							class XMLStreamReaderImpl;
						}
					}
				}
			}
		}
	}
}
namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace xni {
							namespace parser {
								class XMLInputSource;
							}
						}
					}
				}
			}
		}
	}
}
namespace java {
	namespace io {
		class InputStream;
		class Reader;
	}
}
namespace javax {
	namespace xml {
		namespace stream {
			class EventFilter;
			class StreamFilter;
			class XMLEventReader;
			class XMLReporter;
			class XMLResolver;
			class XMLStreamReader;
		}
	}
}
namespace javax {
	namespace xml {
		namespace stream {
			namespace util {
				class XMLEventAllocator;
			}
		}
	}
}
namespace javax {
	namespace xml {
		namespace transform {
			class Source;
		}
	}
}

namespace com {
	namespace sun {
		namespace xml {
			namespace internal {
				namespace stream {

class XMLInputFactoryImpl : public ::javax::xml::stream::XMLInputFactory {
	$class(XMLInputFactoryImpl, $NO_CLASS_INIT, ::javax::xml::stream::XMLInputFactory)
public:
	XMLInputFactoryImpl();
	void init$();
	virtual ::javax::xml::stream::XMLEventReader* createFilteredReader(::javax::xml::stream::XMLEventReader* reader, ::javax::xml::stream::EventFilter* filter) override;
	virtual ::javax::xml::stream::XMLStreamReader* createFilteredReader(::javax::xml::stream::XMLStreamReader* reader, ::javax::xml::stream::StreamFilter* filter) override;
	virtual ::javax::xml::stream::XMLEventReader* createXMLEventReader(::java::io::InputStream* inputstream) override;
	virtual ::javax::xml::stream::XMLEventReader* createXMLEventReader(::java::io::Reader* reader) override;
	virtual ::javax::xml::stream::XMLEventReader* createXMLEventReader(::javax::xml::transform::Source* source) override;
	virtual ::javax::xml::stream::XMLEventReader* createXMLEventReader($String* systemId, ::java::io::InputStream* inputstream) override;
	virtual ::javax::xml::stream::XMLEventReader* createXMLEventReader(::java::io::InputStream* stream, $String* encoding) override;
	virtual ::javax::xml::stream::XMLEventReader* createXMLEventReader($String* systemId, ::java::io::Reader* reader) override;
	virtual ::javax::xml::stream::XMLEventReader* createXMLEventReader(::javax::xml::stream::XMLStreamReader* reader) override;
	virtual ::javax::xml::stream::XMLStreamReader* createXMLStreamReader(::java::io::InputStream* inputstream) override;
	virtual ::javax::xml::stream::XMLStreamReader* createXMLStreamReader(::java::io::Reader* reader) override;
	virtual ::javax::xml::stream::XMLStreamReader* createXMLStreamReader($String* systemId, ::java::io::Reader* reader) override;
	virtual ::javax::xml::stream::XMLStreamReader* createXMLStreamReader(::javax::xml::transform::Source* source) override;
	virtual ::javax::xml::stream::XMLStreamReader* createXMLStreamReader($String* systemId, ::java::io::InputStream* inputstream) override;
	virtual ::javax::xml::stream::XMLStreamReader* createXMLStreamReader(::java::io::InputStream* inputstream, $String* encoding) override;
	virtual ::javax::xml::stream::util::XMLEventAllocator* getEventAllocator() override;
	virtual $Object* getProperty($String* name) override;
	virtual ::javax::xml::stream::XMLReporter* getXMLReporter() override;
	virtual ::javax::xml::stream::XMLResolver* getXMLResolver() override;
	virtual ::javax::xml::stream::XMLStreamReader* getXMLStreamReaderImpl(::com::sun::org::apache::xerces::internal::xni::parser::XMLInputSource* inputSource);
	virtual void initEventReader();
	virtual bool isPropertySupported($String* name) override;
	virtual ::com::sun::org::apache::xerces::internal::xni::parser::XMLInputSource* jaxpSourcetoXMLInputSource(::javax::xml::transform::Source* source);
	virtual void setEventAllocator(::javax::xml::stream::util::XMLEventAllocator* allocator) override;
	virtual void setProperty($String* name, Object$* value) override;
	virtual void setXMLReporter(::javax::xml::stream::XMLReporter* xmlreporter) override;
	virtual void setXMLResolver(::javax::xml::stream::XMLResolver* xmlresolver) override;
	::com::sun::org::apache::xerces::internal::impl::PropertyManager* fPropertyManager = nullptr;
	static const bool DEBUG = false;
	::com::sun::org::apache::xerces::internal::impl::XMLStreamReaderImpl* fTempReader = nullptr;
	bool fPropertyChanged = false;
	bool fReuseInstance = false;
};

				} // stream
			} // internal
		} // xml
	} // sun
} // com

#pragma pop_macro("DEBUG")

#endif // _com_sun_xml_internal_stream_XMLInputFactoryImpl_h_