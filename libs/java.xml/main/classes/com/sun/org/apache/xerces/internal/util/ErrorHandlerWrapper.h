#ifndef _com_sun_org_apache_xerces_internal_util_ErrorHandlerWrapper_h_
#define _com_sun_org_apache_xerces_internal_util_ErrorHandlerWrapper_h_
//$ class com.sun.org.apache.xerces.internal.util.ErrorHandlerWrapper
//$ extends com.sun.org.apache.xerces.internal.xni.parser.XMLErrorHandler

#include <com/sun/org/apache/xerces/internal/xni/parser/XMLErrorHandler.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace xni {
							class XNIException;
						}
					}
				}
			}
		}
	}
}
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
			class SAXException;
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

class ErrorHandlerWrapper : public ::com::sun::org::apache::xerces::internal::xni::parser::XMLErrorHandler {
	$class(ErrorHandlerWrapper, $NO_CLASS_INIT, ::com::sun::org::apache::xerces::internal::xni::parser::XMLErrorHandler)
public:
	ErrorHandlerWrapper();
	void init$();
	void init$(::org::xml::sax::ErrorHandler* errorHandler);
	static ::org::xml::sax::SAXParseException* createSAXParseException(::com::sun::org::apache::xerces::internal::xni::parser::XMLParseException* exception);
	static ::com::sun::org::apache::xerces::internal::xni::parser::XMLParseException* createXMLParseException(::org::xml::sax::SAXParseException* exception);
	static ::com::sun::org::apache::xerces::internal::xni::XNIException* createXNIException(::org::xml::sax::SAXException* exception);
	virtual void error($String* domain, $String* key, ::com::sun::org::apache::xerces::internal::xni::parser::XMLParseException* exception) override;
	virtual void fatalError($String* domain, $String* key, ::com::sun::org::apache::xerces::internal::xni::parser::XMLParseException* exception) override;
	virtual ::org::xml::sax::ErrorHandler* getErrorHandler();
	virtual void setErrorHandler(::org::xml::sax::ErrorHandler* errorHandler);
	virtual void warning($String* domain, $String* key, ::com::sun::org::apache::xerces::internal::xni::parser::XMLParseException* exception) override;
	::org::xml::sax::ErrorHandler* fErrorHandler = nullptr;
};

						} // util
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_util_ErrorHandlerWrapper_h_