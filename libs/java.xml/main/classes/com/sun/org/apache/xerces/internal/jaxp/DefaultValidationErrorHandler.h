#ifndef _com_sun_org_apache_xerces_internal_jaxp_DefaultValidationErrorHandler_h_
#define _com_sun_org_apache_xerces_internal_jaxp_DefaultValidationErrorHandler_h_
//$ class com.sun.org.apache.xerces.internal.jaxp.DefaultValidationErrorHandler
//$ extends org.xml.sax.helpers.DefaultHandler

#include <org/xml/sax/helpers/DefaultHandler.h>

#pragma push_macro("ERROR_COUNT_LIMIT")
#undef ERROR_COUNT_LIMIT

namespace java {
	namespace util {
		class Locale;
	}
}
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

class DefaultValidationErrorHandler : public ::org::xml::sax::helpers::DefaultHandler {
	$class(DefaultValidationErrorHandler, 0, ::org::xml::sax::helpers::DefaultHandler)
public:
	DefaultValidationErrorHandler();
	void init$(::java::util::Locale* locale);
	virtual void error(::org::xml::sax::SAXParseException* e) override;
	static int32_t ERROR_COUNT_LIMIT;
	int32_t errorCount = 0;
	::java::util::Locale* locale = nullptr;
};

						} // jaxp
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("ERROR_COUNT_LIMIT")

#endif // _com_sun_org_apache_xerces_internal_jaxp_DefaultValidationErrorHandler_h_