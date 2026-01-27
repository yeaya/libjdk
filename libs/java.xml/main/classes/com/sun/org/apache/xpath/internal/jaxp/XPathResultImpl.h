#ifndef _com_sun_org_apache_xpath_internal_jaxp_XPathResultImpl_h_
#define _com_sun_org_apache_xpath_internal_jaxp_XPathResultImpl_h_
//$ class com.sun.org.apache.xpath.internal.jaxp.XPathResultImpl
//$ extends javax.xml.xpath.XPathEvaluationResult

#include <javax/xml/xpath/XPathEvaluationResult.h>

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
		namespace xpath {
			class XPathEvaluationResult$XPathResultType;
		}
	}
}
namespace org {
	namespace w3c {
		namespace dom {
			class Node;
			class NodeList;
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

class XPathResultImpl : public ::javax::xml::xpath::XPathEvaluationResult {
	$class(XPathResultImpl, $NO_CLASS_INIT, ::javax::xml::xpath::XPathEvaluationResult)
public:
	XPathResultImpl();
	void init$(::com::sun::org::apache::xpath::internal::objects::XObject* resultObject, $Class* type);
	static int32_t classToInternalType($Class* type);
	void getResult(::com::sun::org::apache::xpath::internal::objects::XObject* resultObject);
	static $Object* getValue(::com::sun::org::apache::xpath::internal::objects::XObject* resultObject, $Class* type);
	virtual ::javax::xml::xpath::XPathEvaluationResult$XPathResultType* type() override;
	virtual $Object* value() override;
	::com::sun::org::apache::xpath::internal::objects::XObject* resultObject = nullptr;
	int32_t resultType = 0;
	$Class* type$ = nullptr;
	::javax::xml::xpath::XPathEvaluationResult$XPathResultType* mapToType = nullptr;
	::org::w3c::dom::NodeList* nodeList = nullptr;
	int32_t currentIndex = 0;
	::org::w3c::dom::Node* currentNode = nullptr;
	bool boolValue = false;
	::org::w3c::dom::Node* node = nullptr;
	double numValue = 0.0;
	$String* strValue = nullptr;
};

						} // jaxp
					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xpath_internal_jaxp_XPathResultImpl_h_