#ifndef _com_sun_org_apache_xerces_internal_xs_XSException_h_
#define _com_sun_org_apache_xerces_internal_xs_XSException_h_
//$ class com.sun.org.apache.xerces.internal.xs.XSException
//$ extends java.lang.RuntimeException

#include <java/lang/RuntimeException.h>

#pragma push_macro("INDEX_SIZE_ERR")
#undef INDEX_SIZE_ERR
#pragma push_macro("NOT_SUPPORTED_ERR")
#undef NOT_SUPPORTED_ERR

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace xs {

class XSException : public ::java::lang::RuntimeException {
	$class(XSException, $NO_CLASS_INIT, ::java::lang::RuntimeException)
public:
	XSException();
	void init$(int16_t code, $String* message);
	static const int64_t serialVersionUID = (int64_t)0x2B2FAA45E338CC2E;
	int16_t code = 0;
	static const int16_t NOT_SUPPORTED_ERR = 1;
	static const int16_t INDEX_SIZE_ERR = 2;
	XSException(const XSException& e);
	virtual void throw$() override;
	inline XSException* operator ->() {
		return (XSException*)throwing$;
	}
};

						} // xs
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("INDEX_SIZE_ERR")
#pragma pop_macro("NOT_SUPPORTED_ERR")

#endif // _com_sun_org_apache_xerces_internal_xs_XSException_h_