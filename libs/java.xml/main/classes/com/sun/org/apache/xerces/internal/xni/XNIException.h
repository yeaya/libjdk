#ifndef _com_sun_org_apache_xerces_internal_xni_XNIException_h_
#define _com_sun_org_apache_xerces_internal_xni_XNIException_h_
//$ class com.sun.org.apache.xerces.internal.xni.XNIException
//$ extends java.lang.RuntimeException

#include <java/lang/RuntimeException.h>

namespace java {
	namespace lang {
		class Exception;
		class Throwable;
	}
}

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace xni {

class XNIException : public ::java::lang::RuntimeException {
	$class(XNIException, $NO_CLASS_INIT, ::java::lang::RuntimeException)
public:
	XNIException();
	void init$($String* message);
	void init$(::java::lang::Exception* exception);
	void init$($String* message, ::java::lang::Exception* exception);
	virtual $Throwable* getCause() override;
	virtual ::java::lang::Exception* getException();
	static const int64_t serialVersionUID = (int64_t)0x7D2CD64B50FF589F;
	::java::lang::Exception* fException = nullptr;
	XNIException(const XNIException& e);
	virtual void throw$() override;
	inline XNIException* operator ->() {
		return (XNIException*)throwing$;
	}
};

						} // xni
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_xni_XNIException_h_