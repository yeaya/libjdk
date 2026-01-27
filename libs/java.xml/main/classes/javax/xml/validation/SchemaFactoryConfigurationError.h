#ifndef _javax_xml_validation_SchemaFactoryConfigurationError_h_
#define _javax_xml_validation_SchemaFactoryConfigurationError_h_
//$ class javax.xml.validation.SchemaFactoryConfigurationError
//$ extends java.lang.Error

#include <java/lang/Error.h>

namespace java {
	namespace lang {
		class Throwable;
	}
}

namespace javax {
	namespace xml {
		namespace validation {

class $export SchemaFactoryConfigurationError : public ::java::lang::Error {
	$class(SchemaFactoryConfigurationError, $NO_CLASS_INIT, ::java::lang::Error)
public:
	SchemaFactoryConfigurationError();
	void init$();
	void init$($String* message);
	void init$($Throwable* cause);
	void init$($String* message, $Throwable* cause);
	static const int64_t serialVersionUID = (int64_t)0x310230CA473012EE;
	SchemaFactoryConfigurationError(const SchemaFactoryConfigurationError& e);
	virtual void throw$() override;
	inline SchemaFactoryConfigurationError* operator ->() {
		return (SchemaFactoryConfigurationError*)throwing$;
	}
};

		} // validation
	} // xml
} // javax

#endif // _javax_xml_validation_SchemaFactoryConfigurationError_h_