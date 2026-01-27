#ifndef _com_sun_org_apache_xerces_internal_util_ErrorHandlerProxy_h_
#define _com_sun_org_apache_xerces_internal_util_ErrorHandlerProxy_h_
//$ class com.sun.org.apache.xerces.internal.util.ErrorHandlerProxy
//$ extends org.xml.sax.ErrorHandler

#include <org/xml/sax/ErrorHandler.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace xni {
							namespace parser {
								class XMLErrorHandler;
							}
						}
					}
				}
			}
		}
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
						namespace util {

class ErrorHandlerProxy : public ::org::xml::sax::ErrorHandler {
	$class(ErrorHandlerProxy, $NO_CLASS_INIT, ::org::xml::sax::ErrorHandler)
public:
	ErrorHandlerProxy();
	void init$();
	virtual void error(::org::xml::sax::SAXParseException* e) override;
	virtual void fatalError(::org::xml::sax::SAXParseException* e) override;
	virtual ::com::sun::org::apache::xerces::internal::xni::parser::XMLErrorHandler* getErrorHandler() {return nullptr;}
	virtual void warning(::org::xml::sax::SAXParseException* e) override;
};

						} // util
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_util_ErrorHandlerProxy_h_