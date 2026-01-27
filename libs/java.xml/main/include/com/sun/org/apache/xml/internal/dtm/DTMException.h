#ifndef _com_sun_org_apache_xml_internal_dtm_DTMException_h_
#define _com_sun_org_apache_xml_internal_dtm_DTMException_h_
//$ class com.sun.org.apache.xml.internal.dtm.DTMException
//$ extends java.lang.RuntimeException

#include <java/lang/RuntimeException.h>

namespace java {
	namespace lang {
		class Throwable;
	}
}

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace dtm {

class $import DTMException : public ::java::lang::RuntimeException {
	$class(DTMException, $NO_CLASS_INIT, ::java::lang::RuntimeException)
public:
	DTMException();
	void init$($String* message);
	void init$($Throwable* e);
	void init$($String* message, $Throwable* e);
	static const int64_t serialVersionUID = (int64_t)0xF53C995B1E86EF32;
	DTMException(const DTMException& e);
	virtual void throw$() override;
	inline DTMException* operator ->() {
		return (DTMException*)throwing$;
	}
};

						} // dtm
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xml_internal_dtm_DTMException_h_