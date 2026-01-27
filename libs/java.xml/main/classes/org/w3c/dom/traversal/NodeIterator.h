#ifndef _org_w3c_dom_traversal_NodeIterator_h_
#define _org_w3c_dom_traversal_NodeIterator_h_
//$ interface org.w3c.dom.traversal.NodeIterator
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

class $export NodeIterator : public ::java::lang::Object {
	$interface(NodeIterator, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void detach() {}
	virtual bool getExpandEntityReferences() {return false;}
	virtual ::org::w3c::dom::traversal::NodeFilter* getFilter() {return nullptr;}
	virtual ::org::w3c::dom::Node* getRoot() {return nullptr;}
	virtual int32_t getWhatToShow() {return 0;}
	virtual ::org::w3c::dom::Node* nextNode() {return nullptr;}
	virtual ::org::w3c::dom::Node* previousNode() {return nullptr;}
};

			} // traversal
		} // dom
	} // w3c
} // org

#endif // _org_w3c_dom_traversal_NodeIterator_h_