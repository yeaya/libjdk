#ifndef _com_sun_org_apache_xpath_internal_jaxp_XPathNodesImpl_h_
#define _com_sun_org_apache_xpath_internal_jaxp_XPathNodesImpl_h_
//$ class com.sun.org.apache.xpath.internal.jaxp.XPathNodesImpl
//$ extends javax.xml.xpath.XPathNodes

#include <javax/xml/xpath/XPathNodes.h>

namespace java {
	namespace util {
		class Iterator;
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

class XPathNodesImpl : public ::javax::xml::xpath::XPathNodes {
	$class(XPathNodesImpl, $NO_CLASS_INIT, ::javax::xml::xpath::XPathNodes)
public:
	XPathNodesImpl();
	void init$(::org::w3c::dom::NodeList* nodeList, $Class* elementType);
	virtual ::org::w3c::dom::Node* get(int32_t index) override;
	virtual ::java::util::Iterator* iterator() override;
	virtual int32_t size() override;
	$Class* elementType = nullptr;
	::org::w3c::dom::NodeList* nodeList = nullptr;
};

						} // jaxp
					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xpath_internal_jaxp_XPathNodesImpl_h_