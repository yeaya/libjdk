#ifndef _com_sun_org_apache_xerces_internal_jaxp_validation_WrappedSAXException_h_
#define _com_sun_org_apache_xerces_internal_jaxp_validation_WrappedSAXException_h_
//$ class com.sun.org.apache.xerces.internal.jaxp.validation.WrappedSAXException
//$ extends java.lang.RuntimeException

#include <java/lang/RuntimeException.h>

namespace org {
	namespace xml {
		namespace sax {
			class SAXException;
		}
	}
}

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace jaxp {
							namespace validation {

class WrappedSAXException : public ::java::lang::RuntimeException {
	$class(WrappedSAXException, $NO_CLASS_INIT, ::java::lang::RuntimeException)
public:
	WrappedSAXException();
	void init$(::org::xml::sax::SAXException* e);
	static const int64_t serialVersionUID = (int64_t)0xD3904282EC4DA316;
	::org::xml::sax::SAXException* exception = nullptr;
	WrappedSAXException(const WrappedSAXException& e);
	virtual void throw$() override;
	inline WrappedSAXException* operator ->() {
		return (WrappedSAXException*)throwing$;
	}
};

							} // validation
						} // jaxp
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_jaxp_validation_WrappedSAXException_h_