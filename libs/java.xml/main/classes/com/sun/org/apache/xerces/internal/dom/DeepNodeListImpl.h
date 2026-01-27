#ifndef _com_sun_org_apache_xerces_internal_dom_DeepNodeListImpl_h_
#define _com_sun_org_apache_xerces_internal_dom_DeepNodeListImpl_h_
//$ class com.sun.org.apache.xerces.internal.dom.DeepNodeListImpl
//$ extends org.w3c.dom.NodeList

#include <org/w3c/dom/NodeList.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace dom {
							class NodeImpl;
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
namespace org {
	namespace w3c {
		namespace dom {
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
						namespace dom {

class DeepNodeListImpl : public ::org::w3c::dom::NodeList {
	$class(DeepNodeListImpl, $NO_CLASS_INIT, ::org::w3c::dom::NodeList)
public:
	DeepNodeListImpl();
	void init$(::com::sun::org::apache::xerces::internal::dom::NodeImpl* rootNode, $String* tagName);
	void init$(::com::sun::org::apache::xerces::internal::dom::NodeImpl* rootNode, $String* nsName, $String* tagName);
	virtual int32_t getLength() override;
	virtual ::org::w3c::dom::Node* item(int32_t index) override;
	virtual ::org::w3c::dom::Node* nextMatchingElementAfter(::org::w3c::dom::Node* current);
	::com::sun::org::apache::xerces::internal::dom::NodeImpl* rootNode = nullptr;
	$String* tagName = nullptr;
	int32_t changes = 0;
	::java::util::List* nodes = nullptr;
	$String* nsName = nullptr;
	bool enableNS = false;
};

						} // dom
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_dom_DeepNodeListImpl_h_