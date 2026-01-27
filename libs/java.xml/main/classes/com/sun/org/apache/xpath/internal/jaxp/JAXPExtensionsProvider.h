#ifndef _com_sun_org_apache_xpath_internal_jaxp_JAXPExtensionsProvider_h_
#define _com_sun_org_apache_xpath_internal_jaxp_JAXPExtensionsProvider_h_
//$ class com.sun.org.apache.xpath.internal.jaxp.JAXPExtensionsProvider
//$ extends com.sun.org.apache.xpath.internal.ExtensionsProvider

#include <com/sun/org/apache/xpath/internal/ExtensionsProvider.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xpath {
					namespace internal {
						namespace functions {
							class FuncExtFunction;
						}
					}
				}
			}
		}
	}
}
namespace java {
	namespace util {
		class List;
	}
}
namespace javax {
	namespace xml {
		namespace xpath {
			class XPathFunctionResolver;
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

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xpath {
					namespace internal {
						namespace jaxp {

class JAXPExtensionsProvider : public ::com::sun::org::apache::xpath::internal::ExtensionsProvider {
	$class(JAXPExtensionsProvider, $NO_CLASS_INIT, ::com::sun::org::apache::xpath::internal::ExtensionsProvider)
public:
	JAXPExtensionsProvider();
	void init$(::javax::xml::xpath::XPathFunctionResolver* resolver);
	void init$(::javax::xml::xpath::XPathFunctionResolver* resolver, bool featureSecureProcessing, ::jdk::xml::internal::JdkXmlFeatures* featureManager);
	virtual bool elementAvailable($String* ns, $String* elemName) override;
	virtual $Object* extFunction($String* ns, $String* funcName, ::java::util::List* argVec, Object$* methodKey) override;
	virtual $Object* extFunction(::com::sun::org::apache::xpath::internal::functions::FuncExtFunction* extFunction, ::java::util::List* argVec) override;
	virtual bool functionAvailable($String* ns, $String* funcName) override;
	::javax::xml::xpath::XPathFunctionResolver* resolver = nullptr;
	bool extensionInvocationDisabled = false;
};

						} // jaxp
					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xpath_internal_jaxp_JAXPExtensionsProvider_h_