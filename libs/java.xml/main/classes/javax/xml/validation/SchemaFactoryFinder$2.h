#ifndef _javax_xml_validation_SchemaFactoryFinder$2_h_
#define _javax_xml_validation_SchemaFactoryFinder$2_h_
//$ class javax.xml.validation.SchemaFactoryFinder$2
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace java {
	namespace security {
		class AccessControlContext;
	}
}
namespace javax {
	namespace xml {
		namespace validation {
			class SchemaFactoryFinder;
		}
	}
}

namespace javax {
	namespace xml {
		namespace validation {

class SchemaFactoryFinder$2 : public ::java::security::PrivilegedAction {
	$class(SchemaFactoryFinder$2, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	SchemaFactoryFinder$2();
	void init$(::javax::xml::validation::SchemaFactoryFinder* this$0, $String* val$schemaLanguage, ::java::security::AccessControlContext* val$acc);
	virtual $Object* run() override;
	::javax::xml::validation::SchemaFactoryFinder* this$0 = nullptr;
	::java::security::AccessControlContext* val$acc = nullptr;
	$String* val$schemaLanguage = nullptr;
};

		} // validation
	} // xml
} // javax

#endif // _javax_xml_validation_SchemaFactoryFinder$2_h_