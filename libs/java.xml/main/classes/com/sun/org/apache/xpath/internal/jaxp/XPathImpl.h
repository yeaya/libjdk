#ifndef _com_sun_org_apache_xpath_internal_jaxp_XPathImpl_h_
#define _com_sun_org_apache_xpath_internal_jaxp_XPathImpl_h_
//$ class com.sun.org.apache.xpath.internal.jaxp.XPathImpl
//$ extends com.sun.org.apache.xpath.internal.jaxp.XPathImplUtil
//$ implements javax.xml.xpath.XPath

#include <com/sun/org/apache/xpath/internal/jaxp/XPathImplUtil.h>
#include <javax/xml/xpath/XPath.h>

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
			class NamespaceContext;
			class QName;
		}
	}
}
namespace javax {
	namespace xml {
		namespace xpath {
			class XPathEvaluationResult;
			class XPathExpression;
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

class XPathImpl : public ::com::sun::org::apache::xpath::internal::jaxp::XPathImplUtil, public ::javax::xml::xpath::XPath {
	$class(XPathImpl, $NO_CLASS_INIT, ::com::sun::org::apache::xpath::internal::jaxp::XPathImplUtil, ::javax::xml::xpath::XPath)
public:
	XPathImpl();
	using ::com::sun::org::apache::xpath::internal::jaxp::XPathImplUtil::eval;
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::javax::xml::xpath::XPathVariableResolver* vr, ::javax::xml::xpath::XPathFunctionResolver* fr);
	void init$(::javax::xml::xpath::XPathVariableResolver* vr, ::javax::xml::xpath::XPathFunctionResolver* fr, bool featureSecureProcessing, ::jdk::xml::internal::JdkXmlFeatures* featureManager);
	virtual ::javax::xml::xpath::XPathExpression* compile($String* expression) override;
	::com::sun::org::apache::xpath::internal::objects::XObject* eval($String* expression, Object$* contextItem);
	virtual $Object* evaluate($String* expression, Object$* item, ::javax::xml::namespace$::QName* returnType) override;
	virtual $String* evaluate($String* expression, Object$* item) override;
	virtual $Object* evaluate($String* expression, ::org::xml::sax::InputSource* source, ::javax::xml::namespace$::QName* returnType) override;
	virtual $String* evaluate($String* expression, ::org::xml::sax::InputSource* source) override;
	virtual $Object* evaluateExpression($String* expression, Object$* item, $Class* type) override;
	virtual ::javax::xml::xpath::XPathEvaluationResult* evaluateExpression($String* expression, Object$* item) override;
	virtual $Object* evaluateExpression($String* expression, ::org::xml::sax::InputSource* source, $Class* type) override;
	virtual ::javax::xml::xpath::XPathEvaluationResult* evaluateExpression($String* expression, ::org::xml::sax::InputSource* source) override;
	virtual ::javax::xml::namespace$::NamespaceContext* getNamespaceContext() override;
	virtual ::javax::xml::xpath::XPathFunctionResolver* getXPathFunctionResolver() override;
	virtual ::javax::xml::xpath::XPathVariableResolver* getXPathVariableResolver() override;
	virtual void reset() override;
	virtual void setNamespaceContext(::javax::xml::namespace$::NamespaceContext* nsContext) override;
	virtual void setXPathFunctionResolver(::javax::xml::xpath::XPathFunctionResolver* resolver) override;
	virtual void setXPathVariableResolver(::javax::xml::xpath::XPathVariableResolver* resolver) override;
	virtual $String* toString() override;
	::javax::xml::xpath::XPathVariableResolver* origVariableResolver = nullptr;
	::javax::xml::xpath::XPathFunctionResolver* origFunctionResolver = nullptr;
	::javax::xml::namespace$::NamespaceContext* namespaceContext = nullptr;
};

						} // jaxp
					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xpath_internal_jaxp_XPathImpl_h_