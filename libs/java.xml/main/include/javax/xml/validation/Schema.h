#ifndef _javax_xml_validation_Schema_h_
#define _javax_xml_validation_Schema_h_
//$ class javax.xml.validation.Schema
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace javax {
	namespace xml {
		namespace validation {
			class Validator;
			class ValidatorHandler;
		}
	}
}

namespace javax {
	namespace xml {
		namespace validation {

class $import Schema : public ::java::lang::Object {
	$class(Schema, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Schema();
	void init$();
	virtual ::javax::xml::validation::Validator* newValidator() {return nullptr;}
	virtual ::javax::xml::validation::ValidatorHandler* newValidatorHandler() {return nullptr;}
};

		} // validation
	} // xml
} // javax

#endif // _javax_xml_validation_Schema_h_