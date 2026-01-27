#ifndef _org_w3c_dom_traversal_DocumentTraversal_h_
#define _org_w3c_dom_traversal_DocumentTraversal_h_
//$ interface org.w3c.dom.traversal.DocumentTraversal
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
				class NodeIterator;
				class TreeWalker;
			}
		}
	}
}

namespace org {
	namespace w3c {
		namespace dom {
			namespace traversal {

class $export DocumentTraversal : public ::java::lang::Object {
	$interface(DocumentTraversal, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::org::w3c::dom::traversal::NodeIterator* createNodeIterator(::org::w3c::dom::Node* root, int32_t whatToShow, ::org::w3c::dom::traversal::NodeFilter* filter, bool entityReferenceExpansion) {return nullptr;}
	virtual ::org::w3c::dom::traversal::TreeWalker* createTreeWalker(::org::w3c::dom::Node* root, int32_t whatToShow, ::org::w3c::dom::traversal::NodeFilter* filter, bool entityReferenceExpansion) {return nullptr;}
};

			} // traversal
		} // dom
	} // w3c
} // org

#endif // _org_w3c_dom_traversal_DocumentTraversal_h_