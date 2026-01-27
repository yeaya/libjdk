#ifndef _com_sun_org_apache_xerces_internal_jaxp_validation_ErrorHandlerAdaptor_h_
#define _com_sun_org_apache_xerces_internal_jaxp_validation_ErrorHandlerAdaptor_h_
//$ class com.sun.org.apache.xerces.internal.jaxp.validation.ErrorHandlerAdaptor
//$ extends com.sun.org.apache.xerces.internal.xni.parser.XMLErrorHandler

#include <com/sun/org/apache/xerces/internal/xni/parser/XMLErrorHandler.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace xni {
							namespace parser {
								class XMLParseException;
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
			class ErrorHandler;
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

class ErrorHandlerAdaptor : public ::com::sun::org::apache::xerces::internal::xni::parser::XMLErrorHandler {
	$class(ErrorHandlerAdaptor, $NO_CLASS_INIT, ::com::sun::org::apache::xerces::internal::xni::parser::XMLErrorHandler)
public:
	ErrorHandlerAdaptor();
	void init$();
	virtual void error($String* domain, $String* key, ::com::sun::org::apache::xerces::internal::xni::parser::XMLParseException* e) override;
	virtual void fatalError($String* domain, $String* key, ::com::sun::org::apache::xerces::internal::xni::parser::XMLParseException* e) override;
	virtual ::org::xml::sax::ErrorHandler* getErrorHandler() {return nullptr;}
	virtual bool hadError();
	virtual void reset();
	virtual void warning($String* domain, $String* key, ::com::sun::org::apache::xerces::internal::xni::parser::XMLParseException* e) override;
	bool hadError$ = false;
};

							} // validation
						} // jaxp
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_jaxp_validation_ErrorHandlerAdaptor_h_