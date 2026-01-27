#ifndef _org_w3c_dom_traversal_TreeWalker_h_
#define _org_w3c_dom_traversal_TreeWalker_h_
//$ interface org.w3c.dom.traversal.TreeWalker
//$ extends java.lang.Object

#include <java/lang/Object.h>

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

namespace org {
	namespace w3c {
		namespace dom {
			namespace traversal {

class $export TreeWalker : public ::java::lang::Object {
	$interface(TreeWalker, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::org::w3c::dom::Node* firstChild() {return nullptr;}
	virtual ::org::w3c::dom::Node* getCurrentNode() {return nullptr;}
	virtual bool getExpandEntityReferences() {return false;}
	virtual ::org::w3c::dom::traversal::NodeFilter* getFilter() {return nullptr;}
	virtual ::org::w3c::dom::Node* getRoot() {return nullptr;}
	virtual int32_t getWhatToShow() {return 0;}
	virtual ::org::w3c::dom::Node* lastChild() {return nullptr;}
	virtual ::org::w3c::dom::Node* nextNode() {return nullptr;}
	virtual ::org::w3c::dom::Node* nextSibling() {return nullptr;}
	virtual ::org::w3c::dom::Node* parentNode() {return nullptr;}
	virtual ::org::w3c::dom::Node* previousNode() {return nullptr;}
	virtual ::org::w3c::dom::Node* previousSibling() {return nullptr;}
	virtual void setCurrentNode(::org::w3c::dom::Node* currentNode) {}
};

			} // traversal
		} // dom
	} // w3c
} // org

#endif // _org_w3c_dom_traversal_TreeWalker_h_