#ifndef _com_sun_org_apache_bcel_internal_generic_ClassGenException_h_
#define _com_sun_org_apache_bcel_internal_generic_ClassGenException_h_
//$ class com.sun.org.apache.bcel.internal.generic.ClassGenException
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
				namespace bcel {
					namespace internal {
						namespace generic {

class ClassGenException : public ::java::lang::RuntimeException {
	$class(ClassGenException, $NO_CLASS_INIT, ::java::lang::RuntimeException)
public:
	ClassGenException();
	void init$();
	void init$($String* s);
	void init$($String* s, $Throwable* initCause);
	static const int64_t serialVersionUID = (int64_t)0x6493D464DDBD3527;
	ClassGenException(const ClassGenException& e);
	virtual void throw$() override;
	inline ClassGenException* operator ->() {
		return (ClassGenException*)throwing$;
	}
};

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_bcel_internal_generic_ClassGenException_h_