#ifndef _com_sun_org_apache_xerces_internal_impl_xpath_XPathException_h_
#define _com_sun_org_apache_xerces_internal_impl_xpath_XPathException_h_
//$ class com.sun.org.apache.xerces.internal.impl.xpath.XPathException
//$ extends java.lang.Exception

#include <java/lang/Exception.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace xpath {

class XPathException : public ::java::lang::Exception {
	$class(XPathException, $NO_CLASS_INIT, ::java::lang::Exception)
public:
	XPathException();
	void init$();
	void init$($String* key);
	virtual $String* getKey();
	static const int64_t serialVersionUID = (int64_t)0xF2D6505CC365236B;
	$String* fKey = nullptr;
	XPathException(const XPathException& e);
	virtual void throw$() override;
	inline XPathException* operator ->() {
		return (XPathException*)throwing$;
	}
};

							} // xpath
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_impl_xpath_XPathException_h_