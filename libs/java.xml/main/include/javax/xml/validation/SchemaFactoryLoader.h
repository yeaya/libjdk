#ifndef _javax_xml_validation_SchemaFactoryLoader_h_
#define _javax_xml_validation_SchemaFactoryLoader_h_
//$ class javax.xml.validation.SchemaFactoryLoader
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace javax {
	namespace xml {
		namespace validation {
			class SchemaFactory;
		}
	}
}

namespace javax {
	namespace xml {
		namespace validation {

class $import SchemaFactoryLoader : public ::java::lang::Object {
	$class(SchemaFactoryLoader, $NO_CLASS_INIT, ::java::lang::Object)
public:
	SchemaFactoryLoader();
	void init$();
	virtual ::javax::xml::validation::SchemaFactory* newFactory($String* schemaLanguage) {return nullptr;}
};

		} // validation
	} // xml
} // javax

#endif // _javax_xml_validation_SchemaFactoryLoader_h_