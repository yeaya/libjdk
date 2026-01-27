#ifndef _com_sun_org_apache_xpath_internal_jaxp_XPathImplUtil_h_
#define _com_sun_org_apache_xpath_internal_jaxp_XPathImplUtil_h_
//$ class com.sun.org.apache.xpath.internal.jaxp.XPathImplUtil
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xpath {
					namespace internal {
						class XPath;
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
				namespace xpath {
					namespace internal {
						namespace jaxp {
							class JAXPPrefixResolver;
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
				namespace xpath {
					namespace internal {
						namespace objects {
							class XObject;
						}
					}
				}
			}
		}
	}
}
namespace javax {
	namespace xml {
		namespace namespace$ {
			class QName;
		}
	}
}
namespace javax {
	namespace xml {
		namespace xpath {
			class XPathFunctionResolver;
			class XPathVariableResolver;
		}
	}
}
namespace jdk {
	namespace xml {
		namespace internal {
			class JdkXmlFeatures;
		}
	}
}
namespace org {
	namespace w3c {
		namespace dom {
			class Document;
		}
	}
}
namespace org {
	namespace xml {
		namespace sax {
			class InputSource;
		}
	}
}

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xpath {
					namespace internal {
						namespace jaxp {

class XPathImplUtil : public ::java::lang::Object {
	$class(XPathImplUtil, $NO_CLASS_INIT, ::java::lang::Object)
public:
	XPathImplUtil();
	void init$();
	virtual ::com::sun::org::apache::xpath::internal::objects::XObject* eval(Object$* contextItem, ::com::sun::org::apache::xpath::internal::XPath* xpath);
	virtual ::org::w3c::dom::Document* getDocument(::org::xml::sax::InputSource* source);
	virtual $Object* getResultAsType(::com::sun::org::apache::xpath::internal::objects::XObject* resultObject, ::javax::xml::namespace$::QName* returnType);
	virtual $Object* getXPathResult(::com::sun::org::apache::xpath::internal::objects::XObject* resultObject, $Class* type);
	virtual void isSupported(::javax::xml::namespace$::QName* returnType);
	virtual void isSupportedClassType($Class* type);
	virtual void requireNonNull(Object$* param, $String* paramName);
	::javax::xml::xpath::XPathFunctionResolver* functionResolver = nullptr;
	::javax::xml::xpath::XPathVariableResolver* variableResolver = nullptr;
	::com::sun::org::apache::xpath::internal::jaxp::JAXPPrefixResolver* prefixResolver = nullptr;
	bool overrideDefaultParser = false;
	bool featureSecureProcessing = false;
	::jdk::xml::internal::JdkXmlFeatures* featureManager = nullptr;
};

						} // jaxp
					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xpath_internal_jaxp_XPathImplUtil_h_