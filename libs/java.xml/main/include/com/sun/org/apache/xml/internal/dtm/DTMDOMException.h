#ifndef _com_sun_org_apache_xml_internal_dtm_DTMDOMException_h_
#define _com_sun_org_apache_xml_internal_dtm_DTMDOMException_h_
//$ class com.sun.org.apache.xml.internal.dtm.DTMDOMException
//$ extends org.w3c.dom.DOMException

#include <org/w3c/dom/DOMException.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace dtm {

class $import DTMDOMException : public ::org::w3c::dom::DOMException {
	$class(DTMDOMException, $NO_CLASS_INIT, ::org::w3c::dom::DOMException)
public:
	DTMDOMException();
	void init$(int16_t code, $String* message);
	void init$(int16_t code);
	static const int64_t serialVersionUID = (int64_t)0x1A4EB7830A6ED6DE;
	DTMDOMException(const DTMDOMException& e);
	virtual void throw$() override;
	inline DTMDOMException* operator ->() {
		return (DTMDOMException*)throwing$;
	}
};

						} // dtm
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xml_internal_dtm_DTMDOMException_h_