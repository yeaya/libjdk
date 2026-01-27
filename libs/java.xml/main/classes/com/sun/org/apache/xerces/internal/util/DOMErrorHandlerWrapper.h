#ifndef _com_sun_org_apache_xerces_internal_util_DOMErrorHandlerWrapper_h_
#define _com_sun_org_apache_xerces_internal_util_DOMErrorHandlerWrapper_h_
//$ class com.sun.org.apache.xerces.internal.util.DOMErrorHandlerWrapper
//$ extends com.sun.org.apache.xerces.internal.xni.parser.XMLErrorHandler
//$ implements org.w3c.dom.DOMErrorHandler

#include <com/sun/org/apache/xerces/internal/xni/parser/XMLErrorHandler.h>
#include <org/w3c/dom/DOMErrorHandler.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace dom {
							class DOMErrorImpl;
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
						namespace util {
							class XMLErrorCode;
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
namespace java {
	namespace io {
		class PrintWriter;
	}
}
namespace org {
	namespace w3c {
		namespace dom {
			class DOMError;
			class Node;
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

class DOMErrorHandlerWrapper : public ::com::sun::org::apache::xerces::internal::xni::parser::XMLErrorHandler, public ::org::w3c::dom::DOMErrorHandler {
	$class(DOMErrorHandlerWrapper, $NO_CLASS_INIT, ::com::sun::org::apache::xerces::internal::xni::parser::XMLErrorHandler, ::org::w3c::dom::DOMErrorHandler)
public:
	DOMErrorHandlerWrapper();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	void init$(::org::w3c::dom::DOMErrorHandler* domErrorHandler);
	virtual void error($String* domain, $String* key, ::com::sun::org::apache::xerces::internal::xni::parser::XMLParseException* exception) override;
	virtual void fatalError($String* domain, $String* key, ::com::sun::org::apache::xerces::internal::xni::parser::XMLParseException* exception) override;
	virtual ::org::w3c::dom::DOMErrorHandler* getErrorHandler();
	virtual bool handleError(::org::w3c::dom::DOMError* error) override;
	void printError(::org::w3c::dom::DOMError* error);
	virtual void setErrorHandler(::org::w3c::dom::DOMErrorHandler* errorHandler);
	virtual $String* toString() override;
	virtual void warning($String* domain, $String* key, ::com::sun::org::apache::xerces::internal::xni::parser::XMLParseException* exception) override;
	::org::w3c::dom::DOMErrorHandler* fDomErrorHandler = nullptr;
	bool eStatus = false;
	::java::io::PrintWriter* fOut = nullptr;
	::org::w3c::dom::Node* fCurrentNode = nullptr;
	::com::sun::org::apache::xerces::internal::util::XMLErrorCode* fErrorCode = nullptr;
	::com::sun::org::apache::xerces::internal::dom::DOMErrorImpl* fDOMError = nullptr;
};

						} // util
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_util_DOMErrorHandlerWrapper_h_