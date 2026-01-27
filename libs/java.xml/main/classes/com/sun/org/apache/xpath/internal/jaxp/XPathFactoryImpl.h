#ifndef _com_sun_org_apache_xpath_internal_jaxp_XPathFactoryImpl_h_
#define _com_sun_org_apache_xpath_internal_jaxp_XPathFactoryImpl_h_
//$ class com.sun.org.apache.xpath.internal.jaxp.XPathFactoryImpl
//$ extends javax.xml.xpath.XPathFactory

#include <javax/xml/xpath/XPathFactory.h>

#pragma push_macro("CLASS_NAME")
#undef CLASS_NAME

namespace javax {
	namespace xml {
		namespace xpath {
			class XPath;
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

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xpath {
					namespace internal {
						namespace jaxp {

class XPathFactoryImpl : public ::javax::xml::xpath::XPathFactory {
	$class(XPathFactoryImpl, 0, ::javax::xml::xpath::XPathFactory)
public:
	XPathFactoryImpl();
	void init$();
	virtual bool getFeature($String* name) override;
	virtual bool isObjectModelSupported($String* objectModel) override;
	virtual ::javax::xml::xpath::XPath* newXPath() override;
	virtual void setFeature($String* name, bool value) override;
	virtual void setXPathFunctionResolver(::javax::xml::xpath::XPathFunctionResolver* resolver) override;
	virtual void setXPathVariableResolver(::javax::xml::xpath::XPathVariableResolver* resolver) override;
	static $String* CLASS_NAME;
	::javax::xml::xpath::XPathFunctionResolver* xPathFunctionResolver = nullptr;
	::javax::xml::xpath::XPathVariableResolver* xPathVariableResolver = nullptr;
	bool _isNotSecureProcessing = false;
	bool _isSecureMode = false;
	::jdk::xml::internal::JdkXmlFeatures* _featureManager = nullptr;
};

						} // jaxp
					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("CLASS_NAME")

#endif // _com_sun_org_apache_xpath_internal_jaxp_XPathFactoryImpl_h_