#ifndef _com_sun_org_apache_xerces_internal_util_DraconianErrorHandler_h_
#define _com_sun_org_apache_xerces_internal_util_DraconianErrorHandler_h_
//$ class com.sun.org.apache.xerces.internal.util.DraconianErrorHandler
//$ extends org.xml.sax.ErrorHandler

#include <org/xml/sax/ErrorHandler.h>

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
						namespace util {

class DraconianErrorHandler : public ::org::xml::sax::ErrorHandler {
	$class(DraconianErrorHandler, 0, ::org::xml::sax::ErrorHandler)
public:
	DraconianErrorHandler();
	void init$();
	virtual void error(::org::xml::sax::SAXParseException* e) override;
	virtual void fatalError(::org::xml::sax::SAXParseException* e) override;
	virtual void warning(::org::xml::sax::SAXParseException* e) override;
	static ::org::xml::sax::ErrorHandler* theInstance;
};

						} // util
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_util_DraconianErrorHandler_h_