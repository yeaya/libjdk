#ifndef _com_sun_org_apache_xml_internal_serializer_dom3_DOMErrorHandlerImpl_h_
#define _com_sun_org_apache_xml_internal_serializer_dom3_DOMErrorHandlerImpl_h_
//$ class com.sun.org.apache.xml.internal.serializer.dom3.DOMErrorHandlerImpl
//$ extends org.w3c.dom.DOMErrorHandler

#include <org/w3c/dom/DOMErrorHandler.h>

namespace org {
	namespace w3c {
		namespace dom {
			class DOMError;
		}
	}
}

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace serializer {
							namespace dom3 {

class DOMErrorHandlerImpl : public ::org::w3c::dom::DOMErrorHandler {
	$class(DOMErrorHandlerImpl, $NO_CLASS_INIT, ::org::w3c::dom::DOMErrorHandler)
public:
	DOMErrorHandlerImpl();
	void init$();
	virtual bool handleError(::org::w3c::dom::DOMError* error) override;
};

							} // dom3
						} // serializer
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xml_internal_serializer_dom3_DOMErrorHandlerImpl_h_