#ifndef _com_sun_org_apache_xpath_internal_jaxp_XPathExpressionImpl_h_
#define _com_sun_org_apache_xpath_internal_jaxp_XPathExpressionImpl_h_
//$ class com.sun.org.apache.xpath.internal.jaxp.XPathExpressionImpl
//$ extends com.sun.org.apache.xpath.internal.jaxp.XPathImplUtil
//$ implements javax.xml.xpath.XPathExpression

#include <com/sun/org/apache/xpath/internal/jaxp/XPathImplUtil.h>
#include <javax/xml/xpath/XPathExpression.h>

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
			class XPathEvaluationResult;
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

class XPathExpressionImpl : public ::com::sun::org::apache::xpath::internal::jaxp::XPathImplUtil, public ::javax::xml::xpath::XPathExpression {
	$class(XPathExpressionImpl, $NO_CLASS_INIT, ::com::sun::org::apache::xpath::internal::jaxp::XPathImplUtil, ::javax::xml::xpath::XPathExpression)
public:
	XPathExpressionImpl();
	using ::com::sun::org::apache::xpath::internal::jaxp::XPathImplUtil::eval;
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	void init$(::com::sun::org::apache::xpath::internal::XPath* xpath, ::com::sun::org::apache::xpath::internal::jaxp::JAXPPrefixResolver* prefixResolver, ::javax::xml::xpath::XPathFunctionResolver* functionResolver, ::javax::xml::xpath::XPathVariableResolver* variableResolver);
	void init$(::com::sun::org::apache::xpath::internal::XPath* xpath, ::com::sun::org::apache::xpath::internal::jaxp::JAXPPrefixResolver* prefixResolver, ::javax::xml::xpath::XPathFunctionResolver* functionResolver, ::javax::xml::xpath::XPathVariableResolver* variableResolver, bool featureSecureProcessing, ::jdk::xml::internal::JdkXmlFeatures* featureManager);
	virtual $Object* eval(Object$* item, ::javax::xml::namespace$::QName* returnType);
	virtual $Object* evaluate(Object$* item, ::javax::xml::namespace$::QName* returnType) override;
	virtual $String* evaluate(Object$* item) override;
	virtual $Object* evaluate(::org::xml::sax::InputSource* source, ::javax::xml::namespace$::QName* returnType) override;
	virtual $String* evaluate(::org::xml::sax::InputSource* source) override;
	virtual $Object* evaluateExpression(Object$* item, $Class* type) override;
	virtual ::javax::xml::xpath::XPathEvaluationResult* evaluateExpression(Object$* item) override;
	virtual $Object* evaluateExpression(::org::xml::sax::InputSource* source, $Class* type) override;
	virtual ::javax::xml::xpath::XPathEvaluationResult* evaluateExpression(::org::xml::sax::InputSource* source) override;
	virtual void setXPath(::com::sun::org::apache::xpath::internal::XPath* xpath);
	virtual $String* toString() override;
	::com::sun::org::apache::xpath::internal::XPath* xpath = nullptr;
};

						} // jaxp
					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xpath_internal_jaxp_XPathExpressionImpl_h_