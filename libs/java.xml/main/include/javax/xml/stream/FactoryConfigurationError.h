#ifndef _javax_xml_stream_FactoryConfigurationError_h_
#define _javax_xml_stream_FactoryConfigurationError_h_
//$ class javax.xml.stream.FactoryConfigurationError
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
		namespace stream {

class $import FactoryConfigurationError : public ::java::lang::Error {
	$class(FactoryConfigurationError, $NO_CLASS_INIT, ::java::lang::Error)
public:
	FactoryConfigurationError();
	void init$();
	void init$(::java::lang::Exception* e);
	void init$(::java::lang::Exception* e, $String* msg);
	void init$($String* msg, ::java::lang::Exception* e);
	void init$($String* msg);
	virtual $Throwable* getCause() override;
	virtual ::java::lang::Exception* getException();
	virtual $String* getMessage() override;
	static const int64_t serialVersionUID = (int64_t)0xD671B59E908E1F40;
	::java::lang::Exception* nested = nullptr;
	FactoryConfigurationError(const FactoryConfigurationError& e);
	virtual void throw$() override;
	inline FactoryConfigurationError* operator ->() {
		return (FactoryConfigurationError*)throwing$;
	}
};

		} // stream
	} // xml
} // javax

#endif // _javax_xml_stream_FactoryConfigurationError_h_