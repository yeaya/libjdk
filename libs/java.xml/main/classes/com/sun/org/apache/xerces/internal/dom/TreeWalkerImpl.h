#ifndef _com_sun_org_apache_xerces_internal_dom_TreeWalkerImpl_h_
#define _com_sun_org_apache_xerces_internal_dom_TreeWalkerImpl_h_
//$ class com.sun.org.apache.xerces.internal.dom.TreeWalkerImpl
//$ extends org.w3c.dom.traversal.TreeWalker

#include <org/w3c/dom/traversal/TreeWalker.h>

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

class TreeWalkerImpl : public ::org::w3c::dom::traversal::TreeWalker {
	$class(TreeWalkerImpl, $NO_CLASS_INIT, ::org::w3c::dom::traversal::TreeWalker)
public:
	TreeWalkerImpl();
	void init$(::org::w3c::dom::Node* root, int32_t whatToShow, ::org::w3c::dom::traversal::NodeFilter* nodeFilter, bool entityReferenceExpansion);
	virtual int16_t acceptNode(::org::w3c::dom::Node* node);
	virtual ::org::w3c::dom::Node* firstChild() override;
	virtual ::org::w3c::dom::Node* getCurrentNode() override;
	virtual bool getExpandEntityReferences() override;
	virtual ::org::w3c::dom::traversal::NodeFilter* getFilter() override;
	virtual ::org::w3c::dom::Node* getFirstChild(::org::w3c::dom::Node* node);
	virtual ::org::w3c::dom::Node* getLastChild(::org::w3c::dom::Node* node);
	virtual ::org::w3c::dom::Node* getNextSibling(::org::w3c::dom::Node* node);
	virtual ::org::w3c::dom::Node* getNextSibling(::org::w3c::dom::Node* node, ::org::w3c::dom::Node* root);
	virtual ::org::w3c::dom::Node* getParentNode(::org::w3c::dom::Node* node);
	virtual ::org::w3c::dom::Node* getPreviousSibling(::org::w3c::dom::Node* node);
	virtual ::org::w3c::dom::Node* getPreviousSibling(::org::w3c::dom::Node* node, ::org::w3c::dom::Node* root);
	virtual ::org::w3c::dom::Node* getRoot() override;
	virtual int32_t getWhatToShow() override;
	virtual ::org::w3c::dom::Node* lastChild() override;
	virtual ::org::w3c::dom::Node* nextNode() override;
	virtual ::org::w3c::dom::Node* nextSibling() override;
	virtual ::org::w3c::dom::Node* parentNode() override;
	virtual ::org::w3c::dom::Node* previousNode() override;
	virtual ::org::w3c::dom::Node* previousSibling() override;
	virtual void setCurrentNode(::org::w3c::dom::Node* node) override;
	virtual void setWhatShow(int32_t whatToShow);
	bool fEntityReferenceExpansion = false;
	int32_t fWhatToShow = 0;
	::org::w3c::dom::traversal::NodeFilter* fNodeFilter = nullptr;
	::org::w3c::dom::Node* fCurrentNode = nullptr;
	::org::w3c::dom::Node* fRoot = nullptr;
};

						} // dom
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_dom_TreeWalkerImpl_h_