#ifndef _com_sun_org_apache_xpath_internal_XPathProcessorException_h_
#define _com_sun_org_apache_xpath_internal_XPathProcessorException_h_
//$ class com.sun.org.apache.xpath.internal.XPathProcessorException
//$ extends com.sun.org.apache.xpath.internal.XPathException

#include <com/sun/org/apache/xpath/internal/XPathException.h>

namespace java {
	namespace lang {
		class Exception;
	}
}

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xpath {
					namespace internal {

class $import XPathProcessorException : public ::com::sun::org::apache::xpath::internal::XPathException {
	$class(XPathProcessorException, $NO_CLASS_INIT, ::com::sun::org::apache::xpath::internal::XPathException)
public:
	XPathProcessorException();
	void init$($String* message);
	void init$($String* message, ::java::lang::Exception* e);
	using ::com::sun::org::apache::xpath::internal::XPathException::printStackTrace;
	static const int64_t serialVersionUID = (int64_t)0x10DE5B603C804FAB;
	XPathProcessorException(const XPathProcessorException& e);
	virtual void throw$() override;
	inline XPathProcessorException* operator ->() {
		return (XPathProcessorException*)throwing$;
	}
};

					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xpath_internal_XPathProcessorException_h_