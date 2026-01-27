#ifndef _com_sun_org_apache_xerces_internal_dom_NodeIteratorImpl_h_
#define _com_sun_org_apache_xerces_internal_dom_NodeIteratorImpl_h_
//$ class com.sun.org.apache.xerces.internal.dom.NodeIteratorImpl
//$ extends org.w3c.dom.traversal.NodeIterator

#include <org/w3c/dom/traversal/NodeIterator.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace dom {
							class DocumentImpl;
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
namespace org {
	namespace w3c {
		namespace dom {
			namespace traversal {
				class NodeFilter;
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
						namespace dom {

class NodeIteratorImpl : public ::org::w3c::dom::traversal::NodeIterator {
	$class(NodeIteratorImpl, $NO_CLASS_INIT, ::org::w3c::dom::traversal::NodeIterator)
public:
	NodeIteratorImpl();
	void init$(::com::sun::org::apache::xerces::internal::dom::DocumentImpl* document, ::org::w3c::dom::Node* root, int32_t whatToShow, ::org::w3c::dom::traversal::NodeFilter* nodeFilter, bool entityReferenceExpansion);
	virtual bool acceptNode(::org::w3c::dom::Node* node);
	virtual void detach() override;
	virtual bool getExpandEntityReferences() override;
	virtual ::org::w3c::dom::traversal::NodeFilter* getFilter() override;
	virtual ::org::w3c::dom::Node* getRoot() override;
	virtual int32_t getWhatToShow() override;
	virtual ::org::w3c::dom::Node* matchNodeOrParent(::org::w3c::dom::Node* node);
	virtual ::org::w3c::dom::Node* nextNode() override;
	virtual ::org::w3c::dom::Node* nextNode(::org::w3c::dom::Node* node, bool visitChildren);
	virtual ::org::w3c::dom::Node* previousNode() override;
	virtual ::org::w3c::dom::Node* previousNode(::org::w3c::dom::Node* node);
	virtual void removeNode(::org::w3c::dom::Node* node);
	::com::sun::org::apache::xerces::internal::dom::DocumentImpl* fDocument = nullptr;
	::org::w3c::dom::Node* fRoot = nullptr;
	int32_t fWhatToShow = 0;
	::org::w3c::dom::traversal::NodeFilter* fNodeFilter = nullptr;
	bool fDetach = false;
	::org::w3c::dom::Node* fCurrentNode = nullptr;
	bool fForward = false;
	bool fEntityReferenceExpansion = false;
};

						} // dom
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_dom_NodeIteratorImpl_h_