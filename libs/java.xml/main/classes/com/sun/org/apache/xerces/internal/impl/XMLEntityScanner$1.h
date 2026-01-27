#ifndef _com_sun_org_apache_xerces_internal_impl_XMLEntityScanner$1_h_
#define _com_sun_org_apache_xerces_internal_impl_XMLEntityScanner$1_h_
//$ class com.sun.org.apache.xerces.internal.impl.XMLEntityScanner$1
//$ extends java.io.EOFException

#include <java/io/EOFException.h>

namespace java {
	namespace lang {
		class Throwable;
	}
}

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {

class XMLEntityScanner$1 : public ::java::io::EOFException {
	$class(XMLEntityScanner$1, $NO_CLASS_INIT, ::java::io::EOFException)
public:
	XMLEntityScanner$1();
	void init$();
	virtual $Throwable* fillInStackTrace() override;
	static const int64_t serialVersionUID = (int64_t)0x0D9ADC0245BEB3C4;
	XMLEntityScanner$1(const XMLEntityScanner$1& e);
	virtual void throw$() override;
	inline XMLEntityScanner$1* operator ->() {
		return (XMLEntityScanner$1*)throwing$;
	}
};

						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_impl_XMLEntityScanner$1_h_