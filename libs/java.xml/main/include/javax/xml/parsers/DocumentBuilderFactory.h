#ifndef _javax_xml_parsers_DocumentBuilderFactory_h_
#define _javax_xml_parsers_DocumentBuilderFactory_h_
//$ class javax.xml.parsers.DocumentBuilderFactory
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("DEFAULT_IMPL")
#undef DEFAULT_IMPL

namespace java {
	namespace lang {
		class ClassLoader;
	}
}
namespace javax {
	namespace xml {
		namespace parsers {
			class DocumentBuilder;
		}
	}
}
namespace javax {
	namespace xml {
		namespace validation {
			class Schema;
		}
	}
}

namespace javax {
	namespace xml {
		namespace parsers {

class $import DocumentBuilderFactory : public ::java::lang::Object {
	$class(DocumentBuilderFactory, 0, ::java::lang::Object)
public:
	DocumentBuilderFactory();
	void init$();
	virtual $Object* getAttribute($String* name) {return nullptr;}
	virtual bool getFeature($String* name) {return false;}
	virtual ::javax::xml::validation::Schema* getSchema();
	virtual bool isCoalescing();
	virtual bool isExpandEntityReferences();
	virtual bool isIgnoringComments();
	virtual bool isIgnoringElementContentWhitespace();
	virtual bool isNamespaceAware();
	virtual bool isValidating();
	virtual bool isXIncludeAware();
	static ::javax::xml::parsers::DocumentBuilderFactory* makeNSAware(::javax::xml::parsers::DocumentBuilderFactory* dbf);
	static ::javax::xml::parsers::DocumentBuilderFactory* newDefaultInstance();
	static ::javax::xml::parsers::DocumentBuilderFactory* newDefaultNSInstance();
	virtual ::javax::xml::parsers::DocumentBuilder* newDocumentBuilder() {return nullptr;}
	static ::javax::xml::parsers::DocumentBuilderFactory* newInstance();
	static ::javax::xml::parsers::DocumentBuilderFactory* newInstance($String* factoryClassName, ::java::lang::ClassLoader* classLoader);
	static ::javax::xml::parsers::DocumentBuilderFactory* newNSInstance();
	static ::javax::xml::parsers::DocumentBuilderFactory* newNSInstance($String* factoryClassName, ::java::lang::ClassLoader* classLoader);
	virtual void setAttribute($String* name, Object$* value) {}
	virtual void setCoalescing(bool coalescing);
	virtual void setExpandEntityReferences(bool expandEntityRef);
	virtual void setFeature($String* name, bool value) {}
	virtual void setIgnoringComments(bool ignoreComments);
	virtual void setIgnoringElementContentWhitespace(bool whitespace);
	virtual void setNamespaceAware(bool awareness);
	virtual void setSchema(::javax::xml::validation::Schema* schema);
	virtual void setValidating(bool validating);
	virtual void setXIncludeAware(bool state);
	static $String* DEFAULT_IMPL;
	bool validating = false;
	bool namespaceAware = false;
	bool whitespace = false;
	bool expandEntityRef = false;
	bool ignoreComments = false;
	bool coalescing = false;
};

		} // parsers
	} // xml
} // javax

#pragma pop_macro("DEFAULT_IMPL")

#endif // _javax_xml_parsers_DocumentBuilderFactory_h_