#ifndef _javax_xml_stream_XMLInputFactory_h_
#define _javax_xml_stream_XMLInputFactory_h_
//$ class javax.xml.stream.XMLInputFactory
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("ALLOCATOR")
#undef ALLOCATOR
#pragma push_macro("DEFAULIMPL")
#undef DEFAULIMPL
#pragma push_macro("IS_COALESCING")
#undef IS_COALESCING
#pragma push_macro("IS_NAMESPACE_AWARE")
#undef IS_NAMESPACE_AWARE
#pragma push_macro("IS_REPLACING_ENTITY_REFERENCES")
#undef IS_REPLACING_ENTITY_REFERENCES
#pragma push_macro("IS_SUPPORTING_EXTERNAL_ENTITIES")
#undef IS_SUPPORTING_EXTERNAL_ENTITIES
#pragma push_macro("IS_VALIDATING")
#undef IS_VALIDATING
#pragma push_macro("REPORTER")
#undef REPORTER
#pragma push_macro("RESOLVER")
#undef RESOLVER
#pragma push_macro("SUPPORT_DTD")
#undef SUPPORT_DTD

namespace java {
	namespace io {
		class InputStream;
		class Reader;
	}
}
namespace java {
	namespace lang {
		class ClassLoader;
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

namespace javax {
	namespace xml {
		namespace stream {

class $import XMLInputFactory : public ::java::lang::Object {
	$class(XMLInputFactory, 0, ::java::lang::Object)
public:
	XMLInputFactory();
	void init$();
	virtual ::javax::xml::stream::XMLStreamReader* createFilteredReader(::javax::xml::stream::XMLStreamReader* reader, ::javax::xml::stream::StreamFilter* filter) {return nullptr;}
	virtual ::javax::xml::stream::XMLEventReader* createFilteredReader(::javax::xml::stream::XMLEventReader* reader, ::javax::xml::stream::EventFilter* filter) {return nullptr;}
	virtual ::javax::xml::stream::XMLEventReader* createXMLEventReader(::java::io::Reader* reader) {return nullptr;}
	virtual ::javax::xml::stream::XMLEventReader* createXMLEventReader($String* systemId, ::java::io::Reader* reader) {return nullptr;}
	virtual ::javax::xml::stream::XMLEventReader* createXMLEventReader(::javax::xml::stream::XMLStreamReader* reader) {return nullptr;}
	virtual ::javax::xml::stream::XMLEventReader* createXMLEventReader(::javax::xml::transform::Source* source) {return nullptr;}
	virtual ::javax::xml::stream::XMLEventReader* createXMLEventReader(::java::io::InputStream* stream) {return nullptr;}
	virtual ::javax::xml::stream::XMLEventReader* createXMLEventReader(::java::io::InputStream* stream, $String* encoding) {return nullptr;}
	virtual ::javax::xml::stream::XMLEventReader* createXMLEventReader($String* systemId, ::java::io::InputStream* stream) {return nullptr;}
	virtual ::javax::xml::stream::XMLStreamReader* createXMLStreamReader(::java::io::Reader* reader) {return nullptr;}
	virtual ::javax::xml::stream::XMLStreamReader* createXMLStreamReader(::javax::xml::transform::Source* source) {return nullptr;}
	virtual ::javax::xml::stream::XMLStreamReader* createXMLStreamReader(::java::io::InputStream* stream) {return nullptr;}
	virtual ::javax::xml::stream::XMLStreamReader* createXMLStreamReader(::java::io::InputStream* stream, $String* encoding) {return nullptr;}
	virtual ::javax::xml::stream::XMLStreamReader* createXMLStreamReader($String* systemId, ::java::io::InputStream* stream) {return nullptr;}
	virtual ::javax::xml::stream::XMLStreamReader* createXMLStreamReader($String* systemId, ::java::io::Reader* reader) {return nullptr;}
	virtual ::javax::xml::stream::util::XMLEventAllocator* getEventAllocator() {return nullptr;}
	virtual $Object* getProperty($String* name) {return nullptr;}
	virtual ::javax::xml::stream::XMLReporter* getXMLReporter() {return nullptr;}
	virtual ::javax::xml::stream::XMLResolver* getXMLResolver() {return nullptr;}
	virtual bool isPropertySupported($String* name) {return false;}
	static ::javax::xml::stream::XMLInputFactory* newDefaultFactory();
	static ::javax::xml::stream::XMLInputFactory* newFactory();
	static ::javax::xml::stream::XMLInputFactory* newFactory($String* factoryId, ::java::lang::ClassLoader* classLoader);
	static ::javax::xml::stream::XMLInputFactory* newInstance();
	static ::javax::xml::stream::XMLInputFactory* newInstance($String* factoryId, ::java::lang::ClassLoader* classLoader);
	virtual void setEventAllocator(::javax::xml::stream::util::XMLEventAllocator* allocator) {}
	virtual void setProperty($String* name, Object$* value) {}
	virtual void setXMLReporter(::javax::xml::stream::XMLReporter* reporter) {}
	virtual void setXMLResolver(::javax::xml::stream::XMLResolver* resolver) {}
	static $String* IS_NAMESPACE_AWARE;
	static $String* IS_VALIDATING;
	static $String* IS_COALESCING;
	static $String* IS_REPLACING_ENTITY_REFERENCES;
	static $String* IS_SUPPORTING_EXTERNAL_ENTITIES;
	static $String* SUPPORT_DTD;
	static $String* REPORTER;
	static $String* RESOLVER;
	static $String* ALLOCATOR;
	static $String* DEFAULIMPL;
};

		} // stream
	} // xml
} // javax

#pragma pop_macro("ALLOCATOR")
#pragma pop_macro("DEFAULIMPL")
#pragma pop_macro("IS_COALESCING")
#pragma pop_macro("IS_NAMESPACE_AWARE")
#pragma pop_macro("IS_REPLACING_ENTITY_REFERENCES")
#pragma pop_macro("IS_SUPPORTING_EXTERNAL_ENTITIES")
#pragma pop_macro("IS_VALIDATING")
#pragma pop_macro("REPORTER")
#pragma pop_macro("RESOLVER")
#pragma pop_macro("SUPPORT_DTD")

#endif // _javax_xml_stream_XMLInputFactory_h_