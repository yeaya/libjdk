#ifndef _com_sun_org_apache_xerces_internal_dom_ChildNode_h_
#define _com_sun_org_apache_xerces_internal_dom_ChildNode_h_
//$ class com.sun.org.apache.xerces.internal.dom.ChildNode
//$ extends com.sun.org.apache.xerces.internal.dom.NodeImpl

#include <com/sun/org/apache/xerces/internal/dom/NodeImpl.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace dom {
							class CoreDocumentImpl;
						}
					}
				}
			}
		}
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

class ChildNode : public ::com::sun::org::apache::xerces::internal::dom::NodeImpl {
	$class(ChildNode, $NO_CLASS_INIT, ::com::sun::org::apache::xerces::internal::dom::NodeImpl)
public:
	ChildNode();
	void init$(::com::sun::org::apache::xerces::internal::dom::CoreDocumentImpl* ownerDocument);
	void init$();
	virtual ::org::w3c::dom::Node* cloneNode(bool deep) override;
	virtual ::org::w3c::dom::Node* getNextSibling() override;
	virtual ::org::w3c::dom::Node* getParentNode() override;
	virtual ::org::w3c::dom::Node* getPreviousSibling() override;
	virtual ::com::sun::org::apache::xerces::internal::dom::NodeImpl* parentNode() override;
	virtual ::com::sun::org::apache::xerces::internal::dom::ChildNode* previousSibling() override;
	static const int64_t serialVersionUID = (int64_t)0xAB2C31E407625E4E;
	::com::sun::org::apache::xerces::internal::dom::ChildNode* previousSibling$ = nullptr;
	::com::sun::org::apache::xerces::internal::dom::ChildNode* nextSibling = nullptr;
};

						} // dom
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_dom_ChildNode_h_