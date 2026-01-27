#ifndef _javax_xml_parsers_FactoryConfigurationError_h_
#define _javax_xml_parsers_FactoryConfigurationError_h_
//$ class javax.xml.parsers.FactoryConfigurationError
//$ extends java.lang.Error

#include <java/lang/Error.h>

namespace java {
	namespace lang {
		class Exception;
		class Throwable;
	}
}

namespace javax {
	namespace xml {
		namespace parsers {

class $export FactoryConfigurationError : public ::java::lang::Error {
	$class(FactoryConfigurationError, $NO_CLASS_INIT, ::java::lang::Error)
public:
	FactoryConfigurationError();
	void init$();
	void init$($String* msg);
	void init$(::java::lang::Exception* e);
	void init$(::java::lang::Exception* e, $String* msg);
	virtual $Throwable* getCause() override;
	virtual ::java::lang::Exception* getException();
	virtual $String* getMessage() override;
	static const int64_t serialVersionUID = (int64_t)0xF485850916997145;
	::java::lang::Exception* exception = nullptr;
	FactoryConfigurationError(const FactoryConfigurationError& e);
	virtual void throw$() override;
	inline FactoryConfigurationError* operator ->() {
		return (FactoryConfigurationError*)throwing$;
	}
};

		} // parsers
	} // xml
} // javax

#endif // _javax_xml_parsers_FactoryConfigurationError_h_