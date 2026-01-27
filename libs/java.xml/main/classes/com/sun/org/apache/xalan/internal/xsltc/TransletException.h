#ifndef _com_sun_org_apache_xalan_internal_xsltc_TransletException_h_
#define _com_sun_org_apache_xalan_internal_xsltc_TransletException_h_
//$ class com.sun.org.apache.xalan.internal.xsltc.TransletException
//$ extends org.xml.sax.SAXException

#include <org/xml/sax/SAXException.h>

namespace java {
	namespace lang {
		class Exception;
	}
}

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace xsltc {

class TransletException : public ::org::xml::sax::SAXException {
	$class(TransletException, $NO_CLASS_INIT, ::org::xml::sax::SAXException)
public:
	TransletException();
	void init$();
	void init$(::java::lang::Exception* e);
	void init$($String* message);
	static const int64_t serialVersionUID = (int64_t)0xF3CD75CCDD4678F3;
	TransletException(const TransletException& e);
	virtual void throw$() override;
	inline TransletException* operator ->() {
		return (TransletException*)throwing$;
	}
};

						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xalan_internal_xsltc_TransletException_h_