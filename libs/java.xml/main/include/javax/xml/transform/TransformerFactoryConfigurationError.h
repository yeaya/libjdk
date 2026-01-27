#ifndef _javax_xml_transform_TransformerFactoryConfigurationError_h_
#define _javax_xml_transform_TransformerFactoryConfigurationError_h_
//$ class javax.xml.transform.TransformerFactoryConfigurationError
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
		namespace transform {

class $import TransformerFactoryConfigurationError : public ::java::lang::Error {
	$class(TransformerFactoryConfigurationError, $NO_CLASS_INIT, ::java::lang::Error)
public:
	TransformerFactoryConfigurationError();
	void init$();
	void init$($String* msg);
	void init$(::java::lang::Exception* e);
	void init$(::java::lang::Exception* e, $String* msg);
	virtual $Throwable* getCause() override;
	virtual ::java::lang::Exception* getException();
	virtual $String* getMessage() override;
	static const int64_t serialVersionUID = (int64_t)0xA568E268AC6C4354;
	::java::lang::Exception* exception = nullptr;
	TransformerFactoryConfigurationError(const TransformerFactoryConfigurationError& e);
	virtual void throw$() override;
	inline TransformerFactoryConfigurationError* operator ->() {
		return (TransformerFactoryConfigurationError*)throwing$;
	}
};

		} // transform
	} // xml
} // javax

#endif // _javax_xml_transform_TransformerFactoryConfigurationError_h_