#ifndef _javax_xml_stream_XMLEventFactory_h_
#define _javax_xml_stream_XMLEventFactory_h_
//$ class javax.xml.stream.XMLEventFactory
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("DEFAULIMPL")
#undef DEFAULIMPL
#pragma push_macro("JAXPFACTORYID")
#undef JAXPFACTORYID

namespace java {
	namespace lang {
		class ClassLoader;
	}
}
namespace java {
	namespace util {
		class Iterator;
	}
}
namespace javax {
	namespace xml {
		namespace namespace$ {
			class NamespaceContext;
			class QName;
		}
	}
}
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
			namespace events {
				class Attribute;
				class Characters;
				class Comment;
				class DTD;
				class EndDocument;
				class EndElement;
				class EntityDeclaration;
				class EntityReference;
				class Namespace;
				class ProcessingInstruction;
				class StartDocument;
				class StartElement;
			}
		}
	}
}

namespace javax {
	namespace xml {
		namespace stream {

class $export XMLEventFactory : public ::java::lang::Object {
	$class(XMLEventFactory, 0, ::java::lang::Object)
public:
	XMLEventFactory();
	void init$();
	virtual ::javax::xml::stream::events::Attribute* createAttribute($String* prefix, $String* namespaceURI, $String* localName, $String* value) {return nullptr;}
	virtual ::javax::xml::stream::events::Attribute* createAttribute($String* localName, $String* value) {return nullptr;}
	virtual ::javax::xml::stream::events::Attribute* createAttribute(::javax::xml::namespace$::QName* name, $String* value) {return nullptr;}
	virtual ::javax::xml::stream::events::Characters* createCData($String* content) {return nullptr;}
	virtual ::javax::xml::stream::events::Characters* createCharacters($String* content) {return nullptr;}
	virtual ::javax::xml::stream::events::Comment* createComment($String* text) {return nullptr;}
	virtual ::javax::xml::stream::events::DTD* createDTD($String* dtd) {return nullptr;}
	virtual ::javax::xml::stream::events::EndDocument* createEndDocument() {return nullptr;}
	virtual ::javax::xml::stream::events::EndElement* createEndElement(::javax::xml::namespace$::QName* name, ::java::util::Iterator* namespaces) {return nullptr;}
	virtual ::javax::xml::stream::events::EndElement* createEndElement($String* prefix, $String* namespaceUri, $String* localName) {return nullptr;}
	virtual ::javax::xml::stream::events::EndElement* createEndElement($String* prefix, $String* namespaceUri, $String* localName, ::java::util::Iterator* namespaces) {return nullptr;}
	virtual ::javax::xml::stream::events::EntityReference* createEntityReference($String* name, ::javax::xml::stream::events::EntityDeclaration* declaration) {return nullptr;}
	virtual ::javax::xml::stream::events::Characters* createIgnorableSpace($String* content) {return nullptr;}
	virtual ::javax::xml::stream::events::Namespace* createNamespace($String* namespaceURI) {return nullptr;}
	virtual ::javax::xml::stream::events::Namespace* createNamespace($String* prefix, $String* namespaceUri) {return nullptr;}
	virtual ::javax::xml::stream::events::ProcessingInstruction* createProcessingInstruction($String* target, $String* data) {return nullptr;}
	virtual ::javax::xml::stream::events::Characters* createSpace($String* content) {return nullptr;}
	virtual ::javax::xml::stream::events::StartDocument* createStartDocument() {return nullptr;}
	virtual ::javax::xml::stream::events::StartDocument* createStartDocument($String* encoding, $String* version, bool standalone) {return nullptr;}
	virtual ::javax::xml::stream::events::StartDocument* createStartDocument($String* encoding, $String* version) {return nullptr;}
	virtual ::javax::xml::stream::events::StartDocument* createStartDocument($String* encoding) {return nullptr;}
	virtual ::javax::xml::stream::events::StartElement* createStartElement(::javax::xml::namespace$::QName* name, ::java::util::Iterator* attributes, ::java::util::Iterator* namespaces) {return nullptr;}
	virtual ::javax::xml::stream::events::StartElement* createStartElement($String* prefix, $String* namespaceUri, $String* localName) {return nullptr;}
	virtual ::javax::xml::stream::events::StartElement* createStartElement($String* prefix, $String* namespaceUri, $String* localName, ::java::util::Iterator* attributes, ::java::util::Iterator* namespaces) {return nullptr;}
	virtual ::javax::xml::stream::events::StartElement* createStartElement($String* prefix, $String* namespaceUri, $String* localName, ::java::util::Iterator* attributes, ::java::util::Iterator* namespaces, ::javax::xml::namespace$::NamespaceContext* context) {return nullptr;}
	static ::javax::xml::stream::XMLEventFactory* newDefaultFactory();
	static ::javax::xml::stream::XMLEventFactory* newFactory();
	static ::javax::xml::stream::XMLEventFactory* newFactory($String* factoryId, ::java::lang::ClassLoader* classLoader);
	static ::javax::xml::stream::XMLEventFactory* newInstance();
	static ::javax::xml::stream::XMLEventFactory* newInstance($String* factoryId, ::java::lang::ClassLoader* classLoader);
	virtual void setLocation(::javax::xml::stream::Location* location) {}
	static $String* JAXPFACTORYID;
	static $String* DEFAULIMPL;
};

		} // stream
	} // xml
} // javax

#pragma pop_macro("DEFAULIMPL")
#pragma pop_macro("JAXPFACTORYID")

#endif // _javax_xml_stream_XMLEventFactory_h_