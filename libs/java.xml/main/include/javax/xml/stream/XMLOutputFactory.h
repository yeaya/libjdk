#ifndef _javax_xml_stream_XMLOutputFactory_h_
#define _javax_xml_stream_XMLOutputFactory_h_
//$ class javax.xml.stream.XMLOutputFactory
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("DEFAULIMPL")
#undef DEFAULIMPL
#pragma push_macro("IS_REPAIRING_NAMESPACES")
#undef IS_REPAIRING_NAMESPACES

namespace java {
	namespace io {
		class OutputStream;
		class Writer;
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
			class XMLEventWriter;
			class XMLInputFactory;
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
		namespace stream {

class $import XMLOutputFactory : public ::java::lang::Object {
	$class(XMLOutputFactory, 0, ::java::lang::Object)
public:
	XMLOutputFactory();
	void init$();
	virtual ::javax::xml::stream::XMLEventWriter* createXMLEventWriter(::javax::xml::transform::Result* result) {return nullptr;}
	virtual ::javax::xml::stream::XMLEventWriter* createXMLEventWriter(::java::io::OutputStream* stream) {return nullptr;}
	virtual ::javax::xml::stream::XMLEventWriter* createXMLEventWriter(::java::io::OutputStream* stream, $String* encoding) {return nullptr;}
	virtual ::javax::xml::stream::XMLEventWriter* createXMLEventWriter(::java::io::Writer* stream) {return nullptr;}
	virtual ::javax::xml::stream::XMLStreamWriter* createXMLStreamWriter(::java::io::Writer* stream) {return nullptr;}
	virtual ::javax::xml::stream::XMLStreamWriter* createXMLStreamWriter(::java::io::OutputStream* stream) {return nullptr;}
	virtual ::javax::xml::stream::XMLStreamWriter* createXMLStreamWriter(::java::io::OutputStream* stream, $String* encoding) {return nullptr;}
	virtual ::javax::xml::stream::XMLStreamWriter* createXMLStreamWriter(::javax::xml::transform::Result* result) {return nullptr;}
	virtual $Object* getProperty($String* name) {return nullptr;}
	virtual bool isPropertySupported($String* name) {return false;}
	static ::javax::xml::stream::XMLOutputFactory* newDefaultFactory();
	static ::javax::xml::stream::XMLOutputFactory* newFactory();
	static ::javax::xml::stream::XMLOutputFactory* newFactory($String* factoryId, ::java::lang::ClassLoader* classLoader);
	static ::javax::xml::stream::XMLOutputFactory* newInstance();
	static ::javax::xml::stream::XMLInputFactory* newInstance($String* factoryId, ::java::lang::ClassLoader* classLoader);
	virtual void setProperty($String* name, Object$* value) {}
	static $String* IS_REPAIRING_NAMESPACES;
	static $String* DEFAULIMPL;
};

		} // stream
	} // xml
} // javax

#pragma pop_macro("DEFAULIMPL")
#pragma pop_macro("IS_REPAIRING_NAMESPACES")

#endif // _javax_xml_stream_XMLOutputFactory_h_