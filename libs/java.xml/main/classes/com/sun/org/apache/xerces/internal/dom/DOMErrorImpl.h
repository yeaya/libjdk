#ifndef _com_sun_org_apache_xerces_internal_dom_DOMErrorImpl_h_
#define _com_sun_org_apache_xerces_internal_dom_DOMErrorImpl_h_
//$ class com.sun.org.apache.xerces.internal.dom.DOMErrorImpl
//$ extends org.w3c.dom.DOMError

#include <org/w3c/dom/DOMError.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace dom {
							class DOMLocatorImpl;
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
	namespace lang {
		class Exception;
	}
}
namespace org {
	namespace w3c {
		namespace dom {
			class DOMLocator;
		}
	}
}

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace dom {

class DOMErrorImpl : public ::org::w3c::dom::DOMError {
	$class(DOMErrorImpl, $NO_CLASS_INIT, ::org::w3c::dom::DOMError)
public:
	DOMErrorImpl();
	void init$();
	void init$(int16_t severity, ::com::sun::org::apache::xerces::internal::xni::parser::XMLParseException* exception);
	::com::sun::org::apache::xerces::internal::dom::DOMLocatorImpl* createDOMLocator(::com::sun::org::apache::xerces::internal::xni::parser::XMLParseException* exception);
	virtual ::org::w3c::dom::DOMLocator* getLocation() override;
	virtual $String* getMessage() override;
	virtual $Object* getRelatedData() override;
	virtual $Object* getRelatedException() override;
	virtual int16_t getSeverity() override;
	virtual $String* getType() override;
	virtual void reset();
	int16_t fSeverity = 0;
	$String* fMessage = nullptr;
	::com::sun::org::apache::xerces::internal::dom::DOMLocatorImpl* fLocator = nullptr;
	::java::lang::Exception* fException = nullptr;
	$String* fType = nullptr;
	$Object* fRelatedData = nullptr;
};

						} // dom
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_dom_DOMErrorImpl_h_