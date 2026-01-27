#ifndef _com_sun_org_apache_xerces_internal_util_URI$MalformedURIException_h_
#define _com_sun_org_apache_xerces_internal_util_URI$MalformedURIException_h_
//$ class com.sun.org.apache.xerces.internal.util.URI$MalformedURIException
//$ extends java.io.IOException

#include <java/io/IOException.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace util {

class URI$MalformedURIException : public ::java::io::IOException {
	$class(URI$MalformedURIException, $NO_CLASS_INIT, ::java::io::IOException)
public:
	URI$MalformedURIException();
	void init$();
	void init$($String* p_msg);
	static const int64_t serialVersionUID = (int64_t)0xA31663199F3A0406;
	URI$MalformedURIException(const URI$MalformedURIException& e);
	virtual void throw$() override;
	inline URI$MalformedURIException* operator ->() {
		return (URI$MalformedURIException*)throwing$;
	}
};

						} // util
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_util_URI$MalformedURIException_h_