#ifndef _javax_xml_validation_SchemaFactory_h_
#define _javax_xml_validation_SchemaFactory_h_
//$ class javax.xml.validation.SchemaFactory
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace io {
		class File;
	}
}
namespace java {
	namespace lang {
		class ClassLoader;
	}
}
namespace java {
	namespace net {
		class URL;
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
		namespace validation {
			class Schema;
		}
	}
}
namespace org {
	namespace w3c {
		namespace dom {
			namespace ls {
				class LSResourceResolver;
			}
		}
	}
}
namespace org {
	namespace xml {
		namespace sax {
			class ErrorHandler;
		}
	}
}

namespace javax {
	namespace xml {
		namespace validation {

class $export SchemaFactory : public ::java::lang::Object {
	$class(SchemaFactory, $NO_CLASS_INIT, ::java::lang::Object)
public:
	SchemaFactory();
	void init$();
	virtual ::org::xml::sax::ErrorHandler* getErrorHandler() {return nullptr;}
	virtual bool getFeature($String* name);
	virtual $Object* getProperty($String* name);
	virtual ::org::w3c::dom::ls::LSResourceResolver* getResourceResolver() {return nullptr;}
	virtual bool isSchemaLanguageSupported($String* schemaLanguage) {return false;}
	static ::javax::xml::validation::SchemaFactory* newDefaultInstance();
	static ::javax::xml::validation::SchemaFactory* newInstance($String* schemaLanguage);
	static ::javax::xml::validation::SchemaFactory* newInstance($String* schemaLanguage, $String* factoryClassName, ::java::lang::ClassLoader* classLoader);
	virtual ::javax::xml::validation::Schema* newSchema(::javax::xml::transform::Source* schema);
	virtual ::javax::xml::validation::Schema* newSchema(::java::io::File* schema);
	virtual ::javax::xml::validation::Schema* newSchema(::java::net::URL* schema);
	virtual ::javax::xml::validation::Schema* newSchema($Array<::javax::xml::transform::Source>* schemas) {return nullptr;}
	virtual ::javax::xml::validation::Schema* newSchema() {return nullptr;}
	virtual void setErrorHandler(::org::xml::sax::ErrorHandler* errorHandler) {}
	virtual void setFeature($String* name, bool value);
	virtual void setProperty($String* name, Object$* object);
	virtual void setResourceResolver(::org::w3c::dom::ls::LSResourceResolver* resourceResolver) {}
};

		} // validation
	} // xml
} // javax

#endif // _javax_xml_validation_SchemaFactory_h_