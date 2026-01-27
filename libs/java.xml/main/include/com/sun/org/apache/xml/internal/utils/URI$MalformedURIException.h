#ifndef _com_sun_org_apache_xml_internal_utils_URI$MalformedURIException_h_
#define _com_sun_org_apache_xml_internal_utils_URI$MalformedURIException_h_
//$ class com.sun.org.apache.xml.internal.utils.URI$MalformedURIException
//$ extends java.io.IOException

#include <java/io/IOException.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace utils {

class $import URI$MalformedURIException : public ::java::io::IOException {
	$class(URI$MalformedURIException, $NO_CLASS_INIT, ::java::io::IOException)
public:
	URI$MalformedURIException();
	void init$();
	void init$($String* p_msg);
	static const int64_t serialVersionUID = (int64_t)0x8A0FECBAC0432BC3;
	URI$MalformedURIException(const URI$MalformedURIException& e);
	virtual void throw$() override;
	inline URI$MalformedURIException* operator ->() {
		return (URI$MalformedURIException*)throwing$;
	}
};

						} // utils
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xml_internal_utils_URI$MalformedURIException_h_