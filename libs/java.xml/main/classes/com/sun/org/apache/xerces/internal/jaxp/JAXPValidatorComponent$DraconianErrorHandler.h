#ifndef _com_sun_org_apache_xerces_internal_jaxp_JAXPValidatorComponent$DraconianErrorHandler_h_
#define _com_sun_org_apache_xerces_internal_jaxp_JAXPValidatorComponent$DraconianErrorHandler_h_
//$ class com.sun.org.apache.xerces.internal.jaxp.JAXPValidatorComponent$DraconianErrorHandler
//$ extends org.xml.sax.ErrorHandler

#include <org/xml/sax/ErrorHandler.h>

#pragma push_macro("ERROR_HANDLER_INSTANCE")
#undef ERROR_HANDLER_INSTANCE

namespace org {
	namespace xml {
		namespace sax {
			class SAXParseException;
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

class JAXPValidatorComponent$DraconianErrorHandler : public ::org::xml::sax::ErrorHandler {
	$class(JAXPValidatorComponent$DraconianErrorHandler, 0, ::org::xml::sax::ErrorHandler)
public:
	JAXPValidatorComponent$DraconianErrorHandler();
	void init$();
	virtual void error(::org::xml::sax::SAXParseException* e) override;
	virtual void fatalError(::org::xml::sax::SAXParseException* e) override;
	static ::com::sun::org::apache::xerces::internal::jaxp::JAXPValidatorComponent$DraconianErrorHandler* getInstance();
	virtual void warning(::org::xml::sax::SAXParseException* e) override;
	static ::com::sun::org::apache::xerces::internal::jaxp::JAXPValidatorComponent$DraconianErrorHandler* ERROR_HANDLER_INSTANCE;
};

						} // jaxp
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("ERROR_HANDLER_INSTANCE")

#endif // _com_sun_org_apache_xerces_internal_jaxp_JAXPValidatorComponent$DraconianErrorHandler_h_