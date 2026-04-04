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

class $import SchemaFactoryConfigurationError : public ::java::lang::Error {
	$class(SchemaFactoryConfigurationError, $NO_CLASS_INIT, ::java::lang::Error)
public:
	SchemaFactoryConfigurationError();
	void init$();
	void init$($String* message);
	void init$($Throwable* cause);
	void init$($String* message, $Throwable* cause);
	static const int64_t serialVersionUID = (int64_t)0x310230ca473012ee;
	SchemaFactoryConfigurationError(const SchemaFactoryConfigurationError& e);
	virtual void throw$() override;
	inline SchemaFactoryConfigurationError* operator ->() const {
		return (SchemaFactoryConfigurationError*)throwing$;
	}
	inline operator SchemaFactoryConfigurationError*() const {
		return (SchemaFactoryConfigurationError*)throwing$;
	}
};

		} // validation
	} // xml
} // javax

#endif // _javax_xml_validation_SchemaFactoryConfigurationError_h_