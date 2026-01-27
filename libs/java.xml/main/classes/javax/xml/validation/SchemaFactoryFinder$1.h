#ifndef _javax_xml_validation_SchemaFactoryFinder$1_h_
#define _javax_xml_validation_SchemaFactoryFinder$1_h_
//$ class javax.xml.validation.SchemaFactoryFinder$1
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace javax {
	namespace xml {
		namespace validation {
			class SchemaFactory;
			class SchemaFactoryFinder;
		}
	}
}

namespace javax {
	namespace xml {
		namespace validation {

class SchemaFactoryFinder$1 : public ::java::security::PrivilegedAction {
	$class(SchemaFactoryFinder$1, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	SchemaFactoryFinder$1();
	void init$(::javax::xml::validation::SchemaFactoryFinder* this$0, ::javax::xml::validation::SchemaFactory* val$factory, $String* val$schemaLanguage);
	virtual $Object* run() override;
	::javax::xml::validation::SchemaFactoryFinder* this$0 = nullptr;
	$String* val$schemaLanguage = nullptr;
	::javax::xml::validation::SchemaFactory* val$factory = nullptr;
};

		} // validation
	} // xml
} // javax

#endif // _javax_xml_validation_SchemaFactoryFinder$1_h_