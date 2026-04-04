#ifndef _javax_xml_datatype_DatatypeConfigurationException_h_
#define _javax_xml_datatype_DatatypeConfigurationException_h_
//$ class javax.xml.datatype.DatatypeConfigurationException
//$ extends java.lang.Exception

#include <java/lang/Exception.h>

namespace java {
	namespace lang {
		class Throwable;
	}
}

namespace javax {
	namespace xml {
		namespace datatype {

class $import DatatypeConfigurationException : public ::java::lang::Exception {
	$class(DatatypeConfigurationException, $NO_CLASS_INIT, ::java::lang::Exception)
public:
	DatatypeConfigurationException();
	void init$();
	void init$($String* message);
	void init$($String* message, $Throwable* cause);
	void init$($Throwable* cause);
	static const int64_t serialVersionUID = (int64_t)0xe86a9d1d935c04ba;
	DatatypeConfigurationException(const DatatypeConfigurationException& e);
	virtual void throw$() override;
	inline DatatypeConfigurationException* operator ->() const {
		return (DatatypeConfigurationException*)throwing$;
	}
	inline operator DatatypeConfigurationException*() const {
		return (DatatypeConfigurationException*)throwing$;
	}
};

		} // datatype
	} // xml
} // javax

#endif // _javax_xml_datatype_DatatypeConfigurationException_h_